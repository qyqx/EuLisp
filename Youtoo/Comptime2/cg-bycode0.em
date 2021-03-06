;;; Copyright 1997 A. Kind & University of Bath
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: help to define instructions of the virtual machine
;;;  Library: comp (EuLisp to Bytecode Compiler -- EuLysses)
;;;  Authors: Andreas Kind, Keith Playford
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule cg-bycode0
  (syntax (syntax-1)
   import (level-1))

;;;-----------------------------------------------------------------------------
;;; General instructions
;;;-----------------------------------------------------------------------------
(defsyntax def-bytecode (name args code . properties)
  `((setter get-bytecode) ',name
    (make <bytecode>
          name: ',name
          args: ',args
          code: ,code
          properties: ',properties)))

;;;-----------------------------------------------------------------------------
;;; Registers
;;;-----------------------------------------------------------------------------
(defsyntax def-register (name code)
  `((setter get-register) ',name ,code))

;;;-----------------------------------------------------------------------------
)  ;; End of module cg-bycode0
;;;-----------------------------------------------------------------------------
