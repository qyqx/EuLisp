;;; Copyright 1997 A. Kind & University of Bath
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: vectors
;;;  Library: level-1
;;;  Authors: Andreas Kind, Julian Padget
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule vector
  (syntax (_telos0)
   import (telos
           convert
           copy
           collect
           compare
           fpi
           list
           callback)
   export (<vector>
           vector?
           make-vector
           vector-size
           maximum-vector-size
           vector-ref
           subvector
           vector-append
           vector-empty?
           do1-vector
           do2-vector
           map1-vector
           map2-vector
           anyp1-vector
           all1-vector?
           reverse-vector
           member1-vector
           permute
           accumulate-vector
           accumulate1-vector
           reverse-vector!))

;;;-----------------------------------------------------------------------------
;;; Classes: <vector>
;;;-----------------------------------------------------------------------------
(defprimclass <vector> vector-class (<sequence>) () predicate: vector?)

(defmethod initialize ((vec <vector>) inits)
  (call-next-method)
  (let ((n (init-list-ref inits size: 0))
        (x (init-list-ref inits fill-value:)))
    (make-vector1 n (list x))))

;;;-----------------------------------------------------------------------------
;;; Predicates
;;;-----------------------------------------------------------------------------
(defun vector-empty? (vec) (fpi-binary= (vector-size vec) 0))
(declare-inline vector-empty?)

(defmethod emptyp ((vec <vector>)) (vector-empty? vec))

;;;-----------------------------------------------------------------------------
;;; Iteration
;;;-----------------------------------------------------------------------------
;;;-----------------------------------------------------------------------------
;;;  Accumulate
;;;-----------------------------------------------------------------------------
(defmethod accumulate ((fun <function>) init (vec <vector>))
  (accumulate-vector fun init vec))

(defun accumulate-vector (fun init vec)
  (let ((n (vector-size vec)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (progn
                  (setq init (fun init (vector-ref vec i)))
                  (loop (fpi-binary+ i 1)))
              init)))
     (loop 0))))

(defmethod accumulate1 ((fun <function>) (vec <vector>))
  (accumulate1-vector fun vec))

(defun accumulate1-vector (fun vec)
  (if (fpi-binary= (vector-size vec) 0) ()
    (accumulate-vector fun (vector-ref vec 0) (subvector vec 1 ()))))

;;;-----------------------------------------------------------------------------
;;;  Any?
;;;-----------------------------------------------------------------------------
(defmethod any? ((fun <function>) (vec <vector>) . cs)
  (if (null? cs)
      (anyp1-vector fun vec)
    (call-next-method)))

(defun anyp1-vector (fun vec)
  (let ((n (vector-size vec)))
    (labels
     ((loop (i)
            (and (fpi-binary< i n)
                 (or (fun (vector-ref vec i))
                     (loop (fpi-binary+ i 1))))))
     (loop 0))))

;;;-----------------------------------------------------------------------------
;;;  All?
;;;-----------------------------------------------------------------------------
(defmethod all? ((fun <function>) (vec <vector>) . cs)
  (if (null? cs)
      (all1-vector? fun vec)
    (call-next-method)))

(defun all1-vector? (fun vec)
  (let ((n (vector-size vec)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (and (fun (vector-ref vec i))
                     (loop (fpi-binary+ i 1)))
              t)))
     (loop 0))))

;;;-----------------------------------------------------------------------------
;;;  Do
;;;-----------------------------------------------------------------------------
(defmethod do ((fun <function>) (vec <vector>) . cs)
  (if (null? cs)
      (do1-vector fun vec)
    (call-next-method)))

(defun do1-vector (fun vec)
  (let ((n (vector-size vec)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (progn
                  (fun (vector-ref vec i))
                  (loop (fpi-binary+ i 1)))
              ())))
     (loop 0))))

(defun do2-vector (fun vec1 vec2)
  (let ((n (vector-size vec1)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (progn
                  (fun (vector-ref vec1 i) (vector-ref vec2 i))
                  (loop (fpi-binary+ i 1)))
              ())))
     (loop 0))))

