/*
    File: lispCallingConvention.h
*/

/*
Copyright (c) 2014, Christian E. Schafmeister
 
CLASP is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.
 
See directory 'clasp/licenses' for full details.
 
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
/* -^- */
#ifdef LCC_MACROS

#define LCC_UNUSED NULL
#define LCC_FIXED_ARGS LCC_ARGS_IN_REGISTERS
#define LCC_FROM_SMART_PTR(x) (x.raw_())
#define LCC_TYPE T_O *
#define LCC_FROM_ACTIVATION_FRAME_SMART_PTR(x) (x.raw_())
#define LCC_TO_SMART_PTR(x) (gctools::smart_ptr<core::T_O>((gc::Tagged)x))

// Pass a defined number of arguments to operator()
#define LCC_PASS_ARGS0_ELLIPSIS(funcRaw)                funcRaw, 0, NULL, NULL, NULL, NULL
#define LCC_PASS_ARGS1_ELLIPSIS(funcRaw,a0)             funcRaw, 1, a0,   NULL, NULL, NULL
#define LCC_PASS_ARGS2_ELLIPSIS(funcRaw,a0, a1)         funcRaw, 2, a0,   a1,   NULL, NULL
#define LCC_PASS_ARGS3_ELLIPSIS(funcRaw,a0, a1, a2)     funcRaw, 3, a0,   a1,   a2,   NULL
#define LCC_PASS_ARGS4_ELLIPSIS(funcRaw,a0, a1, a2, a3) funcRaw, 3, a0,   a1,   a2,   a3

#define LCC_PASS_MAIN() NULL, 0, NULL, NULL, NULL, NULL

// Don't need lcc_arglist because no arguments are passed
#define LCC_PASS_ARGS0_VA_LIST(funcRaw) funcRaw, 0, NULL, NULL, NULL, NULL
#define LCC_PASS_ARGS1_VA_LIST(funcRaw,a0) funcRaw, 1, a0, NULL, NULL, NULL

#define LCC_UNUSED_rest0 NULL, NULL, NULL, NULL
#define LCC_PASS_ARGS0_ARGLIST(funcRaw) funcRaw, 0, NULL, NULL, NULL, NULL
#define LCC_PASS_ARGS1_ARGLIST(funcRaw,a0) funcRaw, 1, a0, NULL, NULL, NULL
#define LCC_PASS_ARGS2_ARGLIST(funcRaw,a0, a1) funcRaw, 2, a0, a1, NULL, NULL
#define LCC_PASS_ARGS3_ARGLIST(funcRaw,a0, a1, a2) funcRaw, 3, a0, a1, a2, NULL
#define LCC_PASS_ARGS4_ARGLIST(funcRaw,a0, a1, a2, a3) funcRaw, 3, a0, a1, a2, a3
#define LCC_PASS_ARGS_ARGLIST_GENERAL(funcRaw, nargs, a0, a1, a2, a3) funcRaw, nargs, a0, a1, a2, a3


// To invoke "invoke" methods use these

#define LCC_ARGS_FUNCALL_ELLIPSIS core::T_O *lcc_closure, std::size_t lcc_nargs, core::T_O *lcc_fixed_arg0, core::T_O *lcc_fixed_arg1, core::T_O *lcc_fixed_arg2, core::T_O *lcc_fixed_arg3, ...
#define LCC_ARGS_CC_CALL_ELLIPSIS core::T_O *lcc_closure, std::size_t lcc_nargs, core::T_O *lcc_fixed_arg0, core::T_O *lcc_fixed_arg1, core::T_O *lcc_fixed_arg2, core::T_O *lcc_fixed_arg3, ...
#define LCC_ARGS_ELLIPSIS core::T_O *lcc_closure, std::size_t lcc_nargs, core::T_O *lcc_fixed_arg0, core::T_O *lcc_fixed_arg1, core::T_O *lcc_fixed_arg2,  core::T_O *lcc_fixed_arg3, ...
#define LCC_ARGS_LLH VaList_sp lcc_vargs, std::size_t lcc_nargs, core::T_O *lcc_fixed_arg0, core::T_O *lcc_fixed_arg1, core::T_O *lcc_fixed_arg2, core::T_O* lcc_fixed_arg3
// When you pass args to another function use LCC_PASS_ARGS
#define LCC_PASS_ARGS lcc_closure, lcc_nargs, lcc_fixed_arg0, lcc_fixed_arg1, lcc_fixed_arg2, lcc_fixed_arg3
#define LCC_PASS_ARGS_LLH lcc_vargs, lcc_nargs, lcc_fixed_arg0, lcc_fixed_arg1, lcc_fixed_arg2, lcc_fixed_arg3
#define LCC_PASS_ARGS_ENV(_env) _env, lcc_nargs, lcc_fixed_arg0, lcc_fixed_arg1, lcc_fixed_arg2, lcc_fixed_arg3

