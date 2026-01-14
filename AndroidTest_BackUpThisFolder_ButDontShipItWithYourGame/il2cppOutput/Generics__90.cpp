#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5;
struct U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35;
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB;
struct Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D;
struct SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71;
struct TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016;
struct NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37;
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2;
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct NativeTextElementInfoU5BU5D_t4990577B63060372F4854E7FB6EFC6BD17169D41;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral6646A42BCA8576CB3E2595EC534707449037D0EE;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3BFBE88DCC9838DC969D8D779C4CCE2A60173D;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD158A55362F81195C165C2CFB448622A361B357C;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9;

struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2;
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5  : public RuntimeObject
{
	int32_t ___index;
	int32_t ___count;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
struct U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448  : public RuntimeObject
{
	int32_t ___index;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objects;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EmptyArray_1_t5DEA403BAFDC5AC2F35C8826395BF35F76EAE720  : public RuntimeObject
{
};
struct EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95  : public RuntimeObject
{
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9  : public RuntimeObject
{
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498  : public RuntimeObject
{
};
struct EmptyArray_1_t1A0E03DC7ADACA8049967CCD47795725164DAD75  : public RuntimeObject
{
};
struct EmptyArray_1_t66497C3DB84E7A464A5EB5259FF8E3CE44C961D2  : public RuntimeObject
{
};
struct EmptyArray_1_tC4BFBF048349F7AC41440D09E233091E7E991C86  : public RuntimeObject
{
};
struct EmptyArray_1_t808728B28E4489C4B70DC53CE9F7A39F04CE1256  : public RuntimeObject
{
};
struct EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182  : public RuntimeObject
{
};
struct EmptyArray_1_t74D2AE78900063F22AD7B348C4BEA2F043A3EB7D  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9  : public RuntimeObject
{
};
struct EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344  : public RuntimeObject
{
};
struct EmptyArray_1_tAC344C0CB3A1178A06D7E53BD6CA11847AB83524  : public RuntimeObject
{
};
struct Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D  : public RuntimeObject
{
	NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D  : public RuntimeObject
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71  : public RuntimeObject
{
	NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F  : public RuntimeObject
{
	int32_t ____length;
	int32_t* ____arrayPtr;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	bool ____useStackAlloc;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 
{
	int32_t ___UniqueCount;
	int32_t ___UnfoundCount;
};
struct Enumerator_t71F09436B846CE1804083C9B36997E4573540582 
{
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ____tree;
	int32_t ____version;
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* ____stack;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ____current;
	bool ____reverse;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751 : public SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D {};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E 
{
	NativeTextElementInfoU5BU5D_t4990577B63060372F4854E7FB6EFC6BD17169D41* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	bool ___hasMultipleColors;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_marshaled_pinvoke
{
	NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	int32_t ___hasMultipleColors;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_marshaled_com
{
	NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___textElementInfos;
	int32_t ___fontAssetId;
	int32_t ___textElementCount;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___textElementInfoIndicesByAtlas;
	int32_t ___hasMultipleColors;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	uint64_t ___m_DeviceId;
	bool ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C 
{
	intptr_t ____value;
};
struct ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 
{
	intptr_t ____value;
};
struct ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 
{
	intptr_t ____value;
};
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	intptr_t ____value;
};
struct ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A 
{
	intptr_t ____value;
};
struct ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E 
{
	intptr_t ____value;
};
struct ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 
{
	intptr_t ____value;
};
struct ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF 
{
	intptr_t ____value;
};
struct ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA 
{
	intptr_t ____value;
};
struct ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 
{
	intptr_t ____value;
};
struct ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 
{
	intptr_t ____value;
};
struct ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct NodeColor_t3C462CF5E46B843CC52B1FF46B6488BC18768F4F 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TreeRotation_t8E73F08A08D4DC4DA6DA17D92767DE6997B01A0A 
{
	uint8_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB : public RuntimeObject {};
struct ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1DF6AE153C9116CDB26DE6FFB733F0E83532C7C1 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t8A1348F4C3A23060129619CDBFC51A1D578F958E 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1065F282D1607B9C0CFC26246CE2A0CFECDB54ED 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFE3CA93744D44567C2C1E4BA734A729A9C575D10 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5690DF65D559F423F84EB5FB4D46535C4F57465A 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A ____pointer;
	int32_t ____length;
};
struct Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C ____pointer;
	int32_t ____length;
};
struct Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 ____pointer;
	int32_t ____length;
};
struct Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A ____pointer;
	int32_t ____length;
};
struct Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E ____pointer;
	int32_t ____length;
};
struct Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 ____pointer;
	int32_t ____length;
};
struct Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF ____pointer;
	int32_t ____length;
};
struct Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA ____pointer;
	int32_t ____length;
};
struct Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 ____pointer;
	int32_t ____length;
};
struct Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	uint32_t ___index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect;
	float ___scale;
	int32_t ___atlasIndex;
	int32_t ___classDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EmptyArray_1_t5DEA403BAFDC5AC2F35C8826395BF35F76EAE720_StaticFields
{
	Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___Value;
};
struct EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95_StaticFields
{
	ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___Value;
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Value;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___Value;
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___Value;
};
struct EmptyArray_1_t1A0E03DC7ADACA8049967CCD47795725164DAD75_StaticFields
{
	GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___Value;
};
struct EmptyArray_1_t66497C3DB84E7A464A5EB5259FF8E3CE44C961D2_StaticFields
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___Value;
};
struct EmptyArray_1_tC4BFBF048349F7AC41440D09E233091E7E991C86_StaticFields
{
	GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___Value;
};
struct EmptyArray_1_t808728B28E4489C4B70DC53CE9F7A39F04CE1256_StaticFields
{
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___Value;
};
struct EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182_StaticFields
{
	HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___Value;
};
struct EmptyArray_1_t74D2AE78900063F22AD7B348C4BEA2F043A3EB7D_StaticFields
{
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___Value;
};
struct EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344_StaticFields
{
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___Value;
};
struct EmptyArray_1_tAC344C0CB3A1178A06D7E53BD6CA11847AB83524_StaticFields
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Enumerator_t71F09436B846CE1804083C9B36997E4573540582_StaticFields
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___s_dummyNode;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_StaticFields
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___s_Null;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43  : public RuntimeArray
{
	ALIGN_FIELD (8) Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 m_Items[1];

	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		m_Items[index] = value;
	}
};
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F  : public RuntimeArray
{
	ALIGN_FIELD (8) ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E m_Items[1];

	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C m_Items[1];

	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C value)
	{
		m_Items[index] = value;
	}
};
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D m_Items[1];

	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		m_Items[index] = value;
	}
};
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18  : public RuntimeArray
{
	ALIGN_FIELD (8) GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A m_Items[1];

	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		m_Items[index] = value;
	}
};
struct HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2  : public RuntimeArray
{
	ALIGN_FIELD (8) HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 m_Items[1];

	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 value)
	{
		m_Items[index] = value;
	}
};
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63  : public RuntimeArray
{
	ALIGN_FIELD (8) InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD m_Items[1];

	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD value)
	{
		m_Items[index] = value;
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 m_Items[1];

	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E_gshared (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE_gshared (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_destination, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_gshared_inline (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215_gshared (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_gshared_inline (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m98B0DFC72A92D05967DDAE7F09062B759A8ABA78_gshared_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC_gshared (GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_destination, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFB348CF3EC0F06D991491C8A6EB1124B54E303B3_gshared_inline (ReadOnlySpan_1_t1DF6AE153C9116CDB26DE6FFB733F0E83532C7C1* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCF318D0CF8F484B209D7DE9E5140110C5A62DAA6_gshared_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* Array_Empty_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mA9417580AF95BD76771CAF619DE618B7E4CA3B70_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0E8C977484AE4CEA814C03759D41FAD84FB47E66_gshared_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_gshared_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134_gshared (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_gshared_inline (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m01784017261CFE37D608B52EFDB78333C70B71B1_gshared_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD0058F069C2A9C27135BE3234DCEF617EFED5C45_gshared_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mDCB11A87D47452BDF30A9959BD9DE00355EA76B7_gshared_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_destination, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF7554269BA0D184EBFFC11423702632060093C66_gshared_inline (ReadOnlySpan_1_t8A1348F4C3A23060129619CDBFC51A1D578F958E* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m43E7686BAE13FDC47215CFD93B0BD9E0608C03E8_gshared_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* Array_Empty_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mB6BEE3F28FF913ACE838D3009032EB9B7D164785_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBFA821070152DCE963792BF49F4149519EF08D6C_gshared_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m2F1A0C29E36FCC0087181D97C6297CB7BA9B0B49_gshared_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768_gshared (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_destination, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7494C6B741618D5EBFAE013D7A63850A239D0515_gshared_inline (ReadOnlySpan_1_t1065F282D1607B9C0CFC26246CE2A0CFECDB54ED* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFA357D292F2DBB9CB9FE919A6489A4843AAA0007_gshared_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* Array_Empty_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m7E28DFEC5646951BAD0650AD6EA00892E5229B8E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5DB422A4A67DE1D7500438180F794F053A172091_gshared_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_gshared_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F_gshared (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_gshared_inline (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFC5891F59FE866DD2C693446B5D11CF9A8D84591_gshared_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA4609CB96F1BCFBDFE86DE2E137430CECA9824A7_gshared_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1CEEA1A4BA2EB646865F90F7BD5C46209BEA26EC_gshared_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m5FF00A83B5115A578BEE361BEC0202D81703A6BC_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_destination, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF5B8E0FE49AC321E09A8B94E9C69BD6E4B258C73_gshared_inline (ReadOnlySpan_1_tFE3CA93744D44567C2C1E4BA734A729A9C575D10* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m14B5C41E6108AE31A4221388EA57750EFF488674_gshared_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* Array_Empty_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m54CAA3DB217D0D9A1A3A21DD50883B6C3BD03F48_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2E4001B0685A2709351E6B5DEB47BAC4DCCD8BFF_gshared_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_gshared_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_gshared_inline (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA0DAD24F2B4249A5B3E4EF2B7B4627B781D80775_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F53AAE57478654CCAC6268F976F3B6F55FF42A5_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63C97A1814997E727ACBCD8B8D88029EDDEAB0AD_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF497722F4A2ADC10A3E2B47C6CAEA267A3B9E7C1_gshared_inline (ReadOnlySpan_1_t5690DF65D559F423F84EB5FB4D46535C4F57465A* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m43EE10EE280FBCD3004A085D1CFFADDEA0E755F5_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m689316B76A1D5D0211962EFD3C91CD4948F25DD7_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E_gshared)(__this, ___0_set, method);
}
inline void Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitHelper_ToIntArrayLength_mAB200AF3CAED081B1C667BA381847BEA8E312598 (int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_mD4A0F4FB490C57EA8B7C904941BC72AD14697A08 (BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* __this, int32_t* ___0_bitArrayPtr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m67B3260E6A92B90D770D8CF043A848A477DC4595 (BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_bitArray, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitHelper_IsMarked_mB9298BD21F493D475C1D71EEE439D99611B4D01C (BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper_MarkBit_m337CC205369FD7A7E1A199B7210DFFC98AB6C1AA (BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3*, const RuntimeMethod*))Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_destination, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_inline (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_inline (const RuntimeMethod* method)
{
	return ((  Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* (*) (const RuntimeMethod*))Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3*, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*, const RuntimeMethod*))Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430 (intptr_t* ___0_ip, uint64_t ___1_pointerSizeLength, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948*, const RuntimeMethod*))Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215 (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_inline (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7*, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948*, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, int32_t, const RuntimeMethod*))Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline (const RuntimeMethod* method)
{
	return ((  ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* (*) (const RuntimeMethod*))Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_gshared_inline)(method);
}
inline void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948*, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*, const RuntimeMethod*))Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, const RuntimeMethod*))Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198 (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (bool*, bool*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2*, bool*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, bool*, int32_t, const RuntimeMethod*))Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (const RuntimeMethod*))Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline)(method);
}
inline void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, const RuntimeMethod*))Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, uint8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppChar*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline)(method);
}
inline void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, const RuntimeMethod*))Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline (const RuntimeMethod* method)
{
	return ((  ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*) (const RuntimeMethod*))Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline)(method);
}
inline void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*, const RuntimeMethod*))Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, const RuntimeMethod*))Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, int32_t, const RuntimeMethod*))Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline (const RuntimeMethod* method)
{
	return ((  Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* (*) (const RuntimeMethod*))Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline)(method);
}
inline void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, const RuntimeMethod*))Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m98B0DFC72A92D05967DDAE7F09062B759A8ABA78_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16*, const RuntimeMethod*))Span_1_get_Length_m98B0DFC72A92D05967DDAE7F09062B759A8ABA78_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC (GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_destination, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mFB348CF3EC0F06D991491C8A6EB1124B54E303B3_inline (ReadOnlySpan_1_t1DF6AE153C9116CDB26DE6FFB733F0E83532C7C1* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1DF6AE153C9116CDB26DE6FFB733F0E83532C7C1*, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFB348CF3EC0F06D991491C8A6EB1124B54E303B3_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mCF318D0CF8F484B209D7DE9E5140110C5A62DAA6_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16*, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*, int32_t, const RuntimeMethod*))Span_1__ctor_mCF318D0CF8F484B209D7DE9E5140110C5A62DAA6_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* Array_Empty_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mA9417580AF95BD76771CAF619DE618B7E4CA3B70_inline (const RuntimeMethod* method)
{
	return ((  GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* (*) (const RuntimeMethod*))Array_Empty_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mA9417580AF95BD76771CAF619DE618B7E4CA3B70_gshared_inline)(method);
}
inline void Span_1__ctor_m0E8C977484AE4CEA814C03759D41FAD84FB47E66_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16*, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*, const RuntimeMethod*))Span_1__ctor_m0E8C977484AE4CEA814C03759D41FAD84FB47E66_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB*, const RuntimeMethod*))Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_inline (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032*, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m01784017261CFE37D608B52EFDB78333C70B71B1_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB*, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*, int32_t, const RuntimeMethod*))Span_1__ctor_m01784017261CFE37D608B52EFDB78333C70B71B1_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_inline (const RuntimeMethod* method)
{
	return ((  GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* (*) (const RuntimeMethod*))Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_gshared_inline)(method);
}
inline void Span_1__ctor_mD0058F069C2A9C27135BE3234DCEF617EFED5C45_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB*, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*, const RuntimeMethod*))Span_1__ctor_mD0058F069C2A9C27135BE3234DCEF617EFED5C45_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mDCB11A87D47452BDF30A9959BD9DE00355EA76B7_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED*, const RuntimeMethod*))Span_1_get_Length_mDCB11A87D47452BDF30A9959BD9DE00355EA76B7_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_destination, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mF7554269BA0D184EBFFC11423702632060093C66_inline (ReadOnlySpan_1_t8A1348F4C3A23060129619CDBFC51A1D578F958E* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t8A1348F4C3A23060129619CDBFC51A1D578F958E*, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mF7554269BA0D184EBFFC11423702632060093C66_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m43E7686BAE13FDC47215CFD93B0BD9E0608C03E8_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED*, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*, int32_t, const RuntimeMethod*))Span_1__ctor_m43E7686BAE13FDC47215CFD93B0BD9E0608C03E8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* Array_Empty_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mB6BEE3F28FF913ACE838D3009032EB9B7D164785_inline (const RuntimeMethod* method)
{
	return ((  GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* (*) (const RuntimeMethod*))Array_Empty_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mB6BEE3F28FF913ACE838D3009032EB9B7D164785_gshared_inline)(method);
}
inline void Span_1__ctor_mBFA821070152DCE963792BF49F4149519EF08D6C_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED*, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*, const RuntimeMethod*))Span_1__ctor_mBFA821070152DCE963792BF49F4149519EF08D6C_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m2F1A0C29E36FCC0087181D97C6297CB7BA9B0B49_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E*, const RuntimeMethod*))Span_1_get_Length_m2F1A0C29E36FCC0087181D97C6297CB7BA9B0B49_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768 (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_destination, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m7494C6B741618D5EBFAE013D7A63850A239D0515_inline (ReadOnlySpan_1_t1065F282D1607B9C0CFC26246CE2A0CFECDB54ED* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1065F282D1607B9C0CFC26246CE2A0CFECDB54ED*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7494C6B741618D5EBFAE013D7A63850A239D0515_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mFA357D292F2DBB9CB9FE919A6489A4843AAA0007_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*, int32_t, const RuntimeMethod*))Span_1__ctor_mFA357D292F2DBB9CB9FE919A6489A4843AAA0007_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* Array_Empty_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m7E28DFEC5646951BAD0650AD6EA00892E5229B8E_inline (const RuntimeMethod* method)
{
	return ((  GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* (*) (const RuntimeMethod*))Array_Empty_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m7E28DFEC5646951BAD0650AD6EA00892E5229B8E_gshared_inline)(method);
}
inline void Span_1__ctor_m5DB422A4A67DE1D7500438180F794F053A172091_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E*, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*, const RuntimeMethod*))Span_1__ctor_m5DB422A4A67DE1D7500438180F794F053A172091_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C*, const RuntimeMethod*))Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_inline (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97*, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mFC5891F59FE866DD2C693446B5D11CF9A8D84591_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C*, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*, int32_t, const RuntimeMethod*))Span_1__ctor_mFC5891F59FE866DD2C693446B5D11CF9A8D84591_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline (const RuntimeMethod* method)
{
	return ((  HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* (*) (const RuntimeMethod*))Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_gshared_inline)(method);
}
inline void Span_1__ctor_mA4609CB96F1BCFBDFE86DE2E137430CECA9824A7_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C*, HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*, const RuntimeMethod*))Span_1__ctor_mA4609CB96F1BCFBDFE86DE2E137430CECA9824A7_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m1CEEA1A4BA2EB646865F90F7BD5C46209BEA26EC_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0*, const RuntimeMethod*))Span_1_get_Length_m1CEEA1A4BA2EB646865F90F7BD5C46209BEA26EC_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m5FF00A83B5115A578BEE361BEC0202D81703A6BC (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_destination, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m5FF00A83B5115A578BEE361BEC0202D81703A6BC_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mF5B8E0FE49AC321E09A8B94E9C69BD6E4B258C73_inline (ReadOnlySpan_1_tFE3CA93744D44567C2C1E4BA734A729A9C575D10* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tFE3CA93744D44567C2C1E4BA734A729A9C575D10*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mF5B8E0FE49AC321E09A8B94E9C69BD6E4B258C73_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m14B5C41E6108AE31A4221388EA57750EFF488674_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*, int32_t, const RuntimeMethod*))Span_1__ctor_m14B5C41E6108AE31A4221388EA57750EFF488674_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* Array_Empty_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m54CAA3DB217D0D9A1A3A21DD50883B6C3BD03F48_inline (const RuntimeMethod* method)
{
	return ((  InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* (*) (const RuntimeMethod*))Array_Empty_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m54CAA3DB217D0D9A1A3A21DD50883B6C3BD03F48_gshared_inline)(method);
}
inline void Span_1__ctor_m2E4001B0685A2709351E6B5DEB47BAC4DCCD8BFF_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0*, InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63*, const RuntimeMethod*))Span_1__ctor_m2E4001B0685A2709351E6B5DEB47BAC4DCCD8BFF_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, int32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, const RuntimeMethod*))Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (intptr_t*, intptr_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC*, intptr_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, intptr_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method)
{
	return ((  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* (*) (const RuntimeMethod*))Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline)(method);
}
inline void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, const RuntimeMethod*))Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382*, const RuntimeMethod*))Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_inline (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mA0DAD24F2B4249A5B3E4EF2B7B4627B781D80775_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*, int32_t, const RuntimeMethod*))Span_1__ctor_mA0DAD24F2B4249A5B3E4EF2B7B4627B781D80775_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline (const RuntimeMethod* method)
{
	return ((  KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* (*) (const RuntimeMethod*))Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_gshared_inline)(method);
}
inline void Span_1__ctor_m0F53AAE57478654CCAC6268F976F3B6F55FF42A5_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382*, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*, const RuntimeMethod*))Span_1__ctor_m0F53AAE57478654CCAC6268F976F3B6F55FF42A5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m63C97A1814997E727ACBCD8B8D88029EDDEAB0AD_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36*, const RuntimeMethod*))Span_1_get_Length_m63C97A1814997E727ACBCD8B8D88029EDDEAB0AD_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mF497722F4A2ADC10A3E2B47C6CAEA267A3B9E7C1_inline (ReadOnlySpan_1_t5690DF65D559F423F84EB5FB4D46535C4F57465A* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5690DF65D559F423F84EB5FB4D46535C4F57465A*, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mF497722F4A2ADC10A3E2B47C6CAEA267A3B9E7C1_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m43EE10EE280FBCD3004A085D1CFFADDEA0E755F5_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36*, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*, int32_t, const RuntimeMethod*))Span_1__ctor_m43EE10EE280FBCD3004A085D1CFFADDEA0E755F5_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_inline (const RuntimeMethod* method)
{
	return ((  MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* (*) (const RuntimeMethod*))Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_gshared_inline)(method);
}
inline void Span_1__ctor_m689316B76A1D5D0211962EFD3C91CD4948F25DD7_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36*, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*, const RuntimeMethod*))Span_1__ctor_m689316B76A1D5D0211962EFD3C91CD4948F25DD7_gshared_inline)(__this, ___0_array, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 38063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m11E2C154F1593209ED2F37673E3B4957BF69F649_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___comparer = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_0);
		return;
	}
}
// Method Definition Index: 38064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m24BE0E03C0A47F9085DD6691C5EDEB43420379D1_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
		L_2 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->___comparer = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___comparer), (void*)G_B2_0);
		return;
	}
}
// Method Definition Index: 38065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m92492BF4FAFD9C2A9A8792553A50AB4C285CDE0B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->___siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___siInfo), (void*)L_0);
		return;
	}
}
// Method Definition Index: 38066
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_ContainsAllElements_mD7E8524BC964146A9FEC04E7502DFC814E534CA1_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_collection;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_7;
				L_7 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(33, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_6: *(void**)L_6));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 38067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_InOrderTreeWalk_m14C47AF11708774C0FC2F5E3990F3EA94D72ACB6_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* ___0_action, const RuntimeMethod* method) 
{
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		int32_t L_2;
		L_2 = ((  int32_t (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_3 = (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		((  void (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_3, ((int32_t)il2cpp_codegen_multiply(2, L_2)), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_3;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = __this->___root;
		V_1 = L_4;
		goto IL_0036;
	}

IL_0028:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_5 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_1;
		NullCheck(L_5);
		InvokerActionInvoker1< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_5, L_6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8;
		L_8 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_1 = L_8;
	}

IL_0036:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_1;
		if (L_9)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0067;
	}

IL_003b:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_10 = V_0;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = InvokerFuncInvoker0< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_10);
		V_1 = L_11;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_12 = ___0_action;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = ((  bool (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (L_14)
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_1;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_2 = L_16;
		goto IL_0064;
	}

IL_0056:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_17 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = V_2;
		NullCheck(L_17);
		InvokerActionInvoker1< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_17, L_18);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_2;
		NullCheck(L_19);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20;
		L_20 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_2 = L_20;
	}

IL_0064:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		if (L_21)
		{
			goto IL_0056;
		}
	}

IL_0067:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ((  int32_t (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_23)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 38068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_BreadthFirstTreeWalk_mDCAE560EFB42A50027DBB05DB303ED45A39209B8_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* ___0_action, const RuntimeMethod* method) 
{
	Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D* L_1 = (Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		((  void (*) (Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_0 = L_1;
		Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D* L_2 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = __this->___root;
		NullCheck(L_2);
		InvokerActionInvoker1< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_2, L_3);
		goto IL_0058;
	}

IL_001e:
	{
		Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D* L_4 = V_0;
		NullCheck(L_4);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5;
		L_5 = InvokerFuncInvoker0< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_4);
		V_1 = L_5;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_6 = ___0_action;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = ((  bool (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_1;
		NullCheck(L_9);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10;
		L_10 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D* L_11 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = V_1;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13;
		L_13 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_11);
		InvokerActionInvoker1< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_11, L_13);
	}

IL_0044:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14 = V_1;
		NullCheck(L_14);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15;
		L_15 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D* L_16 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = V_1;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_16);
		InvokerActionInvoker1< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_16, L_18);
	}

IL_0058:
	{
		Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Queue_1_t1C295F0188BEEFD8259D80CF6DA1E95210CD994D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_20)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 38069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker0::Invoke(28, __this);
		int32_t L_0 = __this->___count;
		return L_0;
	}
}
// Method Definition Index: 38070
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_get_Comparer_m8A7256119C783E8E8E40BC49B658DB14445F8F7F_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___comparer;
		return L_0;
	}
}
// Method Definition Index: 38071
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2E0CF4A6D3C23BD90B588462CB9507E656E30964_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 38072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_ICollection_get_SyncRoot_m861D8904555F40BAA9BF3F3913475286CCB68E71_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 38073
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_VersionCheck_mA5BE354734205CF02928ADBD583EE7E54AA7CC39_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 38074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsWithinRange_m586FAA4E96F11DCDE7992F5EA40B6A635113BC70_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// Method Definition Index: 38075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(30, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
// Method Definition Index: 38076
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5389931753E4B8806E0B1BEEE625E5FF23F9F93D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		return;
	}
}
// Method Definition Index: 38077
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_AddIfNotPresent_m267A960C51415DB0FAD324726D563692EDB954F2_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_7 = L_1;
	const Il2CppFullySharedGenericAny L_30 = L_1;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_3 = NULL;
	int32_t V_4 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_5 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B11_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1), (uint8_t)0);
		__this->___root = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_2);
		__this->___count = 1;
		int32_t L_3 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return (bool)1;
	}

