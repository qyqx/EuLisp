;;; EuLisp system 'youtoo'
;;;   Interface file for module boot1

(definterface boot1
  (import ()
   syntax (_boot0)
   full-import ()
   export (
    ((name . stdout) (pos . 52) (origin boot1 . stdout) (class . constant) (value 1))
    ((name . system) (pos . 51) (origin boot1 . system))
    ((name . equal) (pos . 50) (origin boot1 . equal))
    ((name . simple-generic-function?) (pos . 49) (origin boot1 . simple-generic-function?) (inline (G0053 (gfp))))
    ((name . write-object) (pos) (origin boot1 . write-object) (class . opencoding) (arity . 2) (opencoding (write-object)))
    ((name . fpi-as-character) (pos) (origin boot1 . fpi-as-character) (class . opencoding) (arity . 1) (opencoding (fpi-as-character)))
    ((name . format) (pos . 48) (origin boot1 . format))
    ((name . *absent*) (pos . 47) (origin boot1 . *absent*) (class . constant))
    ((name . dec) (pos . 46) (origin boot1 . dec) (inline (G0078 (fpi-dec))))
    ((name . cons?) (pos . 44) (origin boot1 . cons?) (inline (G0047 (consp))))
    ((name . <) (pos . 43) (origin boot1 . <) (inline (G0072 (fpi-lt))))
    ((name . eql) (pos . 45) (origin boot1 . eql) (inline (G0037 (eql))))
    ((name . setter) (pos . 42) (origin boot1 . setter))
    ((name . mod) (pos . 41) (origin boot1 . mod) (inline (G0070 (fpi-remainder))))
    ((name . make-vector) (pos . 40) (origin boot1 . make-vector))
    ((name . object?) (pos . 39) (origin boot1 . object?))
    ((name . prin) (pos . 38) (origin boot1 . prin))
    ((name . atom?) (pos . 37) (origin boot1 . atom?) (inline (G0057 (consp) (null))))
    ((name . cdr) (pos . 36) (origin boot1 . cdr) (inline (G0084 (cdr))) (setter (G0098 (set-cdr))))
    ((name . make-vector1) (pos . 58) (origin boot1 . make-vector1) (class . ff) (arity . 2) (ff (0 8) 6 ("eul_make_vector" . "ff_stub_eul_make_vector246")))
    ((name . *) (pos . 35) (origin boot1 . *) (inline (G0064 (fpi-product))))
    ((name . fpi?) (pos . 34) (origin boot1 . fpi?) (inline (G0049 (fpip))))
    ((name . character?) (pos . 33) (origin boot1 . character?) (inline (G0041 (characterp))))
    ((name . %) (pos . 32) (origin boot1 . %) (inline (G0068 (fpi-remainder))))
    ((name . stderr) (pos . 31) (origin boot1 . stderr) (class . constant) (value 2))
    ((name . make-symbol) (pos . 56) (origin boot1 . make-symbol) (class . ff) (arity . 1) (ff (3) 6 ("eul_make_symbol" . "ff_stub_eul_make_symbol244")))
    ((name . member1-string) (pos . 55) (origin boot1 . member1-string) (class . ff) (arity . 2) (ff (1 3) 6 ("eul_str_member1" . "ff_stub_eul_str_member1243")))
    ((name . character-as-fpi) (pos) (origin boot1 . character-as-fpi) (class . opencoding) (arity . 1) (opencoding (character-as-fpi)))
    ((name . tailstring) (pos . 54) (origin boot1 . tailstring) (class . ff) (arity . 2) (ff (3 0) 3 ("eul_tailstr" . "ff_stub_eul_tailstr242")))
    ((name . car) (pos . 30) (origin boot1 . car) (inline (G0082 (car))) (setter (G0096 (set-car))))
    ((name . *argc*) (pos . 29) (origin boot1 . *argc*) (class . constant))
    ((name . sprint) (pos . 28) (origin boot1 . sprint))
    ((name . *argv*) (pos . 27) (origin boot1 . *argv*) (class . constant))
    ((name . list) (pos . 26) (origin boot1 . list))
    ((name . fpi-zero?) (pos . 25) (origin boot1 . fpi-zero?) (inline (G0080 (fpi-zerop))))
    ((name . sprin) (pos . 24) (origin boot1 . sprin))
    ((name . symbol?) (pos . 23) (origin boot1 . symbol?) (inline (G0045 (symbolp))))
    ((name . inc) (pos . 21) (origin boot1 . inc) (inline (G0076 (fpi-inc))))
    ((name . eq) (pos . 22) (origin boot1 . eq) (inline (G0035 (eq))))
    ((name . exit) (pos . 20) (origin boot1 . exit))
    ((name . getenv) (pos . 19) (origin boot1 . getenv))
    ((name . string-size) (pos . 18) (origin boot1 . string-size) (inline (G0088 (primitive-size))))
    ((name . string?) (pos . 17) (origin boot1 . string?) (inline (G0043 (stringp))))
    ((name . substring) (pos . 53) (origin boot1 . substring) (class . ff) (arity . 3) (ff (3 0 0) 3 ("eul_substr" . "ff_stub_eul_substr241")))
    ((name . -) (pos . 16) (origin boot1 . -) (inline (G0062 (fpi-difference))))
    ((name . +) (pos . 15) (origin boot1 . +) (inline (G0060 (fpi-sum))))
    ((name . make-keyword) (pos . 57) (origin boot1 . make-keyword) (class . ff) (arity . 1) (ff (3) 6 ("eul_make_keyword" . "ff_stub_eul_make_keyword245")))
    ((name . else) (pos . 14) (origin boot1 . else) (class . constant))
    ((name . cpu-time) (pos . 13) (origin boot1 . cpu-time))
    ((name . /) (pos . 12) (origin boot1 . /) (inline (G0066 (fpi-quotient))))
    ((name . =) (pos . 11) (origin boot1 . =) (inline (G0074 (fpi-equal))))
    ((name . null?) (pos . 10) (origin boot1 . null?) (inline (G0039 (null))))
    ((name . string-ref) (pos . 9) (origin boot1 . string-ref) (inline (G0090 (string-ref))) (setter (G00100 (set-string-ref))))
    ((name . vector-size) (pos . 8) (origin boot1 . vector-size) (inline (G0092 (primitive-size))))
    ((name . vector-ref) (pos . 7) (origin boot1 . vector-ref) (inline (G0094 (primitive-ref))) (setter (G00102 (set-primitive-ref))))
    ((name . list?) (pos . 5) (origin boot1 . list?) (inline (G0055 (listp))))
    ((name . simple-function?) (pos . 4) (origin boot1 . simple-function?) (inline (G0051 (lambdap))))
    ((name . print) (pos . 3) (origin boot1 . print))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0086 (cons))))
   )
   local-literals (
    (top-level . 168)
    (cons . 167)
    (print . 166)
    (simple-function? . 165)
    (list? . 164)
    (set-setter . 163)
    (vector-ref . 162)
    (vector-size . 161)
    (string-ref . 160)
    (null? . 159)
    (= . 158)
    (/ . 157)
    (cpu-time . 156)
    (+ . 155)
    (- . 154)
    (string? . 153)
    (string-size . 152)
    (getenv . 151)
    (exit . 150)
    (inc . 149)
    (eq . 148)
    (symbol? . 147)
    (sprin . 146)
    (fpi-zero? . 145)
    (list . 144)
    (sprint . 143)
    (car . 142)
    (% . 141)
    (character? . 140)
    (fpi? . 139)
    (* . 138)
    (cdr . 137)
    (atom? . 136)
    (prin . 135)
    (object? . 134)
    (make-vector . 133)
    (mod . 132)
    (setter . 131)
    (< . 130)
    (cons? . 129)
    (eql . 128)
    (dec . 127)
    (format . 126)
    (simple-generic-function? . 125)
    (equal . 124)
    (system . 123)
    (anonymous . 117)
    ("
" . 98)
    (|(setter vector-ref)| . 72)
    (|(setter string-ref)| . 71)
    (|(setter cdr)| . 70)
    (|(setter car)| . 69)
    ((*absent*) . 68)
    (*absent* . 67)
   )
   literals (
   )
))