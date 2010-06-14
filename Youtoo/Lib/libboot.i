;;; EuLisp system 'youtoo'
;;;   Library interface file for module boot

(definterface boot
  (import ()
   syntax ()
   full-import (boot boot1)
   export (
    ((name . stdout) (pos) (origin boot1 . stdout) (class . constant) (value 1))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0096 (cons))))
    ((name . equal) (pos . 50) (origin boot1 . equal))
    ((name . *backtrace-nframes*) (pos . 31) (origin boot . *backtrace-nframes*))
    ((name . list-remove-duplicates) (pos . 14) (origin boot . list-remove-duplicates))
    ((name . simple-generic-function?) (pos . 49) (origin boot1 . simple-generic-function?) (inline (G0059 (gfp))))
    ((name . write-object) (pos) (origin boot1 . write-object) (class . opencoding) (arity . 2) (opencoding (write-object)))
    ((name . member1-list) (pos . 30) (origin boot . member1-list) (inline (G00594 (static-ref-nil) (memq))))
    ((name . init-list-ref) (pos . 29) (origin boot . init-list-ref))
    ((name . *absent*) (pos . 48) (origin boot1 . *absent*) (class . constant))
    ((name . dec) (pos . 47) (origin boot1 . dec) (inline (G0086 (fpi-dec))))
    ((name . anyp1-list) (pos . 28) (origin boot . anyp1-list))
    ((name . cons?) (pos . 44) (origin boot1 . cons?) (inline (G0051 (consp))))
    ((name . symbolp) (pos . 45) (origin boot1 . symbolp) (inline (G0045 (symbolp))))
    ((name . <) (pos . 43) (origin boot1 . <) (inline (G0080 (fpi-lt))))
    ((name . eql) (pos . 46) (origin boot1 . eql) (inline (G0037 (eql))))
    ((name . setter) (pos . 42) (origin boot1 . setter))
    ((name . mod) (pos . 41) (origin boot1 . mod) (inline (G0078 (fpi-remainder))))
    ((name . listify-env-string) (pos . 26) (origin boot . listify-env-string))
    ((name . make-vector) (pos . 40) (origin boot1 . make-vector))
    ((name . object?) (pos . 39) (origin boot1 . object?))
    ((name . prin) (pos . 38) (origin boot1 . prin))
    ((name . atom?) (pos . 37) (origin boot1 . atom?) (inline (G0065 (consp) (null))))
    ((name . reverse-list) (pos . 25) (origin boot . reverse-list))
    ((name . error) (pos . 12) (origin boot . error))
    ((name . *error*) (pos . 13) (origin boot . *error*))
    ((name . cdr) (pos . 36) (origin boot1 . cdr) (inline (G0094 (cdr))) (setter (G00108 (set-cdr))))
    ((name . make-vector1) (pos . 57) (origin boot1 . make-vector1) (class . ff) (arity . 2) (ff (0 8) 6 (eul_make_vector . ff_stub_eul_make_vector267)))
    ((name . list-ref) (pos . 23) (origin boot . list-ref))
    ((name . member-list) (pos . 24) (origin boot . member-list))
    ((name . warning) (pos . 22) (origin boot . warning))
    ((name . anyp2-list) (pos . 11) (origin boot . anyp2-list))
    ((name . *) (pos . 35) (origin boot1 . *) (inline (G0072 (fpi-product))))
    ((name . character?) (pos . 34) (origin boot1 . character?) (inline (G0041 (characterp))))
    ((name . append!) (pos . 21) (origin boot . append!))
    ((name . %) (pos . 33) (origin boot1 . %) (inline (G0076 (fpi-remainder))))
    ((name . int-zerop) (pos . 32) (origin boot1 . int-zerop) (inline (G0090 (fpi-zerop))))
    ((name . assoc-list-ref) (pos . 20) (origin boot . assoc-list-ref))
    ((name . map1-list) (pos . 10) (origin boot . map1-list))
    ((name . stderr) (pos) (origin boot1 . stderr) (class . constant) (value 2))
    ((name . *stack-nvalues*) (pos . 9) (origin boot . *stack-nvalues*))
    ((name . make-symbol) (pos . 55) (origin boot1 . make-symbol) (class . ff) (arity . 1) (ff (3) 6 (eul_make_symbol . ff_stub_eul_make_symbol265)))
    ((name . member1-string) (pos . 54) (origin boot1 . member1-string) (class . ff) (arity . 2) (ff (1 3) 6 (eul_str_member1 . ff_stub_eul_str_member1264)))
    ((name . int-as-character) (pos) (origin boot1 . int-as-character) (class . opencoding) (arity . 1) (opencoding (fpi-as-character)))
    ((name . int?) (pos . 31) (origin boot1 . int?) (inline (G0055 (fpip))))
    ((name . tailstring) (pos . 53) (origin boot1 . tailstring) (class . ff) (arity . 2) (ff (3 0) 3 (eul_tailstr . ff_stub_eul_tailstr263)))
    ((name . backtrace) (pos . 8) (origin boot . backtrace))
    ((name . car) (pos . 30) (origin boot1 . car) (inline (G0092 (car))) (setter (G00106 (set-car))))
    ((name . *argc*) (pos . 29) (origin boot1 . *argc*) (class . constant))
    ((name . time-start) (pos . 28) (origin boot1 . time-start))
    ((name . *argv*) (pos . 27) (origin boot1 . *argv*) (class . constant))
    ((name . list) (pos . 26) (origin boot1 . list))
    ((name . character-as-int) (pos) (origin boot1 . character-as-int) (class . opencoding) (arity . 1) (opencoding (character-as-fpi)))
    ((name . time-stop) (pos . 25) (origin boot1 . time-stop))
    ((name . append) (pos . 7) (origin boot . append))
    ((name . symbol?) (pos . 24) (origin boot1 . symbol?) (inline (G0047 (symbolp))))
    ((name . inc) (pos . 22) (origin boot1 . inc) (inline (G0084 (fpi-inc))))
    ((name . eq) (pos . 23) (origin boot1 . eq) (inline (G0035 (eq))))
    ((name . exit) (pos . 21) (origin boot1 . exit))
    ((name . getenv) (pos . 20) (origin boot1 . getenv))
    ((name . mapcan) (pos . 6) (origin boot . mapcan))
    ((name . apply) (pos . 5) (origin boot . apply))
    ((name . format1) (pos . 19) (origin boot1 . format1))
    ((name . string-size) (pos . 18) (origin boot1 . string-size) (inline (G0098 (primitive-size))))
    ((name . string?) (pos . 17) (origin boot1 . string?) (inline (G0043 (stringp))))
    ((name . substring) (pos . 52) (origin boot1 . substring) (class . ff) (arity . 3) (ff (3 0 0) 3 (eul_substr . ff_stub_eul_substr262)))
    ((name . list-size) (pos . 18) (origin boot . list-size))
    ((name . -) (pos . 16) (origin boot1 . -) (inline (G0070 (fpi-difference))))
    ((name . +) (pos . 15) (origin boot1 . +) (inline (G0068 (fpi-sum))))
    ((name . make-keyword) (pos . 56) (origin boot1 . make-keyword) (class . ff) (arity . 1) (ff (3) 6 (eul_make_keyword . ff_stub_eul_make_keyword266)))
    ((name . stack-values) (pos . 4) (origin boot . stack-values))
    ((name . listp) (pos . 14) (origin boot1 . listp) (inline (G0061 (listp))))
    ((name . *warning*) (pos . 3) (origin boot . *warning*))
    ((name . consp) (pos . 13) (origin boot1 . consp) (inline (G0049 (consp))))
    ((name . list-remove) (pos . 17) (origin boot . list-remove))
    ((name . /) (pos . 12) (origin boot1 . /) (inline (G0074 (fpi-quotient))))
    ((name . =) (pos . 11) (origin boot1 . =) (inline (G0082 (fpi-equal))))
    ((name . null?) (pos . 10) (origin boot1 . null?) (inline (G0039 (null))))
    ((name . string-ref) (pos . 9) (origin boot1 . string-ref) (inline (G00100 (string-ref))) (setter (G00110 (set-string-ref))))
    ((name . vector-size) (pos . 8) (origin boot1 . vector-size) (inline (G00102 (primitive-size))))
    ((name . vector-ref) (pos . 7) (origin boot1 . vector-ref) (inline (G00104 (primitive-ref))) (setter (G00112 (set-primitive-ref))))
    ((name . getchar) (pos . 32) (origin boot . getchar) (class . ff) (arity . 0) (ff () 1 (getchar . ff_stub_getchar869)))
    ((name . do1-list) (pos . 16) (origin boot . do1-list))
    ((name . sort-list) (pos . 15) (origin boot . sort-list))
    ((name . list?) (pos . 5) (origin boot1 . list?) (inline (G0063 (listp))))
    ((name . system) (pos . 51) (origin boot1 . system))
    ((name . simple-function?) (pos . 4) (origin boot1 . simple-function?) (inline (G0057 (lambdap))))
    ((name . print) (pos . 3) (origin boot1 . print))
   )
   literals (
   )
  )
)  ; end of interface