IL_002c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = __this->___root;
		V_0 = L_4;
		V_1 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_3 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		int32_t L_5 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_4 = 0;
		goto IL_00ac;
	}

IL_004c:
	{
		RuntimeObject* L_6 = __this->___comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = V_0;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_6);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0071;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = __this->___root;
		NullCheck(L_12);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return (bool)0;
	}

IL_0071:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_0;
		NullCheck(L_15);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = V_1;
		bool L_17;
		L_17 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if (!L_17)
		{
			goto IL_0092;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = V_3;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_18, (&V_1), L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0092:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		V_3 = L_21;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		V_2 = L_22;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = V_0;
		V_1 = L_23;
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_0;
		NullCheck(L_25);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26;
		L_26 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		G_B11_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_26);
		goto IL_00ab;
	}

IL_00a5:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27 = V_0;
		NullCheck(L_27);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28;
		L_28 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		G_B11_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_28);
	}

IL_00ab:
	{
		V_0 = G_B11_0;
	}

IL_00ac:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29 = V_0;
		if (L_29)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_31 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_30: *(void**)L_30), (uint8_t)1);
		V_5 = L_31;
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_33 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_34 = V_5;
		NullCheck(L_33);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		goto IL_00cf;
	}

IL_00c7:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_35 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_5;
		NullCheck(L_35);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00cf:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_37 = V_1;
		NullCheck(L_37);
		bool L_38;
		L_38 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		if (!L_38)
		{
			goto IL_00e3;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_39 = V_5;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_40 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41 = V_3;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_39, (&V_1), L_40, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_00e3:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_42 = __this->___root;
		NullCheck(L_42);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_43 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}
}
// Method Definition Index: 38078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
// Method Definition Index: 38079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_DoRemove_m4EED9DCD653F3B89F8BE2D79D53E7811F13D3532_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_56 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_3 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_4 = NULL;
	bool V_5 = false;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_6 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_7 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B22_0 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B26_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B32_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B31_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_3 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_4 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_5 = (bool)0;
		goto IL_012a;
	}

IL_0030:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_4)
		{
			goto IL_00f0;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_1;
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_0;
		NullCheck(L_6);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		goto IL_00f0;
	}

IL_0049:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = V_0;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9;
		L_9 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_6 = L_9;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = V_6;
		NullCheck(L_10);
		bool L_11;
		L_11 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = V_1;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13;
		L_13 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14 = V_6;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_13) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_14))))
		{
			goto IL_006e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_1;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		goto IL_0075;
	}

IL_006e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = V_1;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}

IL_0075:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_1;
		NullCheck(L_19);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = V_6;
		NullCheck(L_20);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = V_6;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = V_6;
		V_2 = L_24;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26 = V_3;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_25) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_26))))
		{
			goto IL_0097;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27 = V_6;
		V_4 = L_27;
	}

IL_0097:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29 = V_0;
		NullCheck(L_28);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_30;
		L_30 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_6 = L_30;
	}

IL_00a0:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_31 = V_6;
		NullCheck(L_31);
		bool L_32;
		L_32 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_32)
		{
			goto IL_00b1;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_33 = V_1;
		NullCheck(L_33);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		goto IL_00f0;
	}

IL_00b1:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_34 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_35 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_37 = V_6;
		NullCheck(L_35);
		uint8_t L_38;
		L_38 = ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(L_35, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		NullCheck(L_34);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_39;
		L_39 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(L_34, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_7 = L_39;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_40 = V_7;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41 = V_1;
		NullCheck(L_41);
		uint8_t L_42;
		L_42 = ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		NullCheck(L_40);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(L_40, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_43 = V_1;
		NullCheck(L_43);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_44 = V_0;
		NullCheck(L_44);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_45 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_46 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_47 = V_7;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_45, L_46, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_48 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_49 = V_3;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_48) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_49))))
		{
			goto IL_00ed;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_50 = V_7;
		V_4 = L_50;
	}

IL_00ed:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_51 = V_7;
		V_2 = L_51;
	}

IL_00f0:
	{
		bool L_52 = V_5;
		if (L_52)
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_53 = __this->___comparer;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_55 = V_0;
		NullCheck(L_55);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_55, (Il2CppFullySharedGenericAny*)L_56);
		NullCheck(L_53);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_54: *(void**)L_54), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_56: *(void**)L_56));
		G_B21_0 = L_57;
		goto IL_0109;
	}

IL_0108:
	{
		G_B21_0 = (-1);
	}

IL_0109:
	{
		int32_t L_58 = G_B21_0;
		if (L_58)
		{
			G_B23_0 = L_58;
			goto IL_0114;
		}
		G_B22_0 = L_58;
	}
	{
		V_5 = (bool)1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_59 = V_0;
		V_3 = L_59;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_60 = V_1;
		V_4 = L_60;
		G_B23_0 = G_B22_0;
	}

IL_0114:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_61 = V_1;
		V_2 = L_61;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_62 = V_0;
		V_1 = L_62;
		if ((((int32_t)G_B23_0) < ((int32_t)0)))
		{
			goto IL_0123;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_63 = V_0;
		NullCheck(L_63);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_64;
		L_64 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		G_B26_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_64);
		goto IL_0129;
	}

IL_0123:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_65 = V_0;
		NullCheck(L_65);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_66;
		L_66 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		G_B26_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_66);
	}

IL_0129:
	{
		V_0 = G_B26_0;
	}

