;;; EuLisp system 'youtoo'
;;;   Interface file for module ex-expr

(definterface ex-expr
  (import (i-all p-env sx-node sx-obj ex-import ex-syntax ex-direct cg-dld)
   syntax (_macros _i-aux0 _ex-aux0)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all sx-obj sx-obj1 sx-obj2 p-env i-ffi sx-node cg-interf i-modify ex-import ex-syntax ex-expose ex-direct cg-dld)
   export (
    ((name . macroexpand-1) (pos . 6) (origin ex-expr . macroexpand-1))
    ((name . *nil*) (pos . 2) (origin ex-expr . *nil*) (class . constant))
    ((name . filter-vars) (pos . 7) (origin ex-expr . filter-vars))
    ((name . protect-newline) (pos . 37) (origin ex-expr . protect-newline))
    ((name . protect-backslash) (pos . 3) (origin ex-expr . protect-backslash))
    ((name . protect-doublequote) (pos . 29) (origin ex-expr . protect-doublequote))
    ((name . complete-lambda-node) (pos . 30) (origin ex-expr . complete-lambda-node))
    ((name . filter-init-forms) (pos . 34) (origin ex-expr . filter-init-forms))
    ((name . macroexpand) (pos . 11) (origin ex-expr . macroexpand))
    ((name . protect-tilde) (pos . 17) (origin ex-expr . protect-tilde))
   )
   local-literals (
    (top-level . 343)
    (protect-backslash . 342)
    (check-appl-arity . 341)
    (box-binding . 340)
    (macroexpand-1 . 339)
    (filter-vars . 338)
    (labelssetq . 337)
    (get-appl-expander . 336)
    (expand-local-static-vars . 335)
    (macroexpand . 334)
    (labelsvar . 333)
    (expand-local-static-vars* . 332)
    (get-id-expander . 331)
    (default-appl-expander . 330)
    (expand-exprs . 329)
    (protect-tilde . 328)
    (check-id-binding . 327)
    (expand-fun-form . 326)
    (get-keyword-node . 325)
    (unfold-rest-arg-appl . 324)
    (lift-appl . 323)
    (letfunsvar . 322)
    (lambda-rest-args? . 321)
    (lift-let*-vars . 320)
    (expr-expander . 319)
    (letfunssetq . 318)
    (protect-doublequote . 317)
    (complete-lambda-node . 316)
    (expand-expr . 315)
    (compute-range-and-domain . 314)
    (get-macro-expander . 313)
    (filter-init-forms . 312)
    (dummy-args . 311)
    (rest-args? . 310)
    (protect-newline . 309)
    (get-t-node . 308)
    (install-expr-expander . 307)
    ("redefinition of expander ~a" . 305)
    ("\n" . 302)
    ("\n" . 301)
    ("\n" . 300)
    ("\n" . 299)
    ("RESULT: ~a" . 291)
    (execute . 290)
    ("APPLY MACRO: ~a" . 289)
    (|(method G005898)| . 288)
    ("bad macro expansion of ~a in ~s" . 286)
    ("compile time error condition: " . 285)
    ("\"" . 277)
    ("\"" . 276)
    ("\"" . 275)
    ("\"" . 274)
    ("    Expanding ~a" . 271)
    (fpi-binary . 262)
    (setter . 258)
    ("no lexical binding ~a available in ~s" . 257)
    (ff . 255)
    (opencoding . 254)
    ("~~" . 252)
    ("~~" . 251)
    ("~~" . 250)
    ("~~" . 249)
    (args: . 245)
    (fun: . 244)
    ("no lexical binding ~a available in ~s" . 240)
    (fpi-zero? . 231)
    (binary= . 230)
    (binary- . 229)
    (fpi-binary- . 228)
    (dec . 227)
    (inc . 226)
    (binary+ . 225)
    (boot1 . 224)
    (fpi-binary+ . 223)
    (<= . 222)
    (fpi-binary= . 221)
    (>= . 220)
    (< . 219)
    (= . 218)
    (fpi-binary< . 217)
    (compare . 216)
    (> . 215)
    (number . 214)
    ((+ - * / %) . 213)
    (% . 212)
    (/ . 211)
    (* . 210)
    (- . 209)
    (+ . 208)
    ("  wrapping lambda in operator position: ~s" . 207)
    ("macroexpand-1: cannot find syntax binding ~a" . 202)
    ("macroexpand-1 cannot find dynamic binding ~a for syntax binding ~a" . 201)
    (arity . 199)
    ("box binding ~a" . 198)
    ("too few arguments calling ~a" . 196)
    ("too many arguments calling ~a" . 195)
    ("too few arguments calling ~a" . 194)
    ("\\" . 192)
    ("\\" . 191)
    ("\\" . 190)
    ("\\" . 189)
    (letfuns . 187)
    (opencoded-lambda . 186)
    (named-lambda . 185)
    (lambda . 184)
    (|(method lift-setq)| . 183)
    (setq . 182)
    (|(method lift-if)| . 181)
    (call-next-method . 180)
    (|(method check-appl)| . 179)
    (lift-setq . 178)
    (lift-if . 177)
    (check-appl . 176)
    ("no applicable object ~a in ~s" . 174)
    ("macro binding ~a should be in syntax import in ~s" . 173)
    (*encl-lambda* . 166)
    ("missing else branch in (if ~a ...) in ~s" . 163)
    ("bad if syntax (if ~a ...) in ~s" . 162)
    (|(method G006371)| . 161)
    ("bad if syntax ~a in ~s" . 159)
    ("compile time error condition: " . 158)
    (else: . 155)
    (then: . 154)
    (pred: . 153)
    ("unknown context" . 148)
    (if . 147)
    (value: . 142)
    (|(method G006462)| . 141)
    ("bad quote syntax" . 139)
    ("compile time error condition: " . 138)
    (quote . 135)
    (|(method G006484)| . 134)
    ("bad quasiquote syntax" . 132)
    ("compile time error condition: " . 131)
    (append . 128)
    (unquote-splicing . 127)
    (cons . 126)
    (unquote . 125)
    (quasiquote . 124)
    ("immutable binding ~a cannot be modified in ~s" . 122)
    ("no binding ~a available in ~s" . 121)
    (*clean-ups* . 120)
    (tail-pos? . 119)
    (|(method G006532)| . 118)
    ("bad setq syntax" . 116)
    ("compile time error condition: " . 115)
    ("body ~a not a list" . 104)
    (|(method G006618)| . 103)
    ("bad lambda syntax" . 101)
    ("compile time error condition: " . 100)
    ("body ~a not a list" . 97)
    ("~a" . 96)
    (|(method G006645)| . 95)
    ("bad named lambda syntax" . 93)
    ("compile time error condition: " . 92)
    ("body ~a not a list" . 89)
    (|(method G006677)| . 88)
    ("bad lambda syntax" . 86)
    ("compile time error condition: " . 85)
    ("body ~a not a list" . 82)
    (|(method G006704)| . 81)
    ("bad opencoded-lambda syntax" . 79)
    ("compile time error condition: " . 78)
    (labels . 75)
    (inlined-lambda . 74)
    (let* . 73)
    (|(method G006733)| . 72)
    ("bad let syntax" . 70)
    ("compile time error condition: " . 69)
    ("" . 65)
    (progn . 64)
    (|(method G006781)| . 63)
    ("bad let* syntax" . 61)
    ("compile time error condition: " . 60)
    (|(method G006818)| . 57)
    ("bad labels syntax" . 55)
    ("compile time error condition: " . 54)
    (let . 51)
    (|(method G006848)| . 50)
    (anonymous . 49)
    (ct-error-value: . 47)
    ("bad letfuns syntax" . 46)
    ("compile time error condition: " . 45)
   )
   literals (
   )
))
