;;; Copyright (c) 1997 by A Kind & University of Bath. All rights reserved.
;;;-----------------------------------------------------------------------------
;;; ---                         EuLisp System 'youtoo'
;;;-----------------------------------------------------------------------------
;;;  Library: comp (EuLisp to Bytecode Compiler -- EuLysses)
;;;  Authors: Andreas Kind, Keith Playford
;;; Description: states used during code generation
;;;-----------------------------------------------------------------------------
(defmodule cg-state
  (syntax (_macros _sx-obj0)
   import (i-all)
   export (make-code-state make-asm-function-state make-C-state))

;;;-----------------------------------------------------------------------------
;;; Code generation state
;;;-----------------------------------------------------------------------------
(def-syntax-obj <code-state> ()
                (handle         ; bytevector name
                 binding-name   ; related binding name (if available)
                 asm            ; generated assembler code
                 stack-size     ; current size of the simulated value stack
                 stack-vars     ; current pushed parameter variables with positions
                 display        ; simulated display (captured variables)
                 enclosed-code  ; sub-code-states resulting from enclosed lambdas
                 ))

(defun make-code-state name
  (make <code-state>
        handle: (gensym)
        binding-name: (and name (car name))
        stack-size: 0))

;;;-----------------------------------------------------------------------------
;;; Assembler state
;;;-----------------------------------------------------------------------------
(def-syntax-obj <asm-state> () (init-bytevector bytevectors))
(def-syntax-obj <asm-function-state> ()
                (handle         ; bytevector name
                 binding-name   ; related binding name (if available)
                 code           ; generated bytecode
                 pc             ; simulated program counter trigger alignment
                 ))

(defun make-asm-function-state (handle name)
  (make <asm-function-state>
        handle: handle
        binding-name: name
        pc: 0))

;;;-----------------------------------------------------------------------------
;;; Linker state
;;;-----------------------------------------------------------------------------
(def-syntax-obj <C-state> ()
                (decls               ; C declarations
                 code-vector-defs    ; C code vector definitions
                 initializations     ; C initialization statements
                 globals statements  ; C global statements
                 used-module-names   ; used module names
                 code-vector-str     ; code vector string
                 global-index        ; global binding index
                 ))

(defun make-C-state ()
  (make <C-state>
        global-index: 2          ; first 2 binding are reserved
        code-vector-str: '(""))) ; avoid to have large strings

;;;-----------------------------------------------------------------------------
)  ;; end of module
;;;-----------------------------------------------------------------------------