/*! This is a void function */
#define LISP_CALLING_CONVENTION() invoke_va_list(LCC_ARGS_ELLIPSIS)
// Compiled functions get the raw va_list
#define LCC_VA_LIST(_valist) (*_valist)._Args
#define LCC_VA_START_ARG lcc_fixed_arg3
#define LCC_LAST_FIXED_ARG lcc_fixed_arg3


#define LCC_CLOSED_ENVIRONMENT core::T_O *lcc_closedEnvironment

#define LCC_VIRTUAL virtual
#define LCC_RETURN gc::return_type

// Return raw values that can be used to construct a core::T_mv
#define LCC_RETURN_RAW gctools::return_type


// To invoke functions of type InitFnPtr use these
#define LCC_PASS_ARGS0_VA_LIST_INITFNPTR() _Nil<core::T_O>().raw_(), 0, LCC_UNUSED_rest0

#define MULTIPLE_VALUES_ARRAY core::lisp_multipleValues()

/* ASSERT that the first argument is a VaList_sp */
#define ASSERT_FIRST_ARG_IS_VALIST() ASSERT(gctools::tagged_valistp(lcc_fixed_arg0))
#define LCC_ARG0_VALIST() gctools::smart_ptr<core::VaList_S>((gc::Tagged)lcc_fixed_arg0)
#define LCC_ARG0() gctools::smart_ptr<core::T_O>((gc::Tagged)lcc_fixed_arg0)
#define LCC_ARG1() gctools::smart_ptr<core::T_O>((gc::Tagged)lcc_fixed_arg1)
#define LCC_ARG2() gctools::smart_ptr<core::T_O>((gc::Tagged)lcc_fixed_arg2)
#define LCC_ARG3() gctools::smart_ptr<core::T_O>((gc::Tagged)lcc_fixed_arg3)
/*! LCC_ARGS_IN_REGISTERS is defined in src/core/config.h and is currently 4 (four)*/
#define LCC_FIXED_NUM LCC_ARGS_IN_REGISTERS
//#define MULTIPLE_VALUES_SETUP() core::T_sp* __multipleValuesPtr = core::lisp_multipleValues().start_address()

  
/* This is a switch statement that copies passed arguments in registers into the MultipleValues array */
#define LCC_SWITCH_TO_COPY_PASSED_ARGS_INTO_MULTIPLE_VALUES_ARRAY(_mv) \
  /* Fix me */ IMPLEMENT_ME(); \
  MultipleValues &_mv = lisp_callArgs();                               \
  _mv.setSize(lcc_nargs);                                              \
  switch (lcc_nargs) {                                                 \
  default:                                                             \
    for (int _zii = LCC_FIXED_ARGS; _zii < lcc_nargs; ++_zii) {        \
      _mv[_zii] = va_arg(lcc_arglist, LCC_TYPE);                       \
    }                                                                  \
    va_end(lcc_arglist);                                               \
  case 4:                                                              \
    _mv[3] = lcc_fixed_arg3;                                           \
  case 3:                                                              \
    _mv[2] = lcc_fixed_arg2;                                           \
  case 2:                                                              \
    _mv[1] = lcc_fixed_arg1;                                           \
  case 1:                                                              \
    _mv[0] = lcc_fixed_arg0;                                           \
  case 0:                                                              \
    break;                                                             \
  }

/*! This is X86_64 dependent code */
#if defined(X86_64) && defined(_ADDRESS_MODEL_64)