;;;-----------------------------------------------------------------------------
;;;  Map
;;;-----------------------------------------------------------------------------
(defmethod map ((fun <function>) (vec <vector>) . cs)
  (if (null? cs)
      (map1-vector fun vec)
    (if (null? (cdr cs))
        (map2-vector fun vec (car cs))
      (call-next-method))))

(defun map1-vector (fun vec)
  (let* ((n (vector-size vec))
         (res (make-vector n)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (progn
                  ((setter vector-ref) res i (fun (vector-ref vec i)))
                  (loop (fpi-binary+ i 1)))
              res)))
     (loop 0))))

(defun map2-vector (fun vec1 vec2)
  (let* ((n (vector-size vec1))
         (res (make-vector n)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (progn
                  ((setter vector-ref) res i
                   (fun (vector-ref vec1 i) (vector-ref vec2 i)))
                  (loop (fpi-binary+ i 1)))
              res)))
     (loop 0))))

;;;-----------------------------------------------------------------------------
;;;  Member
;;;-----------------------------------------------------------------------------
(defmethod member (x (vec <vector>) . preds)
  (if (null? preds)
      (member1-vector x vec)
    (let ((pred (car preds))
          (n (vector-size vec)))
      (labels
       ((loop (i)
              (and (fpi-binary< i n)
                   (if (eql x (vector-ref vec i))
                       i
                     (loop (fpi-binary+ i 1))))))
       (loop 0)))))

(defun member1-vector (x vec)
  (let ((n (vector-size vec)))
    (labels
     ((loop (i)
            (and (fpi-binary< i n)
                 (if (eql x (vector-ref vec i))
                     i
                   (loop (fpi-binary+ i 1))))))
     (loop 0))))

;;;-----------------------------------------------------------------------------
;;; Iteration <collection> (with dependencies on <vector>
;;;-----------------------------------------------------------------------------
;;;  Do
;;;-----------------------------------------------------------------------------
(defmethod do ((fun <function>) (c <collection>) . cs)
  (let* ((ccs (map1-list (lambda (cc)
                           (if (sequence? cc) cc (convert cc <vector>)))
                         (cons c cs)))
         (n (apply min (map1-list size ccs))))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (progn
                  (apply fun (map1-list (lambda (cc)
                                          (element cc i)) ccs))
                  (loop (fpi-binary+ i 1)))
              ())))
     (loop 0))))

;;;-----------------------------------------------------------------------------
;;;  Map
;;;-----------------------------------------------------------------------------
(defmethod map ((fun <function>) (c <collection>) . cs)
  (let* ((ccs (map1-list (lambda (cc)
                           (if (sequence? cc) cc (convert cc <vector>)))
                         (cons c cs)))
         (n (apply min (map1-list size ccs)))
         (res (make-vector n)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (progn
                  ((setter vector-ref)
                   res i
                   (apply fun (map1-list (lambda (cc)
                                           (element cc i)) ccs)))
                  (loop (fpi-binary+ i 1)))
              res)))
     (convert (loop 0) (class-of c)))))

;;;-----------------------------------------------------------------------------
;;; Access
;;;-----------------------------------------------------------------------------

(defmethod element ((vec <vector>) (i <fpi>))
  (vector-ref vec i))

(defmethod (setter element) ((vec <vector>) (i <fpi>) x)
  ((setter vector-ref) vec i x))

(defun subvector (vec i j)
  (let* ((ii (or i 0))
         (jj (or j (vector-size vec)))
         (n (max (fpi-binary- jj ii) 0))
         (k ii)
         (res (make-vector n)))
    (labels
     ((loop ()
            (if (fpi-binary< k jj)
                (progn
                  ((setter vector-ref) res (fpi-binary- k ii)
                   (vector-ref vec k))
                  (setq k (fpi-binary+ k 1))
                  (loop))
              res)))
     (loop))))

(defmethod reset ((vec <vector>))
  (labels
   ((loop (i)
          (if (fpi-binary< i 0)
              vec
            (progn
              ((setter vector-ref) vec i ())
              (loop (fpi-binary- i 1))))))
   (loop (fpi-binary- (vector-size vec) 1))))

