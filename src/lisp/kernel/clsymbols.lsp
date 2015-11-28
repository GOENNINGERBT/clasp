;;(make-package "CLSYMBOLS" :use '(:core :clos))
(eval-when (:compile-toplevel :load-toplevel :execute)
  (core:select-package :cl))

(export '(WRITE-BYTE WITH-SLOTS WITH-ACCESSORS
	  UPDATE-INSTANCE-FOR-REDEFINED-CLASS
	  UPDATE-INSTANCE-FOR-DIFFERENT-CLASS
	  STREAM-ELEMENT-TYPE STANDARD-METHOD
	  STANDARD SLOT-UNBOUND SLOT-MISSING
	  SLOT-MAKUNBOUND SLOT-EXISTS-P SLOT-BOUNDP
	  SHARED-INITIALIZE REMOVE-METHOD REINITIALIZE-INSTANCE
	  READTABLEP READ-CHAR-NO-HANG READ-BYTE OPEN-STREAM-P
	  NO-NEXT-METHOD METHOD-QUALIFIERS METHOD-COMBINATION-ERROR
	  METHOD-COMBINATION MAKE-METHOD MAKE-LOAD-FORM-SAVING-SLOTS
	  MAKE-LOAD-FORM MAKE-INSTANCES-OBSOLETE MAKE-INSTANCE
	  LOAD-LOGICAL-PATHNAME-TRANSLATIONS INVALID-METHOD-ERROR ))

(export '(INTERNAL-TIME-UNITS-PER-SECOND INTERACTIVE-STREAM-P
	  INITIALIZE-INSTANCE GET-INTERNAL-RUN-TIME
	  GET-INTERNAL-REAL-TIME FUNCTION-KEYWORDS
	  FIND-METHOD ENSURE-GENERIC-FUNCTION
	  ENSURE-DIRECTORIES-EXIST ENCODE-UNIVERSAL-TIME
	  DESCRIBE-OBJECT DESCRIBE DECODE-UNIVERSAL-TIME
	  COMPILE-FILE-PATHNAME CHANGE-CLASS CALL-METHOD
	  ALLOCATE-INSTANCE ADD-METHOD *COMPILE-VERBOSE*
	  *COMPILE-PRINT* *COMPILE-FILE-TRUENAME*
	  *COMPILE-FILE-PATHNAME* MULTIPLE-VALUE-BIND
	  PUSH PUSHNEW WHEN
	  YES-OR-NO-P Y-OR-N-P WRITE-TO-STRING WITH-STANDARD-IO-SYNTAX
	  WITH-SIMPLE-RESTART WITH-PACKAGE-ITERATOR WITH-OUTPUT-TO-STRING ))

(export '( WITH-OPEN-STREAM WITH-OPEN-FILE WITH-INPUT-FROM-STRING
	  WITH-HASH-TABLE-ITERATOR WITH-CONDITION-RESTARTS WITH-COMPILATION-UNIT
	  WARNING WARN USE-VALUE UPGRADED-COMPLEX-PART-TYPE
	  UPGRADED-ARRAY-ELEMENT-TYPE UNTRACE UNLESS UNDEFINED-FUNCTION
	  UNBOUND-VARIABLE UNBOUND-SLOT-INSTANCE UNBOUND-SLOT TYPECASE
	  TYPE-ERROR-EXPECTED-TYPE TYPE-ERROR-DATUM TRACE TIME TAILP
	  SYMBOL-PLIST SUBSTITUTE-IF-NOT SUBSTITUTE-IF SUBSTITUTE SUBST-IF-NOT
	  SUBST-IF SUBST SUBSETP SUBLIS STYLE-WARNING STRUCTURE
	  STREAM-EXTERNAL-FORMAT STREAM-ERROR-STREAM STORE-VALUE
	  STORAGE-CONDITION STABLE-SORT SIMPLE-WARNING SIMPLE-STRING
	  SIMPLE-CONDITION-FORMAT-CONTROL SIMPLE-CONDITION-FORMAT-ARGUMENTS
	  SIMPLE-CONDITION SIMPLE-BASE-STRING SIGNAL SHIFTF SET-PPRINT-DISPATCH
	  SET-EXCLUSIVE-OR SET-DIFFERENCE SERIOUS-CONDITION SEARCH SBIT
	  SATISFIES ROTATEF RETURN RESTART-CASE REQUIRE REPLACE RENAME-PACKAGE
	  REMOVE-IF-NOT REMOVE-IF REMOVE-DUPLICATES REMF REDUCE READTABLE-CASE
	  RASSOC-IF-NOT RASSOC-IF RASSOC RANDOM-STATE-P RANDOM-STATE PUSHNEW
	  PSETQ PSETF PROVIDE PROG2 PROG* PROG PROCLAIM PRINT-UNREADABLE-OBJECT
	  PRINC-TO-STRING PRIN1-TO-STRING PPRINT-TABULAR PPRINT-TAB PPRINT-POP
	  PPRINT-NEWLINE PPRINT-LOGICAL-BLOCK PPRINT-LINEAR PPRINT-INDENT
	  PPRINT-FILL PPRINT-EXIT-IF-LIST-EXHAUSTED PPRINT POSITION-IF-NOT
	  POSITION-IF POP PACKAGE-USED-BY-LIST PACKAGE-NICKNAMES
	  PACKAGE-ERROR-PACKAGE NUNION NTH-VALUE NSUBSTITUTE-IF-NOT ))

