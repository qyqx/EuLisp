;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-interf

(definterface cg-interf
  (import (i-all i-modify sx-obj sx-node p-env)
   syntax (_macros _i-aux0)
   full-import (i-error i-notify i-param i-level1 boot1 boot read symbol random handler table table1 convert1 format list socket stream2 lock stream1 stream vector stream3 float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all i-modify sx-obj2 sx-obj1 sx-obj p-env i-ffi sx-node)
   export (
    ((name . get-full-import-names) (pos . 15) (origin cg-interf . get-full-import-names))
    ((name . find-imported-module) (pos . 24) (origin cg-interf . find-imported-module))
    ((name . make-interface-binding) (pos . 20) (origin cg-interf . make-interface-binding))
    ((name . ffl-link-string) (pos . 21) (origin cg-interf . ffl-link-string))
    ((name . load-module-interface) (pos . 12) (origin cg-interf . load-module-interface))
    ((name . load-library-interfaces) (pos . 4) (origin cg-interf . load-library-interfaces))
    ((name . find-imported-syntax-module) (pos . 8) (origin cg-interf . find-imported-syntax-module))
    ((name . directly-or-indirectly-modified-p) (pos . 7) (origin cg-interf . directly-or-indirectly-modified-p))
    ((name . get-library-names) (pos . 6) (origin cg-interf . get-library-names))
    ((name . get-module-load-dir) (pos . 5) (origin cg-interf . get-module-load-dir))
    ((name . write-interface-file) (pos . 9) (origin cg-interf . write-interface-file))
    ((name . create-library-interface-file) (pos . 11) (origin cg-interf . create-library-interface-file))
    ((name . link-string) (pos . 16) (origin cg-interf . link-string))
    ((name . fff-link-string) (pos . 23) (origin cg-interf . fff-link-string))
    ((name . new-literal) (pos . 14) (origin cg-interf . new-literal))
   )
   local-literals (
    (write-library-interface-export . 186)
    (write-interface-literals . 185)
    (load-library-interfaces . 184)
    (get-module-load-dir . 183)
    (get-library-names . 182)
    (directly-or-indirectly-modified-p . 181)
    (find-imported-syntax-module . 180)
    (write-interface-file . 179)
    (write-library-interface-file . 178)
    (create-library-interface-file . 177)
    (load-module-interface . 176)
    (write-interface-export . 175)
    (new-literal . 174)
    (get-full-import-names . 173)
    (link-string . 172)
    (write-interface-binding . 171)
    (write-module-interface-file . 170)
    (get-interface-info . 169)
    (make-interface-binding . 168)
    (ffl-link-string . 167)
    (write-library-interface-literals . 166)
    (fff-link-string . 165)
    (find-imported-module . 164)
    (write-interface-local-literals . 163)
    ("   )
" . 161)
    ("   local-literals (
" . 160)
    ("    ~s
" . 158)
    ("" . 155)
    ("foreign function file ~a does not exist" . 153)
    ("~a~a~a " . 152)
    (".o" . 151)
    (".o" . 150)
    ("   )
" . 148)
    ("   literals (
" . 147)
    ("    (~s ~a)
" . 145)
    ("" . 143)
    ("foreign function library ~a does not exist" . 141)
    ("~a~a~a " . 140)
    ("lib~a.a" . 139)
    ("~a~alib~a.a" . 138)
    (info: . 136)
    (local-index: . 135)
    (imported: . 134)
    (obj: . 133)
    (immutable: . 132)
    (module: . 131)
    (local-name: . 130)
    ("))
" . 127)
    ("   full-import ~a
" . 126)
    ("   syntax ~a
" . 125)
    ("  (import ~a
" . 124)
    ("(definterface ~a
" . 123)
    (";;;   Interface file for module ~a

" . 122)
    (";;; EuLisp system 'youtoo'
" . 121)
    ("  Creating ~a ..." . 120)
    ("~a~a~a" . 119)
    (".i" . 118)
    ("    ~a
" . 115)
    (origin . 114)
    (pos . 113)
    (name . 112)
    (".o" . 110)
    (".o" . 109)
    (" " . 107)
    (".o" . 106)
    (".o" . 105)
    (|(method G003683)| . 103)
    ("  Get-full-import-names spec: ~a" . 102)
    ("  dir ~a ..." . 101)
    ("No such file or directory ~a in ~a" . 100)
    ("  Getting full import from ~a ..." . 99)
    (".i" . 98)
    ("  Get-full-import-names module-name: ~a" . 97)
    ("bad interface syntax ~a" . 94)
    ("compile time error condition: " . 93)
    ("   )
" . 89)
    ("   export (
" . 88)
    (local-literals . 85)
    (export . 84)
    (syntax . 83)
    (full-import . 82)
    (import . 81)
    (|(method G003542)| . 80)
    (*actual-module* . 79)
    ("  Reading interface ~a ..." . 78)
    ("Reading library interface ~a ..." . 77)
    ("No such file or directory ~a in ~a" . 76)
    (".i" . 75)
    ("lib~a.i" . 74)
    (ct-error-value: . 70)
    ("bad interface syntax ~a" . 69)
    ("compile time error condition: " . 68)
    ("Create library interface file ..." . 65)
    ("  )
)  ; end of interface" . 63)
    ("   literals (
   )
" . 62)
    ("   full-import ~a
" . 61)
    ("   syntax ()
" . 60)
    ("  (import ()
" . 59)
    ("(definterface ~a
" . 58)
    (";;;   Library interface file for module ~a

" . 57)
    (";;; EuLisp system 'youtoo'
" . 56)
    (*clean-ups* . 55)
    (w . 54)
    (mode: . 53)
    (file-name: . 52)
    ("  Writing library interface file ~a" . 51)
    ("~a~a~a" . 50)
    ("lib~a.i" . 49)
    (".c" . 44)
    (".i" . 42)
    (".em" . 41)
    (".i" . 37)
    ("   )
" . 33)
    ("   literals (
" . 32)
    ("  )
" . 30)
    ("   export (
" . 29)
    (anonymous . 27)
   )
   literals (
   )
))