IL_012a:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_67 = V_0;
		if (L_67)
		{
			goto IL_0030;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_68 = V_3;
		if (!L_68)
		{
			goto IL_014c;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_69 = V_3;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_70 = V_4;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_71 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_72 = V_2;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(__this, L_69, L_70, L_71, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		int32_t L_73 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
	}

IL_014c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_74 = __this->___root;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_75 = L_74;
		if (L_75)
		{
			G_B32_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_75);
			goto IL_0158;
		}
		G_B31_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_75);
	}
	{
		goto IL_015d;
	}

IL_0158:
	{
		NullCheck(G_B32_0);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(G_B32_0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
	}

IL_015d:
	{
		bool L_76 = V_5;
		return L_76;
	}
}
// Method Definition Index: 38080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_Clear_m72DD3AAD425FBF01ED1695F6E85BD161C6F4BA8B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		__this->___root = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL);
		__this->___count = 0;
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// Method Definition Index: 38081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Contains_m08CA74B05D995CF2E6BC7FE029BB55047EEFD292_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = VirtualFuncInvoker1Invoker< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny >::Invoke(34, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		return (bool)((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 38082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return;
	}
}
// Method Definition Index: 38083
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m4551621D718EDDBE764C191CD3D1B0D642D9DF72_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_0 = (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 61));
		((  void (*) (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		V_0 = L_0;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_1 = V_0;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		L_1->___index = L_2;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_3 = V_0;
		int32_t L_4 = ___2_count;
		NullCheck(L_3);
		L_3->___count = L_4;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_5 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		NullCheck(L_5);
		L_5->___array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___array), (void*)L_6);
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_7 = V_0;
		NullCheck(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->___array;
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___index;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0052:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___count;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_19 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_006b:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___count;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_22 = V_0;
		NullCheck(L_22);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = L_22->___array;
		NullCheck(L_23);
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___index;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_25)))))
		{
			goto IL_008d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_008d:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_27 = V_0;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___count;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___index;
		NullCheck(L_27);
		L_27->___count = ((int32_t)il2cpp_codegen_add(L_29, L_31));
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_32 = V_0;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_33 = (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		((  void (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)))(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		bool L_34;
		L_34 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* >::Invoke(26, __this, L_33);
		return;
	}
}
// Method Definition Index: 38084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Collections_ICollection_CopyTo_m94FDF44EFEE530F94F8F8E04643CB9A414343024_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_0 = (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 66));
		((  void (*) (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 67)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 67));
		V_0 = L_0;
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_1 = V_0;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		L_1->___index = L_2;
		RuntimeArray* L_3 = ___0_array;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001b:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0034:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_8, 0, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004d:
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___index;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___index;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0071:
	{
		RuntimeArray* L_18 = ___0_array;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_18, NULL);
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___index;
		int32_t L_22;
		L_22 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_21))) >= ((int32_t)L_22)))
		{
			goto IL_0091;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0091:
	{
		RuntimeArray* L_24 = ___0_array;
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->klass->rgctx_data, 59)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_1;
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___index;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 68)))(__this, L_26, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return;
	}

IL_00a9:
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_29 = V_0;
		RuntimeArray* L_30 = ___0_array;
		NullCheck(L_29);
		L_29->___objects = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_30, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___objects), (void*)((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_30, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_31 = V_0;
		NullCheck(L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31->___objects;
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00cd:
	{
	}
	try
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_34 = V_0;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_35 = (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		((  void (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)))(L_35, (RuntimeObject*)L_34, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 69)), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		bool L_36;
		L_36 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* >::Invoke(26, __this, L_35);
		goto IL_00f4;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e3;
		}
		throw e;
	}

CATCH_00e3:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_37 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, method);
	}

IL_00f4:
	{
		return;
	}
}
// Method Definition Index: 38085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t71F09436B846CE1804083C9B36997E4573540582 SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 71));
		return L_0;
	}
}
// Method Definition Index: 38086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA79EEC19FE3D48F1664BA35994021F31C74FFE1D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		L_0 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 70), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 38087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_IEnumerable_GetEnumerator_mDCF814E9198EA5D3B8BBBBEF714D78E5CA8FE4EC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		L_0 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 70), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 38088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** ___1_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_grandParent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_greatGrandParent, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B8_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___2_grandParent;
		NullCheck(L_0);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_2 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = *((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)L_2);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_4 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = *((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)L_4);
		NullCheck(L_5);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = ___0_current;
		V_0 = (bool)((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_7))? 1 : 0);
		bool L_8 = V_0;
		if ((!(((uint32_t)((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_3))? 1 : 0)) == ((uint32_t)L_8))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_0023;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = ___2_grandParent;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_11);
		goto IL_0029;
	}

IL_0023:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = ___2_grandParent;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13;
		L_13 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_13);
	}

IL_0029:
	{
		V_1 = G_B4_0;
		goto IL_0042;
	}

IL_002c:
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0037;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = ___2_grandParent;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 73)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 73));
		G_B8_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_16);
		goto IL_003d;
	}

IL_0037:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = ___2_grandParent;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 74)))(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 74));
		G_B8_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_18);
	}

IL_003d:
	{
		V_1 = G_B8_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_19 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = ___3_greatGrandParent;
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_20);
	}

IL_0042:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = ___2_grandParent;
		NullCheck(L_21);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		NullCheck(L_22);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = ___3_greatGrandParent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = ___2_grandParent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_1;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
// Method Definition Index: 38089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_newChild, const RuntimeMethod* method) 
{
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_parent;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___1_child;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = ___2_newChild;
		NullCheck(L_1);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 75)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 75));
		return;
	}

IL_000c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = ___2_newChild;
		__this->___root = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_4);
		return;
	}
}
// Method Definition Index: 38090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceNode_mBDF5C4FF096EA8F83C4E2FF596C6224955E9241C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_match, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_parentOfMatch, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_successor, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_parentOfSuccessor, const RuntimeMethod* method) 
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B3_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_match;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_0) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___0_match;
		NullCheck(L_2);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3;
		L_3 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		___2_successor = L_3;
		goto IL_0049;
	}

IL_000e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = ___2_successor;
		NullCheck(L_4);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5;
		L_5 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6);
			goto IL_001a;
		}
		G_B3_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6);
	}
	{
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B4_0);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
	}

IL_001f:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = ___3_parentOfSuccessor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = ___0_match;
		if ((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_7) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = ___3_parentOfSuccessor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = ___2_successor;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_9);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = ___0_match;
		NullCheck(L_13);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14;
		L_14 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_12);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_12, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_003d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = ___0_match;
		NullCheck(L_16);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17;
		L_17 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_15);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_15, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_0049:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = ___2_successor;
		if (!L_18)
		{
			goto IL_0058;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = ___0_match;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		NullCheck(L_19);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}

IL_0058:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = ___1_parentOfMatch;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = ___0_match;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = ___2_successor;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_22, L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		return;
	}
}
// Method Definition Index: 38091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* SortedSet_1_FindNode_m7E02E4CF3DE74A449FD555A69412FEA4A7D39C34_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B6_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		V_0 = L_0;
		goto IL_0034;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->___comparer;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_3, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck(L_1);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_4: *(void**)L_4));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		return L_7;
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_0;
		NullCheck(L_9);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10;
		L_10 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_10);
		goto IL_0033;
	}

IL_002d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = V_0;
		NullCheck(L_11);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12;
		L_12 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_12);
	}

IL_0033:
	{
		V_0 = G_B6_0;
	}

IL_0034:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_0;
		if (L_13)
		{
			goto IL_0009;
		}
	}
	{
		return (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
	}
}
// Method Definition Index: 38092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_InternalIndexOf_m85FDF0B1BA2DE96EC8C32E64F15E047755209ECC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B6_0 = NULL;
	int32_t G_B9_0 = 0;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0047;
	}

IL_000b:
	{
		RuntimeObject* L_1 = __this->___comparer;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_3, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck(L_1);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_4: *(void**)L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_7 = V_1;
		return L_7;
	}

IL_0023:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_0;
		NullCheck(L_9);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10;
		L_10 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_10);
		goto IL_0035;
	}

IL_002f:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = V_0;
		NullCheck(L_11);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12;
		L_12 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_12);
	}

IL_0035:
	{
		V_0 = G_B6_0;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_1;
		G_B9_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_14)), 2));
		goto IL_0046;
	}

IL_0041:
	{
		int32_t L_15 = V_1;
		G_B9_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_15)), 1));
	}

IL_0046:
	{
		V_1 = G_B9_0;
	}

IL_0047:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = V_0;
		if (L_16)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 38093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* SortedSet_1_FindRange_mB0781EEE7A75305CCC9352AD1AF7613FBCC4D5EB_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_from, Il2CppFullySharedGenericAny ___1_to, bool ___2_lowerBoundActive, bool ___3_upperBoundActive, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_11 = L_3;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_13 = L_5;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		V_0 = L_0;
		goto IL_004e;
	}

IL_0009:
	{
		bool L_1 = ___2_lowerBoundActive;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_from : &___0_from), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = V_0;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_4, (Il2CppFullySharedGenericAny*)L_5);
		NullCheck(L_2);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_5: *(void**)L_5));
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8;
		L_8 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_8;
		goto IL_004e;
	}

IL_002a:
	{
		bool L_9 = ___3_upperBoundActive;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_10 = __this->___comparer;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_to : &___1_to), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = V_0;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_13: *(void**)L_13));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_0;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_0 = L_16;
		goto IL_004e;
	}

IL_004c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = V_0;
		return L_17;
	}

IL_004e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = V_0;
		if (L_18)
		{
			goto IL_0009;
		}
	}
	{
		return (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
	}
}
// Method Definition Index: 38094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_HasEqualComparer_m01D060ABCDB8082B159A6EDE221B55E52C0F7433_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_other, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		NullCheck((RuntimeObject*)L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_3, (RuntimeObject*)L_5);
		return L_6;
	}

IL_0020:
	{
		return (bool)1;
	}
}
// Method Definition Index: 38095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsSubsetOf_mBBC5115A59B57F8F8AF99B45BB23A2B4BA4733E6_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_7;
		L_7 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_7) <= ((int32_t)L_9)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_10 = V_0;
		bool L_11;
		L_11 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 78));
		return L_11;
	}

IL_0043:
	{
		RuntimeObject* L_12 = ___0_other;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_13;
		L_13 = ((  ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 79)))(__this, L_12, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		V_1 = L_13;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_14 = V_1;
		int32_t L_15 = L_14.___UniqueCount;
		int32_t L_16;
		L_16 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0067;
		}
	}
	{
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_17 = V_1;
		int32_t L_18 = L_17.___UnfoundCount;
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0067:
	{
		return (bool)0;
	}
}
// Method Definition Index: 38096
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsSubsetOfSortedSetWithSameComparer_m07D4D1A019F32E530F278E816F60F42B21A6C36E_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_asSorted, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_2, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	bool V_3 = false;
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_0 = ___0_asSorted;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), __this, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 82)), il2cpp_rgctx_method(method->klass->rgctx_data, 82), __this, (Il2CppFullySharedGenericAny*)L_2);
		NullCheck(L_0);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_3;
		L_3 = VirtualFuncInvoker2Invoker< SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(38, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_2: *(void**)L_2));
		V_0 = L_3;
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_4;
		L_4 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_codegen_method_get_declaring_type(il2cpp_rgctx_method(method->klass->rgctx_data, 87)));
				Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 87));
				return;
			}
		});
		try
		{
			{
				goto IL_0031_1;
			}

IL_001c_1:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 84)), il2cpp_rgctx_method(method->klass->rgctx_data, 84), (&V_1), (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_2, L_5, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_6 = V_0;
				il2cpp_codegen_memcpy(L_7, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_6);
				bool L_8;
				L_8 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(33, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_7: *(void**)L_7));
				if (L_8)
				{
					goto IL_0031_1;
				}
			}
			{
				V_3 = (bool)0;
				goto IL_004c;
			}

IL_0031_1:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
				bool L_9;
				L_9 = ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				if (L_9)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		return (bool)1;
	}

IL_004c:
	{
		bool L_10 = V_3;
		return L_10;
	}
}
// Method Definition Index: 38097
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsProperSubsetOf_m8BBE0C06A9496F2C2B5311C458C15675A548D48C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_4, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_4, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)));
		return (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		RuntimeObject* L_6 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_8 = V_0;
		bool L_9;
		L_9 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10;
		L_10 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0050:
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_13 = V_0;
		bool L_14;
		L_14 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 78));
		return L_14;
	}

IL_0058:
	{
		RuntimeObject* L_15 = ___0_other;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_16;
		L_16 = ((  ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 79)))(__this, L_15, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		V_1 = L_16;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_17 = V_1;
		int32_t L_18 = L_17.___UniqueCount;
		int32_t L_19;
		L_19 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0079;
		}
	}
	{
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_20 = V_1;
		int32_t L_21 = L_20.___UnfoundCount;
		return (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
	}

IL_0079:
	{
		return (bool)0;
	}
}
// Method Definition Index: 38098
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsSupersetOf_m66182DD05ADAF1A07F47CE4383D01F394CAAEC38_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_19 = L_13;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_21 = L_15;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_1 = NULL;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_3, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	bool V_4 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_3, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)));
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)));
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0095;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_7 = V_0;
		bool L_8;
		L_8 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_9;
		L_9 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_12 = V_0;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), L_12, (Il2CppFullySharedGenericAny*)L_13);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_14 = V_0;
		NullCheck(L_14);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 82)), il2cpp_rgctx_method(method->klass->rgctx_data, 82), L_14, (Il2CppFullySharedGenericAny*)L_15);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_16;
		L_16 = VirtualFuncInvoker2Invoker< SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(38, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_15: *(void**)L_15));
		V_1 = L_16;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_17 = V_0;
		NullCheck(L_17);
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_18;
		L_18 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_codegen_method_get_declaring_type(il2cpp_rgctx_method(method->klass->rgctx_data, 87)));
				Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 87));
				return;
			}
		});
		try
		{
			{
				goto IL_007a_1;
			}

IL_0064_1:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 84)), il2cpp_rgctx_method(method->klass->rgctx_data, 84), (&V_2), (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_memcpy(V_3, L_19, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_20 = V_1;
				il2cpp_codegen_memcpy(L_21, V_3, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_20);
				bool L_22;
				L_22 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(33, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_21: *(void**)L_21));
				if (L_22)
				{
					goto IL_007a_1;
				}
			}
			{
				V_4 = (bool)0;
				goto IL_009d;
			}

IL_007a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
				bool L_23;
				L_23 = ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				if (L_23)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_0093;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		return (bool)1;
	}

IL_0095:
	{
		RuntimeObject* L_24 = ___0_other;
		bool L_25;
		L_25 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 88)))(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 88));
		return L_25;
	}

IL_009d:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
// Method Definition Index: 38099
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsProperSupersetOf_mBB256751D46A9EB5E263AFA9E523A684985BEF71_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_20 = L_14;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_22 = L_16;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_2 = NULL;
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_4, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_4, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_4, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)));
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)1;
	}

IL_002f:
	{
		RuntimeObject* L_6 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_7 = V_0;
		if (!L_7)
		{
			goto IL_00a1;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_8 = V_0;
		bool L_9;
		L_9 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		int32_t L_12;
		L_12 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0052;
		}
	}
	{
		return (bool)0;
	}

