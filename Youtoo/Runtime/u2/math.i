;;; EuLisp system 'youtoo'
;;;   Interface file for module math

(definterface math
  (import (telos double)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos double1 convert collect fpi integer number compare copy condition event thread dynamic let-cc callback double)
   export (
    ((name . exp) (pos . 7) (origin math . exp))
    ((name . double-log10) (pos . 30) (origin math . double-log10) (class . ff) (arity . 1) (ff (2) 2 ("log10" . "ff_stub_log10210")))
    ((name . tan) (pos . 17) (origin math . tan))
    ((name . double-acos) (pos . 18) (origin math . double-acos) (class . ff) (arity . 1) (ff (2) 2 ("acos" . "ff_stub_acos198")))
    ((name . double-tan) (pos . 24) (origin math . double-tan) (class . ff) (arity . 1) (ff (2) 2 ("tan" . "ff_stub_tan204")))
    ((name . log) (pos . 15) (origin math . log))
    ((name . double-asin) (pos . 19) (origin math . double-asin) (class . ff) (arity . 1) (ff (2) 2 ("asin" . "ff_stub_asin199")))
    ((name . double-sqrt) (pos . 32) (origin math . double-sqrt) (class . ff) (arity . 1) (ff (2) 2 ("sqrt" . "ff_stub_sqrt212")))
    ((name . double-cos) (pos . 22) (origin math . double-cos) (class . ff) (arity . 1) (ff (2) 2 ("cos" . "ff_stub_cos202")))
    ((name . double-sinh) (pos . 26) (origin math . double-sinh) (class . ff) (arity . 1) (ff (2) 2 ("sinh" . "ff_stub_sinh206")))
    ((name . cosh) (pos . 16) (origin math . cosh))
    ((name . sinh) (pos . 14) (origin math . sinh))
    ((name . asin) (pos . 11) (origin math . asin))
    ((name . cos) (pos . 6) (origin math . cos))
    ((name . double-pow) (pos . 31) (origin math . double-pow) (class . ff) (arity . 2) (ff (2 2) 2 ("pow" . "ff_stub_pow211")))
    ((name . acos) (pos . 13) (origin math . acos))
    ((name . log10) (pos . 10) (origin math . log10))
    ((name . double-cosh) (pos . 25) (origin math . double-cosh) (class . ff) (arity . 1) (ff (2) 2 ("cosh" . "ff_stub_cosh205")))
    ((name . double-atan2) (pos . 21) (origin math . double-atan2) (class . ff) (arity . 2) (ff (2 2) 2 ("atan2" . "ff_stub_atan2201")))
    ((name . double-tanh) (pos . 27) (origin math . double-tanh) (class . ff) (arity . 1) (ff (2) 2 ("tanh" . "ff_stub_tanh207")))
    ((name . pi) (pos . 9) (origin math . pi) (class . constant) (value 3.141593))
    ((name . atan) (pos . 5) (origin math . atan))
    ((name . sin) (pos . 3) (origin math . sin))
    ((name . double-log) (pos . 29) (origin math . double-log) (class . ff) (arity . 1) (ff (2) 2 ("log" . "ff_stub_log209")))
    ((name . tanh) (pos . 2) (origin math . tanh))
    ((name . pow) (pos . 4) (origin math . pow))
    ((name . double-exp) (pos . 28) (origin math . double-exp) (class . ff) (arity . 1) (ff (2) 2 ("exp" . "ff_stub_exp208")))
    ((name . sqrt) (pos . 12) (origin math . sqrt))
    ((name . double-atan) (pos . 20) (origin math . double-atan) (class . ff) (arity . 1) (ff (2) 2 ("atan" . "ff_stub_atan200")))
    ((name . double-sin) (pos . 23) (origin math . double-sin) (class . ff) (arity . 1) (ff (2) 2 ("sin" . "ff_stub_sin203")))
    ((name . atan2) (pos . 8) (origin math . atan2))
   )
   local-literals (
    (top-level . 80)
    (|(method sqrt)| . 78)
    (|(method pow)| . 77)
    (|(method log10)| . 76)
    (|(method log)| . 75)
    (|(method exp)| . 74)
    (|(method tanh)| . 73)
    (|(method sinh)| . 72)
    (|(method cosh)| . 71)
    (|(method tan)| . 70)
    (|(method sin)| . 69)
    (|(method cos)| . 68)
    (|(method atan2)| . 67)
    (|(method atan)| . 66)
    (|(method asin)| . 65)
    (|(method acos)| . 64)
    (sqrt . 63)
    (pow . 62)
    (log10 . 61)
    (log . 60)
    (exp . 59)
    (tanh . 58)
    (sinh . 57)
    (cosh . 56)
    (tan . 55)
    (sin . 54)
    (cos . 53)
    (atan2 . 52)
    (atan . 51)
    (asin . 50)
    (acos . 49)
    (3.141593 . 48)
   )
   literals (
   )
))
