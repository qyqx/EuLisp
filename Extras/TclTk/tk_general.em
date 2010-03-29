;;; ----------------------------------------------------------------------- ;;;
;;;  By J Garcia & University of Bath. All rights reserved.                 ;;;
;;; ----------------------------------------------------------------------- ;;;
;;;                     EuLisp System 'youtoo/tk'
;;; ----------------------------------------------------------------------- ;;;
;;;  Library: tcl-tk
;;;  Authors: J Garcia
;;;  Description: YouToo/Tk module that provides general functions.
;;; ----------------------------------------------------------------------- ;;;
(defmodule tk_general
  (syntax (macros)
   import (level1)
   export (<tk-button> <tk-label> <tk-frame>  <tk-canvas> <tk-checkbutton>
           <tk-entry> <tk-listbox> <tk-menu> <tk-menubutton> <tk-message>
           <tk-radiobutton> <tk-scale> <tk-scrollbar> <tk-text> <tk-toplevel>
           <tk-object> <tk-item-canvas>
           eul_initialize_tk tk-name tk-handler
           Tk_MainLoop tk-main-loop Tcl_DoOneEvent tcl-do-one-event
           tk-item-canvas-id as-c-options as-c-accessors tk-object-p
           tk-button-p tk-canvas-p tk-entry-p tk-listbox-p tk-scrollbar-p
           tk-text-p tk-toplevel-p tk-item-canvas-p tk_allocate_registers))
;;;--------------------------------------------------------------------------;;
;;;                                                                          ;;
;;;                       Foreign Functions Decalartions                     ;;
;;;                                                                          ;;
;;;--------------------------------------------------------------------------;;
  (defextern eul_initialize_tk () ptr)
  (defextern tk_allocate_registers (<string> ptr) ptr)
  (defextern Tk_MainLoop () boolean)
  (defextern Tcl_DoOneEvent (<int>) <int> "Tcl_DoOneEventAux")
  ;; These defexterns should be first-class
  (defun tk-main-loop () (Tk_MainLoop))
  (defun tcl-do-one-event (x) (Tcl_DoOneEvent x))
;;;--------------------------------------------------------------------------;;
;;;                                                                          ;;
;;;                           Class Decalartions                             ;;
;;;                                                                          ;;
;;;--------------------------------------------------------------------------;;
  (defclass <tk-object> ()
    ((name accessor: tk-name
           keyword: name:
           default: (string-append ".tk" (symbol-name (gensym))))
    (handler accessor: tk-handler
             keyword: handler:))
    abstractp: t
    predicate: tk-object-p)
  (defclass <tk-button> (<tk-object>)() predicate: tk-button-p)
  (defclass <tk-label> (<tk-object>)())
  (defclass <tk-frame> (<tk-object>)())
  (defclass <tk-canvas> (<tk-object>)() predicate: tk-canvas-p)
  (defclass <tk-checkbutton> (<tk-object>)())
  (defclass <tk-entry> (<tk-object>)() predicate: tk-entry-p)
  (defclass <tk-listbox> (<tk-object>)() predicate: tk-listbox-p)
  (defclass <tk-menu> (<tk-object>)())
  (defclass <tk-menubutton> (<tk-object>)())
  (defclass <tk-message> (<tk-object>)())
  (defclass <tk-radiobutton> (<tk-object>)())
  (defclass <tk-scale> (<tk-object>)() )
  (defclass <tk-scrollbar> (<tk-object>)() predicate: tk-scrollbar-p)
  (defclass <tk-text> (<tk-object>)() predicate: tk-text-p)
  (defclass <tk-toplevel> (<tk-object>)() predicate: tk-toplevel-p)
  (defclass <tk-item-canvas> (<tk-object>)
    ((id accessor: tk-item-canvas-id))
    predicate: tk-item-canvas-p)
;;;--------------------------------------------------------------------------;;
;;;                                                                          ;;
;;;                         General Functions                                ;;
;;;                                                                          ;;
;;;--------------------------------------------------------------------------;;
;;; The next function receives a list of arguments and the clientdata argument.
;;; If self accessor appear in the list it will be change by the clientdata
  (defun change-self (list clientdata)
    (let ((list-result ()))
    (do (lambda (el)
          (setq list-result 
                (if (eq el self:)
                    (cons clientdata list-result)
                  (cons el list-result))))
        (reverse list))
    list-result))
  (defun as-c-options (l . clientdata)
    (let (x auxlist)
      (labels
       ((loop (ll i res)
              (if (null ll)
                  (cons i (reverse res))
                (let ((key (car ll))
                      value)
                  (cond ((tk-object-p key)
                         (loop (cdr ll)
                               (+ i 1)
                          (cons (tk-name key) res)))
                   ((stringp key)
                    (loop (cdr ll)
                          (+ i 1)
                          (cons key res)))
                   ((numberp key)
                    (loop (cdr ll)
                          (+ i 1)
                          (cons (convert key <string>) res)))
                   (t
                    (setq value (cadr ll))
                    (cond ((or (eq key command:)
                               (eq key yscrollcommand:)
                               (eq key xscrollcommand:))
                           ;; We have a command.
                           (if (stringp value)
                               ;; Value is the string naming a Tcl command???
                               (loop (cddr ll)
                                     (+ i 2)
                                     (cons
                                      value
                                      (cons (string-append "-"
                                                           (keyword-name key))
                                            res)))
                             ;; Value must be a Eulisp function
                             (let* ((function-key
                                     (symbol-name
                                      (gensym
                                       (symbol-name (function-name value)))))
                                    (rest (cddr ll))
                                    (args (if (and rest (eq (car rest) args:))
                                              (change-self (cadr rest)
                                                           (car clientdata))
                                            ())))
                               (tk_allocate_registers function-key
                                                      (cons value args))
                               (loop (if (and rest
                                              (eq (car rest) args:))
                                         (cddr rest) ;get rid of args: args
                                         rest)
                                     (+ i 2)
                                     (cons
                                      (string-append "eul_interpret "
                                                     function-key)
                                      (cons
                                       (string-append "-" (keyword-name key))
                                       res))))))
                          ((tk-object-p value)
                           (loop (cddr ll)
                                 (+ i 2)
                                 (cons (tk-name value)
                                       (cons
                                        (string-append "-" (keyword-name key))
                                        res))))
                         
                          (t
                           (loop (cddr ll)
                                 (+ i 2)
                                 (cons  (convert value <string>)
                                        (cons
                                         (string-append "-" (keyword-name key))
                                         res)))))))))))
       (setq x (loop l 0 ()))
       x)))
;;; The next function takes a list of accessors. The result will be a list
;;; of two lists. The first one of these two lists will contain the  strings 
;;; representing the tcl-tk accessors. That is the same names without the  
;;; colons at the end. Instead of that a % is added at the beginning.
;;; One special accessor could be args:. This accessor has to be the last one
;;; and has to be followed by a list of arguments. This list is going to be
;;; the second list in the result.
;;; 
;;;  The next entrance:
;;;
;;;      ( x: y: W: args: (list 1 2 3))     
;;;
;;;  Will produce the next result:
;;;
;;;      (("%x" "%y" "%W)(1 2 3)
  (defun as-c-accessors (l)
    (let (x)
      (labels
       ((loop (ll res)
              (cond ((null ll)
                     (list (reverse res) ()))
                    ((eq (car ll) args:)
                     (list (reverse res) (cadr ll)))
                    ((keywordp (car ll))
                     (loop (cdr ll)
                           (cons
                            (concatenate "%" (keyword-name (car ll))) res)))
                    (t
                     (format t "Error: Some arguments are not keywords\n")
                     (flush)))))
       (setq x (loop l ())))
      x))
)  ;; end of module
 