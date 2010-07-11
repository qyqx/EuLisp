(defmodule arith0
    (syntax (macros)
     import (level0 math))

  (defconstant *max* 100001)

  (defun test (x y)
    (if (= x *max*)
        x
      (test (- x (+ (* y 2) (/ x (abs y))))
            (- y (+ (* x 2) (/ y (abs x)))))))

  (defun run ()
    (test 1 1))

  (time-execution (run) stdout)

  )  ; end of module