// This is VERY HACKISH
// it's based on the System V Application Binary Interface for X86_64
// I'm writing the register arguments into the reg_save_area and then
// resetting the gp_offset to point to the first register argument lcc_fixed_arg0
#define LCC_ABI_ARGS_IN_REGISTERS 6

#define ASSERT_LCC_VA_LIST_AT_START(_valist_s_) \
  ASSERT((_valist_s_)._Args->gp_offset == sizeof(uintptr_clasp_t) * (LCC_ABI_ARGS_IN_REGISTERS - LCC_ARGS_IN_REGISTERS));

// Registers are %rdi, %rsi, %rdx, %rcx, %r8, %r9
#define LCC_CLOSURE_REGISTER 0
#define LCC_NARGS_REGISTER 1
#define LCC_ARG0_REGISTER 2
#define LCC_ARGS_PASSED_IN_REGISTERS LCC_ARGS_IN_REGISTERS
#define LCC_ARG1_REGISTER 3
#define LCC_ARG2_REGISTER 4
#define LCC_ARG3_REGISTER 5
#define LCC_TOTAL_REGISTERS LCC_ABI_ARGS_IN_REGISTERS
#define LCC_SPILL_NUMBER_ARGUMENTS_TO_VA_LIST(_valist_s_, _num_)                               \
  {                                                                                            \
    ((uintptr_clasp_t *)(_valist_s_)._Args->reg_save_area)[LCC_NARGS_REGISTER] = (uintptr_clasp_t)(_num_); \
  }
#define LCC_SPILL_CLOSURE_TO_VA_LIST(_valist_s_,_closure_)    ((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_CLOSURE_REGISTER] = (core::T_O*)_closure_;

#define LCC_REGISTER_SAVE_AREA_CLOSURE(rsa) ((core::T_O**)rsa[LCC_CLOSURE_REGISTER])

