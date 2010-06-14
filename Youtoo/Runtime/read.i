;;; EuLisp system 'youtoo'
;;;   Interface file for module read

(definterface read
  (import (telos condition convert convert1 vector string lock dynamic table stream)
   syntax (_macros)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos let-cc dynamic thread event condition convert table table1 vector list character string fpi copy number integer collect callback compare convert1 lock socket stream2 stream1 stream)
   export (
    ((name . special-tokens) (pos . 30) (origin read . special-tokens) (class . constant))
    ((name . unquote-splicing-mark) (pos . 26) (origin read . unquote-splicing-mark) (class . constant))
    ((name . read-char) (pos . 5) (origin read . read-char))
    ((name . set-dispatch-macro-character) (pos . 16) (origin read . set-dispatch-macro-character))
    ((name . list-stop) (pos . 7) (origin read . list-stop) (class . constant))
    ((name . read-line) (pos . 15) (origin read . read-line))
    ((name . read-s-expression) (pos . 12) (origin read . read-s-expression))
    ((name . dot) (pos . 19) (origin read . dot) (class . constant))
    ((name . unquote-mark) (pos . 8) (origin read . unquote-mark) (class . constant))
    ((name . vector-stop) (pos . 23) (origin read . vector-stop) (class . constant))
    ((name . eos) (pos . 6) (origin read . eos) (class . constant))
    ((name . quote-mark) (pos . 20) (origin read . quote-mark) (class . constant))
    ((name . lispin) (pos . 13) (origin read . lispin) (class . constant))
    ((name . <read-error>) (pos . 9) (origin read . <read-error>) (class . constant))
    ((name . list-start) (pos . 14) (origin read . list-start) (class . constant))
    ((name . parse) (pos . 28) (origin read . parse))
    ((name . sread-s-expression) (pos . 4) (origin read . sread-s-expression))
    ((name . read-token) (pos . 27) (origin read . read-token))
    ((name . quasiquote-mark) (pos . 21) (origin read . quasiquote-mark) (class . constant))
    ((name . *dispatch-macro-character-table*) (pos . 17) (origin read . *dispatch-macro-character-table*))
    ((name . sread) (pos . 10) (origin read . sread))
    ((name . vector-start) (pos . 18) (origin read . vector-start) (class . constant))
    ((name . read) (pos . 24) (origin read . read))
   )
   local-literals (
    (top-level . 108)
    (sread-s-expression . 107)
    (read-char . 106)
    (sread . 105)
    (read-s-expression . 104)
    (read-line . 103)
    (set-dispatch-macro-character . 102)
    (read . 101)
    (read-token . 100)
    (parse . 99)
    (reverse-onto . 98)
    ("unexpected token ~a" . 94)
    ("misplaced unquote-splicing" . 93)
    (unquote-splicing . 92)
    ("misplaced unquote" . 91)
    (quasiquote . 90)
    (quote . 89)
    ("unexpected end of file during list ~a" . 87)
    (" ... " . 86)
    ("misplaced dot after ~s" . 85)
    ("misplaced dot/unquote after ~s" . 84)
    (unquote . 83)
    ("unexpected end of file during vector ~a" . 81)
    (buffer: . 69)
    (*clean-ups* . 68)
    (value: . 65)
    (|(method special?)| . 63)
    (|(setter tag)| . 62)
    (special? . 61)
    ("" . 60)
    (string: . 59)
    ("<end of stream>" . 58)
    ("#;" . 57)
    ("." . 56)
    (",@" . 55)
    ("," . 54)
    ("`" . 53)
    ("'" . 52)
    ("#(" . 51)
    (")" . 50)
    ("(" . 49)
    ((tag:) . 48)
    (special . 47)
    (tag: . 46)
    (keyword: . 45)
    (tag . 44)
    (direct-keywords: . 43)
    (direct-slots: . 42)
    (direct-superclasses: . 41)
    (read-error . 40)
    (name: . 39)
    (anonymous . 38)
    (read-action: . 37)
    (source: . 36)
   )
   literals (
   )
))