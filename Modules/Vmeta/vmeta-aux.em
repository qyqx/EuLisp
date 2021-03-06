;;; Copyright 2003 T. Kurt Bond
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
;;; Title: Macros for verbose META in EuLisp.
;;;  Author: T. Kurt Bond
;;;  Maintainer: Henry G. Weller
;;;  Description:
;;    See vmeta.em
;;;-----------------------------------------------------------------------------

(defmodule vmeta-aux
  (syntax (syntax-0)
   import (level-0))

(defsyntax ecase (exp . clauses)
  (let ((val (gensym)))
    `(let ((,val ,exp))
       (cond
         ,@(map (lambda (clause)
                  (let ((const (car clause))
                        (forms (cdr clause)))
                    `((eq ,val ',const) ,@forms)))
                clauses)))))

;;;-----------------------------------------------------------------------------
)  ;; End of module vmeta-aux
;;;-----------------------------------------------------------------------------
