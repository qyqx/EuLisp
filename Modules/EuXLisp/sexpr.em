;;; Copyright 1994 Russell Bradford
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'EuXLisp'
;;;-----------------------------------------------------------------------------
;;
;;  EuXLisp is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  EuXLisp is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: Examples of socket communications
;;;  Authors: Russell Bradford
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule sexpr
  (import (level-0
           socket)
   export (<send-error>
           <recv-error>
           send
           recv))

(defconstant null-tag 0)
(defconstant cons-tag 1)
(defconstant fpi-tag 2)
(defconstant double-tag 3)
(defconstant symbol-tag 4)
(defconstant string-tag 5)
(defconstant vector-tag 6)
(defconstant char-tag 7)
(defconstant structure-tag 8)

(defcondition <send-error> <general-error>)
(defcondition <recv-error> <general-error>)

(defgeneric send (obj stream))

(defmethod send (obj stream)
  (error <send-error>
         "don't know how to send object"
         value: obj))

(defmethod send ((obj <null>) stream)
  (send-int stream null-tag))

(defmethod send ((obj <cons>) stream)
  (send-int stream cons-tag)
  (send (car obj) stream)
  (send (cdr obj) stream))

(defmethod send ((obj <fpi>) stream)
  (send-int stream fpi-tag)
  (send-int stream obj))

(defmethod send ((obj <double-float>) stream)
  (send-int stream double-tag)
  (send-float stream obj))

(defmethod send ((obj <symbol>) stream)
  (send-int stream symbol-tag)
  (send-string stream (convert obj <string>)))

(defmethod send ((obj <string>) stream)
  (send-int stream string-tag)
  (send-string stream obj))

(defmethod send ((obj <vector>) stream)
  (send-int stream vector-tag)
  (send-vector obj stream))

(defmethod send ((obj <char>) stream)
  (send-int stream char-tag)
  (send-int stream (convert obj <integer>)))

(defmethod send ((obj <object>) stream)
  (send-int stream structure-tag)
  (send-structure obj stream))

(defun send-vector (vec stream)
  (send-int stream (vector-length vec))
  (do (lambda (elt) (send elt stream)) vec))

(defun recv (stream)
  (let ((tag (recv-int stream)))
    (cond ((= tag null-tag) ())
          ((= tag cons-tag)
           (let ((car (recv stream))
                 (cdr (recv stream)))
             (cons car cdr)))
          ((= tag fpi-tag) (recv-int stream))
          ((= tag double-tag) (recv-float stream))
          ((= tag symbol-tag) (convert (recv-string stream) <symbol>))
          ((= tag string-tag) (recv-string stream))
          ((= tag vector-tag) (recv-vector stream))
          ((= tag char-tag) (convert (recv-int stream) <integer>))
          ((= tag structure-tag) (recv-structure stream))
          (t (error <recv-error>
                    "unknown tag type in recv"
                    value: tag)))))

(defun recv-vector (stream)
  (let* ((len (recv-int stream))
         (vec (make-vector len)))
    (letfuns ((loop (n)
                   (when (< n len)
                         ((setter vector-ref) vec n (recv stream))
                         (loop (+ n 1)))))
            (loop 0))
    vec))

;;;-----------------------------------------------------------------------------
)  ;; End of module sexpr
;;;-----------------------------------------------------------------------------