#define LCC_SPILL_REGISTER_ARGUMENTS_TO_VA_LIST(_valist_s_) {                                                                          \
    ((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_CLOSURE_REGISTER] = (core::T_O*)lcc_closure;                                   \
    /* Tricky part!!! write the overflow_arg_area pointer into the reg_save_area */                                                    \
    /* so we can recover the overflow args even after the va_list has been traversed */                                                \
    /*((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_OVERFLOW_SAVE_REGISTER] = (core::T_O*)((_valist_s_)._Args->overflow_arg_area);*/ \
    ((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_NARGS_REGISTER] = (core::T_O*)lcc_nargs;                                       \
    ((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_ARG0_REGISTER] = (core::T_O*)lcc_fixed_arg0;                                   \
    ((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_ARG1_REGISTER] = (core::T_O*)lcc_fixed_arg1;                                   \
    ((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_ARG2_REGISTER] = (core::T_O*)lcc_fixed_arg2;                                   \
    ((core::T_O* *)(_valist_s_)._Args->reg_save_area)[LCC_ARG3_REGISTER] = (core::T_O*)lcc_fixed_arg3;                                   \
    (_valist_s_)._Args->gp_offset = sizeof(core::T_O*) * (LCC_ABI_ARGS_IN_REGISTERS - LCC_ARGS_IN_REGISTERS);                           \
  }

#define INITIALIZE_VA_LIST() ::core::VaList_S lcc_arglist_s;\
  va_start(lcc_arglist_s._Args, LCC_VA_START_ARG); \
  core::VaList_sp lcc_vargs(&lcc_arglist_s); \
  LCC_SPILL_REGISTER_ARGUMENTS_TO_VA_LIST(lcc_arglist_s); \

#define private_LCC_VA_LIST_TOTAL_NUMBER_OF_ARGUMENTS(_args) (size_t)(((uintptr_clasp_t *)(_args[0].reg_save_area))[LCC_NARGS_REGISTER])
#define private_LCC_VA_LIST_SET_TOTAL_NUMBER_OF_ARGUMENTS(_args, _n) (((uintptr_clasp_t *)(_args[0].reg_save_area))[LCC_NARGS_REGISTER]) = ((uintptr_clasp_t)_n)
//#define private_LCC_VA_LIST_DECREMENT_TOTAL_NUMBER_OF_ARGUMENTS(_args) (--((uintptr_clasp_t *)(_args[0].reg_save_area))[LCC_NARGS_REGISTER])

#ifdef DEBUG_ASSERTS
#define ASSERT_LCC_VA_LIST_CLOSURE_DEFINED(_args) {\
    gctools::Tagged e = reinterpret_cast<gctools::Tagged*>(reinterpret_cast<core::VaList_S*>(gctools::untag_valist(_args))->_Args->reg_save_area)[LCC_CLOSURE_REGISTER]; \
    if (!(e && gctools::tagged_generalp(e))) { \
      printf("%s:%d Closure is not defined\n", __FILE__, __LINE__ ); \
      abort(); \
    }}
#else
#define ASSERT_LCC_VA_LIST_CLOSURE_DEFINED(_args)
#endif

#define LCC_VA_LIST_CLOSURE(_args) core::Function_sp((gctools::Tagged)((core::T_O **)(*_args)._Args->reg_save_area)[LCC_CLOSURE_REGISTER])
#define LCC_VA_LIST_REGISTER_SAVE_AREA(_args) (core::T_O **)(((*_args))[0].reg_save_area)
#define LCC_VA_LIST_OVERFLOW_ARG_AREA(_args) (core::T_O **)(((*_args))[0].overflow_arg_area)
//#define LCC_ORIGINAL_VA_LIST_OVERFLOW_ARG_AREA(_args) ((core::T_O***)LCC_VA_LIST_REGISTER_SAVE_AREA(_args))[LCC_OVERFLOW_SAVE_REGISTER]
#define LCC_VA_LIST_TOTAL_NUMBER_OF_ARGUMENTS(_args) private_LCC_VA_LIST_TOTAL_NUMBER_OF_ARGUMENTS((*_args)._Args)
#define LCC_VA_LIST_SET_TOTAL_NUMBER_OF_ARGUMENTS(_args, _n) private_LCC_VA_LIST_SET_TOTAL_NUMBER_OF_ARGUMENTS((*_args)._Args, _n)
//#define LCC_VA_LIST_DECREMENT_TOTAL_NUMBER_OF_ARGUMENTS(_args) private_LCC_VA_LIST_DECREMENT_TOTAL_NUMBER_OF_ARGUMENTS((*_args)._Args)
#define LCC_VA_LIST_REGISTER_ARG0(_args) (((core::T_O **)(((*_args)._Args)[0].reg_save_area))[LCC_ARG0_REGISTER])
#define LCC_VA_LIST_REGISTER_ARG1(_args) (((core::T_O **)(((*_args)._Args)[0].reg_save_area))[LCC_ARG1_REGISTER])
#define LCC_VA_LIST_REGISTER_ARG2(_args) (((core::T_O **)(((*_args)._Args)[0].reg_save_area))[LCC_ARG2_REGISTER])
#define LCC_VA_LIST_REGISTER_ARG3(_args) (((core::T_O **)(((*_args)._Args)[0].reg_save_area))[LCC_ARG3_REGISTER])

#if 0
#define LCC_VA_LIST_CURRENT_INDEX(_res, _args)                    \
  _res = (((*_args)._Args[0].gp_offset/sizeof(void*))-LCC_ARG0_REGISTER); \
  if ( _res >= LCC_ARGS_PASSED_IN_REGISTERS ) { \
    _res = (LCC_VA_LIST_OVERFLOW_ARG_AREA(_args)-LCC_ORIGINAL_VA_LIST_OVERFLOW_ARG_AREA(_args)) + LCC_ARG0_REGISTER; \
  }

#define LCC_VA_LIST_REMAINING_NUMBER_OF_ARGUMENTS(_res, _args) \
  LCC_VA_LIST_CURRENT_INDEX(_res,_args); \
  _res = LCC_VA_LIST_TOTAL_NUMBER_OF_ARGUMENTS(_args) - (_res)

#endif


#if 0
#define LCC_VA_LIST_incorrect_INDEXED_ARG(_res, _args, _idx)                    \
  {                                                                   \
    int __x = (_idx) - ((48 - ((*_args)._Args[0].gp_offset)) / 8);     \
    if (__x < 0) {                                                    \
      _res = ((core::T_O **)(*_args)._Args[0].reg_save_area)[__x + 6]; \
    } else {                                                          \
      _res = ((core::T_O **)(*_args)._Args[0].overflow_arg_area)[__x]; \
    }                                                                 \
  }

#define LCC_VA_LIST_ABSOLUTE_INDEXED_ARG(_res, _args, _idx)                    \
  {                                                                   \
    int __x = (_idx) - (LCC_ABI_ARGS_IN_REGISTERS - LCC_ARGS_IN_REGISTERS); \
    if (__x < 0) {                                                    \
      _res = ((core::T_O **)(*_args)._Args[0].reg_save_area)[__x + 6]; \
    } else {                                                          \
      _res = ((core::T_O ***)(*_args)._Args[0].reg_save_area)[LCC_OVERFLOW_SAVE_REGISTER][__x]; \
    }                                                                 \
  }
#endif





//    _res = ((core::T_O **)(*_args)._Args[0].overflow_arg_area)[__x]; \

#define LCC_NEXT_ARG_RAW_AND_ADVANCE(arglist) va_arg((*arglist)._Args, core::T_O *)
//#define LCC_NEXT_ARG_AND_ADVANCE(arglist) core::T_sp((gc::Tagged)LCC_NEXT_ARG_RAW(arglist))
#endif // #if defined(X86) && defined(_ADDRESS_MODEL_64)



#define LCC_CALL_WITH_ARGS_IN_FRAME(_result, _closure, _frame)          \
  core::VaList_S valist_s(_frame);                                      \
  LCC_SPILL_CLOSURE_TO_VA_LIST(valist_s,_closure.raw_());                \
  size_t lcc_nargs = (_frame).number_of_arguments();                    \
  core::T_O *lcc_arglist = valist_s.asTaggedPtr();                      \
  switch (lcc_nargs) {                                                  \
  default:                                                              \
      _result = _closure->invoke_va_list(LCC_PASS_ARGS_ARGLIST_GENERAL(_closure.raw_(), lcc_nargs, (_frame)[0], (_frame)[1], (_frame)[2], (_frame)[3])); \
    break;                                                              \
  case 4:                                                               \
      _result = _closure->invoke_va_list(LCC_PASS_ARGS4_ARGLIST(_closure.raw_(),(_frame)[0], (_frame)[1], (_frame)[2], (_frame)[3])); \
    break;                                                              \
  case 3:                                                               \
      _result = _closure->invoke_va_list(LCC_PASS_ARGS3_ARGLIST(_closure.raw_(),(_frame)[0], (_frame)[1], (_frame)[2])); \
    break;                                                              \
  case 2:                                                               \
      _result = _closure->invoke_va_list(LCC_PASS_ARGS2_ARGLIST(_closure.raw_(),(_frame)[0], (_frame)[1])); \
    break;                                                              \
  case 1:                                                               \
      _result = _closure->invoke_va_list(LCC_PASS_ARGS1_ARGLIST(_closure.raw_(),(_frame)[0])); \
    break;                                                              \
  case 0:                                                               \
      _result = _closure->invoke_va_list(LCC_PASS_ARGS0_ARGLIST(_closure.raw_())); \
    break;                                                              \
  };


#define LCC_DECLARE_VA_LIST()                           \
  VaList_S lcc_arglist_struct(lcc_nargs);               \
  va_start(lcc_arglist_struct._Args, LCC_VA_START_ARG); \
  VaList_sp lcc_arglist(&lcc_arglist_struct);

/*! Initialize a VaList_S struct from a Frame object */
#define LCC_SETUP_VA_LIST_FROM_FRAME(_va_list_, _frame_) { \
    (_va_list_)[0].reg_save_area = (_frame_).reg_save_area_ptr(); \
    (_va_list_)[0].overflow_arg_area = (_frame_).overflow_arg_area_ptr(); \
    (_va_list_)[0].gp_offset = (LCC_ABI_ARGS_IN_REGISTERS-LCC_ARGS_IN_REGISTERS) * sizeof(gc::Frame::ElementType); \
    (_va_list_)[0].fp_offset = 304; \
  }

#define LCC_SETUP_VA_LIST_FROM_VA_LIST(_dest_,_src_) va_copy(_dest_,_src_)

// Create a VaList_sp from lcc_vargs (a va_list)
//#define LCC_MAKE_VA_LIST_SP(valist_sp) VaList_sp valist_sp(lcc_nargs,lcc_vargs);
#endif // #ifdef LCC_MACROS

                     
#ifdef LCC_PROTOTYPES
typedef LCC_RETURN_RAW (*fnLispCallingConvention)(LCC_ARGS_ELLIPSIS);
typedef LCC_RETURN_RAW (*CompiledClosure_fptr_type)(LCC_ARGS_ELLIPSIS);
typedef LCC_RETURN (*InitFnPtr)(LCC_ARGS_ELLIPSIS);
typedef LCC_RETURN (*DispatchFunction_fptr_type)(gctools::Tagged gf, gctools::Tagged valist_sptr);
typedef LCC_RETURN (*ShutdownFunction_fptr_type)();

extern "C" {
// Return true if the VaList_S is at the head of the list and false if it is used up
inline bool dump_VaList_S_ptr(VaList_S* args) {
  printf("va_list dump @%p\n", (void*)args);
  bool atHead = ((*args)._Args[0].gp_offset==0x18);
  printf("---Register save area@%p (NOTE: Often in other stack frame)\n", (*args)._Args[0].reg_save_area);
  printf("       CLOSURE_REGISTER@%p = %p\n", reinterpret_cast<void*>(LCC_CLOSURE_REGISTER*8), ((core::T_O* *)(*args)._Args->reg_save_area)[LCC_CLOSURE_REGISTER] );
//  printf(" OVERFLOW_SAVE_REGISTER@%p = %p\n", reinterpret_cast<void*>(LCC_OVERFLOW_SAVE_REGISTER*8), ((core::T_O* *)(*args)._Args->reg_save_area)[LCC_OVERFLOW_SAVE_REGISTER] );
  printf("         NARGS_REGISTER@%p = %zu\n", reinterpret_cast<void*>(LCC_NARGS_REGISTER*8),reinterpret_cast<size_t>(((core::T_O* *)(*args)._Args->reg_save_area)[LCC_NARGS_REGISTER]) );
  printf("          ARG0_REGISTER@%p = %p\n", reinterpret_cast<void*>(LCC_ARG0_REGISTER*8), ((core::T_O* *)(*args)._Args->reg_save_area)[LCC_ARG0_REGISTER] );
  printf("          ARG1_REGISTER@%p = %p\n", reinterpret_cast<void*>(LCC_ARG1_REGISTER*8), ((core::T_O* *)(*args)._Args->reg_save_area)[LCC_ARG1_REGISTER] );
  printf("          ARG2_REGISTER@%p = %p\n", reinterpret_cast<void*>(LCC_ARG2_REGISTER*8), ((core::T_O* *)(*args)._Args->reg_save_area)[LCC_ARG2_REGISTER] );
  const char* atpos = "";
  if ((*args)._Args[0].gp_offset==0x18) atpos = "atStartReg";
  else if ((*args)._Args[0].gp_offset==0x30) atpos = "pastEnd";
  printf("           gp_offset = %p (%s)\n", reinterpret_cast<void*>((*args)._Args[0].gp_offset),  atpos );
  printf("           fp_offset = %p\n", reinterpret_cast<void*>((*args)._Args[0].fp_offset) );
  printf("       reg_save_area = %p (this points to the Register save area above ^^^)\n", reinterpret_cast<void*>((*args)._Args[0].reg_save_area) );
  uintptr_clasp_t* overflow_arg_area = reinterpret_cast<uintptr_clasp_t*>((*args)._Args[0].overflow_arg_area);
#if 0
  uintptr_clasp_t* overflow_save = reinterpret_cast<uintptr_clasp_t*>(((core::T_O* *)(*args)._Args->reg_save_area)[LCC_OVERFLOW_SAVE_REGISTER]);
  int overflow_offset = overflow_arg_area-overflow_save;
  printf("   overflow_arg_area = %p (offset from OVERFLOW_SAVE_REGISTER = %d) \n", (void*)overflow_arg_area, overflow_offset );
  int nargs = ((uintptr_clasp_t *)(*args)._Args->reg_save_area)[LCC_NARGS_REGISTER];
  nargs -= 3;
  if (nargs > 0 ) {
    printf("---Overflow arg area@%p contents\n", (*args)._Args[0].overflow_arg_area);
    for ( int i=0; i< ((uintptr_clasp_t *)(*args)._Args->reg_save_area)[LCC_NARGS_REGISTER]-3; ++i ) {
      core::T_O** addr = &((core::T_O **)(*args)._Args[0].overflow_arg_area)[i];
      core::T_O* _res = ((core::T_O **)(*args)._Args[0].overflow_arg_area)[i];
      printf("     [%d]@%p --> %p\n", i, addr, _res);
    }
  } else {
    printf("--- There are no overflow args\n");
  }
#endif
  return atHead;
};
};

    
    
                       

/*! Call a function object with args in a VaList_sp and consume the valist.
The Callee can NOT use args after this call.
Note: Since we don't have the full Function_O class definition when this
header is compiled (and we don't want to #include it because of all the problems
that will cause) I made this a template function where you pass the function
type as a template argument.  Call it like this...
funcall_consume_valist_<core::Function_O>(tagged_func_ptr,valist_args)
*/
template <typename Func_O_Type>
inline gctools::return_type funcall_consume_valist_(gc::Tagged func_tagged,
                                                    VaList_sp args) {
  printf("%s:%d  This doesn't work properly because it shouldn't use LCC_VA_LIST_ABSOLUTE_INDEXED_ARG - it should use va_arg\n", __FILE__, __LINE__);
  core::T_O *arg0;
  core::T_O *arg1;
  core::T_O *arg2;
  core::T_O *arg3;
  size_t current_arg_index;
//  LCC_VA_LIST_CURRENT_INDEX(current_arg_index,args);
  Func_O_Type* func_object_ptr = reinterpret_cast<Func_O_Type*>(gctools::untag_general(func_tagged));
  ASSERT_LCC_VA_LIST_CLOSURE_DEFINED(args.tagged_());
  size_t nargs = args->remaining_nargs(); // LCC_VA_LIST_TOTAL_NUMBER_OF_ARGUMENTS(args)-current_arg_index;
  switch (nargs) {
    case 4:
        arg0 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        arg1 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        arg2 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        arg3 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        return func_object_ptr->invoke_va_list(reinterpret_cast<core::T_O*>(func_tagged),
                                               nargs, arg0,arg1,arg2,arg3);
        break;
    case 3:
        arg0 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        arg1 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        arg2 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        return func_object_ptr->invoke_va_list(reinterpret_cast<core::T_O*>(func_tagged),
                                               nargs, arg0,arg1,arg2,NULL);
        break;
    case 2:
        arg0 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        arg1 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        return func_object_ptr->invoke_va_list(reinterpret_cast<core::T_O*>(func_tagged),
                                               nargs, arg0,arg1,NULL,NULL);
        break;
    case 1:
        arg0 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
        return func_object_ptr->invoke_va_list(reinterpret_cast<core::T_O*>(func_tagged),
                                               nargs, arg0,NULL,NULL,NULL);
        break;
    case 0:
        return func_object_ptr->invoke_va_list(reinterpret_cast<core::T_O*>(func_tagged),
                                               nargs,NULL,NULL,NULL,NULL);
        break;
    }
  arg0 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
  arg1 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
  arg2 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
  arg3 = LCC_NEXT_ARG_RAW_AND_ADVANCE(args);
  return func_object_ptr->invoke_va_list(reinterpret_cast<core::T_O*>(func_tagged),
                                         nargs,
                                         arg0,  // LCC_VA_LIST_REGISTER_ARG0(args),
                                         arg1,  // LCC_VA_LIST_REGISTER_ARG1(args),
                                         arg2,
                                         arg3); //LCC_VA_LIST_REGISTER_ARG2(args) );
}
#endif // #ifdef LCC_PROTOTYPES