(export '( NSUBSTITUTE-IF NSUBSTITUTE NSUBST-IF-NOT NSUBST-IF NSUBST NSUBLIS
	  NSTRING-CAPITALIZE NSET-EXCLUSIVE-OR NSET-DIFFERENCE NOTINLINE
	  NINTERSECTION MULTIPLE-VALUE-LIST MUFFLE-WARNING MERGE MEMBER-IF-NOT
	  MEMBER-IF MASK-FIELD MAP-INTO MAP MAKE-ECHO-STREAM
	  MAKE-BROADCAST-STREAM LOOP-FINISH LOOP LISP-IMPLEMENTATION-VERSION
	  LDIFF LDB LAMBDA-LIST-KEYWORDS INVOKE-RESTART-INTERACTIVELY
	  INVOKE-DEBUGGER INSPECT INLINE INCF IN-PACKAGE IGNORE-ERRORS IGNORABLE
	  HANDLER-CASE HANDLER-BIND GRAPHIC-CHAR-P GET-SETF-EXPANSION
	  GET-DECODED-TIME FUNCTION-LAMBDA-EXPRESSION FORMATTER FIND FIND-IF-NOT
	  FIND-IF FIND-ALL-SYMBOLS FILL FILE-ERROR-PATHNAME ETYPECASE
	  END-OF-FILE ECASE DRIBBLE DPB DO-SYMBOLS DO-EXTERNAL-SYMBOLS
	  DO-ALL-SYMBOLS DO* DEPOSIT-FIELD DENOMINATOR DELETE-IF-NOT DELETE-IF
	  DELETE-DUPLICATES DELETE DEFSTRUCT DEFPACKAGE DEFMETHOD DEFMACRO
	  DEFINE-SYMBOL-MACRO DEFINE-SETF-EXPANDER DEFINE-CONDITION
	  DEFINE-COMPILER-MACRO DEFGENERIC DEFCLASS DECLARATION DECLAIM DECF
	  CTYPECASE COUNT-IF-NOT COUNT-IF COPY-PPRINT-DISPATCH CONTINUE
	  CONSTANTLY CONCATENATE COMPLEMENT COMPILER-MACRO-FUNCTION ))

(export '( COMPILER-MACRO COMPILATION-SPEED COERCE CLEAR-OUTPUT CHECK-TYPE CERROR
	  CELL-ERROR-NAME CCASE BREAK ASSOC-IF-NOT ASSOC-IF ASSERT
	  ARRAY-DISPLACEMENT ARITHMETIC-ERROR-OPERATION
	  ARITHMETIC-ERROR-OPERANDS APROPOS-LIST ALPHANUMERICP ADJUST-ARRAY
	  ADJOIN ABORT 1- 1+ /// // +++ ++ *** **

          short-float-epsilon single-float-epsilon
          double-float-epsilon long-float-epsilon
          short-float-negative-epsilon single-float-negative-epsilon
          double-float-negative-epsilon long-float-negative-epsilon
          isqrt phase signum cis asin acos asinh acosh
          atanh ffloor fceiling ftruncate fround logtest
          byte byte-size byte-position ldb ldb-test mask-field dpb deposit-field

          list-length pairlis ed copy-alist
          tree-equal get-properties short-site-name long-site-name
          digit-char

          array-in-bounds-p bit-and bit-ior bit-xor bit-eqv
          bit-nand bit-nor bit-andc1 bit-andc2 bit-orc1 bit-orc2
          bit-not vector-pop
	  ))

(defparameter * nil)
(defparameter ** nil)
(defparameter *** nil)
(defparameter + nil)
(defparameter ++ nil)
(defparameter +++ nil)
(defparameter - nil)
(defparameter / nil)
(defparameter // nil)
(defparameter /// nil)
