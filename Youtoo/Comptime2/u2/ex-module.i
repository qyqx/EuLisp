;;; EuLisp system 'youtoo'
;;;   Interface file for module ex-module

(definterface ex-module
  (import (i-all p-env sx-node sx-obj ex-import ex-syntax ex-direct ex-expr cg-dld)
   syntax (_syntax-1 _i-aux0 _sx-obj0 _ex-aux0)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all sx-obj sx-obj1 sx-obj2 p-env i-ffi sx-node cg-interf i-modify ex-import ex-syntax ex-expose ex-direct sx-write cg-dld ex-expr)
   export (
    ((name . expand-export) (pos . 4) (origin ex-direct . expand-export))
    ((name . expand-module) (pos . 3) (origin ex-module . expand-module))
   )
   local-literals (
    (top-level . 130)
    (expand-module . 129)
    (module-expander . 128)
    (get-top-level-syntax-expander . 127)
    (install-module-expander . 126)
    (get-top-level-form-collector . 125)
    ("redefinition of expander ~a" . 121)
    ("RESULT: ~a" . 118)
    ("APPLY syntax operator: ~a" . 117)
    (|(method G008)| . 116)
    ("bad syntax expansion of ~a" . 114)
    ("compile time error condition: " . 113)
    (defextern . 108)
    (declare-inline . 107)
    (defopencoded . 106)
    (defsyntax . 105)
    (defun . 104)
    (defconstant . 103)
    (progn . 102)
    (export . 101)
    (defmodule . 100)
    ("bad module name ~a in file ~a.em" . 98)
    (*clean-ups* . 97)
    ("bad value ~a" . 96)
    ("bad value ~a" . 95)
    (|(method G0042)| . 94)
    ("bad defmodule syntax ~a ..." . 92)
    ("compile time error condition: " . 91)
    (|(method G0093)| . 86)
    ("bad export syntax" . 84)
    ("compile time error condition: " . 83)
    (above: . 80)
    ("bad value ~a" . 75)
    ("body ~a not a list" . 74)
    ("bad value ~a" . 73)
    (lambda . 72)
    (|(method G00121)| . 71)
    ("bad defconstant syntax" . 69)
    ("compile time error condition: " . 68)
    ("variable ~a not initialized" . 65)
    ("bad value ~a" . 64)
    ("bad value ~a" . 63)
    (|(method G00162)| . 62)
    ("bad deflocal syntax" . 60)
    ("compile time error condition: " . 59)
    ("bad defun syntax" . 56)
    ("body ~a not a list" . 55)
    ("bad value ~a" . 54)
    (|(method G00197)| . 53)
    ("bad defun syntax" . 51)
    ("compile time error condition: " . 50)
    (deflocal . 47)
    (named-lambda . 46)
    ("body ~a not a list" . 45)
    ("bad value ~a" . 44)
    (|(method G00252)| . 43)
    ("bad defsyntax syntax" . 41)
    ("compile time error condition: " . 40)
    ("body ~a not a list" . 37)
    ("bad value ~a" . 36)
    (|(method G00297)| . 35)
    ("bad defopencoded syntax ~a" . 33)
    ("bad value ~a" . 32)
    ("compile time error condition: " . 31)
    ("bad inline argument ~a; or tried to inline import" . 28)
    (*actual-module* . 27)
    ("no lexical binding ~a available" . 26)
    (|(method G00337)| . 25)
    ("bad inline declaration ~a" . 23)
    ("compile time error condition: " . 22)
    ("body ~a not a list" . 19)
    ("body ~a not a list" . 18)
    ("bad value ~a" . 17)
    (setter . 16)
    ("interpreter does not support defextern" . 15)
    (|(method G00370)| . 14)
    (anonymous . 13)
    (ct-error-value: . 11)
    ("bad defextern syntax ~a" . 10)
    ("compile time error condition: " . 9)
   )
   literals (
   )
))