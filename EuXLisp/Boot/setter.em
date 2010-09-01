;;; setter.em
;;; Euscheme code Copyright (c) 1994 Russell Bradford

(defmodule setter
  (syntax (macros)
   import (root)
   export (setter setter-setter))

(deflocal setter-table (make-table))

(define (setter obj)
        (table-ref setter-table obj))

;;   (defmacro setter (obj)
;;     `(table-ref setter-table ,obj))

(define (setter-setter obj val)
        (table-set! setter-table obj val))

(setter-setter setter setter-setter)

(setter-setter string-ref string-set!)
(setter-setter vector-ref vector-set!)
(setter-setter get-file-position set-file-position!)
(setter-setter symbol-value set-symbol-value!)
(setter-setter symbol-plist set-symbol-plist!)
(setter-setter table-ref table-set!)
(setter-setter table-fill set-table-fill!)
)