;;; Copyright 1994-2010 Fraunhofer ISST
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'Eu2C'
;;;-----------------------------------------------------------------------------
;;
;;  Eu2C is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: Level-0 compare module
;;;  Problems:
;;    The default method for equal cannot work yet because an additional slot in
;;    class objects is needed which contains a list of slot readers.  Introduce
;;    something like subclass? to fasten eql
;;;  Authors: Ingo Mohr
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule compare
  (import (eulisp-kernel
           compare-generic
           (only (eq)
                 basic-compare)
           (only (%list-size)
                 basic-list-0)
           (only (number?)
                 number-i)
           (only (<vector>
                  vector?
                  equal
                  vector-equal
                  primitive-vector-size
                  primitive-vector-ref)
                 vector)
           (only (string?
                  equal-string)
                 string-ii)  ;; string
           (only (<character>
                  character?
                  equal
                  equal-character)
                 character)
           (only (cons?)
                 pair)
           (only (equal)
                 list))
   syntax (eulisp-kernel
           (only (and
                  cond)
                 syntax-i))
   expose (compare-generic)
   export (eq
           eql
           =
           <
           max
           min))

;;;-----------------------------------------------------------------------------
;;; eql
;;;-----------------------------------------------------------------------------
(defun eql (object1 object2)
  (if (eq object1 object2 )
      t
    (let ((class1 (%class-of object1))
          (class2 (%class-of object2)))
      (if (eq class1 class2)
          (cond ((%subclass? class1 <number>)
                 (binary= object1 object2))
                ((%subclass? class1 <character>)
                 (equal-character object1 object2))
                (t () ))
        () ))))


;;  (defun eql (object1 object2)
;;    (and (eq (%class-of object1)
;;             (%class-of object2))
;;         (cond ((%subclass? object1 <number>)
;;                (binary= object1 object2))
;;               ((%subclass? object1 <character>)
;;                (equal object1 object2))
;;               (t (eq object1 object2)))))

