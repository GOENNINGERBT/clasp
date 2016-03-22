// This file was GENERATED by command:
//     pump.py clbind_constructor_functoids.pmp
// DO NOT EDIT BY HAND!!!

// ret = 0
// template_ = 0
// numVoids = 0
// numArgs = 8
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4,
    typename ARG5,typename ARG6,typename ARG7 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 8 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,8);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(frame.arg(1));
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(frame.arg(2));
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(frame.arg(3));
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(frame.arg(4));
translate::from_object<ARG5,typename DoesNotContain_<Pols,pureOutValue<6> >::type > a5(frame.arg(5));
translate::from_object<ARG6,typename DoesNotContain_<Pols,pureOutValue<7> >::type > a6(frame.arg(6));
translate::from_object<ARG7,typename DoesNotContain_<Pols,pureOutValue<8> >::type > a7(frame.arg(7));
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v,a5._v,a6._v,a7._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,5>::type()
, typename AdoptPointer<Pols,5>::type()
, a5._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,6>::type()
, typename AdoptPointer<Pols,6>::type()
, a6._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,7>::type()
, typename AdoptPointer<Pols,7>::type()
, a7._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 1
// numVoids = 1
// numArgs = 7
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4,
    typename ARG5,typename ARG6 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 7 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,7);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(frame.arg(1));
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(frame.arg(2));
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(frame.arg(3));
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(frame.arg(4));
translate::from_object<ARG5,typename DoesNotContain_<Pols,pureOutValue<6> >::type > a5(frame.arg(5));
translate::from_object<ARG6,typename DoesNotContain_<Pols,pureOutValue<7> >::type > a6(frame.arg(6));
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v,a5._v,a6._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,5>::type()
, typename AdoptPointer<Pols,5>::type()
, a5._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,6>::type()
, typename AdoptPointer<Pols,6>::type()
, a6._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 2
// numVoids = 2
// numArgs = 6
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4,
    typename ARG5 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4, ARG5> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 6 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,6);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(frame.arg(1));
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(frame.arg(2));
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(frame.arg(3));
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(frame.arg(4));
translate::from_object<ARG5,typename DoesNotContain_<Pols,pureOutValue<6> >::type > a5(frame.arg(5));
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v,a5._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,5>::type()
, typename AdoptPointer<Pols,5>::type()
, a5._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 3
// numVoids = 3
// numArgs = 5
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 5 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,5);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(frame.arg(1));
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(frame.arg(2));
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(frame.arg(3));
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(frame.arg(4));
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 4
// numVoids = 4
// numArgs = 4
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 4 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,4);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(frame.arg(1));
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(frame.arg(2));
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(frame.arg(3));
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 5
// numVoids = 5
// numArgs = 3
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 3 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,3);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(frame.arg(1));
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(frame.arg(2));
T* naked_ptr(new T(a0._v,a1._v,a2._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 6
// numVoids = 6
// numArgs = 2
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0, ARG1> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 2 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,2);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(frame.arg(1));
T* naked_ptr(new T(a0._v,a1._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 7
// numVoids = 7
// numArgs = 1
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0 >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<ARG0> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 1 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
STACK_FRAME(buff,frame,1);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this->asSmartPtr(),this->_lambdaListHandler,scope,LCC_PASS_ARGS);
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(frame.arg(0));
T* naked_ptr(new T(a0._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
return LCC_RETURN(retval.raw_(),oidx);
}
};
// ret = 0
// template_ = 8
// numVoids = 8
// numArgs = 0
/* Specialization */
template <typename Pols, typename Pointer, typename T  >
class VariadicConstructorFunctor_O
< Pols, Pointer, T, constructor<> >
: public core::BuiltinClosure_O {
public:
typedef core::BuiltinClosure_O TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctor"; };
enum { NumParams = 0 };
VariadicConstructorFunctor_O(core::T_sp name) : core::BuiltinClosure_O(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
inline LCC_RETURN LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
T* naked_ptr(new T());
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
int oidx = 1;
return LCC_RETURN(retval.raw_(),oidx);
}
};