IL_0052:
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_13 = V_0;
		NullCheck(L_13);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), L_13, (Il2CppFullySharedGenericAny*)L_14);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_15 = V_0;
		NullCheck(L_15);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 82)), il2cpp_rgctx_method(method->klass->rgctx_data, 82), L_15, (Il2CppFullySharedGenericAny*)L_16);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_17;
		L_17 = VirtualFuncInvoker2Invoker< SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(38, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_16: *(void**)L_16));
		V_2 = L_17;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_18 = V_0;
		NullCheck(L_18);
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_19;
		L_19 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		V_3 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0091:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_codegen_method_get_declaring_type(il2cpp_rgctx_method(method->klass->rgctx_data, 87)));
				Enumerator_Dispose_m1B66D14092A623BE5F8A22939E7A7A57B47232BE((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 87));
				return;
			}
		});
		try
		{
			{
				goto IL_0086_1;
			}

IL_006e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 84)), il2cpp_rgctx_method(method->klass->rgctx_data, 84), (&V_3), (Il2CppFullySharedGenericAny*)L_20);
				il2cpp_codegen_memcpy(V_4, L_20, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_21 = V_2;
				il2cpp_codegen_memcpy(L_22, V_4, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				NullCheck(L_21);
				bool L_23;
				L_23 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(33, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_22: *(void**)L_22));
				if (L_23)
				{
					goto IL_0086_1;
				}
			}
			{
				V_5 = (bool)0;
				goto IL_00c4;
			}

IL_0086_1:
			{
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
				bool L_24;
				L_24 = ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
				if (L_24)
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_009f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009f:
	{
		return (bool)1;
	}

IL_00a1:
	{
		RuntimeObject* L_25 = ___0_other;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_26;
		L_26 = ((  ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 79)))(__this, L_25, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		V_1 = L_26;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_27 = V_1;
		int32_t L_28 = L_27.___UniqueCount;
		int32_t L_29;
		L_29 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00c2;
		}
	}
	{
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_30 = V_1;
		int32_t L_31 = L_30.___UnfoundCount;
		return (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
	}

IL_00c2:
	{
		return (bool)0;
	}

IL_00c4:
	{
		bool L_32 = V_5;
		return L_32;
	}
}
// Method Definition Index: 38100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_SetEquals_m7889C5AF618A6D92097F485F82888C98D39B1A63_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t71F09436B846CE1804083C9B36997E4573540582 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_3 = V_0;
		if (!L_3)
		{
			goto IL_008c;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_4 = V_0;
		bool L_5;
		L_5 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_6;
		L_6 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		V_2 = L_6;
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_7 = V_0;
		NullCheck(L_7);
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_8;
		L_8 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 72));
		V_3 = L_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
		bool L_9;
		L_9 = ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10;
		L_10 = ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_0049:
	{
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 84)), il2cpp_rgctx_method(method->klass->rgctx_data, 84), (&V_2), (Il2CppFullySharedGenericAny*)L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 84)), il2cpp_rgctx_method(method->klass->rgctx_data, 84), (&V_3), (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0066:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 85));
		bool L_15;
		L_15 = ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16;
		L_16 = ((  bool (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)))((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 86));
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0086;
		}
	}
	{
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0049;
		}
	}

IL_0086:
	{
		bool L_19 = V_4;
		bool L_20 = V_5;
		return (bool)((int32_t)((int32_t)L_19&(int32_t)L_20));
	}

IL_008c:
	{
		RuntimeObject* L_21 = ___0_other;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_22;
		L_22 = ((  ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 79)))(__this, L_21, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 79));
		V_1 = L_22;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_23 = V_1;
		int32_t L_24 = L_23.___UniqueCount;
		int32_t L_25;
		L_25 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ad;
		}
	}
	{
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_26 = V_1;
		int32_t L_27 = L_26.___UnfoundCount;
		return (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
	}

IL_00ad:
	{
		return (bool)0;
	}
}
// Method Definition Index: 38101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Overlaps_m5C578EB70E85A2CA77225F2F48B8A74DFD02DC0C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_16 = L_11;
	const Il2CppFullySharedGenericAny L_25 = L_11;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_18 = L_13;
	const Il2CppFullySharedGenericAny L_26 = L_13;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_2, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 89))))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 89))));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 89), ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 89))));
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		RuntimeObject* L_6 = ___0_other;
		V_0 = ((SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)IsInstClass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_8 = V_0;
		bool L_9;
		L_9 = ((  bool (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 77)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 77));
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_10 = __this->___comparer;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), __this, (Il2CppFullySharedGenericAny*)L_11);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_12 = V_0;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 82)), il2cpp_rgctx_method(method->klass->rgctx_data, 82), L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_13: *(void**)L_13));
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_15 = __this->___comparer;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 82)), il2cpp_rgctx_method(method->klass->rgctx_data, 82), __this, (Il2CppFullySharedGenericAny*)L_16);
		SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* L_17 = V_0;
		NullCheck(L_17);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), L_17, (Il2CppFullySharedGenericAny*)L_18);
		NullCheck(L_15);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_18: *(void**)L_18));
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}

IL_0076:
	{
		return (bool)0;
	}

IL_0078:
	{
		RuntimeObject* L_20 = ___0_other;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_20);
		V_1 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009f:
			{
				{
					RuntimeObject* L_22 = V_1;
					if (!L_22)
					{
						goto IL_00a8;
					}
				}
				{
					RuntimeObject* L_23 = V_1;
					NullCheck((RuntimeObject*)L_23);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				}

IL_00a8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0095_1;
			}

IL_0081_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24, (Il2CppFullySharedGenericAny*)L_25);
				il2cpp_codegen_memcpy(V_2, L_25, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				bool L_27;
				L_27 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(33, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_26: *(void**)L_26));
				if (!L_27)
				{
					goto IL_0095_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_00ab;
			}

IL_0095_1:
			{
				RuntimeObject* L_28 = V_1;
				NullCheck((RuntimeObject*)L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				if (L_29)
				{
					goto IL_0081_1;
				}
			}
			{
				goto IL_00a9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		return (bool)0;
	}

IL_00ab:
	{
		bool L_30 = V_3;
		return L_30;
	}
}
// Method Definition Index: 38102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 SortedSet_1_CheckUniqueAndUnfoundElements_mF9767AB16AED0B19DD52C9C9A22C2751B72A776C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_29 = L_6;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_7, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	int32_t V_8 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___UniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___UnfoundCount = L_10;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12;
		L_12 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_mAB200AF3CAED081B1C667BA381847BEA8E312598(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* L_19 = (BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F*)il2cpp_codegen_object_new(BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F_il2cpp_TypeInfo_var);
		BitHelper__ctor_mD4A0F4FB490C57EA8B7C904941BC72AD14697A08(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* L_23 = (BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F*)il2cpp_codegen_object_new(BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F_il2cpp_TypeInfo_var);
		BitHelper__ctor_m67B3260E6A92B90D770D8CF043A848A477DC4595(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_28, (Il2CppFullySharedGenericAny*)L_29);
				il2cpp_codegen_memcpy(V_7, L_29, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				il2cpp_codegen_memcpy(L_30, V_7, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
				int32_t L_31;
				L_31 = VirtualFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(35, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_30: *(void**)L_30));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_mB9298BD21F493D475C1D71EEE439D99611B4D01C(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_tD135C545FDF2D92175A548D5475D3A32B494AE9F* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m337CC205369FD7A7E1A199B7210DFFC98AB6C1AA(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___UniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___UnfoundCount = L_44;
		ElementCount_t76A5A574AA5C7C476388F43ED6FA1AE8BAFF1DE3 L_45 = V_0;
		return L_45;
	}
}
// Method Definition Index: 38103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_Min_mFDECAB680F0FD68F5698E848EB914BF86CCA91B4_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(36, __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
// Method Definition Index: 38104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_MinInternal_mA87A571C9C85CF3113AA93D6D5FBC711BCC26744_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}

IL_0012:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = __this->___root;
		V_0 = L_2;
		goto IL_0022;
	}

IL_001b:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4;
		L_4 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_0 = L_4;
	}

IL_0022:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_0;
		NullCheck(L_5);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (L_6)
		{
			goto IL_001b;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		NullCheck(L_7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_7, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
// Method Definition Index: 38105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_Max_mF51C4841F6E4362405C8A9AE56090ED16CF4E363_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(37, __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
// Method Definition Index: 38106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_get_MaxInternal_m92DC2F4EC67A74D1B5F7A37B45D0900EE040B04C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	memset(V_1, 0, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}

IL_0012:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = __this->___root;
		V_0 = L_2;
		goto IL_0022;
	}

IL_001b:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4;
		L_4 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_4;
	}

IL_0022:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_0;
		NullCheck(L_5);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (L_6)
		{
			goto IL_001b;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		NullCheck(L_7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_7, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		return;
	}
}
// Method Definition Index: 38107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* SortedSet_1_GetViewBetween_mBBEF03CDFE0DFE96E9A5BEE27E8A89BE4C9E35C4_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_lowerValue, Il2CppFullySharedGenericAny ___1_upperValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 76));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_lowerValue : &___0_lowerValue), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_upperValue : &___1_upperValue), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_2: *(void**)L_2));
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B3BFBE88DCC9838DC969D8D779C4CCE2A60173D)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6646A42BCA8576CB3E2595EC534707449037D0EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_lowerValue : &___0_lowerValue), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_upperValue : &___1_upperValue), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751* L_7 = (TreeSubSet_t8773A6ADED6E5D012AEABA38FC2C57685EC2A751*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 94));
		InvokerActionInvoker5< SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, bool, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 95)), il2cpp_rgctx_method(method->klass->rgctx_data, 95), L_7, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_6: *(void**)L_6), (bool)1, (bool)1);
		return (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*)L_7;
	}
}
// Method Definition Index: 38108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Runtime_Serialization_ISerializable_GetObjectData_m542305855B960DD4A3C41B23E6C12C671FCBA4AE_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		VirtualActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(39, __this, L_0, L_1);
		return;
	}
}
// Method Definition Index: 38109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_GetObjectData_mE6F953A9B70F9C6F40D01EC828D4AE6EED34D93B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->___count;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->___comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 97)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		int32_t L_9 = __this->___version;
		NullCheck(L_8);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_9, NULL);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = __this->___root;
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_11;
		L_11 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 98), (uint32_t)L_11);
		V_0 = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 68)))(__this, L_13, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 99)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck(L_14);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_14, _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612, (RuntimeObject*)L_15, L_17, NULL);
	}

IL_007d:
	{
		return;
	}
}
// Method Definition Index: 38110
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_mFDBF0BF4F39DA621F204E108AE8ED0B59349CF8A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_sender;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(40, __this, L_0);
		return;
	}
}
// Method Definition Index: 38111
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_OnDeserialization_m32D2F6DF9680EF85F1E98A262055DB2EE717E334_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___comparer;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->___siInfo;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_2 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001c:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->___siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 97)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->___comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = __this->___siInfo;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_7, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_009f;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = __this->___siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 99)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612, L_12, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 59)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_1;
		if (L_14)
		{
			goto IL_0083;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_15 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0083:
	{
		V_2 = 0;
		goto IL_0099;
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_20;
		L_20 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_19: *(void**)L_19));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0099:
	{
		int32_t L_22 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0087;
		}
	}

IL_009f:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_24 = __this->___siInfo;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_24, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->___version = L_25;
		int32_t L_26 = __this->___count;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_00c9;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_28 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD158A55362F81195C165C2CFB448622A361B357C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_00c9:
	{
		__this->___siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 38112
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F_gshared (int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_value;
		___0_value = ((int32_t)(L_1>>1));
	}

IL_000d:
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* currentDelegate = reinterpret_cast<SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenInst(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 10613
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m4BBCE8F9C0E8FCC935E1765742799AEAD48606AE_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast;
}
// Method Definition Index: 10614
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenInst(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 10613
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
// Method Definition Index: 10614
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* currentDelegate = reinterpret_cast<SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenInst(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 10613
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m779B33E518F02340D4E655DDF668877EE565FE88_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast;
}
// Method Definition Index: 10614
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* currentDelegate = reinterpret_cast<SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_span, ___1_arg);
}
// Method Definition Index: 10613
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker;
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast;
}
// Method Definition Index: 10614
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = V_0;
		if (L_1.___hasValue)
		{
			goto IL_0037;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_2 = ___0_array;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_7 = ___0_array;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_9;
		L_9 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_8);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer = L_10;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_11 = ___0_array;
		NullCheck(L_11);
		__this->____length = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m86B77173AFE17E5C448B2A46B2D4FA7C86D55239_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = V_0;
		if (L_3.___hasValue)
		{
			goto IL_0042;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_16;
		L_16 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_15);
		int32_t L_17 = ___1_start;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_18;
		L_18 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_16, L_17);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer = L_19;
		int32_t L_20 = ___2_length;
		__this->____length = L_20;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m39B630629631F5F3797AFE9EDDA475EE404BC100_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_2;
		L_2 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>((uint8_t*)L_1);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_ptr;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* Span_1_get_Item_m7A00D3468D32D9E828F5147FEBDC4B1601DCF647_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_2 = __this->____pointer;
		V_0 = L_2;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5;
		L_5 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* Span_1_GetPinnableReference_m4D8CBE3528B5E06DF38B65E0E8F8F2E95CFC2C33_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_1;
		L_1 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_2 = __this->____pointer;
		V_0 = L_2;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m0EA6C54837B6AAE0635EFA982EA2B499DE24E04F_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_0 = __this->____pointer;
		V_0 = L_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mE28027CAC681ADB1E428BF8BCF2EDEC974CF684A_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_4 = __this->____pointer;
		V_2 = L_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_12 = __this->____pointer;
		V_2 = L_12;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_18 = L_19;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_24 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_23 = L_24;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_29 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_28 = L_29;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_34 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_33 = L_34;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_39 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_38 = L_39;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_44 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_43 = L_44;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_49 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_48 = L_49;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_54 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_64 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_63 = L_64;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_69 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_68 = L_69;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_74 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_73 = L_74;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_79 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_85 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m0364BD7751FBC14F5DA2CF8BA474307F6E815129_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_2 = ___0_destination;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_3 = L_2.____pointer;
		V_0 = L_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_0 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m26C08A30C59BF1CF7196C28B23414AAFAA8EE83B_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_2 = ___0_destination;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_3 = L_2.____pointer;
		V_1 = L_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_1));
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_1 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2 Span_1_op_Implicit_m761C3454CAE69FEFBCF116FB76C960A81F8F1A72_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_0 = ___0_span;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1 = L_0.____pointer;
		V_0 = L_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF2F48674F21E265E6A1E2841DA4F93B099BCC41_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_1 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 Span_1_Slice_m56B7FFB5404EF5699C0AAD0698A2110806CB7403_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_2 = __this->____pointer;
		V_0 = L_2;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5;
		L_5 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 Span_1_Slice_m1DA91F93C25B329E4DF9C8BF96C38AC3255CCD5A_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_0 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_8;
		L_8 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Span_1_ToArray_m4F7B49E4DEFFF7590D3FEE459AFD8F93825E62C7_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_1;
		L_1 = Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_3 = (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_5);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_7 = __this->____pointer;
		V_0 = L_7;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7D50961771F0951CFC3634638723DF9EEF1A824F_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m35D53A63F76BDF113E43492876A788F40434C748_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 Span_1_op_Implicit_m8E5FF3761AA50C08946266E63BD40F877F22245A_gshared (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) 
{
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) 
{
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		goto IL_0037;
	}