;;;-----------------------------------------------------------------------------
;;; Concatenation
;;;-----------------------------------------------------------------------------
(defmethod concatenate ((vec1 <vector>) . cs)
  (labels
   ((loop (ccs)
          (if (null? ccs) vec1
            (progn
              (setq vec1
                    (vector-append vec1 (convert (car ccs) <vector>)))
              (loop (cdr ccs))))))
   (loop cs)))

(defun vector-append (vec1 vec2)
  (let* ((n1 (vector-size vec1))
         (n2 (vector-size vec2))
         (res (make-vector (fpi-binary+ n1 n2))))
    (labels
     ((loop (i j n vec)
            (if (fpi-binary< i n)
                (progn
                  ((setter vector-ref)
                   res j (vector-ref vec i))
                  (loop (fpi-binary+ i 1) (fpi-binary+ j 1) n vec))
              res)))
     (loop 0 0 n1 vec1)
     (loop 0 n1 n2 vec2))))

;;;-----------------------------------------------------------------------------
;;; Size
;;;-----------------------------------------------------------------------------
;  (defmethod size ((vec <vector>))
;    (vector-size vec))

(defmethod size (x)
  (vector-size x))

;;;-----------------------------------------------------------------------------
;;; Reverse
;;;-----------------------------------------------------------------------------
(defmethod reverse ((vec <vector>))
  (reverse-vector vec))

(defun reverse-vector (vec)
  (let* ((n (vector-size vec))
         (new-vec (make-vector n)))
    (labels
     ((loop (i j)
            (if (fpi-binary< i n)
                (progn
                  ((setter vector-ref) new-vec i
                   (vector-ref vec j))
                  (loop (fpi-binary+ i 1)
                        (fpi-binary- j 1)))
              new-vec)))
     (loop 0 (fpi-binary- n 1)))))

(defun reverse-vector! (vec)
  ;; destructive reverse
  (labels
   ((loop (i j)
          (if (fpi-binary< i j)
              (let ((u (vector-ref vec i))
                    (v (vector-ref vec j)))
                ((setter vector-ref) vec i v)
                ((setter vector-ref) vec j u)
                (loop (fpi-binary+ i 1)
                      (fpi-binary- j 1)))
            vec)))
   (loop 0 (fpi-binary- (vector-size vec) 1))))

;;;-----------------------------------------------------------------------------
;;; Permute collections
;;;-----------------------------------------------------------------------------
(defun permute (fun . cs)
  (let (res)
    (labels
     ((loop (l args)
            (if (cons? l)
                (do
                 (lambda (x)
                   (loop (cdr l)
                         (cons x args)))
                 (car l))
              (setq res (cons (apply fun (reverse args)) res)))))
     (loop cs ())
     (if (or (null? cs)
             (and (cons? cs) (cons? (car cs))))
         (reverse res)
       (convert (reverse res) (class-of (car cs)))))))

;;;-----------------------------------------------------------------------------
;;; Conversion and copying
;;;-----------------------------------------------------------------------------
(defgeneric (converter <vector>) (x))

(defmethod shallow-copy ((vec <vector>))
  (let* ((n (vector-size vec))
         (res (make <vector> size: n)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (let ((x (vector-ref vec i)))
                  ((setter vector-ref) res i x)
                  (loop (fpi-binary+ i 1)))
              res)))
     (loop 0))))

(defmethod deep-copy ((vec <vector>))
  (let* ((n (vector-size vec))
         (res (make <vector> size: n)))
    (labels
     ((loop (i)
            (if (fpi-binary< i n)
                (let ((x (vector-ref vec i)))
                  ((setter vector-ref) res i (deep-copy x))
                  (loop (fpi-binary+ i 1)))
              res)))
     (loop 0))))

;;;-----------------------------------------------------------------------------
;;; Limit (2^29 - 1)
;;;-----------------------------------------------------------------------------
(defconstant maximum-vector-size 536870911)

;;;-----------------------------------------------------------------------------
)  ;; End of module vector
;;;-----------------------------------------------------------------------------
