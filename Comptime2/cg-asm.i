;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-asm

(definterface cg-asm
  (import (i-all sx-obj cg-bycode1 cg-bycode2 cg-state op-peep op-peep-r)
   syntax (_macros _i-aux0 _sx-obj0)
   full-import (i-error i-notify i-param i-level1 boot1 boot read symbol random handler table table1 convert1 format list socket stream2 lock stream1 stream vector stream3 float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all sx-obj2 sx-obj1 sx-obj cg-bycode cg-bycode1 cg-bycode2 cg-state op-peep op-peep-r)
   export (
    ((name . assemble) (pos . 3) (origin cg-asm . assemble))
   )
   local-literals (
    (assemble-function . 117)
    (neg-fix-bytes-aux . 116)
    (resolve-label-refs . 115)
    (fix-as-4-bytes . 114)
    (put-branch-bytes . 113)
    (assemble-instruction-default . 112)
    (register-label-ref . 111)
    (get-branch-code . 110)
    (branchp . 109)
    (assemble-instruction . 108)
    (put-bc . 107)
    (register-label-loc . 106)
    (pos-fix-bytes-aux . 105)
    (put-bytes . 104)
    (assemble-branch . 103)
    (put-byte . 102)
    (align . 101)
    (put-fix . 100)
    ("      PUT BYTE: ~a" . 95)
    ("label multiply defined" . 89)
    ("no bytecode ~a" . 87)
    (noop . 86)
    (FF . 84)
    (call-foreign-function . 83)
    (CODE-VECTOR . 82)
    (static-ref . 81)
    (code-vector-ref . 80)
    (set-and-get-binding-ref . 79)
    (set-binding-ref . 78)
    (BINDING . 77)
    (binding-ref . 76)
    ("    Instruction: ~a" . 75)
    ((branch-true branch-nil branch) . 73)
    (branch . 72)
    (branch-nil . 71)
    (branch-true . 70)
    ("    Register label ~a ref ~a" . 67)
    (byte . 65)
    ("no register ~a" . 64)
    (reg . 63)
    (STATIC . 62)
    (static . 61)
    (label . 60)
    ("      PUT BRANCH BYTES: ~a" . 57)
    (call/ep-lambda . 54)
    ("    Resolve labels" . 53)
    ("   .Resolving ~a to ~a" . 49)
    ("-pos" . 46)
    ("-long-pos" . 45)
    ("jump too long: ~a" . 44)
    ("-neg" . 43)
    ("-long-neg" . 42)
    ("jump too long: ~a" . 41)
    (bytevectors: . 38)
    (init-bytevector: . 37)
    (assemble . 36)
    ("  Assembling module ~a ..." . 35)
    (|(method G005935)| . 34)
    (ct-error-value: . 31)
    ("assembler error" . 30)
    ("compile time error condition: " . 29)
    ("  Re-assembling function ~a because of long jump" . 26)
    (*clean-ups* . 25)
    (*with-long-jumps* . 24)
    (anonymous . 23)
   )
   literals (
   )
))