;;;-----------------------------------------------------------------------------
;;; equal
;;;-----------------------------------------------------------------------------
;;  (defmethod  equal
;;              ((object1 <vector>)
;;               (object2 <vector>))
;;    (vector-equal object1 object2))
;;
;;  (defun vector-equal(object1 object2)
;;    ;  (print object1 nl)
;;    ;  (print object2 nl)
;;    ;  (print (primitive-vector-size object1) nl)
;;    ;  (print (primitive-vector-size object2) nl)
;;    (if (%eq (%cast %unsigned-word-integer (primitive-vector-size object1))
;;             (%cast %unsigned-word-integer (primitive-vector-size object2)))
;;      (compare-vectors object1 object2 #%I0
;;               (%cast %unsigned-word-integer
;;                      (primitive-vector-size object2)))
;;      ()))
;;  (%define-function (compare-vectors <object>)
;;                    ((vector1 <vector>) (vector2 <vector>)
;;                     (i %unsigned-word-integer) (end %unsigned-word-integer))
;;    (cond ((%ge i end) t)
;;          ((equal (primitive-vector-ref vector1 i)
;;                  (primitive-vector-ref vector2 i))
;;           (compare-vectors vector1 vector2 (%plus i #%I1) end))
;;          (t ())))

;;  (defmethod equal ((pair1 <cons>) (pair2 <cons>))
;;    (equal-cons pair1 pair2))
;;
;;  (defun equal-cons(pair1 pair2)
;;    (and (equal (car pair1) (car pair2))
;;         (equal (cdr pair1) (cdr pair2))))

;;  (defmethod equal ((object1 <object>) (object2 <object>))
;;    (and (eq (%class-of object1)
;;             (%class-of object2)))
;;    (compare-slot-values object1 object2
;;                         (class-slot-readers (%class-of object1))))
;;
;;  (defun compare-slot-values (object1 object2 slot-readers)
;;    (if (null? slot-readers) 't
;;        (and (equal ((car slot-readers) object1)
;;                    ((car slot-readers) object2))
;;             (compare-slot-values object1 object2
;;                                  (cdr slot-readers)))))

(defmethod equal ((object1 <object>) (object2 <object>))
  (if (eq object1 object2)
      t ()))

;;  (defmethod equal (object1 object2)
;;    (if (eq object1 object2)
;;      t
;;      (if (eq (%class-of object1)
;;              (%class-of object2))
;;        (if (string? object1)
;;          (equal-string object1 object2)
;;          (if (vector? object1)
;;            (vector-equal object1 object2)
;;          (if (null? object1)      ; 1.8.93 fehler rest wird abgeschnitten
;; ergebnis ist t
;;            t
;;            (if (cons? object1)
;;              (equal-cons object1 object2)
;;            (if (number? object1)          ; jetzt fehlt alles ab hier
;;              (binary= object1 object2)
;;              (if (character? object1)
;;                (equal-character object1 object2)
;;
;;                (if (cons? object1)
;;                  (equal-cons object1 object2)
;;
;;                  ())))))
;;        ())))

;;;-----------------------------------------------------------------------------
;;; =
;;;-----------------------------------------------------------------------------
(defun = (arg1 . things)
  (if things
      (eq-rec (cons arg1 things))
    t))

;;    (%let ((rest-list-size %signed-word-integer
;;                             (%list-size things)))
;;      (cond ((%eq rest-list-size #%i0)()) ; error too few arguments
;;            ((%eq rest-list-size #%i1) t)
;;            (t (eq-rec things)))
;;      ))

(%annotate-function = reduce   (binary=    t    error  logical))

(defun eq-rec (list1)
  (if (cdr list1)
      (if (binary= (car list1) (car (cdr list1)))
          (eq-rec (cdr list1))
        ())
    (car list1)))

;;;-----------------------------------------------------------------------------
;;; <
;;;-----------------------------------------------------------------------------
(defun < (arg1 . things)
  (if things
      (less-rec (cons arg1 things))
    t))

;;    (%let ((rest-list-size %signed-word-integer
;;                             (%list-size things)))
;;      (cond ((%eq rest-list-size #%i0)())
;;            ((%eq rest-list-size #%i1) t)
;;            (t (less-rec things)))
;;      ))

(%annotate-function < reduce   (binary<    t    error  logical))

(defun less-rec (list1)
  (if (cdr list1)
      (if (binary< (car list1) (car (cdr list1)))
          (less-rec (cdr list1))
        ())
    t)
  )

;;; > not in eulisp!
;;
;;  (defun > things
;;    (%let ((rest-list-size %signed-word-integer
;;                             (%list-size things)))
;;      (cond ((%eq rest-list-size #%i0)())
;;            ((%eq rest-list-size #%i1) t)
;;            (t (greater-rec things)))
;;      ))
;;
;;  (defun greater-rec (list1)
;;    (if (cdr list1)
;;      (if (binary< (car (cdr list1)) (car list1))
;;        (greater-rec (cdr list1))
;;        ())
;;      t)
;;    )

;;;-----------------------------------------------------------------------------
;;; max
;;;-----------------------------------------------------------------------------
(defun max (arg1 . things)
  (if things
      (max-rec things arg1)
    arg1))

;;    (%let ((rest-list-size %signed-word-integer
;;                             (%list-size things)))
;;      (cond ((%eq rest-list-size #%i0)())
;;            ((%eq rest-list-size #%i1) (car things))
;;            (t (max-rec (cdr things) (car things))))
;;      ))

(defun max-rec (list1 max-value)
  (if list1
      (if (binary< max-value (car list1))
          (max-rec (cdr list1) (car list1))
        (max-rec (cdr list1) max-value))
    max-value))

;;;-----------------------------------------------------------------------------
;;; min
;;;-----------------------------------------------------------------------------
(defun min (arg1 . things)
  (if things
      (min-rec things arg1)
    arg1))

;;    (%let ((rest-list-size %signed-word-integer
;;                             (%list-size things)))
;;      (cond ((%eq rest-list-size #%i0)())
;;            ((%eq rest-list-size #%i1) t)
;;            (t (min-rec things (car things))))
;;      ))

(defun min-rec (list1 min-value)
  (if list1
      (if (binary< min-value (car list1))
          (min-rec (cdr list1) min-value)
        (min-rec (cdr list1) (car list1)))
    min-value))

;;;-----------------------------------------------------------------------------
;;; Type schemes for type inference
;;;-----------------------------------------------------------------------------
(%annotate-function
  eql new-signature
  (((var0 var1 var2)
    ((var var0) (atom? (and <object> (not <null>))))
    ((var var1) (atom? <object>))
    ((var var2) (var var1)))
   ((var0 var1 var2)
    ((var var0) (atom? <null>))
    ((var var1) (atom? <object>))
    ((var var2) (atom? <object>)))))

;;;-----------------------------------------------------------------------------
)  ;; End of module compare
;;;-----------------------------------------------------------------------------