IL_0037:
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_3);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFB1DF83BC23670EC8E9E5549A662686C2BF5A209_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_11;
		L_11 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_10);
		int32_t L_12 = ___1_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_13;
		L_13 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_11, L_12);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4A57D2C127E05581118403FF297339A88CBF04D7_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>((uint8_t*)L_3);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		int32_t L_6 = ___1_length;
		__this->____length = L_6;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_ptr;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* Span_1_get_Item_mB31CA271AD62255832652CCBA3B6144E386155D7_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* Span_1_GetPinnableReference_m7C8E33E87C25BE64667C578289D3DEE26FCCA0C4_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_1;
		L_1 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mABBD13C8435F3F29A1DAC8442C2A5553A0D4E4B1_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_0 = __this->____pointer;
		V_0 = L_0;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>();
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)((int32_t)(L_4/L_5))))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mC8DC7F6EDCE047652100F251B4D18E254E9C4B67_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_4 = __this->____pointer;
		V_2 = L_4;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_12 = __this->____pointer;
		V_2 = L_12;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_19 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_18)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_18)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_18)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_24 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_23)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_23)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_23)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_29 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_28)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_28)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_28)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_34 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_33 = L_34;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_33)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_33)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_33)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_39 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_38 = L_39;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_38)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_38)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_38)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_44 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_43 = L_44;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_43)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_43)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_43)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_49 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_48 = L_49;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_48)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_48)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_48)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_54 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_53 = L_54;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_53)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_53)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_53)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_64 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_63 = L_64;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_63)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_63)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_63)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_69 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_68 = L_69;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_68)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_68)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_68)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_74 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_73 = L_74;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_73)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_73)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_73)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_79 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_78 = L_79;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_78)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_78)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_78)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_85 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_84 = L_85;
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_84)->___textElementInfos), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_84)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_84)->___textElementInfoIndicesByAtlas), (void*)NULL);
		#endif
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m69E286C36213A3F0A2865C947B1402909A27D13D_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_2 = ___0_destination;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3 = L_2.____pointer;
		V_0 = L_3;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_0 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m3F2672DBD1CBB222A9062D13B53EE549E236DEE9_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_2 = ___0_destination;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3 = L_2.____pointer;
		V_1 = L_3;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_1 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 Span_1_op_Implicit_m86584B024E037F330D6D8BAD3654D009976F3186_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_0 = ___0_span;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1 = L_0.____pointer;
		V_0 = L_1;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m095D5F8A52B67EDB057CF850BB375D945B975194_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_1 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 Span_1_Slice_m57905D80A43A7487820D76CE38E84805236492B2_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 Span_1_Slice_m085D783FD988C5CE9726A19B347DB3791B1BB7CF_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_0 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_8;
		L_8 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Span_1_ToArray_mB0B732DF6D1AAF2D2FD4818EF9091E54136DE58F_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_1;
		L_1 = Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_3 = (ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*)(ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_5);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_7 = __this->____pointer;
		V_0 = L_7;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mEC9CE7A49026C798E76AD11A730B0199AEC6BD10_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m313C66D04AC3CA5C139861E0B60F6A2C4ED47AFC_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 Span_1_op_Implicit_mD167D5E84BC89F06CF65BED50126A856D72DB6AD_gshared (ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) 
{
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF010B57B13C6597DA14D7957BD2E07090F8336A6_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		bool* L_11;
		L_11 = il2cpp_unsafe_as_ref<bool>(L_10);
		int32_t L_12 = ___1_start;
		bool* L_13;
		L_13 = il2cpp_unsafe_add<bool,int32_t>(L_11, L_12);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9863659F38934C7B3CF0E727F433498C43070D2F_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		bool* L_2;
		L_2 = il2cpp_unsafe_as_ref<bool>((uint8_t*)L_1);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_get_Item_m27BAFEC8B3FFE7DEB25D60F10C9941C139B90E41_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_GetPinnableReference_mC68E9B3CD4F8680E06367DD4736FA06D7D3CA4F2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool* L_1;
		L_1 = il2cpp_unsafe_as_ref<bool>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m519E41C1F421677B73AAFBBC520A75F377A7CF34_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_0 = __this->____pointer;
		V_0 = L_0;
		bool* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<bool>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m82EADA29C24D18F714A43323334596A4FCB9FD82_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	bool* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<bool>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		bool L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_4 = __this->____pointer;
		V_2 = L_4;
		bool* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_12 = __this->____pointer;
		V_2 = L_12;
		bool* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<bool>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		bool* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		bool* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		bool L_19 = ___0_value;
		*(bool*)L_18 = L_19;
		bool* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		bool* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		bool L_24 = ___0_value;
		*(bool*)L_23 = L_24;
		bool* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		bool* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		bool L_29 = ___0_value;
		*(bool*)L_28 = L_29;
		bool* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		bool* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		bool L_34 = ___0_value;
		*(bool*)L_33 = L_34;
		bool* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		bool* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		bool L_39 = ___0_value;
		*(bool*)L_38 = L_39;
		bool* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		bool* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		bool L_44 = ___0_value;
		*(bool*)L_43 = L_44;
		bool* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		bool* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		bool L_49 = ___0_value;
		*(bool*)L_48 = L_49;
		bool* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		bool* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		bool L_54 = ___0_value;
		*(bool*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		bool* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		bool* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		bool L_64 = ___0_value;
		*(bool*)L_63 = L_64;
		bool* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		bool* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		bool L_69 = ___0_value;
		*(bool*)L_68 = L_69;
		bool* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		bool* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		bool L_74 = ___0_value;
		*(bool*)L_73 = L_74;
		bool* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		bool* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		bool L_79 = ___0_value;
		*(bool*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		bool* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		bool* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		bool L_85 = ___0_value;
		*(bool*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD4A4E2B11E4B55D0E34818F92516CA8C73F66E52_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_0 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m840B35C6072B9118C6B103D322BACAAE77E2F08B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_1 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 Span_1_op_Implicit_m532947D2F4A072CD15514EE6D890A44C2B4C465B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_0 = ___0_span;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1 = L_0.____pointer;
		V_0 = L_1;
		bool* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mF5B8BAB40C1B80B9B1A0921B31B2968310CB65A3_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_mF6D7367FEA695E2CE8E186FC9798415839735753_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_m673F7A3E7082015E7E5AA80ACF267623570ABB84_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		bool* L_8;
		L_8 = il2cpp_unsafe_add<bool,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Span_1_ToArray_mFC04BEB2B94DC9AB1599B278616C046F62EA99C2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
		L_1 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		bool* L_6;
		L_6 = il2cpp_unsafe_as_ref<bool>(L_5);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_7 = __this->____pointer;
		V_0 = L_7;
		bool* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m55CEACD776C1B696BF7E0EEA57CA12538E5B6A93_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m1F00FAF1BC9554C7D07229B28319B50B119EAF21_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_op_Implicit_m1F838ECD24613509CFE3CA0A82DD6F0762357A99_gshared (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m95E8A4114E1E52B458C21B864A802C4A07A96F15_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_0 = __this->____pointer;
		V_0 = L_0;
		uint8_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint8_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint8_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint8_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4 = __this->____pointer;
		V_2 = L_4;
		uint8_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_12 = __this->____pointer;
		V_2 = L_12;
		uint8_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint8_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint8_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint8_t L_19 = ___0_value;
		*(uint8_t*)L_18 = L_19;
		uint8_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint8_t L_24 = ___0_value;
		*(uint8_t*)L_23 = L_24;
		uint8_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint8_t L_29 = ___0_value;
		*(uint8_t*)L_28 = L_29;
		uint8_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint8_t L_34 = ___0_value;
		*(uint8_t*)L_33 = L_34;
		uint8_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint8_t L_39 = ___0_value;
		*(uint8_t*)L_38 = L_39;
		uint8_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint8_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint8_t L_44 = ___0_value;
		*(uint8_t*)L_43 = L_44;
		uint8_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint8_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint8_t L_49 = ___0_value;
		*(uint8_t*)L_48 = L_49;
		uint8_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint8_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint8_t L_54 = ___0_value;
		*(uint8_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint8_t L_64 = ___0_value;
		*(uint8_t*)L_63 = L_64;
		uint8_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint8_t L_69 = ___0_value;
		*(uint8_t*)L_68 = L_69;
		uint8_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint8_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint8_t L_74 = ___0_value;
		*(uint8_t*)L_73 = L_74;
		uint8_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint8_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint8_t L_79 = ___0_value;
		*(uint8_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint8_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint8_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint8_t L_85 = ___0_value;
		*(uint8_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFD99196C62E0CE029A2E64ED0B0F4FEC623B9F56_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m94E8AC193D974B79432BD6D8CC8AE7E7832AC6A4_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7F08055851C835FE3E76471A6015683E6CCBD980_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mAB5C55282F13372D4B32AFA20E3E2618CE417F61_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		int32_t L_12 = ___1_start;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_GetPinnableReference_m31DB483DD16D694AEBD26E1ECD9F03D3A5296CF7_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_0 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Il2CppChar L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppChar* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppChar* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppChar* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Il2CppChar L_19 = ___0_value;
		*(Il2CppChar*)L_18 = L_19;
		Il2CppChar* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppChar* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Il2CppChar L_24 = ___0_value;
		*(Il2CppChar*)L_23 = L_24;
		Il2CppChar* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Il2CppChar L_29 = ___0_value;
		*(Il2CppChar*)L_28 = L_29;
		Il2CppChar* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppChar* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Il2CppChar L_34 = ___0_value;
		*(Il2CppChar*)L_33 = L_34;
		Il2CppChar* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppChar* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Il2CppChar L_39 = ___0_value;
		*(Il2CppChar*)L_38 = L_39;
		Il2CppChar* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppChar* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Il2CppChar L_44 = ___0_value;
		*(Il2CppChar*)L_43 = L_44;
		Il2CppChar* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppChar* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Il2CppChar L_49 = ___0_value;
		*(Il2CppChar*)L_48 = L_49;
		Il2CppChar* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppChar* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Il2CppChar L_54 = ___0_value;
		*(Il2CppChar*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppChar* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppChar* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Il2CppChar L_64 = ___0_value;
		*(Il2CppChar*)L_63 = L_64;
		Il2CppChar* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Il2CppChar L_69 = ___0_value;
		*(Il2CppChar*)L_68 = L_69;
		Il2CppChar* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppChar* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Il2CppChar L_74 = ___0_value;
		*(Il2CppChar*)L_73 = L_74;
		Il2CppChar* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppChar* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Il2CppChar L_79 = ___0_value;
		*(Il2CppChar*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppChar* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppChar* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Il2CppChar L_85 = ___0_value;
		*(Il2CppChar*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Span_1_ToArray_m3403E698018738391BF349D71C3B53A6942E53DC_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC3849E0C0D3F56F6E60A6CF94A829B5671286935_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3EC9972281C0F59EB1D5E884FA5BD061EEE5298B_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m61CB4E239F4B8535AE2EB854BD18DDFC1142FD07_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11;
		L_11 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_10);
		int32_t L_12 = ___1_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_11, L_12);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m03647096ABFA9C361BD608B88E888E6D24BD45B6_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((uint8_t*)L_1);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_get_Item_m52CBA5BCE5D91D266DC53BC8CAA58B6B838758C9_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_GetPinnableReference_mEFCAEA30D41DF35EEA06996BF69E98951950937B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mCB7BFD6347A5FC9F5C98881FBB6EED05DC7CEAFB_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_0 = __this->____pointer;
		V_0 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m179EE62D8B2DFC60ADF134F7DF0633D7949836EE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_4 = __this->____pointer;
		V_2 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_12 = __this->____pointer;
		V_2 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_18 = L_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_23 = L_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_33 = L_34;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_38 = L_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_43 = L_44;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_48 = L_49;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_63 = L_64;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_68 = L_69;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_73 = L_74;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m312B7E6091A77C90731BB4B3B0F9013A0380E8FE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m222A33CADBBA4AE2718BA2E3FB364B9595A83E5E_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 Span_1_op_Implicit_m37C59BB49FE22493B2449536D2487DC02E45B376_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_0 = ___0_span;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1 = L_0.____pointer;
		V_0 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF2DA66DEE0290DEFDE874C1F418EF5AEB17E8E2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_m0348A44E5418C052C9535570A1DE71BB4AE61E71_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_mE5AD8E826B11284EBF2D856E2D337D31DE34D25B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Span_1_ToArray_m6F8FFA52461A0D5172130CD6B6AF02461326AF5C_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_5);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_7 = __this->____pointer;
		V_0 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB55BD6134EA35A11485DCF408D6D5FFC0BD3F533_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m6962C2A5B1AD4080D5573C23E91A19EB6D728CF7_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_op_Implicit_m9C1413FB618ED0B2E091F5EF63CE03A4C0AEC1A2_gshared (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0037;
	}

IL_0037:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_3);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7F27D45B1D68DA5173A121174DC1B8EEF1D43D5E_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_11;
		L_11 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_10);
		int32_t L_12 = ___1_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_13;
		L_13 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_11, L_12);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3F2D12A6DE9449A7F172A8190B51721D3533512A_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>((uint8_t*)L_1);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Span_1_get_Item_mCE0F47FEF30AFC052EE646724CF0CCA095E61295_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Span_1_GetPinnableReference_m123DCF19CBBED00AF2DA4DF6BB89335CFBAD4285_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1;
		L_1 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m44937991C3C572BAA1C7D8B220198A6D73296EFD_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_0 = __this->____pointer;
		V_0 = L_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mC1DCF00C88E61AB4C769979DAB36C6AC2FD7AC8F_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_4 = __this->____pointer;
		V_2 = L_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_12 = __this->____pointer;
		V_2 = L_12;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_18 = L_19;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_23 = L_24;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_28 = L_29;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_34 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_33 = L_34;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_38 = L_39;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_44 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_43 = L_44;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_49 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_48 = L_49;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_64 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_63 = L_64;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_69 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_68 = L_69;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_74 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_73 = L_74;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_79 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_85 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m9D9E0B986FEB6121776F6E72762BFA348872D32D_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m5751351E4F7B9348F5F42D82F5219BC76C16AEAF_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_1 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC Span_1_op_Implicit_mF3E148EA33236C003117DE38E62DE33D938EC163_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_0 = ___0_span;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1 = L_0.____pointer;
		V_0 = L_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mECADFF7BF87B76EA399CEE34F582D9F58876B9C6_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_1 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_Slice_m7D6809980EE719FEF240C5A1F91ED1F8A49438D6_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_Slice_mC32C0950E410BE1C194BBA46C50AD868A23A25B8_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Span_1_ToArray_mC46741F43EE2A7AF5495CB3595312D25F9E437E5_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1;
		L_1 = Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_5);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_7 = __this->____pointer;
		V_0 = L_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m1BC77A3C37539F0BD54EC0D5E1062B0612D351CA_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mE5B1E8B27CA89868BA83DBD5092B62AB77DF4565_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_op_Implicit_m8E6421CEC98AFF0BFB7F1C0A6796C55428A58195_gshared (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0E8C977484AE4CEA814C03759D41FAD84FB47E66_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___0_array, const RuntimeMethod* method) 
{
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C));
		goto IL_0037;
	}

IL_0037:
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_4;
		L_4 = il2cpp_unsafe_as_ref<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>(L_3);
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m41C56060BA9B6DF40B7B5AB6D1D3266AD6638F05_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_11;
		L_11 = il2cpp_unsafe_as_ref<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>(L_10);
		int32_t L_12 = ___1_start;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_13;
		L_13 = il2cpp_unsafe_add<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,int32_t>(L_11, L_12);
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCFB9EDD5CCC042D56DB08F7AF705891CC9A0CB0E_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_2;
		L_2 = il2cpp_unsafe_as_ref<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>((uint8_t*)L_1);
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCF318D0CF8F484B209D7DE9E5140110C5A62DAA6_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_0 = ___0_ptr;
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* Span_1_get_Item_mB2E83C6DC95B00F0AF85E070CFAE3D12E094DDDD_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_5;
		L_5 = il2cpp_unsafe_add<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* Span_1_GetPinnableReference_mE033EE53EDDA3F829E5B9FD25BEFEEA9B61A3F03_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_1;
		L_1 = il2cpp_unsafe_as_ref<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m198E3B99D8ADEBD2FC2B192D225BBDCD54B4C7AE_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_0 = __this->____pointer;
		V_0 = L_0;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m7769F7B723AD3656E43619A05EAD54106E951795_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_4 = __this->____pointer;
		V_2 = L_4;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_12 = __this->____pointer;
		V_2 = L_12;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_19 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_18 = L_19;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_24 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_23 = L_24;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_29 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_28 = L_29;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_34 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_33 = L_34;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_39 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_38 = L_39;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_44 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_43 = L_44;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_49 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_48 = L_49;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_54 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_64 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_63 = L_64;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_69 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_68 = L_69;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_74 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_73 = L_74;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_79 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_85 = ___0_value;
		*(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA4C3DF11F12F8B857501C8B29EF9B5F72C2792AF_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m98B0DFC72A92D05967DDAE7F09062B759A8ABA78_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 L_2 = ___0_destination;
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_3 = L_2.____pointer;
		V_0 = L_3;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m3EC2574211D7691EA773C784973AD28AC1E3DE9A_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m98B0DFC72A92D05967DDAE7F09062B759A8ABA78_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 L_2 = ___0_destination;
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_3 = L_2.____pointer;
		V_1 = L_3;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_1));
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_5 = __this->____pointer;
		V_1 = L_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1DF6AE153C9116CDB26DE6FFB733F0E83532C7C1 Span_1_op_Implicit_m28B7C245B119C7A07A1F9DB8BC4F5A44227FED01_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 L_0 = ___0_span;
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_1 = L_0.____pointer;
		V_0 = L_1;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1DF6AE153C9116CDB26DE6FFB733F0E83532C7C1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFB348CF3EC0F06D991491C8A6EB1124B54E303B3_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m0150218CA584A63E81BDBDABF6A14A32AAAE06E8_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_5 = __this->____pointer;
		V_1 = L_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 Span_1_Slice_m335008E09D223BDA327B1A0792ADCFC434C7B234_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_5;
		L_5 = il2cpp_unsafe_add<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mCF318D0CF8F484B209D7DE9E5140110C5A62DAA6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 Span_1_Slice_m72FC83DE589B939DA6CF049DA4BBA9159309268F_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_8;
		L_8 = il2cpp_unsafe_add<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mCF318D0CF8F484B209D7DE9E5140110C5A62DAA6_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* Span_1_ToArray_m30689AB7FA7B81459CC4EC11A6541E4A8DE25D72_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_1;
		L_1 = Array_Empty_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mA9417580AF95BD76771CAF619DE618B7E4CA3B70_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_3 = (GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)(GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_6;
		L_6 = il2cpp_unsafe_as_ref<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>(L_5);
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_7 = __this->____pointer;
		V_0 = L_7;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m98B0DFC72A92D05967DDAE7F09062B759A8ABA78_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m9DC1CC51014994F3659527766AE427509DA90766_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m7AC7C87AEBAA20F03AD0340E020AA0DC4CC5849A_gshared (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 Span_1_op_Implicit_m9B54AFB32FD1EB0CDB5C1B360706274279AFB3AF_gshared (GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___0_array, const RuntimeMethod* method) 
{
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_0 = ___0_array;
		Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0E8C977484AE4CEA814C03759D41FAD84FB47E66_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD0058F069C2A9C27135BE3234DCEF617EFED5C45_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		goto IL_0037;
	}

IL_0037:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_4;
		L_4 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>(L_3);
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBC668CC6C66B1BEA41FB2DF07022E7ABC5D71854_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_11;
		L_11 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>(L_10);
		int32_t L_12 = ___1_start;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_13;
		L_13 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_11, L_12);
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m715EB182C34C161B8D2708F8473088CA1DCF314A_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_2;
		L_2 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>((uint8_t*)L_1);
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m01784017261CFE37D608B52EFDB78333C70B71B1_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_ptr;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* Span_1_get_Item_m9D1A9A14965617CDB51EF400813568602BE537B8_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_5;
		L_5 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* Span_1_GetPinnableReference_mD02A97BE9BCF2F934EEC87D1171B341E9EA65485_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_1;
		L_1 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDAAB92D28D538F6BE70CCEB67094C7D7A9AD3291_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_0 = __this->____pointer;
		V_0 = L_0;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mF60D83C13A1B649909C62F13D36AC0BE2D6A260D_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_4 = __this->____pointer;
		V_2 = L_4;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_12 = __this->____pointer;
		V_2 = L_12;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_19 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_18 = L_19;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_24 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_23 = L_24;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_29 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_28 = L_29;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_34 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_33 = L_34;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_39 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_38 = L_39;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_44 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_43 = L_44;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_49 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_48 = L_49;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_54 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_64 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_63 = L_64;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_69 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_68 = L_69;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_74 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_73 = L_74;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_79 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_85 = ___0_value;
		*(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mC1E30A32E4F9B397417B5E4A2CC250A367D87933_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_2 = ___0_destination;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_3 = L_2.____pointer;
		V_0 = L_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m1B1E7FF64395F09F513C7B94334E801CC57AAE58_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_2 = ___0_destination;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_3 = L_2.____pointer;
		V_1 = L_3;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_1));
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5 = __this->____pointer;
		V_1 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 Span_1_op_Implicit_mB18B9D4EF004A0898BE76012D5E7A8026F9BC555_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_0 = ___0_span;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_1 = L_0.____pointer;
		V_0 = L_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m266D6A6B4EB72C49BC4A445A753FC8815A16C430_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5 = __this->____pointer;
		V_1 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB Span_1_Slice_m3CF6A25590201B9D454A3906D8D41CD64A548116_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_5;
		L_5 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m01784017261CFE37D608B52EFDB78333C70B71B1_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB Span_1_Slice_m4C4FCFDB4904D79770EE714D7498D8288B37D011_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_8;
		L_8 = il2cpp_unsafe_add<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m01784017261CFE37D608B52EFDB78333C70B71B1_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* Span_1_ToArray_m454DD0836143C5B9276D27203FF3A4CC24346A6B_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) 
{
	ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_1;
		L_1 = Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_3 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)(GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_6;
		L_6 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>(L_5);
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_7 = __this->____pointer;
		V_0 = L_7;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m8FDAF8F4B5158712CA331BDC6E0637C2AE4FA9AA_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m918DE3DEF7DB37C4C9455B1B8FA01A821FC70EAC_gshared (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB Span_1_op_Implicit_m6684263DBC46E590901E4A8D0D63E02718010458_gshared (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ___0_array;
		Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD0058F069C2A9C27135BE3234DCEF617EFED5C45_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBFA821070152DCE963792BF49F4149519EF08D6C_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, const RuntimeMethod* method) 
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
		goto IL_0037;
	}

IL_0037:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_4;
		L_4 = il2cpp_unsafe_as_ref<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>(L_3);
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m038AE17383C7162C046D9DB3C120804AD5224B3E_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_11;
		L_11 = il2cpp_unsafe_as_ref<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>(L_10);
		int32_t L_12 = ___1_start;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_13;
		L_13 = il2cpp_unsafe_add<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,int32_t>(L_11, L_12);
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m04E0186291C19A8458628830377680A102517923_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_2;
		L_2 = il2cpp_unsafe_as_ref<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>((uint8_t*)L_1);
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m43E7686BAE13FDC47215CFD93B0BD9E0608C03E8_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_ptr;
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* Span_1_get_Item_mD9707BEE29778FB3E40D6327A72C58285EAB0760_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_5;
		L_5 = il2cpp_unsafe_add<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* Span_1_GetPinnableReference_mD7A97CC6F15387C7CF384C93446ACA3D089B6BB8_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_1;
		L_1 = il2cpp_unsafe_as_ref<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1A7F26A760ED0760A30F483EE32D5381DCBC917B_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_0 = __this->____pointer;
		V_0 = L_0;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mB4E2472BD418F22125BAE8CC02464751DDC62864_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_4 = __this->____pointer;
		V_2 = L_4;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_12 = __this->____pointer;
		V_2 = L_12;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_19 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_18 = L_19;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_24 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_23 = L_24;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_29 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_28 = L_29;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_34 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_33 = L_34;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_39 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_38 = L_39;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_44 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_43 = L_44;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_49 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_48 = L_49;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_54 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_64 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_63 = L_64;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_69 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_68 = L_69;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_74 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_73 = L_74;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_79 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_85 = ___0_value;
		*(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mF2D5DCB2EE85F4C8599CA7CAA147C329D708897C_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mDCB11A87D47452BDF30A9959BD9DE00355EA76B7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED L_2 = ___0_destination;
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_3 = L_2.____pointer;
		V_0 = L_3;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mEAB9117A97951C4C2D8E417FC2B4EB6DCF29A5B0_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mDCB11A87D47452BDF30A9959BD9DE00355EA76B7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED L_2 = ___0_destination;
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_3 = L_2.____pointer;
		V_1 = L_3;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_1));
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_5 = __this->____pointer;
		V_1 = L_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8A1348F4C3A23060129619CDBFC51A1D578F958E Span_1_op_Implicit_mE2B0756BFF5BBFAF9E0455E33B4FEBBC3C33BBB4_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED L_0 = ___0_span;
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_1 = L_0.____pointer;
		V_0 = L_1;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t8A1348F4C3A23060129619CDBFC51A1D578F958E L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mF7554269BA0D184EBFFC11423702632060093C66_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m813B5DF6E8CD9E42263507D334F32E10B89B76A5_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_5 = __this->____pointer;
		V_1 = L_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED Span_1_Slice_m29C439BD88E1D08B40764E8FD97EB90CDE10A71D_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_2 = __this->____pointer;
		V_0 = L_2;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_5;
		L_5 = il2cpp_unsafe_add<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m43E7686BAE13FDC47215CFD93B0BD9E0608C03E8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED Span_1_Slice_mA53DB1D60EF080B1A017B58AB38683FAA4CA6625_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_5 = __this->____pointer;
		V_0 = L_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_8;
		L_8 = il2cpp_unsafe_add<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m43E7686BAE13FDC47215CFD93B0BD9E0608C03E8_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* Span_1_ToArray_m6CA08BBD539424B3F1980FEE81155A0913BA722B_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) 
{
	ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_1;
		L_1 = Array_Empty_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mB6BEE3F28FF913ACE838D3009032EB9B7D164785_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_3 = (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)(GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_6;
		L_6 = il2cpp_unsafe_as_ref<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>(L_5);
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_7 = __this->____pointer;
		V_0 = L_7;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mDCB11A87D47452BDF30A9959BD9DE00355EA76B7_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m382DBC92950162CB5681E231CC9ECB11A6C89726_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mA929D90B02B6CBF51D1A425E70F623D3FDC3686D_gshared (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED Span_1_op_Implicit_m57966CBE951E1F5EA3949F85E640FFD981C1CC44_gshared (GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, const RuntimeMethod* method) 
{
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = ___0_array;
		Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mBFA821070152DCE963792BF49F4149519EF08D6C_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5DB422A4A67DE1D7500438180F794F053A172091_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___0_array, const RuntimeMethod* method) 
{
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A));
		goto IL_0037;
	}

IL_0037:
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_4;
		L_4 = il2cpp_unsafe_as_ref<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>(L_3);
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0DF99393ED05B253FFAA8CD592EF6A58166F3A24_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_11;
		L_11 = il2cpp_unsafe_as_ref<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>(L_10);
		int32_t L_12 = ___1_start;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_13;
		L_13 = il2cpp_unsafe_add<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,int32_t>(L_11, L_12);
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m20CB7C45885B8CEBD7E0B126E1710A9F8AD6FBA5_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_2;
		L_2 = il2cpp_unsafe_as_ref<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>((uint8_t*)L_1);
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFA357D292F2DBB9CB9FE919A6489A4843AAA0007_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_0 = ___0_ptr;
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* Span_1_get_Item_m734DFFADC21ED99C4CA6877EE096A6C25E276A4E_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_2 = __this->____pointer;
		V_0 = L_2;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_5;
		L_5 = il2cpp_unsafe_add<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* Span_1_GetPinnableReference_m61A1E93532465E5D95ACA224814403F0D602D798_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_1;
		L_1 = il2cpp_unsafe_as_ref<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_2 = __this->____pointer;
		V_0 = L_2;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mFE3A2DC7DBECB484F999F8DF43200094C854E510_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_0 = __this->____pointer;
		V_0 = L_0;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m7AF6F8CE0E7E581973C45E439DE74BD0E5652F29_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_4 = __this->____pointer;
		V_2 = L_4;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_12 = __this->____pointer;
		V_2 = L_12;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_19 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_18 = L_19;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_24 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_23 = L_24;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_29 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_28 = L_29;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_34 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_33 = L_34;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_39 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_38 = L_39;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_44 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_43 = L_44;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_49 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_48 = L_49;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_54 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_64 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_63 = L_64;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_69 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_68 = L_69;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_74 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_73 = L_74;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_79 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_85 = ___0_value;
		*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mB35EA498A887D15FA4A1B4DA91DDD269B0F5D8D8_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m2F1A0C29E36FCC0087181D97C6297CB7BA9B0B49_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E L_2 = ___0_destination;
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_3 = L_2.____pointer;
		V_0 = L_3;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_5 = __this->____pointer;
		V_0 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mA1701CC96DB3F317A27BEF7F23F045C41AC0C8E9_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m2F1A0C29E36FCC0087181D97C6297CB7BA9B0B49_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E L_2 = ___0_destination;
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_3 = L_2.____pointer;
		V_1 = L_3;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_1));
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_5 = __this->____pointer;
		V_1 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1065F282D1607B9C0CFC26246CE2A0CFECDB54ED Span_1_op_Implicit_m2903682A266ABA9AEC843FE9ECBDEDCF3697692E_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E L_0 = ___0_span;
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_1 = L_0.____pointer;
		V_0 = L_1;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1065F282D1607B9C0CFC26246CE2A0CFECDB54ED L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m7494C6B741618D5EBFAE013D7A63850A239D0515_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m870BF95BAA7E69F8F748A5FBA30E25F5737D7CC4_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_5 = __this->____pointer;
		V_1 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E Span_1_Slice_m8860D33D33AD2BD9B9BD6E7377BAFFF3CA589459_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_2 = __this->____pointer;
		V_0 = L_2;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_5;
		L_5 = il2cpp_unsafe_add<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mFA357D292F2DBB9CB9FE919A6489A4843AAA0007_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E Span_1_Slice_m94C010D9F629EB4CE18E1CADA46B260B582A4048_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_5 = __this->____pointer;
		V_0 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_8;
		L_8 = il2cpp_unsafe_add<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mFA357D292F2DBB9CB9FE919A6489A4843AAA0007_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* Span_1_ToArray_mE669F6C9BAEDACB91CFB3E8FAD63B8ED7749ECA7_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) 
{
	ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_1;
		L_1 = Array_Empty_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m7E28DFEC5646951BAD0650AD6EA00892E5229B8E_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_3 = (GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_6;
		L_6 = il2cpp_unsafe_as_ref<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>(L_5);
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_7 = __this->____pointer;
		V_0 = L_7;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m2F1A0C29E36FCC0087181D97C6297CB7BA9B0B49_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m44B568AC6103A06BA97881657D00BAFB42EE77BF_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mEDDF3F78040BF4A7A94AB0936DD3CFCB00B8690D_gshared (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E Span_1_op_Implicit_m83AAEE97C8194492F3EF6A678C445AE4C6A24CC6_gshared (GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___0_array, const RuntimeMethod* method) 
{
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_0 = ___0_array;
		Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m5DB422A4A67DE1D7500438180F794F053A172091_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA4609CB96F1BCFBDFE86DE2E137430CECA9824A7_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, const RuntimeMethod* method) 
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		goto IL_0037;
	}

IL_0037:
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_4;
		L_4 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>(L_3);
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8EF90DDC9AC42AF0F9A78EC711C91360923A8239_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_11;
		L_11 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>(L_10);
		int32_t L_12 = ___1_start;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_13;
		L_13 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_11, L_12);
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDB6A665224E7A8A70ADF97B32825513670C06E69_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_2;
		L_2 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>((uint8_t*)L_1);
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFC5891F59FE866DD2C693446B5D11CF9A8D84591_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_0 = ___0_ptr;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* Span_1_get_Item_mE722009F0A1D8F2E3227E90584C16504D54B2F6C_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_2 = __this->____pointer;
		V_0 = L_2;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_5;
		L_5 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* Span_1_GetPinnableReference_mA7A468402199D107290786811C8E84ED6754A7CB_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_1;
		L_1 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_2 = __this->____pointer;
		V_0 = L_2;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m87E72DABD7067B2EC8C5736E5C20A18033B97D64_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_0 = __this->____pointer;
		V_0 = L_0;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mE55BE5D02CDAA5EFF871F3FEFFDF08E3F5297D68_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_4 = __this->____pointer;
		V_2 = L_4;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_12 = __this->____pointer;
		V_2 = L_12;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_19 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_18 = L_19;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_24 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_23 = L_24;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_29 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_28 = L_29;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_34 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_33 = L_34;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_39 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_38 = L_39;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_44 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_43 = L_44;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_49 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_48 = L_49;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_54 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_64 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_63 = L_64;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_69 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_68 = L_69;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_74 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_73 = L_74;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_79 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 L_85 = ___0_value;
		*(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m59ACB171CAC1C0E2F57AD51C29D7B3BB3B11BD32_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_2 = ___0_destination;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_3 = L_2.____pointer;
		V_0 = L_3;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5 = __this->____pointer;
		V_0 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mD238F01563C482CFE283ED280FC6DC9EA46B5924_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_2 = ___0_destination;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_3 = L_2.____pointer;
		V_1 = L_3;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_1));
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5 = __this->____pointer;
		V_1 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 Span_1_op_Implicit_mF76E43344024EBD94942CC885A4E96FE10E8B770_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_0 = ___0_span;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_1 = L_0.____pointer;
		V_0 = L_1;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m1F5E07F551814D21E1CAA085F32CE7E808E65085_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5 = __this->____pointer;
		V_1 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C Span_1_Slice_m3D0A267B95E6A706EA432932ED68EA5F7E233BCA_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_2 = __this->____pointer;
		V_0 = L_2;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_5;
		L_5 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mFC5891F59FE866DD2C693446B5D11CF9A8D84591_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C Span_1_Slice_m001C776D9B5BB9BADD7551C21F63DD844E6838D7_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5 = __this->____pointer;
		V_0 = L_5;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_8;
		L_8 = il2cpp_unsafe_add<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mFC5891F59FE866DD2C693446B5D11CF9A8D84591_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Span_1_ToArray_m955DDBD21AF8A174FA6CC6D381DF7600E58BA463_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_1;
		L_1 = Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_3 = (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*)(HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_6;
		L_6 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>(L_5);
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_7 = __this->____pointer;
		V_0 = L_7;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mD91089540E3095B873699911568BFE678291D125_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m8E2491B972FC15F0641BC8DC4D1B54D64A0F0CCC_gshared (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C Span_1_op_Implicit_mE0D61ACE0BA350E1FFC49D96307D39BFC6AF7581_gshared (HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, const RuntimeMethod* method) 
{
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ___0_array;
		Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA4609CB96F1BCFBDFE86DE2E137430CECA9824A7_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2E4001B0685A2709351E6B5DEB47BAC4DCCD8BFF_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___0_array, const RuntimeMethod* method) 
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
		goto IL_0037;
	}

IL_0037:
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_4;
		L_4 = il2cpp_unsafe_as_ref<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>(L_3);
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB36A8632A4F91C84136D84CC257C2415F907F054_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_11;
		L_11 = il2cpp_unsafe_as_ref<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>(L_10);
		int32_t L_12 = ___1_start;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_13;
		L_13 = il2cpp_unsafe_add<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,int32_t>(L_11, L_12);
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1AB4CE6037D0E2832005C50921E2F96C84EAC593_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_2;
		L_2 = il2cpp_unsafe_as_ref<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>((uint8_t*)L_1);
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m14B5C41E6108AE31A4221388EA57750EFF488674_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___0_ptr;
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* Span_1_get_Item_m3D4D08D287E8D3CA1082AE8162A41BABA231CB9B_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_2 = __this->____pointer;
		V_0 = L_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_5;
		L_5 = il2cpp_unsafe_add<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* Span_1_GetPinnableReference_m7CDF4396A96C600B9E7696EC23E5482493AB28EC_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1;
		L_1 = il2cpp_unsafe_as_ref<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_2 = __this->____pointer;
		V_0 = L_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m136A060B2D86CD40F43BEA099A8837C9F6F3F81B_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_0 = __this->____pointer;
		V_0 = L_0;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mF64D4F67DD5ACFBB40DF1E921501AB0C6A464C31_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_4 = __this->____pointer;
		V_2 = L_4;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_12 = __this->____pointer;
		V_2 = L_12;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_19 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_18 = L_19;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_24 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_23 = L_24;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_29 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_28 = L_29;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_34 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_33 = L_34;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_39 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_38 = L_39;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_44 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_43 = L_44;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_49 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_48 = L_49;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_54 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_64 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_63 = L_64;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_69 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_68 = L_69;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_74 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_73 = L_74;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_79 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_85 = ___0_value;
		*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m5865AF6C72CD610C3948F539613D7D8F9F5868D4_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1CEEA1A4BA2EB646865F90F7BD5C46209BEA26EC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 L_2 = ___0_destination;
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_3 = L_2.____pointer;
		V_0 = L_3;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_5 = __this->____pointer;
		V_0 = L_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m5FF00A83B5115A578BEE361BEC0202D81703A6BC(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m1267BC3943CD2CC00863C3178B183C76A2E7299B_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1CEEA1A4BA2EB646865F90F7BD5C46209BEA26EC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 L_2 = ___0_destination;
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_3 = L_2.____pointer;
		V_1 = L_3;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_1));
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_5 = __this->____pointer;
		V_1 = L_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m5FF00A83B5115A578BEE361BEC0202D81703A6BC(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tFE3CA93744D44567C2C1E4BA734A729A9C575D10 Span_1_op_Implicit_m8088F4D9208D9C3D6A2CDA8B5D5C11F51444B74E_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 L_0 = ___0_span;
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_1 = L_0.____pointer;
		V_0 = L_1;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tFE3CA93744D44567C2C1E4BA734A729A9C575D10 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mF5B8E0FE49AC321E09A8B94E9C69BD6E4B258C73_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m4FFA6831DB369C6809BEC6705920461044CBD8D4_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_5 = __this->____pointer;
		V_1 = L_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 Span_1_Slice_mA218ECACF45B4231D5140362F904ABFF7EC9DD4A_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_2 = __this->____pointer;
		V_0 = L_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_5;
		L_5 = il2cpp_unsafe_add<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m14B5C41E6108AE31A4221388EA57750EFF488674_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 Span_1_Slice_m10D57BB737830B955E30259D7251A409CBA9A55E_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_5 = __this->____pointer;
		V_0 = L_5;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_8;
		L_8 = il2cpp_unsafe_add<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m14B5C41E6108AE31A4221388EA57750EFF488674_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* Span_1_ToArray_mF483E1389D4F0CB4858CD5CD50837A99027DC469_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_1;
		L_1 = Array_Empty_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m54CAA3DB217D0D9A1A3A21DD50883B6C3BD03F48_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_3 = (InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63*)(InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_6;
		L_6 = il2cpp_unsafe_as_ref<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>(L_5);
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_7 = __this->____pointer;
		V_0 = L_7;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m5FF00A83B5115A578BEE361BEC0202D81703A6BC(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1CEEA1A4BA2EB646865F90F7BD5C46209BEA26EC_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m8804DCDDD5D2EB20EB474FCA38A840D4B7AC4588_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m80F311EECAAF530154BB2856CED8093A353F3A5D_gshared (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 Span_1_op_Implicit_mF405C9913DAB504A429DFC66B3CEA6F6CFB32FA0_gshared (InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___0_array, const RuntimeMethod* method) 
{
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_0 = ___0_array;
		Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m2E4001B0685A2709351E6B5DEB47BAC4DCCD8BFF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE5D19FF7B2CED496CE41333FF842F490D1F14C03_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int32_t>(L_10);
		int32_t L_12 = ___1_start;
		int32_t* L_13;
		L_13 = il2cpp_unsafe_add<int32_t,int32_t>(L_11, L_12);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_get_Item_m9272911ACF4FC0A82F6053A0DE22CEBC8C10D4E0_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_GetPinnableReference_mF920821F83971F1D7D3E554CAD596D5902754811_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m36EEDEB219123208E625AC1446BC03AB5A21A001_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_0 = __this->____pointer;
		V_0 = L_0;
		int32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m0911D9EBB79D74E3F1442C095DEDB346CBE87340_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_4 = __this->____pointer;
		V_2 = L_4;
		int32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_12 = __this->____pointer;
		V_2 = L_12;
		int32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int32_t L_19 = ___0_value;
		*(int32_t*)L_18 = L_19;
		int32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int32_t L_24 = ___0_value;
		*(int32_t*)L_23 = L_24;
		int32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int32_t L_29 = ___0_value;
		*(int32_t*)L_28 = L_29;
		int32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int32_t L_34 = ___0_value;
		*(int32_t*)L_33 = L_34;
		int32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int32_t L_39 = ___0_value;
		*(int32_t*)L_38 = L_39;
		int32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int32_t L_44 = ___0_value;
		*(int32_t*)L_43 = L_44;
		int32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int32_t L_49 = ___0_value;
		*(int32_t*)L_48 = L_49;
		int32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int32_t L_54 = ___0_value;
		*(int32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int32_t L_64 = ___0_value;
		*(int32_t*)L_63 = L_64;
		int32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int32_t L_69 = ___0_value;
		*(int32_t*)L_68 = L_69;
		int32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int32_t L_74 = ___0_value;
		*(int32_t*)L_73 = L_74;
		int32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int32_t L_79 = ___0_value;
		*(int32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int32_t L_85 = ___0_value;
		*(int32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 Span_1_op_Implicit_m2740023916201D5EB04C52CEB9FB3E175E79FE7A_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_span;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1 = L_0.____pointer;
		V_0 = L_1;
		int32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m71CB64722D92C563993B18D00317C1A3929D259B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_mEE3E0DF3B0F4D4D2A6CE3587C2919CD859EF4973_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m1756B3F9D59F21477044E6EE24B20B51BB216F31_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mBB9141DEAC1EA44851C84E0A12B1A3136460B0D4_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		goto IL_0037;
	}

IL_0037:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		intptr_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<intptr_t>(L_3);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m19BF27578A3929BF51739C8DE72736E0B90E0A06_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		intptr_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<intptr_t>(L_10);
		int32_t L_12 = ___1_start;
		intptr_t* L_13;
		L_13 = il2cpp_unsafe_add<intptr_t,int32_t>(L_11, L_12);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1B534D079529960137BFAD24CB9A53E5CC96DCC6_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>((uint8_t*)L_1);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_ptr;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Span_1_get_Item_m8D779F6DBC4D27FC745C8A87E520C09895EAAA37_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Span_1_GetPinnableReference_m75C665E343CCDE131647F0F089008D0DBDBDF8A0_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<intptr_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m463CEF8436AF187272FD7BCBA50A99990D680A08_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_0 = __this->____pointer;
		V_0 = L_0;
		intptr_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<intptr_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m433F1D45EE529EFE032E81CF4ECA1CC829E7006D_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	intptr_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<intptr_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_4 = __this->____pointer;
		V_2 = L_4;
		intptr_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_12 = __this->____pointer;
		V_2 = L_12;
		intptr_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<intptr_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		intptr_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		intptr_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		intptr_t L_19 = ___0_value;
		*(intptr_t*)L_18 = L_19;
		intptr_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		intptr_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		intptr_t L_24 = ___0_value;
		*(intptr_t*)L_23 = L_24;
		intptr_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		intptr_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		intptr_t L_29 = ___0_value;
		*(intptr_t*)L_28 = L_29;
		intptr_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		intptr_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		intptr_t L_34 = ___0_value;
		*(intptr_t*)L_33 = L_34;
		intptr_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		intptr_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		intptr_t L_39 = ___0_value;
		*(intptr_t*)L_38 = L_39;
		intptr_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		intptr_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		intptr_t L_44 = ___0_value;
		*(intptr_t*)L_43 = L_44;
		intptr_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		intptr_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		intptr_t L_49 = ___0_value;
		*(intptr_t*)L_48 = L_49;
		intptr_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		intptr_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		intptr_t L_54 = ___0_value;
		*(intptr_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		intptr_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		intptr_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		intptr_t L_64 = ___0_value;
		*(intptr_t*)L_63 = L_64;
		intptr_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		intptr_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		intptr_t L_69 = ___0_value;
		*(intptr_t*)L_68 = L_69;
		intptr_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		intptr_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		intptr_t L_74 = ___0_value;
		*(intptr_t*)L_73 = L_74;
		intptr_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		intptr_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		intptr_t L_79 = ___0_value;
		*(intptr_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		intptr_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		intptr_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		intptr_t L_85 = ___0_value;
		*(intptr_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA2C7AEB7FB3D5C890DC57D8BB69AE4D7C239CE49_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_0 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m44ABFD3D4731222319AEDAEFEE8AA10E742D4A14_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_1 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_1 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC Span_1_op_Implicit_mFE580AC9CB6EEBB7EC9280AC9A61BBE656EA76C2_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_0 = ___0_span;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1 = L_0.____pointer;
		V_0 = L_1;
		intptr_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m2F4953F51578C15DF606507238D710205019E0D2_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_1 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 Span_1_Slice_m9CDBFE2D552F421EFE2F11AA6EA190D3B7E471AC_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 Span_1_Slice_m1130A040ED84EAA1F6675CCDC8B6A5664266BB95_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		intptr_t* L_8;
		L_8 = il2cpp_unsafe_add<intptr_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Span_1_ToArray_m943618138CD1D4AFACD6D3E92578E3C446C1E531_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1;
		L_1 = Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		intptr_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<intptr_t>(L_5);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_7 = __this->____pointer;
		V_0 = L_7;
		intptr_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m777599FCB3554E547EE9B6BAD7319A71E2F7B4CE_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m994471F86102D7FA8160BAC8EF25941D20845232_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 Span_1_op_Implicit_mBBEB8AD9962B5671A463EAD34E4559D7D9F9E80D_gshared (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0F53AAE57478654CCAC6268F976F3B6F55FF42A5_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_array, const RuntimeMethod* method) 
{
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0));
		goto IL_0037;
	}

IL_0037:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_4;
		L_4 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>(L_3);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m29F9BFD8D3712A54E8866A8B1D0B2F061A41479B_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_11;
		L_11 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>(L_10);
		int32_t L_12 = ___1_start;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_13;
		L_13 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_11, L_12);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8738969A09F3E294FE020AC78D512A8762CF54A6_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_2;
		L_2 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>((uint8_t*)L_1);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA0DAD24F2B4249A5B3E4EF2B7B4627B781D80775_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_ptr;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* Span_1_get_Item_mEDAFCE89521560DC231127AC36A7687D61C32008_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_2 = __this->____pointer;
		V_0 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_5;
		L_5 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* Span_1_GetPinnableReference_m6BD93C0466F5DE7D2111283F7D036D7791E17ECF_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_1;
		L_1 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_2 = __this->____pointer;
		V_0 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m019D950E84462134C1693504C461C16F42EE4DFE_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_0 = __this->____pointer;
		V_0 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mCC5737BCBED6FB31CBBF6EF64696F1C889F40C43_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_4 = __this->____pointer;
		V_2 = L_4;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_12 = __this->____pointer;
		V_2 = L_12;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_19 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_18 = L_19;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_24 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_23 = L_24;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_29 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_28 = L_29;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_34 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_33 = L_34;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_39 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_38 = L_39;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_44 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_43 = L_44;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_49 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_48 = L_49;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_54 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_64 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_63 = L_64;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_69 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_68 = L_69;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_74 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_73 = L_74;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_79 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_85 = ___0_value;
		*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD433806DB7F817F788CBF68855681E13A00204B5_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_2 = ___0_destination;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_3 = L_2.____pointer;
		V_0 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5 = __this->____pointer;
		V_0 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m80F3BFBF09EBF7B27631E48A39F779B4845C826E_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_2 = ___0_destination;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_3 = L_2.____pointer;
		V_1 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_1));
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5 = __this->____pointer;
		V_1 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 Span_1_op_Implicit_m2E89EBF6B4FB9DE07BEB63A9B2BEBFC6D74202FF_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_0 = ___0_span;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_1 = L_0.____pointer;
		V_0 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m1C03FB073111E60636D2FB11A90E41B2F673309B_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5 = __this->____pointer;
		V_1 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 Span_1_Slice_m159CB56F2471C1D225C31F75B189607B02BD9FA5_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_2 = __this->____pointer;
		V_0 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_5;
		L_5 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA0DAD24F2B4249A5B3E4EF2B7B4627B781D80775_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 Span_1_Slice_m3600CD4383F49784F6D4A5213AB1B27B3015D95A_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5 = __this->____pointer;
		V_0 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_8;
		L_8 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA0DAD24F2B4249A5B3E4EF2B7B4627B781D80775_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Span_1_ToArray_m3A166501793DDF0D07C7FE8393C01BA3B46FCDA0_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1;
		L_1 = Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>(L_5);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_7 = __this->____pointer;
		V_0 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m4D84B0D566294AA1C2C08AB9A56B64F81287BC2F_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m43664366887F9754DA86F8DEE91A0FFAF2603E2D_gshared (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 Span_1_op_Implicit_mCA9B9BE25B1427A3A47C81C2488D245157AB1709_gshared (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_array, const RuntimeMethod* method) 
{
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ___0_array;
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0F53AAE57478654CCAC6268F976F3B6F55FF42A5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m689316B76A1D5D0211962EFD3C91CD4948F25DD7_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607));
		goto IL_0037;
	}

IL_0037:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_4;
		L_4 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>(L_3);
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC137BDF19153024C0A6B6724A1B398B52609B9E4_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_11;
		L_11 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>(L_10);
		int32_t L_12 = ___1_start;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_13;
		L_13 = il2cpp_unsafe_add<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,int32_t>(L_11, L_12);
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m470F2D1C376F672AD7385840036E5E3FDA7BCD29_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_2;
		L_2 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>((uint8_t*)L_1);
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m43EE10EE280FBCD3004A085D1CFFADDEA0E755F5_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_ptr;
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* Span_1_get_Item_m3CA5E08666DD78EA19F9426A88FA5138A42676B5_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_2 = __this->____pointer;
		V_0 = L_2;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_5;
		L_5 = il2cpp_unsafe_add<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* Span_1_GetPinnableReference_m0449122345FC10C94383401271369C7EBF460E2B_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_1;
		L_1 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_2 = __this->____pointer;
		V_0 = L_2;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m43144F849CC539F62D657742A77A968EC105CF81_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_0 = __this->____pointer;
		V_0 = L_0;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m10C22FF7F850BAC822201E4E908C46316E511BB1_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_4 = __this->____pointer;
		V_2 = L_4;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_12 = __this->____pointer;
		V_2 = L_12;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_19 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_18 = L_19;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_24 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_23 = L_24;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_29 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_28 = L_29;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_34 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_33 = L_34;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_39 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_38 = L_39;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_44 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_43 = L_44;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_49 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_48 = L_49;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_54 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_64 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_63 = L_64;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_69 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_68 = L_69;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_74 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_73 = L_74;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_79 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_85 = ___0_value;
		*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m8E7D9661BC6DA6D7C4738B7E318E0F5EB19BA052_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63C97A1814997E727ACBCD8B8D88029EDDEAB0AD_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_2 = ___0_destination;
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_3 = L_2.____pointer;
		V_0 = L_3;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_5 = __this->____pointer;
		V_0 = L_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m6771C75EBD3A749818F977FE4B1C9B72667EFF90_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63C97A1814997E727ACBCD8B8D88029EDDEAB0AD_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_2 = ___0_destination;
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_3 = L_2.____pointer;
		V_1 = L_3;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_5 = __this->____pointer;
		V_1 = L_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5690DF65D559F423F84EB5FB4D46535C4F57465A Span_1_op_Implicit_m9506F4039B2784E165EA151F7BD73BEB862D1DBA_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_0 = ___0_span;
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_1 = L_0.____pointer;
		V_0 = L_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t5690DF65D559F423F84EB5FB4D46535C4F57465A L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mF497722F4A2ADC10A3E2B47C6CAEA267A3B9E7C1_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
// Method Definition Index: 2351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m884F678D8C1738BD95E339B3DA2A446B31D8DC24_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_5 = __this->____pointer;
		V_1 = L_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 Span_1_Slice_m768FA5E266DFB77520AA266C84D28FBD60E22750_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_2 = __this->____pointer;
		V_0 = L_2;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_5;
		L_5 = il2cpp_unsafe_add<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m43EE10EE280FBCD3004A085D1CFFADDEA0E755F5_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
// Method Definition Index: 2353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 Span_1_Slice_m0F12ADF4017DBB603DCE9DEB9A05CDDFC5774281_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_5 = __this->____pointer;
		V_0 = L_5;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_8;
		L_8 = il2cpp_unsafe_add<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m43EE10EE280FBCD3004A085D1CFFADDEA0E755F5_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
// Method Definition Index: 2354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Span_1_ToArray_m90C475E472A2E9FCA3B8AF1A903B10C61E09F07A_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_1;
		L_1 = Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_3 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)(MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_6;
		L_6 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>(L_5);
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_7 = __this->____pointer;
		V_0 = L_7;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63C97A1814997E727ACBCD8B8D88029EDDEAB0AD_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m19B9F115594F8BF67BCD9360CB65606A2942B922_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mF1AEB154C8C4542643595C29906A9392196257B7_gshared (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 Span_1_op_Implicit_mE208F95BD5E2EC5F218743653467F3CB8459F73B_gshared (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ___0_array;
		Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m689316B76A1D5D0211962EFD3C91CD4948F25DD7_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 3073
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_gshared_inline (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_ptr;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_ptr;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ((EmptyArray_1_t5DEA403BAFDC5AC2F35C8826395BF35F76EAE720_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = V_0;
		if (L_1.___hasValue)
		{
			goto IL_0037;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_2 = ___0_array;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_7 = ___0_array;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_9;
		L_9 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_8);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer = L_10;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_11 = ___0_array;
		NullCheck(L_11);
		__this->____length = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_gshared_inline (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_ptr;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_ptr;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ((EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) 
{
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		goto IL_0037;
	}

IL_0037:
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_3);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ((EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ((EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0037;
	}

IL_0037:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_3);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m98B0DFC72A92D05967DDAE7F09062B759A8ABA78_gshared_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFB348CF3EC0F06D991491C8A6EB1124B54E303B3_gshared_inline (ReadOnlySpan_1_t1DF6AE153C9116CDB26DE6FFB733F0E83532C7C1* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_0 = ___0_ptr;
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCF318D0CF8F484B209D7DE9E5140110C5A62DAA6_gshared_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_0 = ___0_ptr;
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* Array_Empty_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mA9417580AF95BD76771CAF619DE618B7E4CA3B70_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_0 = ((EmptyArray_1_t1A0E03DC7ADACA8049967CCD47795725164DAD75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0E8C977484AE4CEA814C03759D41FAD84FB47E66_gshared_inline (Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16* __this, GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* ___0_array, const RuntimeMethod* method) 
{
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t57781A3F32AB56E9DA9D5759B20FED47C02E7F16));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C));
		goto IL_0037;
	}

IL_0037:
	{
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_4;
		L_4 = il2cpp_unsafe_as_ref<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>(L_3);
		ByReference_1_t4AECED8ECE50D8BB0D7E3F2DD36A95F4E855AC8A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GlyphMarshallingStructU5BU5D_t9424A4B1FAAD615472A9346208026B1B9E22069E* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m46110E6E80C812419F09D0E502B0DB9C02CC2032_gshared_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1DC7A6D7908C64B835E06B25D082B370AE4D8868_gshared_inline (ReadOnlySpan_1_t20C495E4C7CB15A9F59133F99FEE748E87419032* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_ptr;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m01784017261CFE37D608B52EFDB78333C70B71B1_gshared_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_ptr;
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* Array_Empty_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m8F21DBCF706805C9334C0B519513BA4F39EA3A95_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ((EmptyArray_1_t66497C3DB84E7A464A5EB5259FF8E3CE44C961D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD0058F069C2A9C27135BE3234DCEF617EFED5C45_gshared_inline (Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDD3D36EA71A0FA5E312BCAAEBA4D2C75A09A35BB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
		goto IL_0037;
	}

IL_0037:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_4;
		L_4 = il2cpp_unsafe_as_ref<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>(L_3);
		ByReference_1_t122BEC15B781B16B839452D3915CDEE6A538099E L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mDCB11A87D47452BDF30A9959BD9DE00355EA76B7_gshared_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF7554269BA0D184EBFFC11423702632060093C66_gshared_inline (ReadOnlySpan_1_t8A1348F4C3A23060129619CDBFC51A1D578F958E* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_ptr;
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m43E7686BAE13FDC47215CFD93B0BD9E0608C03E8_gshared_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_ptr;
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* Array_Empty_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mB6BEE3F28FF913ACE838D3009032EB9B7D164785_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = ((EmptyArray_1_tC4BFBF048349F7AC41440D09E233091E7E991C86_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBFA821070152DCE963792BF49F4149519EF08D6C_gshared_inline (Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, const RuntimeMethod* method) 
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t92443C2E980C2C8E98C8AEE07EE9B1ECF96EE7ED));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
		goto IL_0037;
	}

IL_0037:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_4;
		L_4 = il2cpp_unsafe_as_ref<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>(L_3);
		ByReference_1_t06ECA2FE60B5A2EAC036588EB4FBE2AEE0B87718 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m2F1A0C29E36FCC0087181D97C6297CB7BA9B0B49_gshared_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7494C6B741618D5EBFAE013D7A63850A239D0515_gshared_inline (ReadOnlySpan_1_t1065F282D1607B9C0CFC26246CE2A0CFECDB54ED* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_0 = ___0_ptr;
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFA357D292F2DBB9CB9FE919A6489A4843AAA0007_gshared_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_0 = ___0_ptr;
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* Array_Empty_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m7E28DFEC5646951BAD0650AD6EA00892E5229B8E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_0 = ((EmptyArray_1_t808728B28E4489C4B70DC53CE9F7A39F04CE1256_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5DB422A4A67DE1D7500438180F794F053A172091_gshared_inline (Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E* __this, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___0_array, const RuntimeMethod* method) 
{
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t487E7C1202D35C5F26D71C04B8D5DCA5BA084B4E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A));
		goto IL_0037;
	}

IL_0037:
	{
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_4;
		L_4 = il2cpp_unsafe_as_ref<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>(L_3);
		ByReference_1_t55AEAD350B9DEA6F2FDFC4545A58139FA8051ECF L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACFA990EBDB62FB610B90BE0AA456F1F0C5F0C9D_gshared_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAA67B98A40E34097F4E59A93314926C5952A71EE_gshared_inline (ReadOnlySpan_1_tFC59241F668A3345A28B285A021DEF96D5FBDD97* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_0 = ___0_ptr;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFC5891F59FE866DD2C693446B5D11CF9A8D84591_gshared_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_0 = ___0_ptr;
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* Array_Empty_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m706F26FDE3D55E478AE8D88D0CA5AE597D17F184_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ((EmptyArray_1_tEE36C124EB5EC64529EC1C4323F97E3809663182_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA4609CB96F1BCFBDFE86DE2E137430CECA9824A7_gshared_inline (Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C* __this, HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* ___0_array, const RuntimeMethod* method) 
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t4160468FA952AB0B913B4266664FBF615F7BBA0C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704));
		goto IL_0037;
	}

IL_0037:
	{
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_4;
		L_4 = il2cpp_unsafe_as_ref<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>(L_3);
		ByReference_1_t31CA36E8FE24DEB2A6109B5BE2A9681622FDCAEA L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		HierarchyNodeU5BU5D_t58C5014EDF77A3B09F6BA5DEE95D32133F935DB2* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1CEEA1A4BA2EB646865F90F7BD5C46209BEA26EC_gshared_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF5B8E0FE49AC321E09A8B94E9C69BD6E4B258C73_gshared_inline (ReadOnlySpan_1_tFE3CA93744D44567C2C1E4BA734A729A9C575D10* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___0_ptr;
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m14B5C41E6108AE31A4221388EA57750EFF488674_gshared_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___0_ptr;
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* Array_Empty_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m54CAA3DB217D0D9A1A3A21DD50883B6C3BD03F48_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_0 = ((EmptyArray_1_t74D2AE78900063F22AD7B348C4BEA2F043A3EB7D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2E4001B0685A2709351E6B5DEB47BAC4DCCD8BFF_gshared_inline (Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0* __this, InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___0_array, const RuntimeMethod* method) 
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tE292A2415489F6B955AF446ED31BF6F44C6C7AC0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
		goto IL_0037;
	}

IL_0037:
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_4;
		L_4 = il2cpp_unsafe_as_ref<InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD>(L_3);
		ByReference_1_t3044FA4658050859DE87B639F06FD401863BC7C7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_gshared_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_ptr;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_ptr;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		goto IL_0037;
	}

IL_0037:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		intptr_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<intptr_t>(L_3);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_gshared_inline (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_ptr;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA0DAD24F2B4249A5B3E4EF2B7B4627B781D80775_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_ptr;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ((EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F53AAE57478654CCAC6268F976F3B6F55FF42A5_gshared_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_array, const RuntimeMethod* method) 
{
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0));
		goto IL_0037;
	}

IL_0037:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_4;
		L_4 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>(L_3);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2355
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63C97A1814997E727ACBCD8B8D88029EDDEAB0AD_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF497722F4A2ADC10A3E2B47C6CAEA267A3B9E7C1_gshared_inline (ReadOnlySpan_1_t5690DF65D559F423F84EB5FB4D46535C4F57465A* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_ptr;
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m43EE10EE280FBCD3004A085D1CFFADDEA0E755F5_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_ptr;
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3122
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* Array_Empty_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m84B026E0A5A5AE364D8FDFAC3E77AAA208D815C3_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ((EmptyArray_1_tAC344C0CB3A1178A06D7E53BD6CA11847AB83524_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m689316B76A1D5D0211962EFD3C91CD4948F25DD7_gshared_inline (Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5A85666A3391884323242EBB5A4D600B485A4F36));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607));
		goto IL_0037;
	}

IL_0037:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_4;
		L_4 = il2cpp_unsafe_as_ref<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>(L_3);
		ByReference_1_t9C9E850B1838401A9B324F01933B01DC4AA7AD9A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
