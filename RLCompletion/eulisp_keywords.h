///-----------------------------------------------------------------------------
/// ---              EuLisp Systems Youtoo and EuXLisp
///-----------------------------------------------------------------------------
///  File: eulisp_keywords.h
///  Description: List of the possible EuLisp keywords
///  Note: this should be pruned to contain only those in the EuLisp definition
///  See also: keyword_completion.h
///-----------------------------------------------------------------------------

char *eulisp_keywords[] =
{
    // Special operators
    "defmodule",
    "defconstant",
    "deflocal",
    "defun",
    "defclass",
    "defgeneric",
    "defmethod",
    "quote",
    "lambda",
    "let",
    "let*",
    "setq",
    "if",
    "cond",
    "case",
    "progn",
    "and",
    "or",
    "when",
    "unless",
    "while",
    "call-next-method",
    "next-method?",
    "apply",
    "map-list",
    "block",
    "return-from",
    "letfuns",
    "generic-lambda",
    "method-lambda",
    "syntax",

    // List functions
    "cons",
    "car",
    "cdr",
    "caaar",
    "caadr",
    "caar",
    "cadar",
    "cadddr",
    "caddr",
    "cadr",
    "cdaar",
    "cdadr",
    "cdar",
    "cddar",
    "cdddr",
    "cddr",
    "list",
    "list*",
    "append",
    "last-pair",
    "size",
    "list-ref",
    "list-tail",

    // Symbol functions
    "bound?",
    "symbol-value",
    "symbol-plist",
    "gensym",
    "get",
    "put",

    // Vector functions
    "vector",
    "make-vector",
    "vector-size",
    "vector-ref",

    // Predicates
    "eq",
    "eql",
    "null?",
    "atom?",
    "list?",
    "number?",
    "boolean?",
    "cons?",
    "symbol?",
    "keyword?",
    "complex?",
    "float?",
    "double-float?",
    "integer?",
    "string?",
    "vector?",
    "function?",
    "stream?",
    "input-stream?",
    "output-stream?",
    "object?",
    "eof-object?",
    "default-object?",
    "zero?",
    "positive?",
    "negative?",
    "odd?",
    "even?",

    // Arithmetic functions
    "truncate",
    "floor",
    "ceiling",
    "round",
    "abs",
    "gcd",
    "lcm",
    "random",
    "quotient",
    "remainder",
    "min",
    "max",
    "sin",
    "cos",
    "tan",
    "asin",
    "acos",
    "atan",
    "exp",
    "sqrt",
    "pow",
    "log",
    "binary+",
    "binary-",
    "unary-",
    "binary*",
    "binary/",
    "unary/",
    "binary%",
    "binary-gcd",

    // String functions
    "string-size",
    "string-null?",
    "string-append",
    "string-ref",

    // I/O functions
    "read",
    "read-char",
    "read-byte",
    "read-short",
    "read-long",

    "swrite",
    "write",
    "write-char",
    "write-byte",
    "write-short",
    "write-long",

    "sprin",
    "sprint",
    "prin",
    "print",

    "newline",
    "char-ready?",
    "peek-char",

    // File I/O functions
    "open-input-file",
    "open-output-file",
    "open-append-file",
    "open-update-file",
    "close-stream",
    "close-input-stream",
    "close-output-stream",
    "get-file-position",

    // Standard streams
    "stdin",
    "stdout",
    "stderr",

    // Module functions
    "import",
    "export",
    "expose",
    "module-symbols",
    "module-exports",
    "symbol-module",
    "current-module",
    "module-list",
    "unintern",

    // Telos
    "allocate",
    "describe",
    "class?",
    "subclass?",

    // Tables
    "make-table",
    "table-ref",
    "table-comparator",
    "table-delete",
    "table-size",
    "table-keys",
    "table-values",
    "table-fill",
    "table-clear",

    // others
    "binary",
    "text",
    "not",
    "prin1",
    "princ",
    "eval",
    "system",
    "getenv",
    "putenv",
    "tmpfile",
    "current-time",
    "ticks-per-second",
    "backtrace",
    "backtrace?",

    // Thread
    "<thread>",
    "<simple-thread>",
    "make-thread",
    "thread?",
    "thread-reschedule",
    "current-thread",
    "thread-kill",
    "thread-queue",
    "current-thread",
    "thread-start",
    "thread-value",
    "thread-state",
    "<thread-condition>",
    "<thread-error>",
    "<thread-already-started>",

    "<lock>",
    "<simple-lock>",
    "make-lock",
    "lock?",
    "lock",
    "unlock",
    "<lock-condition>",
    "<lock-error>",

    "wait",
    "<wait-condition>",
    "<wait-error>",

    "let/cc",
    "with-handler",
    "unwind-protect",
    "<wrong-condition-class>",
    "signal",
    "error",
    "cerror",

    // Telos
    "<object>",
    "<class>",
    "<simple-class>",
    "<list>",
    "<cons>",
    "<null>",
    "<number>",
    "<integer>",
    "<fpi>",
    "<float>",
    "<double-float>",
    "<symbol>",
    "<keyword>",
    "<string>",
    "<simple-string>",
    "<stream>",
    "<input-stream>",
    "<output-stream>",
    "<i/o-stream>",
    "<vector>",
    "<simple-vector>",
    "<char>",
    "<simple-char>",
    "<promise>",
    "<table>",
    "<hash-table>",
    "<function>",
    "<simple-function>",
    "<subr>",
    "<continuation>",
    "<generic>",
    "<simple-generic>",
    "<method>",
    "<simple-method>",
    "<slot>",
    "<local-slot>",

    "generic-print",
    "generic-write",
    "wait",

    "make",
    "initialize",

    // Setter
    "setter",

    // Converter
    "converter",

    "convert",
    "<conversion-condition>",
    "<no-converter>",

    // Condcl
    "defcondition",
    "condition?",
    "condition-message",
    "condition-value",
    "<condition>",
    "<telos-condition>",
    "<telos-error>",
    "<telos-general-error>",
    "<telos-bad-ref>",
    "<no-applicable-method>",
    "<no-next-method>",
    "<incompatible-method-domain>",
    "<arithmetic-condition>",
    "<arithmetic-error>",
    "<error>",
    "<general-error>",
    "<bad-type>",
    "<unbound-error>",
    "<compilation-error>",
    "<macro-error>",
    "<syntax-error>",
    "<user-interrupt>",

    // Compare
    "binary<",
    "binary<=",
    "binary>",
    "binary>=",
    "binary=",
    "max",
    "min",
    "assoc",

    // Macros
    "defmacro",
    "quasiquote",
    "unquote",
    "unquote-splicing",
    "symbol-macro",
    "macroexpand",
    "macroexpand1",
    "syntax",

    // Collect
    "<collection-condition>",
    "<collection-error>",
    "collection?",
    "sequence?",
    "accumulate",
    "accumulate1",
    "all?",
    "any?",
    "concatenate",
    "delete",
    "do",
    "element",
    "empty?",
    "fill",
    "map",
    "member",
    "remove",
    "reverse",
    "size",
    "slice",

    // Copy
    "deep-copy",
    "shallow-copy",

    // Format
    "format",

    // from telosint, export them all while developing
    "class-of",
    "class-name",
    "class-superclasses",
    "class-precedence-list",
    "class-slots",
    "class-keywords",
    "class-subclasses",
    "class-instance-size",
    "class-abstract?",
    "generic-name",
    "generic-args",
    "generic-optargs?",
    "generic-methods",
    "method-generic",
    "method-function",
    "method-domain",
    "add-method",
    "slot-name",
    "slot-keyword",
    "slot-default",
    "slot-required?",

///-----------------------------------------------------------------------------
