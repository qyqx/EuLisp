;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-dld

(definterface cg-dld
  (import (i-all sx-obj sx-node ex-import ex-syntax i-modify cg-interf p-env)
   syntax (_macros _i-aux0)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all sx-obj2 sx-obj1 sx-obj p-env i-ffi sx-node cg-interf i-modify ex-import ex-syntax)
   export (
    ((name . dynamic-binding-set1) (pos . 12) (origin cg-dld . dynamic-binding-set1) (class . ff) (arity . 3) (ff (3 0 8) 6 (eul_dyn_binding_set . ff_stub_eul_dyn_binding_set5736)))
    ((name . as-C-module-name) (pos . 14) (origin cg-dld . as-C-module-name) (class . ff) (arity . 1) (ff (8) 3 (eul_module_name_as_C_module_name_string . ff_stub_eul_module_name_as_C_module_name_string5738)))
    ((name . as-dynamic-binding) (pos . 4) (origin cg-dld . as-dynamic-binding))
    ((name . dynamic-load-module1) (pos . 13) (origin cg-dld . dynamic-load-module1) (class . ff) (arity . 2) (ff (3 3) 0 (eul_dyn_load_module . ff_stub_eul_dyn_load_module5737)))
    ((name . module-loaded?) (pos . 6) (origin cg-dld . module-loaded?))
    ((name . dynamic-load-module) (pos . 3) (origin cg-dld . dynamic-load-module))
    ((name . dynamic-binding-ref) (pos . 7) (origin cg-dld . dynamic-binding-ref))
    ((name . dynamic-binding-ref1) (pos . 11) (origin cg-dld . dynamic-binding-ref1) (class . ff) (arity . 2) (ff (3 0) 6 (eul_dyn_binding_ref . ff_stub_eul_dyn_binding_ref5735)))
    ((name . dynamic-binding-set) (pos . 9) (origin cg-dld . dynamic-binding-set))
   )
   local-literals (
    (top-level . 62)
    (make-module-env . 61)
    (dynamic-load-module . 60)
    (as-dynamic-binding . 59)
    (create-default-modules . 58)
    (module-loaded? . 57)
    (dynamic-binding-ref . 56)
    (dynamic-initialize-local-literals . 55)
    (dynamic-binding-set . 54)
    ("binding ~a not accessable in module ~a" . 52)
    ("binding ~a not available in module ~a" . 51)
    ("binding ~a not available in module ~a" . 47)
    (level0 . 44)
    (math . 43)
    (name: . 42)
    ("Create default modules ..." . 41)
    ("binding ~a not accessable in module ~a" . 39)
    (ff . 38)
    (opencoding . 37)
    ("module ~a can't be loaded correctly" . 35)
    ("run module ~a" . 34)
    ("initialize literals module ~a ..." . 33)
    ("Dynamically linking module ~a ..." . 32)
    (".c" . 31)
    (".i" . 30)
    (user . 28)
    (|(method load-syntax-module)| . 22)
    ("Loading syntax module ~a ..." . 20)
    (anonymous . 19)
    (*clean-ups* . 18)
    ("  ~a" . 17)
    (*indent* . 16)
   )
   literals (
   )
))
