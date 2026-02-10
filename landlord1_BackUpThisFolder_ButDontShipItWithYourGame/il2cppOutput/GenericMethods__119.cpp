#include "pch-cpp.hpp"





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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5;
struct TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77;
struct TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE;
struct TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B;
struct TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6;
struct TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208;
struct TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F;
struct TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F;
struct TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C;
struct TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244;
struct TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ConverterKeyComparer_t204523C3EB04B7681EC88C456FBB52B49F1B1F49;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310  : public RuntimeObject
{
};
struct TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728  : public RuntimeObject
{
};
struct TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3  : public RuntimeObject
{
};
struct TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751  : public RuntimeObject
{
};
struct TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E  : public RuntimeObject
{
};
struct TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F  : public RuntimeObject
{
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283  : public RuntimeObject
{
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B  : public RuntimeObject
{
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9  : public RuntimeObject
{
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
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
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
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252* ___m_Converters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252* ___m_Converters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_t7435E0A6BB912EFCADBAA36CAA714C74250C3252* ___m_Converters;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 
{
	uint64_t ___a;
	uint64_t ___b;
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
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B 
{
	int32_t ___instanceId;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
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
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
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
#pragma pack(push, tp, 1)
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_OffsetPadding[112];
					uint8_t ___byte0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_OffsetPadding[113];
					uint8_t ___byte0113;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_OffsetPadding[114];
					uint8_t ___byte0114;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_OffsetPadding[115];
					uint8_t ___byte0115;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_OffsetPadding[116];
					uint8_t ___byte0116;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_OffsetPadding[117];
					uint8_t ___byte0117;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_OffsetPadding[118];
					uint8_t ___byte0118;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_OffsetPadding[119];
					uint8_t ___byte0119;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_OffsetPadding[120];
					uint8_t ___byte0120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_OffsetPadding[121];
					uint8_t ___byte0121;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_OffsetPadding[122];
					uint8_t ___byte0122;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_OffsetPadding[123];
					uint8_t ___byte0123;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_OffsetPadding[124];
					uint8_t ___byte0124;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_OffsetPadding[125];
					uint8_t ___byte0125;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_OffsetPadding[16];
					uint8_t ___byte0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_OffsetPadding[17];
					uint8_t ___byte0017;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_OffsetPadding[18];
					uint8_t ___byte0018;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_OffsetPadding[19];
					uint8_t ___byte0019;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_OffsetPadding[20];
					uint8_t ___byte0020;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_OffsetPadding[21];
					uint8_t ___byte0021;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_OffsetPadding[22];
					uint8_t ___byte0022;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_OffsetPadding[23];
					uint8_t ___byte0023;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_OffsetPadding[24];
					uint8_t ___byte0024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_OffsetPadding[25];
					uint8_t ___byte0025;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_OffsetPadding[26];
					uint8_t ___byte0026;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_OffsetPadding[27];
					uint8_t ___byte0027;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_OffsetPadding[28];
					uint8_t ___byte0028;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_OffsetPadding[29];
					uint8_t ___byte0029;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_OffsetPadding[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_OffsetPadding[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_OffsetPadding[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_OffsetPadding[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_OffsetPadding[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_OffsetPadding[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_OffsetPadding[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_OffsetPadding[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_OffsetPadding[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_OffsetPadding[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_OffsetPadding[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_OffsetPadding[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_OffsetPadding[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_OffsetPadding[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_OffsetPadding[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_OffsetPadding[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_OffsetPadding[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_OffsetPadding[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_OffsetPadding[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_OffsetPadding[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_OffsetPadding[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_OffsetPadding[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_OffsetPadding[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0496_OffsetPadding[496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0496_OffsetPadding_forAlignmentOnly[496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0512_OffsetPadding[512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0512;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0512_OffsetPadding_forAlignmentOnly[512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0512_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0528_OffsetPadding[528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0528;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0528_OffsetPadding_forAlignmentOnly[528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0528_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0544_OffsetPadding[544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0544;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0544_OffsetPadding_forAlignmentOnly[544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0544_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0560_OffsetPadding[560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0560;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0560_OffsetPadding_forAlignmentOnly[560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0560_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0576_OffsetPadding[576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0576;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0576_OffsetPadding_forAlignmentOnly[576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0576_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0592_OffsetPadding[592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0592;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0592_OffsetPadding_forAlignmentOnly[592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0592_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0608_OffsetPadding[608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0608;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0608_OffsetPadding_forAlignmentOnly[608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0608_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0624_OffsetPadding[624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0624;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0624_OffsetPadding_forAlignmentOnly[624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0624_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0640_OffsetPadding[640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0640;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0640_OffsetPadding_forAlignmentOnly[640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0640_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0656_OffsetPadding[656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0656;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0656_OffsetPadding_forAlignmentOnly[656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0656_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0672_OffsetPadding[672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0672;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0672_OffsetPadding_forAlignmentOnly[672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0672_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0688_OffsetPadding[688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0688;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0688_OffsetPadding_forAlignmentOnly[688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0688_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0704_OffsetPadding[704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0704;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0704_OffsetPadding_forAlignmentOnly[704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0704_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0720_OffsetPadding[720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0720;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0720_OffsetPadding_forAlignmentOnly[720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0720_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0736_OffsetPadding[736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0736;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0736_OffsetPadding_forAlignmentOnly[736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0736_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0752_OffsetPadding[752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0752;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0752_OffsetPadding_forAlignmentOnly[752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0752_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0768_OffsetPadding[768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0768;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0768_OffsetPadding_forAlignmentOnly[768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0768_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0784_OffsetPadding[784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0784;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0784_OffsetPadding_forAlignmentOnly[784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0784_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0800_OffsetPadding[800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0800;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0800_OffsetPadding_forAlignmentOnly[800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0800_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0816_OffsetPadding[816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0816;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0816_OffsetPadding_forAlignmentOnly[816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0816_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0832_OffsetPadding[832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0832;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0832_OffsetPadding_forAlignmentOnly[832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0832_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0848_OffsetPadding[848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0848;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0848_OffsetPadding_forAlignmentOnly[848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0848_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0864_OffsetPadding[864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0864;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0864_OffsetPadding_forAlignmentOnly[864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0864_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0880_OffsetPadding[880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0880;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0880_OffsetPadding_forAlignmentOnly[880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0880_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0896_OffsetPadding[896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0896;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0896_OffsetPadding_forAlignmentOnly[896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0896_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0912_OffsetPadding[912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0912;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0912_OffsetPadding_forAlignmentOnly[912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0912_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0928_OffsetPadding[928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0928;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0928_OffsetPadding_forAlignmentOnly[928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0928_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0944_OffsetPadding[944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0944;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0944_OffsetPadding_forAlignmentOnly[944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0944_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0960_OffsetPadding[960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0960;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0960_OffsetPadding_forAlignmentOnly[960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0960_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0976_OffsetPadding[976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0976;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0976_OffsetPadding_forAlignmentOnly[976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0976_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0992_OffsetPadding[992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0992;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0992_OffsetPadding_forAlignmentOnly[992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0992_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1008_OffsetPadding[1008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1008_OffsetPadding_forAlignmentOnly[1008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1024_OffsetPadding[1024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1024_OffsetPadding_forAlignmentOnly[1024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1040_OffsetPadding[1040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1040;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1040_OffsetPadding_forAlignmentOnly[1040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1040_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1056_OffsetPadding[1056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1056;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1056_OffsetPadding_forAlignmentOnly[1056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1056_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1072_OffsetPadding[1072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1072;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1072_OffsetPadding_forAlignmentOnly[1072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1072_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1088_OffsetPadding[1088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1088;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1088_OffsetPadding_forAlignmentOnly[1088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1088_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1104_OffsetPadding[1104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1104;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1104_OffsetPadding_forAlignmentOnly[1104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1104_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1120_OffsetPadding[1120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1120_OffsetPadding_forAlignmentOnly[1120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1136_OffsetPadding[1136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1136;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1136_OffsetPadding_forAlignmentOnly[1136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1136_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1152_OffsetPadding[1152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1152;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1152_OffsetPadding_forAlignmentOnly[1152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1152_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1168_OffsetPadding[1168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1168;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1168_OffsetPadding_forAlignmentOnly[1168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1168_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1184_OffsetPadding[1184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1184;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1184_OffsetPadding_forAlignmentOnly[1184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1184_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1200_OffsetPadding[1200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1200;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1200_OffsetPadding_forAlignmentOnly[1200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1200_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1216_OffsetPadding[1216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1216;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1216_OffsetPadding_forAlignmentOnly[1216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1216_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1232_OffsetPadding[1232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1232;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1232_OffsetPadding_forAlignmentOnly[1232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1232_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1248_OffsetPadding[1248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1248;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1248_OffsetPadding_forAlignmentOnly[1248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1248_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1264_OffsetPadding[1264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1264;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1264_OffsetPadding_forAlignmentOnly[1264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1264_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1280_OffsetPadding[1280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1280;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1280_OffsetPadding_forAlignmentOnly[1280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1280_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1296_OffsetPadding[1296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1296;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1296_OffsetPadding_forAlignmentOnly[1296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1296_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1312_OffsetPadding[1312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1312;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1312_OffsetPadding_forAlignmentOnly[1312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1312_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1328_OffsetPadding[1328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1328;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1328_OffsetPadding_forAlignmentOnly[1328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1328_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1344_OffsetPadding[1344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1344;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1344_OffsetPadding_forAlignmentOnly[1344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1344_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1360_OffsetPadding[1360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1360;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1360_OffsetPadding_forAlignmentOnly[1360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1360_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1376_OffsetPadding[1376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1376;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1376_OffsetPadding_forAlignmentOnly[1376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1376_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1392_OffsetPadding[1392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1392;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1392_OffsetPadding_forAlignmentOnly[1392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1392_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1408_OffsetPadding[1408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1408;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1408_OffsetPadding_forAlignmentOnly[1408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1408_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1424_OffsetPadding[1424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1424;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1424_OffsetPadding_forAlignmentOnly[1424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1424_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1440_OffsetPadding[1440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1440;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1440_OffsetPadding_forAlignmentOnly[1440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1440_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1456_OffsetPadding[1456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1456;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1456_OffsetPadding_forAlignmentOnly[1456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1456_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1472_OffsetPadding[1472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1472;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1472_OffsetPadding_forAlignmentOnly[1472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1472_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1488_OffsetPadding[1488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1488;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1488_OffsetPadding_forAlignmentOnly[1488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1488_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1504_OffsetPadding[1504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1504_OffsetPadding_forAlignmentOnly[1504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1520_OffsetPadding[1520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1520;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1520_OffsetPadding_forAlignmentOnly[1520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1520_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1536_OffsetPadding[1536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1536;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1536_OffsetPadding_forAlignmentOnly[1536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1536_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1552_OffsetPadding[1552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1552;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1552_OffsetPadding_forAlignmentOnly[1552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1552_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1568_OffsetPadding[1568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1568;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1568_OffsetPadding_forAlignmentOnly[1568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1568_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1584_OffsetPadding[1584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1584;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1584_OffsetPadding_forAlignmentOnly[1584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1584_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1600_OffsetPadding[1600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1600;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1600_OffsetPadding_forAlignmentOnly[1600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1600_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1616_OffsetPadding[1616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1616;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1616_OffsetPadding_forAlignmentOnly[1616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1616_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1632_OffsetPadding[1632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1632;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1632_OffsetPadding_forAlignmentOnly[1632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1632_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1648_OffsetPadding[1648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1648;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1648_OffsetPadding_forAlignmentOnly[1648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1648_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1664_OffsetPadding[1664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1664;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1664_OffsetPadding_forAlignmentOnly[1664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1664_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1680_OffsetPadding[1680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1680;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1680_OffsetPadding_forAlignmentOnly[1680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1680_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1696_OffsetPadding[1696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1696;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1696_OffsetPadding_forAlignmentOnly[1696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1696_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1712_OffsetPadding[1712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1712;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1712_OffsetPadding_forAlignmentOnly[1712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1712_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1728_OffsetPadding[1728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1728;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1728_OffsetPadding_forAlignmentOnly[1728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1728_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1744_OffsetPadding[1744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1744;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1744_OffsetPadding_forAlignmentOnly[1744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1744_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1760_OffsetPadding[1760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1760;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1760_OffsetPadding_forAlignmentOnly[1760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1760_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1776_OffsetPadding[1776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1776;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1776_OffsetPadding_forAlignmentOnly[1776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1776_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1792_OffsetPadding[1792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1792;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1792_OffsetPadding_forAlignmentOnly[1792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1792_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1808_OffsetPadding[1808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1808;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1808_OffsetPadding_forAlignmentOnly[1808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1808_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1824_OffsetPadding[1824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1824;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1824_OffsetPadding_forAlignmentOnly[1824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1824_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1840_OffsetPadding[1840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1840;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1840_OffsetPadding_forAlignmentOnly[1840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1840_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1856_OffsetPadding[1856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1856;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1856_OffsetPadding_forAlignmentOnly[1856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1856_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1872_OffsetPadding[1872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1872;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1872_OffsetPadding_forAlignmentOnly[1872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1872_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1888_OffsetPadding[1888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1888;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1888_OffsetPadding_forAlignmentOnly[1888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1888_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1904_OffsetPadding[1904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1904;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1904_OffsetPadding_forAlignmentOnly[1904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1904_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1920_OffsetPadding[1920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1920;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1920_OffsetPadding_forAlignmentOnly[1920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1920_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1936_OffsetPadding[1936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1936;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1936_OffsetPadding_forAlignmentOnly[1936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1936_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1952_OffsetPadding[1952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1952;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1952_OffsetPadding_forAlignmentOnly[1952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1952_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1968_OffsetPadding[1968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1968;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1968_OffsetPadding_forAlignmentOnly[1968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1968_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1984_OffsetPadding[1984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1984;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1984_OffsetPadding_forAlignmentOnly[1984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1984_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2000_OffsetPadding[2000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2000;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2000_OffsetPadding_forAlignmentOnly[2000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2016_OffsetPadding[2016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2016_OffsetPadding_forAlignmentOnly[2016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2032_OffsetPadding[2032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2032_OffsetPadding_forAlignmentOnly[2032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2048_OffsetPadding[2048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2048_OffsetPadding_forAlignmentOnly[2048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2064_OffsetPadding[2064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2064_OffsetPadding_forAlignmentOnly[2064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2080_OffsetPadding[2080];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2080_OffsetPadding_forAlignmentOnly[2080];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2096_OffsetPadding[2096];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2096_OffsetPadding_forAlignmentOnly[2096];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2112_OffsetPadding[2112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2112_OffsetPadding_forAlignmentOnly[2112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2128_OffsetPadding[2128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2128_OffsetPadding_forAlignmentOnly[2128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2144_OffsetPadding[2144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2144_OffsetPadding_forAlignmentOnly[2144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2160_OffsetPadding[2160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2160_OffsetPadding_forAlignmentOnly[2160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2176_OffsetPadding[2176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2176_OffsetPadding_forAlignmentOnly[2176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2192_OffsetPadding[2192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2192_OffsetPadding_forAlignmentOnly[2192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2208_OffsetPadding[2208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2208_OffsetPadding_forAlignmentOnly[2208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2224_OffsetPadding[2224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2224_OffsetPadding_forAlignmentOnly[2224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2240_OffsetPadding[2240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2240_OffsetPadding_forAlignmentOnly[2240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2256_OffsetPadding[2256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2256_OffsetPadding_forAlignmentOnly[2256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2272_OffsetPadding[2272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2272_OffsetPadding_forAlignmentOnly[2272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2288_OffsetPadding[2288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2288_OffsetPadding_forAlignmentOnly[2288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2304_OffsetPadding[2304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2304_OffsetPadding_forAlignmentOnly[2304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2320_OffsetPadding[2320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2320_OffsetPadding_forAlignmentOnly[2320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2336_OffsetPadding[2336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2336_OffsetPadding_forAlignmentOnly[2336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2352_OffsetPadding[2352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2352_OffsetPadding_forAlignmentOnly[2352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2368_OffsetPadding[2368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2368_OffsetPadding_forAlignmentOnly[2368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2384_OffsetPadding[2384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2384_OffsetPadding_forAlignmentOnly[2384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2400_OffsetPadding[2400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2400_OffsetPadding_forAlignmentOnly[2400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2416_OffsetPadding[2416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2416_OffsetPadding_forAlignmentOnly[2416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2432_OffsetPadding[2432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2432_OffsetPadding_forAlignmentOnly[2432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2448_OffsetPadding[2448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2448_OffsetPadding_forAlignmentOnly[2448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2464_OffsetPadding[2464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2464_OffsetPadding_forAlignmentOnly[2464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2480_OffsetPadding[2480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2480_OffsetPadding_forAlignmentOnly[2480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2496_OffsetPadding[2496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2496_OffsetPadding_forAlignmentOnly[2496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2512_OffsetPadding[2512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2512;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2512_OffsetPadding_forAlignmentOnly[2512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2512_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2528_OffsetPadding[2528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2528;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2528_OffsetPadding_forAlignmentOnly[2528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2528_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2544_OffsetPadding[2544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2544;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2544_OffsetPadding_forAlignmentOnly[2544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2544_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2560_OffsetPadding[2560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2560;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2560_OffsetPadding_forAlignmentOnly[2560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2560_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2576_OffsetPadding[2576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2576;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2576_OffsetPadding_forAlignmentOnly[2576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2576_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2592_OffsetPadding[2592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2592;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2592_OffsetPadding_forAlignmentOnly[2592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2592_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2608_OffsetPadding[2608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2608;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2608_OffsetPadding_forAlignmentOnly[2608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2608_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2624_OffsetPadding[2624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2624;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2624_OffsetPadding_forAlignmentOnly[2624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2624_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2640_OffsetPadding[2640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2640;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2640_OffsetPadding_forAlignmentOnly[2640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2640_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2656_OffsetPadding[2656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2656;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2656_OffsetPadding_forAlignmentOnly[2656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2656_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2672_OffsetPadding[2672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2672;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2672_OffsetPadding_forAlignmentOnly[2672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2672_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2688_OffsetPadding[2688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2688;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2688_OffsetPadding_forAlignmentOnly[2688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2688_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2704_OffsetPadding[2704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2704;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2704_OffsetPadding_forAlignmentOnly[2704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2704_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2720_OffsetPadding[2720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2720;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2720_OffsetPadding_forAlignmentOnly[2720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2720_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2736_OffsetPadding[2736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2736;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2736_OffsetPadding_forAlignmentOnly[2736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2736_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2752_OffsetPadding[2752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2752;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2752_OffsetPadding_forAlignmentOnly[2752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2752_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2768_OffsetPadding[2768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2768;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2768_OffsetPadding_forAlignmentOnly[2768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2768_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2784_OffsetPadding[2784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2784;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2784_OffsetPadding_forAlignmentOnly[2784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2784_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2800_OffsetPadding[2800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2800;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2800_OffsetPadding_forAlignmentOnly[2800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2800_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2816_OffsetPadding[2816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2816;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2816_OffsetPadding_forAlignmentOnly[2816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2816_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2832_OffsetPadding[2832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2832;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2832_OffsetPadding_forAlignmentOnly[2832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2832_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2848_OffsetPadding[2848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2848;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2848_OffsetPadding_forAlignmentOnly[2848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2848_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2864_OffsetPadding[2864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2864;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2864_OffsetPadding_forAlignmentOnly[2864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2864_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2880_OffsetPadding[2880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2880;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2880_OffsetPadding_forAlignmentOnly[2880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2880_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2896_OffsetPadding[2896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2896;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2896_OffsetPadding_forAlignmentOnly[2896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2896_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2912_OffsetPadding[2912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2912;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2912_OffsetPadding_forAlignmentOnly[2912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2912_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2928_OffsetPadding[2928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2928;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2928_OffsetPadding_forAlignmentOnly[2928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2928_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2944_OffsetPadding[2944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2944;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2944_OffsetPadding_forAlignmentOnly[2944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2944_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2960_OffsetPadding[2960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2960;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2960_OffsetPadding_forAlignmentOnly[2960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2960_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2976_OffsetPadding[2976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2976;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2976_OffsetPadding_forAlignmentOnly[2976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2976_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2992_OffsetPadding[2992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2992;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2992_OffsetPadding_forAlignmentOnly[2992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2992_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3008_OffsetPadding[3008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3008_OffsetPadding_forAlignmentOnly[3008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3024_OffsetPadding[3024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3024_OffsetPadding_forAlignmentOnly[3024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3040_OffsetPadding[3040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3040;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3040_OffsetPadding_forAlignmentOnly[3040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3040_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3056_OffsetPadding[3056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3056;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3056_OffsetPadding_forAlignmentOnly[3056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3056_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3072_OffsetPadding[3072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3072;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3072_OffsetPadding_forAlignmentOnly[3072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3072_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3088_OffsetPadding[3088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3088;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3088_OffsetPadding_forAlignmentOnly[3088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3088_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3104_OffsetPadding[3104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3104;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3104_OffsetPadding_forAlignmentOnly[3104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3104_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3120_OffsetPadding[3120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3120_OffsetPadding_forAlignmentOnly[3120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3136_OffsetPadding[3136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3136;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3136_OffsetPadding_forAlignmentOnly[3136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3136_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3152_OffsetPadding[3152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3152;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3152_OffsetPadding_forAlignmentOnly[3152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3152_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3168_OffsetPadding[3168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3168;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3168_OffsetPadding_forAlignmentOnly[3168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3168_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3184_OffsetPadding[3184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3184;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3184_OffsetPadding_forAlignmentOnly[3184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3184_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3200_OffsetPadding[3200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3200;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3200_OffsetPadding_forAlignmentOnly[3200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3200_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3216_OffsetPadding[3216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3216;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3216_OffsetPadding_forAlignmentOnly[3216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3216_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3232_OffsetPadding[3232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3232;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3232_OffsetPadding_forAlignmentOnly[3232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3232_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3248_OffsetPadding[3248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3248;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3248_OffsetPadding_forAlignmentOnly[3248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3248_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3264_OffsetPadding[3264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3264;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3264_OffsetPadding_forAlignmentOnly[3264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3264_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3280_OffsetPadding[3280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3280;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3280_OffsetPadding_forAlignmentOnly[3280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3280_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3296_OffsetPadding[3296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3296;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3296_OffsetPadding_forAlignmentOnly[3296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3296_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3312_OffsetPadding[3312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3312;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3312_OffsetPadding_forAlignmentOnly[3312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3312_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3328_OffsetPadding[3328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3328;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3328_OffsetPadding_forAlignmentOnly[3328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3328_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3344_OffsetPadding[3344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3344;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3344_OffsetPadding_forAlignmentOnly[3344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3344_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3360_OffsetPadding[3360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3360;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3360_OffsetPadding_forAlignmentOnly[3360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3360_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3376_OffsetPadding[3376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3376;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3376_OffsetPadding_forAlignmentOnly[3376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3376_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3392_OffsetPadding[3392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3392;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3392_OffsetPadding_forAlignmentOnly[3392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3392_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3408_OffsetPadding[3408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3408;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3408_OffsetPadding_forAlignmentOnly[3408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3408_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3424_OffsetPadding[3424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3424;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3424_OffsetPadding_forAlignmentOnly[3424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3424_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3440_OffsetPadding[3440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3440;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3440_OffsetPadding_forAlignmentOnly[3440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3440_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3456_OffsetPadding[3456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3456;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3456_OffsetPadding_forAlignmentOnly[3456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3456_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3472_OffsetPadding[3472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3472;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3472_OffsetPadding_forAlignmentOnly[3472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3472_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3488_OffsetPadding[3488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3488;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3488_OffsetPadding_forAlignmentOnly[3488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3488_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3504_OffsetPadding[3504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3504_OffsetPadding_forAlignmentOnly[3504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3520_OffsetPadding[3520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3520;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3520_OffsetPadding_forAlignmentOnly[3520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3520_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3536_OffsetPadding[3536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3536;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3536_OffsetPadding_forAlignmentOnly[3536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3536_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3552_OffsetPadding[3552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3552;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3552_OffsetPadding_forAlignmentOnly[3552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3552_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3568_OffsetPadding[3568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3568;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3568_OffsetPadding_forAlignmentOnly[3568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3568_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3584_OffsetPadding[3584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3584;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3584_OffsetPadding_forAlignmentOnly[3584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3584_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3600_OffsetPadding[3600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3600;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3600_OffsetPadding_forAlignmentOnly[3600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3600_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3616_OffsetPadding[3616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3616;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3616_OffsetPadding_forAlignmentOnly[3616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3616_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3632_OffsetPadding[3632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3632;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3632_OffsetPadding_forAlignmentOnly[3632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3632_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3648_OffsetPadding[3648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3648;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3648_OffsetPadding_forAlignmentOnly[3648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3648_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3664_OffsetPadding[3664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3664;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3664_OffsetPadding_forAlignmentOnly[3664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3664_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3680_OffsetPadding[3680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3680;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3680_OffsetPadding_forAlignmentOnly[3680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3680_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3696_OffsetPadding[3696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3696;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3696_OffsetPadding_forAlignmentOnly[3696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3696_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3712_OffsetPadding[3712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3712;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3712_OffsetPadding_forAlignmentOnly[3712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3712_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3728_OffsetPadding[3728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3728;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3728_OffsetPadding_forAlignmentOnly[3728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3728_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3744_OffsetPadding[3744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3744;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3744_OffsetPadding_forAlignmentOnly[3744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3744_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3760_OffsetPadding[3760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3760;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3760_OffsetPadding_forAlignmentOnly[3760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3760_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3776_OffsetPadding[3776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3776;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3776_OffsetPadding_forAlignmentOnly[3776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3776_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3792_OffsetPadding[3792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3792;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3792_OffsetPadding_forAlignmentOnly[3792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3792_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3808_OffsetPadding[3808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3808;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3808_OffsetPadding_forAlignmentOnly[3808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3808_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3824_OffsetPadding[3824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3824;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3824_OffsetPadding_forAlignmentOnly[3824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3824_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3840_OffsetPadding[3840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3840;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3840_OffsetPadding_forAlignmentOnly[3840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3840_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3856_OffsetPadding[3856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3856;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3856_OffsetPadding_forAlignmentOnly[3856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3856_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3872_OffsetPadding[3872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3872;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3872_OffsetPadding_forAlignmentOnly[3872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3872_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3888_OffsetPadding[3888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3888;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3888_OffsetPadding_forAlignmentOnly[3888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3888_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3904_OffsetPadding[3904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3904;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3904_OffsetPadding_forAlignmentOnly[3904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3904_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3920_OffsetPadding[3920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3920;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3920_OffsetPadding_forAlignmentOnly[3920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3920_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3936_OffsetPadding[3936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3936;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3936_OffsetPadding_forAlignmentOnly[3936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3936_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3952_OffsetPadding[3952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3952;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3952_OffsetPadding_forAlignmentOnly[3952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3952_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3968_OffsetPadding[3968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3968;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3968_OffsetPadding_forAlignmentOnly[3968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3968_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3984_OffsetPadding[3984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3984;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3984_OffsetPadding_forAlignmentOnly[3984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3984_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4000_OffsetPadding[4000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4000;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4000_OffsetPadding_forAlignmentOnly[4000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4016_OffsetPadding[4016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4016_OffsetPadding_forAlignmentOnly[4016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4032_OffsetPadding[4032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4032_OffsetPadding_forAlignmentOnly[4032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4048_OffsetPadding[4048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4048_OffsetPadding_forAlignmentOnly[4048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4064_OffsetPadding[4064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4064_OffsetPadding_forAlignmentOnly[4064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4080_OffsetPadding[4080];
					uint8_t ___byte4080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4080_OffsetPadding_forAlignmentOnly[4080];
					uint8_t ___byte4080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4081_OffsetPadding[4081];
					uint8_t ___byte4081;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4081_OffsetPadding_forAlignmentOnly[4081];
					uint8_t ___byte4081_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4082_OffsetPadding[4082];
					uint8_t ___byte4082;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4082_OffsetPadding_forAlignmentOnly[4082];
					uint8_t ___byte4082_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4083_OffsetPadding[4083];
					uint8_t ___byte4083;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4083_OffsetPadding_forAlignmentOnly[4083];
					uint8_t ___byte4083_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4084_OffsetPadding[4084];
					uint8_t ___byte4084;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4084_OffsetPadding_forAlignmentOnly[4084];
					uint8_t ___byte4084_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4085_OffsetPadding[4085];
					uint8_t ___byte4085;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4085_OffsetPadding_forAlignmentOnly[4085];
					uint8_t ___byte4085_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4086_OffsetPadding[4086];
					uint8_t ___byte4086;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4086_OffsetPadding_forAlignmentOnly[4086];
					uint8_t ___byte4086_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4087_OffsetPadding[4087];
					uint8_t ___byte4087;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4087_OffsetPadding_forAlignmentOnly[4087];
					uint8_t ___byte4087_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4088_OffsetPadding[4088];
					uint8_t ___byte4088;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4088_OffsetPadding_forAlignmentOnly[4088];
					uint8_t ___byte4088_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4089_OffsetPadding[4089];
					uint8_t ___byte4089;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4089_OffsetPadding_forAlignmentOnly[4089];
					uint8_t ___byte4089_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4090_OffsetPadding[4090];
					uint8_t ___byte4090;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4090_OffsetPadding_forAlignmentOnly[4090];
					uint8_t ___byte4090_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4091_OffsetPadding[4091];
					uint8_t ___byte4091;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4091_OffsetPadding_forAlignmentOnly[4091];
					uint8_t ___byte4091_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4092_OffsetPadding[4092];
					uint8_t ___byte4092;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4092_OffsetPadding_forAlignmentOnly[4092];
					uint8_t ___byte4092_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4093_OffsetPadding[4093];
					uint8_t ___byte4093;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4093_OffsetPadding_forAlignmentOnly[4093];
					uint8_t ___byte4093_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5__padding[4094];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_OffsetPadding[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_OffsetPadding[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_OffsetPadding[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_OffsetPadding[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_OffsetPadding[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_OffsetPadding[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_OffsetPadding[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_OffsetPadding[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_OffsetPadding[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_OffsetPadding[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_OffsetPadding[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_OffsetPadding[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_OffsetPadding[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_OffsetPadding[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_OffsetPadding[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_OffsetPadding[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_OffsetPadding[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_OffsetPadding[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_OffsetPadding[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_OffsetPadding[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_OffsetPadding[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_OffsetPadding[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_OffsetPadding[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0496_OffsetPadding[496];
					uint8_t ___byte0496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0496_OffsetPadding_forAlignmentOnly[496];
					uint8_t ___byte0496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0497_OffsetPadding[497];
					uint8_t ___byte0497;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0497_OffsetPadding_forAlignmentOnly[497];
					uint8_t ___byte0497_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0498_OffsetPadding[498];
					uint8_t ___byte0498;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0498_OffsetPadding_forAlignmentOnly[498];
					uint8_t ___byte0498_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0499_OffsetPadding[499];
					uint8_t ___byte0499;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0499_OffsetPadding_forAlignmentOnly[499];
					uint8_t ___byte0499_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0500_OffsetPadding[500];
					uint8_t ___byte0500;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0500_OffsetPadding_forAlignmentOnly[500];
					uint8_t ___byte0500_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0501_OffsetPadding[501];
					uint8_t ___byte0501;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0501_OffsetPadding_forAlignmentOnly[501];
					uint8_t ___byte0501_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0502_OffsetPadding[502];
					uint8_t ___byte0502;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0502_OffsetPadding_forAlignmentOnly[502];
					uint8_t ___byte0502_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0503_OffsetPadding[503];
					uint8_t ___byte0503;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0503_OffsetPadding_forAlignmentOnly[503];
					uint8_t ___byte0503_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0504_OffsetPadding[504];
					uint8_t ___byte0504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0504_OffsetPadding_forAlignmentOnly[504];
					uint8_t ___byte0504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0505_OffsetPadding[505];
					uint8_t ___byte0505;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0505_OffsetPadding_forAlignmentOnly[505];
					uint8_t ___byte0505_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0506_OffsetPadding[506];
					uint8_t ___byte0506;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0506_OffsetPadding_forAlignmentOnly[506];
					uint8_t ___byte0506_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0507_OffsetPadding[507];
					uint8_t ___byte0507;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0507_OffsetPadding_forAlignmentOnly[507];
					uint8_t ___byte0507_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0508_OffsetPadding[508];
					uint8_t ___byte0508;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0508_OffsetPadding_forAlignmentOnly[508];
					uint8_t ___byte0508_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0509_OffsetPadding[509];
					uint8_t ___byte0509;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0509_OffsetPadding_forAlignmentOnly[509];
					uint8_t ___byte0509_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973__padding[510];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0048_OffsetPadding[48];
					uint8_t ___byte0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0048_OffsetPadding_forAlignmentOnly[48];
					uint8_t ___byte0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0049_OffsetPadding[49];
					uint8_t ___byte0049;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0049_OffsetPadding_forAlignmentOnly[49];
					uint8_t ___byte0049_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0050_OffsetPadding[50];
					uint8_t ___byte0050;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0050_OffsetPadding_forAlignmentOnly[50];
					uint8_t ___byte0050_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0051_OffsetPadding[51];
					uint8_t ___byte0051;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0051_OffsetPadding_forAlignmentOnly[51];
					uint8_t ___byte0051_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0052_OffsetPadding[52];
					uint8_t ___byte0052;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0052_OffsetPadding_forAlignmentOnly[52];
					uint8_t ___byte0052_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0053_OffsetPadding[53];
					uint8_t ___byte0053;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0053_OffsetPadding_forAlignmentOnly[53];
					uint8_t ___byte0053_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0054_OffsetPadding[54];
					uint8_t ___byte0054;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0054_OffsetPadding_forAlignmentOnly[54];
					uint8_t ___byte0054_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0055_OffsetPadding[55];
					uint8_t ___byte0055;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0055_OffsetPadding_forAlignmentOnly[55];
					uint8_t ___byte0055_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0056_OffsetPadding[56];
					uint8_t ___byte0056;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0056_OffsetPadding_forAlignmentOnly[56];
					uint8_t ___byte0056_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0057_OffsetPadding[57];
					uint8_t ___byte0057;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0057_OffsetPadding_forAlignmentOnly[57];
					uint8_t ___byte0057_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0058_OffsetPadding[58];
					uint8_t ___byte0058;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0058_OffsetPadding_forAlignmentOnly[58];
					uint8_t ___byte0058_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0059_OffsetPadding[59];
					uint8_t ___byte0059;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0059_OffsetPadding_forAlignmentOnly[59];
					uint8_t ___byte0059_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0060_OffsetPadding[60];
					uint8_t ___byte0060;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0060_OffsetPadding_forAlignmentOnly[60];
					uint8_t ___byte0060_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0061_OffsetPadding[61];
					uint8_t ___byte0061;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0061_OffsetPadding_forAlignmentOnly[61];
					uint8_t ___byte0061_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A__padding[62];
	};
};
#pragma pack(pop, tp)
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
};
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};
struct FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5 ___bytes;
		};
		uint8_t FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21__padding[4096];
	};
};
struct FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 ___bytes;
		};
		uint8_t FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E__padding[512];
	};
};
struct FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A ___bytes;
		};
		uint8_t FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5__padding[64];
	};
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244  : public MulticastDelegate_t
{
};
struct TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	int32_t ___U3CmodeU3Ek__BackingField;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___U3CminSizeU3Ek__BackingField;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___U3CmaxSizeU3Ek__BackingField;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F  : public MulticastDelegate_t
{
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A 
{
	int32_t ___m_Keyword;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___m_Value;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields
{
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___s_GlobalConverters;
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
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_StaticFields
{
	ConverterKeyComparer_t204523C3EB04B7681EC88C456FBB52B49F1B1F49* ___Comparer;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_StaticFields
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Null;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeConverter_2_Invoke_mA6EA339307DD421BFAE6AE065311D3F3E20EBCEF_gshared_inline (TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m4413FACD18C6B43171CE3378B42EC74CE90D7455_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m594F1785260F543C80727C5AE774E29CF23D8959_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3342E307CACD93B3B833751DFABEA4271F1C10EC_gshared (uint64_t ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m2CDB8D2BAADA49EAE5F95CCBB38A610E551F5139_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t TypeConverter_2_Invoke_m04812DDA0993CDC73AE09E0F48FFCC7CAA10E8D1_gshared_inline (TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1BAF7CCF80CD01A05CF661D6060267F6FCDA0956_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mB18428A733917FF5D9B44175861147CA10B46B20_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5BD068E7FE6CFE6B279951284ABD3545BFDED1AB_gshared (uint64_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m0800E281B1BAC1A8974961F84A0739B4B5D69841_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TypeConverter_2_Invoke_mB2B33D8117DB83B5402E252BA6091805D715D636_gshared_inline (TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB89359003C500D4E91F5770F8FDF647B08A28D7D_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mBBD527B343F869224CD164D8DFEA4FC4066A740E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB8785517D8369F3C17823F9CE221FCE37B986936_gshared (uint64_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m06863AC8F52B5115CCF0064BFF6E0222D7E90224_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TypeConverter_2_Invoke_m4508B91714DA608D2E75CD6C9C0BAA3756483D90_gshared_inline (TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m81A97F5C1EA36015C038DCBAB01FC014CD86BF6A_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m6E0D1AF4CE31EEF2245AB222313E33BFF9035958_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D9AA67EAB92468AEEC2D9276CE3397DB3CAA95D_gshared (uint64_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_mB487817AC7ABF02B19716E754AE3E636656832AA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_gshared_inline (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m93F02B7A3E552FFCAB3CE2FF59C936436C6B36F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA_gshared (uint64_t ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_mD3FDBD76A422EF87DC71ACF3B533502581B03B75_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_gshared_inline (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mAC1B5A4572D5A19BC4395D6B3E4056DF60ACBFCF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8_gshared (uint64_t ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m804A788CB1B80CB8E124F81F0B70577533CEA276_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_gshared_inline (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m50CA4D35C901DFD3896C3828F0323AA64806B8D1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2_gshared (uint64_t ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m6E42FE6A2733731FD34A8D0DF2E5A4EBA887EA32_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_gshared_inline (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mD8C294C3D33C9725EDEF652AE8156D10DC4D4CD1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB_gshared (uint64_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m85967F8CB9FAD027F007800E553FF4D41214B16B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_gshared_inline (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m045F197E7B78A8292A94ABC18FD8D77C1E24D60F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977_gshared (uint64_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_mBABCE38129A0281F81AC4493B9E09F7B56F24F12_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline (TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5* __this, bool* ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeConverter_2_Invoke_mA6EA339307DD421BFAE6AE065311D3F3E20EBCEF_inline (TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E (*) (TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mA6EA339307DD421BFAE6AE065311D3F3E20EBCEF_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m4413FACD18C6B43171CE3378B42EC74CE90D7455_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m4413FACD18C6B43171CE3378B42EC74CE90D7455_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline bool TypeTraits_1_get_IsUnityObject_m594F1785260F543C80727C5AE774E29CF23D8959_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_m594F1785260F543C80727C5AE774E29CF23D8959_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3342E307CACD93B3B833751DFABEA4271F1C10EC (uint64_t ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3342E307CACD93B3B833751DFABEA4271F1C10EC_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_m2CDB8D2BAADA49EAE5F95CCBB38A610E551F5139_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_m2CDB8D2BAADA49EAE5F95CCBB38A610E551F5139_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936 (Type_t* ___0_t, const RuntimeMethod* method) ;
inline uint16_t TypeConverter_2_Invoke_m04812DDA0993CDC73AE09E0F48FFCC7CAA10E8D1_inline (TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m04812DDA0993CDC73AE09E0F48FFCC7CAA10E8D1_gshared_inline)(__this, ___0_value, method);
}
inline uint16_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1BAF7CCF80CD01A05CF661D6060267F6FCDA0956_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  uint16_t* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1BAF7CCF80CD01A05CF661D6060267F6FCDA0956_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsUnityObject_mB18428A733917FF5D9B44175861147CA10B46B20_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_mB18428A733917FF5D9B44175861147CA10B46B20_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5BD068E7FE6CFE6B279951284ABD3545BFDED1AB (uint64_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, uint16_t*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5BD068E7FE6CFE6B279951284ABD3545BFDED1AB_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_m0800E281B1BAC1A8974961F84A0739B4B5D69841_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_m0800E281B1BAC1A8974961F84A0739B4B5D69841_gshared_inline)(method);
}
inline uint32_t TypeConverter_2_Invoke_mB2B33D8117DB83B5402E252BA6091805D715D636_inline (TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mB2B33D8117DB83B5402E252BA6091805D715D636_gshared_inline)(__this, ___0_value, method);
}
inline uint32_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB89359003C500D4E91F5770F8FDF647B08A28D7D_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  uint32_t* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB89359003C500D4E91F5770F8FDF647B08A28D7D_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsUnityObject_mBBD527B343F869224CD164D8DFEA4FC4066A740E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_mBBD527B343F869224CD164D8DFEA4FC4066A740E_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB8785517D8369F3C17823F9CE221FCE37B986936 (uint64_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, uint32_t*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB8785517D8369F3C17823F9CE221FCE37B986936_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_m06863AC8F52B5115CCF0064BFF6E0222D7E90224_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_m06863AC8F52B5115CCF0064BFF6E0222D7E90224_gshared_inline)(method);
}
inline uint64_t TypeConverter_2_Invoke_m4508B91714DA608D2E75CD6C9C0BAA3756483D90_inline (TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m4508B91714DA608D2E75CD6C9C0BAA3756483D90_gshared_inline)(__this, ___0_value, method);
}
inline uint64_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m81A97F5C1EA36015C038DCBAB01FC014CD86BF6A_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  uint64_t* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m81A97F5C1EA36015C038DCBAB01FC014CD86BF6A_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsUnityObject_m6E0D1AF4CE31EEF2245AB222313E33BFF9035958_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_m6E0D1AF4CE31EEF2245AB222313E33BFF9035958_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D9AA67EAB92468AEEC2D9276CE3397DB3CAA95D (uint64_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, uint64_t*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D9AA67EAB92468AEEC2D9276CE3397DB3CAA95D_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_mB487817AC7ABF02B19716E754AE3E636656832AA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_mB487817AC7ABF02B19716E754AE3E636656832AA_gshared_inline)(method);
}
inline UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_inline (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B (*) (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_gshared_inline)(__this, ___0_value, method);
}
inline UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsUnityObject_m93F02B7A3E552FFCAB3CE2FF59C936436C6B36F4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_m93F02B7A3E552FFCAB3CE2FF59C936436C6B36F4_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA (uint64_t ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_mD3FDBD76A422EF87DC71ACF3B533502581B03B75_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_mD3FDBD76A422EF87DC71ACF3B533502581B03B75_gshared_inline)(method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_inline (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_gshared_inline)(__this, ___0_value, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsUnityObject_mAC1B5A4572D5A19BC4395D6B3E4056DF60ACBFCF_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_mAC1B5A4572D5A19BC4395D6B3E4056DF60ACBFCF_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8 (uint64_t ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_m804A788CB1B80CB8E124F81F0B70577533CEA276_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_m804A788CB1B80CB8E124F81F0B70577533CEA276_gshared_inline)(method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_inline (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_gshared_inline)(__this, ___0_value, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsUnityObject_m50CA4D35C901DFD3896C3828F0323AA64806B8D1_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_m50CA4D35C901DFD3896C3828F0323AA64806B8D1_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2 (uint64_t ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_m6E42FE6A2733731FD34A8D0DF2E5A4EBA887EA32_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_m6E42FE6A2733731FD34A8D0DF2E5A4EBA887EA32_gshared_inline)(method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_inline (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_gshared_inline)(__this, ___0_value, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsUnityObject_mD8C294C3D33C9725EDEF652AE8156D10DC4D4CD1_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_mD8C294C3D33C9725EDEF652AE8156D10DC4D4CD1_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB (uint64_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_m85967F8CB9FAD027F007800E553FF4D41214B16B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_m85967F8CB9FAD027F007800E553FF4D41214B16B_gshared_inline)(method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_inline (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* __this, uint64_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A*, uint64_t*, const RuntimeMethod*))TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_gshared_inline)(__this, ___0_value, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_inline (uint64_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (uint64_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_gshared_inline)(___0_from, method);
}
inline bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsUnityObject_m045F197E7B78A8292A94ABC18FD8D77C1E24D60F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsUnityObject_m045F197E7B78A8292A94ABC18FD8D77C1E24D60F_gshared_inline)(method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977 (uint64_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsEnum_mBABCE38129A0281F81AC4493B9E09F7B56F24F12_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsEnum_mBABCE38129A0281F81AC4493B9E09F7B56F24F12_gshared_inline)(method);
}
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline (TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77* __this, bool* ___0_value, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*, bool*, const RuntimeMethod*))TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mC86776A8C8171AB4D4C32DB7793BCAE6679E2412_gshared (uint64_t* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_9;
		L_9 = TypeConverter_2_Invoke_mA6EA339307DD421BFAE6AE065311D3F3E20EBCEF_inline(((TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m4413FACD18C6B43171CE3378B42EC74CE90D7455_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_22 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_21);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_49 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_57 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_76 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_m594F1785260F543C80727C5AE774E29CF23D8959_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3342E307CACD93B3B833751DFABEA4271F1C10EC(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_m2CDB8D2BAADA49EAE5F95CCBB38A610E551F5139_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_96 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m4413FACD18C6B43171CE3378B42EC74CE90D7455_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_113 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_112);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_123 = ___1_destination;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_124 = V_1;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_131 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE123CFD2D490B0DA48161B3C1B09482DCB0719C6_gshared (uint64_t* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	uint16_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		uint16_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		uint16_t L_9;
		L_9 = TypeConverter_2_Invoke_m04812DDA0993CDC73AE09E0F48FFCC7CAA10E8D1_inline(((TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(uint16_t*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		uint16_t* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		uint16_t* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1BAF7CCF80CD01A05CF661D6060267F6FCDA0956_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		uint16_t L_22 = (*(uint16_t*)L_21);
		*(uint16_t*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		uint16_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(uint16_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		uint16_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(uint16_t*)L_49 = ((*(uint16_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		uint16_t* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(uint16_t));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		uint16_t* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(uint16_t*)L_57 = ((*(uint16_t*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		uint16_t* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(uint16_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		uint16_t* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(uint16_t*)L_76 = ((*(uint16_t*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_mB18428A733917FF5D9B44175861147CA10B46B20_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		uint16_t* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5BD068E7FE6CFE6B279951284ABD3545BFDED1AB(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_m0800E281B1BAC1A8974961F84A0739B4B5D69841_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		uint16_t* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(uint16_t*)L_96 = ((*(uint16_t*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		uint16_t* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(uint16_t));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		uint16_t* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		uint16_t* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1BAF7CCF80CD01A05CF661D6060267F6FCDA0956_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		uint16_t L_113 = (*(uint16_t*)L_112);
		*(uint16_t*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		uint16_t* L_123 = ___1_destination;
		uint16_t L_124 = V_1;
		*(uint16_t*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		uint16_t* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(uint16_t*)L_131 = ((*(uint16_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		uint16_t* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(uint16_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBDF10AA81A0EF355CF7B5ABB03E18B1D00AA74A3_gshared (uint64_t* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		uint32_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		uint32_t L_9;
		L_9 = TypeConverter_2_Invoke_mB2B33D8117DB83B5402E252BA6091805D715D636_inline(((TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(uint32_t*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		uint32_t* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		uint32_t* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB89359003C500D4E91F5770F8FDF647B08A28D7D_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		uint32_t L_22 = (*(uint32_t*)L_21);
		*(uint32_t*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		uint32_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(uint32_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		uint32_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(uint32_t*)L_49 = ((*(uint32_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		uint32_t* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(uint32_t));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		uint32_t* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(uint32_t*)L_57 = ((*(uint32_t*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(uint32_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		uint32_t* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(uint32_t*)L_76 = ((*(uint32_t*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_mBBD527B343F869224CD164D8DFEA4FC4066A740E_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		uint32_t* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB8785517D8369F3C17823F9CE221FCE37B986936(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_m06863AC8F52B5115CCF0064BFF6E0222D7E90224_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		uint32_t* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(uint32_t*)L_96 = ((*(uint32_t*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		uint32_t* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(uint32_t));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		uint32_t* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		uint32_t* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB89359003C500D4E91F5770F8FDF647B08A28D7D_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		uint32_t L_113 = (*(uint32_t*)L_112);
		*(uint32_t*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		uint32_t* L_123 = ___1_destination;
		uint32_t L_124 = V_1;
		*(uint32_t*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		uint32_t* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(uint32_t*)L_131 = ((*(uint32_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		uint32_t* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(uint32_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7E09EC472AF1579F5A1610A6F85CDA7C8FD66C09_gshared (uint64_t* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		uint64_t* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		uint64_t L_9;
		L_9 = TypeConverter_2_Invoke_m4508B91714DA608D2E75CD6C9C0BAA3756483D90_inline(((TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(uint64_t*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		uint64_t* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		uint64_t* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m81A97F5C1EA36015C038DCBAB01FC014CD86BF6A_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		uint64_t L_22 = (*(uint64_t*)L_21);
		*(uint64_t*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		uint64_t* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(uint64_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		uint64_t* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(uint64_t*)L_49 = ((*(uint64_t*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		uint64_t* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(uint64_t));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		uint64_t* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(uint64_t*)L_57 = ((*(uint64_t*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		uint64_t* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(uint64_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		uint64_t* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(uint64_t*)L_76 = ((*(uint64_t*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_m6E0D1AF4CE31EEF2245AB222313E33BFF9035958_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		uint64_t* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D9AA67EAB92468AEEC2D9276CE3397DB3CAA95D(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_mB487817AC7ABF02B19716E754AE3E636656832AA_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		uint64_t* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(uint64_t*)L_96 = ((*(uint64_t*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		uint64_t* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(uint64_t));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		uint64_t* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		uint64_t* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m81A97F5C1EA36015C038DCBAB01FC014CD86BF6A_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		uint64_t L_113 = (*(uint64_t*)L_112);
		*(uint64_t*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		uint64_t* L_123 = ___1_destination;
		uint64_t L_124 = V_1;
		*(uint64_t*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		uint64_t* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(uint64_t*)L_131 = ((*(uint64_t*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		uint64_t* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(uint64_t));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mEF210C40E3848C6392ADE431B4542B08288482C6_gshared (uint64_t* ___0_source, UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_9;
		L_9 = TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_inline(((TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_22 = (*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_21);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_49 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_57 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_76 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_m93F02B7A3E552FFCAB3CE2FF59C936436C6B36F4_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m8621D07E73FFB0D4E104282EA3BBC5A33BA67CEA(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_mD3FDBD76A422EF87DC71ACF3B533502581B03B75_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_96 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_113 = (*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_112);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_123 = ___1_destination;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_124 = V_1;
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_131 = ((*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m05401CE56CBF26D537374031788044E0AAE8D2EF_gshared (uint64_t* ___0_source, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_9;
		L_9 = TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_inline(((TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_22 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_21);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_49 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_57 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_76 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_mAC1B5A4572D5A19BC4395D6B3E4056DF60ACBFCF_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m79E55A097935C2F2F85431C13A48DC6A9B6EF6F8(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_m804A788CB1B80CB8E124F81F0B70577533CEA276_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_96 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_113 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_112);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_123 = ___1_destination;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_124 = V_1;
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_131 = ((*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCBD632F036E5E94F573DCBF67D5B7E40D08BCF5F_gshared (uint64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_inline(((TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_21);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_49 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_57 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_76 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_m50CA4D35C901DFD3896C3828F0323AA64806B8D1_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD72215670DE1A294D6D3106BF34753C2B27946B2(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_m6E42FE6A2733731FD34A8D0DF2E5A4EBA887EA32_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_96 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_112);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_123 = ___1_destination;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124 = V_1;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_131 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDED0C60E934F54E1A71D87ACDC0E4BF1F1DED9D8_gshared (uint64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_inline(((TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_49 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_57 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_76 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_mD8C294C3D33C9725EDEF652AE8156D10DC4D4CD1_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA53ECFBE6B3C8960E4F4A93BE361559B2B2584DB(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_m85967F8CB9FAD027F007800E553FF4D41214B16B_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_96 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_112);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_123 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_131 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mD2ECCC4D44AB984D758045110E515B10304BF5F6_gshared (uint64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	uint64_t V_20 = 0;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		uint64_t* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		L_9 = TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_inline(((TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_6 = L_9;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_19 = ___1_destination;
		uint64_t* L_20 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_21;
		L_21 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_inline(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_21);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_19 = L_22;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		uint64_t* L_43 = ___0_source;
		uint64_t L_44 = (*(uint64_t*)L_43);
		uint64_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_45);
		Type_t* L_47 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_46, L_47, NULL);
		V_10 = L_48;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_49 = ___1_destination;
		Type_t* L_50 = V_6;
		RuntimeObject* L_51 = V_10;
		RuntimeObject* L_52;
		L_52 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_50, L_51, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_49 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_52, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		uint64_t* L_53 = ___0_source;
		uint64_t L_54 = (*(uint64_t*)L_53);
		V_11 = false;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0156;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_57 = ___1_destination;
		uint64_t* L_58 = ___0_source;
		uint64_t L_59 = (*(uint64_t*)L_58);
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_60);
		Type_t* L_62 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_61, L_62, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_57 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_63, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_64;
		L_64 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_64)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		Type_t* L_69;
		L_69 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_69, NULL);
		G_B21_0 = ((int32_t)(L_70));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01e9;
		}
	}
	{
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		V_13 = false;
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_01cc;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_75 = ___1_destination;
		il2cpp_codegen_initobj(L_75, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_76 = ___1_destination;
		uint64_t* L_77 = ___0_source;
		uint64_t L_78 = (*(uint64_t*)L_77);
		uint64_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_79);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_76 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_81;
		L_81 = TypeTraits_1_get_IsUnityObject_m045F197E7B78A8292A94ABC18FD8D77C1E24D60F_inline(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_81;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_0210;
		}
	}
	{
		uint64_t* L_83 = ___0_source;
		uint64_t L_84 = (*(uint64_t*)L_83);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_85 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = TypeConversion_TryConvertToUnityEngineObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mACFCF7795F4A00D4CB478544E5B5B3D4A37D5977(L_84, L_85, il2cpp_rgctx_method(method->rgctx_data, 14));
		V_15 = L_86;
		bool L_87 = V_15;
		if (!L_87)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = TypeTraits_1_get_IsEnum_mBABCE38129A0281F81AC4493B9E09F7B56F24F12_inline(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_88;
		bool L_89 = V_16;
		if (!L_89)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		V_17 = L_94;
		bool L_95 = V_17;
		if (!L_95)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_96 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		uint64_t* L_99 = ___0_source;
		uint64_t L_100 = (*(uint64_t*)L_99);
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_101);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_103;
		L_103 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_98, ((String_t*)CastclassSealed((RuntimeObject*)L_102, il2cpp_defaults.string_class)), NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_96 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_103, il2cpp_rgctx_data(method->rgctx_data, 6))));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_104 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_105 = ___1_destination;
		il2cpp_codegen_initobj(L_105, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_107, NULL);
		V_18 = L_108;
		bool L_109 = V_18;
		if (!L_109)
		{
			goto IL_02b2;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_110 = ___1_destination;
		uint64_t* L_111 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_112;
		L_112 = UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_inline(L_111, il2cpp_rgctx_method(method->rgctx_data, 7));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_113 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_112);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_110 = L_113;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		V_20 = L_115;
		uint64_t L_116 = V_20;
		uint64_t L_117 = L_116;
		RuntimeObject* L_118 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_117);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_118, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		uint64_t L_119 = V_20;
		uint64_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_120);
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6))));
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_122 = V_19;
		if (!L_122)
		{
			goto IL_02f1;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_123 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_124 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_123 = L_124;
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		NullCheck(L_126);
		bool L_129;
		L_129 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_126, L_128);
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_032b;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_131 = ___1_destination;
		uint64_t* L_132 = ___0_source;
		uint64_t L_133 = (*(uint64_t*)L_132);
		uint64_t L_134 = L_133;
		RuntimeObject* L_135 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), &L_134);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_131 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_135, il2cpp_rgctx_data(method->rgctx_data, 6))));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_136 = ___1_destination;
		il2cpp_codegen_initobj(L_136, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_137 = V_3;
		return L_137;
	}
}
// Method Definition Index: 78387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m47462EFF2D5E76987B192BA0DA9F4B74072B7DA3_gshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	const Il2CppFullySharedGenericAny L_55 = L_44;
	const Il2CppFullySharedGenericAny L_62 = L_44;
	const Il2CppFullySharedGenericAny L_77 = L_44;
	const Il2CppFullySharedGenericAny L_84 = L_44;
	const Il2CppFullySharedGenericAny L_91 = L_44;
	const Il2CppFullySharedGenericAny L_107 = L_44;
	const Il2CppFullySharedGenericAny L_123 = L_44;
	const Il2CppFullySharedGenericAny L_126 = L_44;
	const Il2CppFullySharedGenericAny L_141 = L_44;
	const Il2CppFullySharedGenericAny L_124 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_66 = L_9;
	const Il2CppFullySharedGenericAny L_86 = L_9;
	const Il2CppFullySharedGenericAny L_110 = L_9;
	const Il2CppFullySharedGenericAny L_121 = L_9;
	const Il2CppFullySharedGenericAny L_128 = L_9;
	const Il2CppFullySharedGenericAny L_132 = L_9;
	const Il2CppFullySharedGenericAny L_143 = L_9;
	Delegate_t* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	memset(V_1, 0, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Type_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Il2CppFullySharedGenericAny V_20 = alloca(SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	memset(V_20, 0, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B41_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_1, L_3, (&V_0), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___1_destination;
		Delegate_t* L_7 = V_0;
		Il2CppFullySharedGenericAny* L_8 = ___0_source;
		NullCheck(((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), ((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 3))), L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_9, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_9);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_003f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_11, NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_006c;
	}

IL_006b:
	{
		G_B5_0 = 0;
	}

IL_006c:
	{
		V_4 = (bool)G_B5_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_19 = ___1_destination;
		Il2CppFullySharedGenericAny* L_20 = ___0_source;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_22, L_21, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_19, L_22, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_19, (void*)L_22);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(il2cpp_rgctx_method(method->rgctx_data, 8));
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_017a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_25;
		L_25 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		Type_t* L_31;
		L_31 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_31, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B11_0 = 0;
	}

IL_00c7:
	{
		V_7 = (bool)G_B11_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_34 = ___1_destination;
		il2cpp_codegen_initobj(L_34, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_00dc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Type_t* L_37;
		L_37 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_36, NULL);
		V_6 = L_37;
		Type_t* L_38 = V_6;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(71, L_38);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		Type_t* L_41 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		Type_t* L_42;
		L_42 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_41, NULL);
		V_9 = L_42;
		Il2CppFullySharedGenericAny* L_43 = ___0_source;
		il2cpp_codegen_memcpy(L_44, L_43, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_45 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_44);
		Type_t* L_46 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_47;
		L_47 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_45, L_46, NULL);
		V_10 = L_47;
		Il2CppFullySharedGenericAny* L_48 = ___1_destination;
		Type_t* L_49 = V_6;
		RuntimeObject* L_50 = V_10;
		RuntimeObject* L_51;
		L_51 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_49, L_50, NULL);
		void* L_53 = UnBox_Any(L_51, il2cpp_rgctx_data(method->rgctx_data, 6), L_52);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0133:
	{
		Il2CppFullySharedGenericAny* L_54 = ___0_source;
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		bool L_56 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_55);
		bool L_57 = L_56;
		V_11 = L_57;
		bool L_58 = V_11;
		if (!L_58)
		{
			goto IL_0156;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_59 = ___1_destination;
		il2cpp_codegen_initobj(L_59, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0156:
	{
		Il2CppFullySharedGenericAny* L_60 = ___1_destination;
		Il2CppFullySharedGenericAny* L_61 = ___0_source;
		il2cpp_codegen_memcpy(L_62, L_61, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_62);
		Type_t* L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_65;
		L_65 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_63, L_64, NULL);
		void* L_67 = UnBox_Any(L_65, il2cpp_rgctx_data(method->rgctx_data, 6), L_66);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_60, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_67)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_60, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_67)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_017a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 11));
		bool L_68;
		L_68 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_68)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		Type_t* L_73;
		L_73 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_73, NULL);
		G_B21_0 = ((int32_t)(L_74));
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B21_0 = 0;
	}

IL_01a2:
	{
		V_12 = (bool)G_B21_0;
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_01e9;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_76 = ___0_source;
		il2cpp_codegen_memcpy(L_77, L_76, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		bool L_78 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_77);
		bool L_79 = L_78;
		V_13 = L_79;
		bool L_80 = V_13;
		if (!L_80)
		{
			goto IL_01cc;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_81 = ___1_destination;
		il2cpp_codegen_initobj(L_81, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_01cc:
	{
		Il2CppFullySharedGenericAny* L_82 = ___1_destination;
		Il2CppFullySharedGenericAny* L_83 = ___0_source;
		il2cpp_codegen_memcpy(L_84, L_83, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_85 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_84);
		void* L_87 = UnBox_Any(L_85, il2cpp_rgctx_data(method->rgctx_data, 6), L_86);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_82, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_82, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_87)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_01e9:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_88;
		L_88 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		V_14 = L_88;
		bool L_89 = V_14;
		if (!L_89)
		{
			goto IL_0210;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_90 = ___0_source;
		il2cpp_codegen_memcpy(L_91, L_90, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		Il2CppFullySharedGenericAny* L_92 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? L_91: *(void**)L_91), L_92);
		V_15 = L_93;
		bool L_94 = V_15;
		if (!L_94)
		{
			goto IL_020f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_020f:
	{
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		bool L_95;
		L_95 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)))(il2cpp_rgctx_method(method->rgctx_data, 15));
		V_16 = L_95;
		bool L_96 = V_16;
		if (!L_96)
		{
			goto IL_02b3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		bool L_101;
		L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
		V_17 = L_101;
		bool L_102 = V_17;
		if (!L_102)
		{
			goto IL_0284;
		}
	}
	{
	}
	try
	{
		Il2CppFullySharedGenericAny* L_103 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		Il2CppFullySharedGenericAny* L_106 = ___0_source;
		il2cpp_codegen_memcpy(L_107, L_106, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_108 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_107);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.enum_class);
		RuntimeObject* L_109;
		L_109 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_105, ((String_t*)CastclassSealed((RuntimeObject*)L_108, il2cpp_defaults.string_class)), NULL);
		void* L_111 = UnBox_Any(L_109, il2cpp_rgctx_data(method->rgctx_data, 6), L_110);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_103, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_111)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_103, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_111)));
		goto IL_027d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_112 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Il2CppFullySharedGenericAny* L_113 = ___1_destination;
		il2cpp_codegen_initobj(L_113, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0336;
	}

IL_027d:
	{
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_0284:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_115, NULL);
		V_18 = L_116;
		bool L_117 = V_18;
		if (!L_117)
		{
			goto IL_02b2;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_118 = ___1_destination;
		Il2CppFullySharedGenericAny* L_119 = ___0_source;
		Il2CppFullySharedGenericAny* L_120;
		L_120 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_119, il2cpp_rgctx_method(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_121, L_120, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_118, L_121, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_118, (void*)L_121);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		Il2CppFullySharedGenericAny* L_122 = ___0_source;
		il2cpp_codegen_memcpy(L_123, L_122, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		il2cpp_codegen_memcpy(V_20, L_123, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		il2cpp_codegen_memcpy(L_124, V_20, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_125 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_124);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_125, il2cpp_rgctx_data(method->rgctx_data, 6))))
		{
			goto IL_02de;
		}
	}
	{
		il2cpp_codegen_memcpy(L_126, V_20, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_126);
		void* L_129 = UnBox_Any(((RuntimeObject*)IsInst((RuntimeObject*)L_127, il2cpp_rgctx_data(method->rgctx_data, 6))), il2cpp_rgctx_data(method->rgctx_data, 6), L_128);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_129)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		G_B41_0 = 1;
		goto IL_02df;
	}

IL_02de:
	{
		G_B41_0 = 0;
	}

IL_02df:
	{
		V_19 = (bool)G_B41_0;
		bool L_130 = V_19;
		if (!L_130)
		{
			goto IL_02f1;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_131 = ___1_destination;
		il2cpp_codegen_memcpy(L_132, V_1, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_131, L_132, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_131, (void*)L_132);
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_02f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		NullCheck(L_134);
		bool L_137;
		L_137 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_134, L_136);
		V_21 = L_137;
		bool L_138 = V_21;
		if (!L_138)
		{
			goto IL_032b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_139 = ___1_destination;
		Il2CppFullySharedGenericAny* L_140 = ___0_source;
		il2cpp_codegen_memcpy(L_141, L_140, SizeOf_TSource_t8387A7C1568F3191AFFE5EB22703E8A3F4A1C106);
		RuntimeObject* L_142 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_141);
		void* L_144 = UnBox_Any(L_142, il2cpp_rgctx_data(method->rgctx_data, 6), L_143);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_139, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_144)), SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_139, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_144)));
		V_3 = (bool)1;
		goto IL_0336;
	}

IL_032b:
	{
		Il2CppFullySharedGenericAny* L_145 = ___1_destination;
		il2cpp_codegen_initobj(L_145, SizeOf_TDestination_t6B5CBE9E69909A9E5F856308CB6C124C3574CDCF);
		V_3 = (bool)0;
		goto IL_0336;
	}

IL_0336:
	{
		bool L_146 = V_3;
		return L_146;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3EC2E6CC651F5711760833162753A254B996B858_gshared (bool ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_25 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_25)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_25)->___value), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_37 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_37)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_37)->___value), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mE4F5128C2AC33FCBAAB2EA1D97F23DE21140AABA_gshared (bool ___0_source, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_25 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)L_37 = ((*(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mFD408C8E8D6992E3122EE9D1CE81B275C842BDE3_gshared (bool ___0_source, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_25 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_37 = ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mFA86C49C9AA65785203D147F583FA93167162807_gshared (bool ___0_source, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_25 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_37 = ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m4A6BD5DECE03803DC4C61B9F103F74C1B1640C49_gshared (bool ___0_source, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_25 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_37 = ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mB2EAD55F77A71B5DC8A661C174C0238532DCDE3F_gshared (bool ___0_source, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_25 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_37 = ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m27F03E1DD1B1FE4B393E7332585935EE419FCFCD_gshared (bool ___0_source, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_25)->___m_VectorImage), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37 = ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_37)->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mCB7EA012C3FC4B6C3782D2873C8E3111C51329D8_gshared (bool ___0_source, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_25 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_37 = ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mED19B24DB09662B375035E4F57D396BD86463AF2_gshared (bool ___0_source, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_25 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_37 = ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m11704B26D8C14B1E32E4880F7222798E53A56E8C_gshared (bool ___0_source, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_25 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_37 = ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mEC0AE602E4DECF730CFCF4B3B6383627B99F9997_gshared (bool ___0_source, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_25 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_37 = ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m015B1A96668CBDBD4FF40B64E52BDAC9043B7F03_gshared (bool ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(bool));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		bool* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(bool));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		bool* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(bool*)L_25 = ((*(bool*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		bool* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(bool*)L_37 = ((*(bool*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		bool* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(bool));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m301803FA77A17119EB7F5E7CD7CDD759F1B6CD22_gshared (bool ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(uint8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		uint8_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(uint8_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		uint8_t* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(uint8_t*)L_25 = ((*(uint8_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		uint8_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(uint8_t*)L_37 = ((*(uint8_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		uint8_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(uint8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m66EDB994914B8BE910559BF8CA56620F8D6D6537_gshared (bool ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Il2CppChar));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Il2CppChar* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Il2CppChar));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Il2CppChar* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Il2CppChar*)L_25 = ((*(Il2CppChar*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Il2CppChar* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Il2CppChar*)L_37 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Il2CppChar* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Il2CppChar));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBED3483322D61A71393E2C22F0879301EC15FF3F_gshared (bool ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_25 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_37 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF3F0200FAF77B30F1C9C72D1548492619993A085_gshared (bool ___0_source, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_25 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_25)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_37 = ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_37)->___U3CtextureU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m0B085F6E02953C4EE72344A7E6C17EC7B42F2CB4_gshared (bool ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_25 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_37 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB9B908E8E0BE8AD5C6094DD6EC55A61610F8EFD5_gshared (bool ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		double* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(double));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		double* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(double));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		double* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(double*)L_25 = ((*(double*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		double* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(double*)L_37 = ((*(double*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		double* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(double));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA6BD039007AC727658672CE6E3067654B6616C2E_gshared (bool ___0_source, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_25 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_37 = ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mF415654D7DBFF0E31EDFE7B7BEFE7F1297BEC0CE_gshared (bool ___0_source, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_25 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_37 = ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m58F327285E04824534A291178765CE9EDFF609E3_gshared (bool ___0_source, EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877*)L_25 = ((*(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877*)L_37 = ((*(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m7C4F4AB9E0147EEC66207CA16CDFB711518C3FAF_gshared (bool ___0_source, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952*)L_25 = ((*(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952*)L_37 = ((*(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824_m435D38761FE8ED4841A3A85EEB21045AFBD59F4F_gshared (bool ___0_source, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*)L_25 = ((*(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*)L_37 = ((*(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21_m8E29ED192D383656BBD20C3DA0F9FE275A4AFE79_gshared (bool ___0_source, FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21*)L_25 = ((*(FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21*)L_37 = ((*(FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_mEAA8063495A4129C59A691A510766150C5946FE0_gshared (bool ___0_source, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*)L_25 = ((*(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*)L_37 = ((*(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m4A68FA7A8B555E6B2EA4A1430ED86107E8E3AF4C_gshared (bool ___0_source, FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5*)L_25 = ((*(FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5*)L_37 = ((*(FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m20415D0C45BEB2D39110CF70FD5B4C01132FC45F_gshared (bool ___0_source, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_25)->___m_FontAsset), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37 = ((*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_37)->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisGuid_t_mE468885431B77B7FBF0B64AF4008A4774CE466F4_gshared (bool ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Guid_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Guid_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Guid_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Guid_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Guid_t* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Guid_t*)L_25 = ((*(Guid_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Guid_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Guid_t*)L_37 = ((*(Guid_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Guid_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Guid_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mE363BE6F9D1B0C6AC60B782EA77E6F7749967738_gshared (bool ___0_source, Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B*)L_25 = ((*(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B*)L_37 = ((*(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2A969E3B6CC5BA370F9659F2F689CD39FF142F15_gshared (bool ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int16_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int16_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int16_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int16_t* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int16_t*)L_25 = ((*(int16_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int16_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int16_t*)L_37 = ((*(int16_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int16_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int16_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA8CEE27C96F3E3BE4D5E485891B1749623D947EA_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int32_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int32_t*)L_25 = ((*(int32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int32_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int32_t*)L_37 = ((*(int32_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int32_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mAC11224D028618DD6A80DCF6FF40A82743DBF7AF_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int32_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int32_t*)L_25 = ((*(int32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int32_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int32_t*)L_37 = ((*(int32_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int32_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int32_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mAE1DE3F29BD837B26E3A054245441A79068C06AC_gshared (bool ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int64_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int64_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int64_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int64_t* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int64_t*)L_25 = ((*(int64_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int64_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int64_t*)L_37 = ((*(int64_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int64_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int64_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mCB69A96B5A602534A9D216914CCBF8432B417025_gshared (bool ___0_source, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_25 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_37 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mC02C724E7E2FA6DCE702CFE05910F2CF944C9533_gshared (bool ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject** L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject** L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(RuntimeObject*));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject** L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(RuntimeObject**)L_25 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_25, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		RuntimeObject** L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(RuntimeObject**)L_37 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_37, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		RuntimeObject** L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(RuntimeObject*));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m6789543806E7789775BD2DC4317B54B438B478DE_gshared (bool ___0_source, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_25 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_37 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m7B7C9D2E660ADA1AA3B2F6B0D889C1A33B803B83_gshared (bool ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int8_t* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(int8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		int8_t* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(int8_t));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int8_t* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(int8_t*)L_25 = ((*(int8_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		int8_t* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(int8_t*)L_37 = ((*(int8_t*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		int8_t* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(int8_t));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mA6B60B5842671501DFC96720BB017795C2C01732_gshared (bool ___0_source, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_25 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_37 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m1D41687F69EA4F20F0AE750EEA79880F55E2CAF7_gshared (bool ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_25 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_37 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m825B2E827D6E6CFB0CA8BD91A308AF30AADCC4F5_gshared (bool ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_25 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_37 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m39285009311F44B47048013D86C146E4506A7036_gshared (bool ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_25 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_37 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE9A960AE947D0A4F542D3628782F69A023D5FA1_gshared (bool ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		float* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(float));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		float* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(float));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		float* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(float*)L_25 = ((*(float*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		float* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(float*)L_37 = ((*(float*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		float* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(float));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m6BF04AF79C9560962AC589BA0229BF3B98B7F28D_gshared (bool ___0_source, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_25)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_37)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mF08465C43FC23CA67552EF6320C7A659FD311539_gshared (bool ___0_source, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_25 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_37 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mE9E86135B0B2AF7815C431ECB51D48AFE9B85F94_gshared (bool ___0_source, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_25 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_37 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mF2BE7885A969CCFFF1CDB0BD73967CBDA210B144_gshared (bool ___0_source, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_25 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_37 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m1C34D878E0FC01C91428F544DCCB63DAEBD947CA_gshared (bool ___0_source, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_25 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_37 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m003DE98E47EF265E625216627D2D8E3531A831F0_gshared (bool ___0_source, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_25 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_25)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_37 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_37)->___m_Value))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mFE84D890D4EA848AA8ED59184F4037A62D46C651_gshared (bool ___0_source, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_25 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_37 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m1DF2BF9D632CFF4B7ACF516C99F054B14AEFC257_gshared (bool ___0_source, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_25 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_25)->___m_Value), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_37 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_37)->___m_Value), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m539D07FBA525979DC960D380874C02B8E25E92F5_gshared (bool ___0_source, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_25)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_37)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mFEBDAF2BB376B058D196013BA8D6E48FD39ED4D3_gshared (bool ___0_source, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_25 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_37 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m9C6F161A7F18CD40F3E5F63DDA3AAD3AC768D9B5_gshared (bool ___0_source, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_25 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_37 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m29D9E98EE92CB4C147C8332E2C84FFE332CDFE43_gshared (bool ___0_source, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_25 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_25)->___U3CnameU3Ek__BackingField), (void*)NULL);
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_37 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_37)->___U3CnameU3Ek__BackingField), (void*)NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mE45938538E4A3CCB759174914267C99EEDEA7B02_gshared (bool ___0_source, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_25 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_37 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mDE9825998B9E3CC92DC4D315CB3803EE7D7A1188_gshared (bool ___0_source, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_25 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_37 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mE934DF91FC18F76C556AF90CACCB151B4AF39C41_gshared (bool ___0_source, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_25 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_37 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m7BB07240568DA04306CFEB91EA09CE49DECB5F39_gshared (bool ___0_source, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_25 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_37 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mF1D229E80594A52AA534309F23E191FE3176366A_gshared (bool ___0_source, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_25 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_37 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mA215E2CAEB1D6D2136C54659A23AAE12F4E5B474_gshared (bool ___0_source, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_25 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_37 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m9EBC371AC5F9EC1E202D49EEE8E9CACD542C4C5A_gshared (bool ___0_source, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_25 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_37 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mA98364C985932BEDA01B55354015F127EBD1B4F2_gshared (bool ___0_source, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_25 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_37 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m745EE2CC514AA0594833C0CF97F5F99B6C4EA07B_gshared (bool ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_25 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_37 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m7E088DF6AE8EDCB27CCF35018646F60E4054D5EA_gshared (bool ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_25 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_37 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mB740C2C0519FC00B212B5FE7FEF8E56447D60864_gshared (bool ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_25 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_37 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDFE99E6B68C9ABC258B8713D2D6DC82F40457803_gshared (bool ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_6 = ___1_destination;
		il2cpp_codegen_initobj(L_6, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_8, L_10);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = ___0_source;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_13);
		G_B5_0 = ((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 1;
	}

IL_005c:
	{
		V_3 = (bool)G_B5_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_16 = ___0_source;
		V_4 = false;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_18 = ___1_destination;
		il2cpp_codegen_initobj(L_18, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_007f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_25 = ___1_destination;
		bool L_26 = ___0_source;
		bool L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_27);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_25 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_010d;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_30, L_32, (&V_0), NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0102;
		}
	}
	{
		Delegate_t* L_35 = V_0;
		NullCheck(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = TypeConverter_2_Invoke_mBB3C64E09F15594196DBDB15DB842E6D1906511F_inline(((TypeConverter_2_t0EC450E436800BCFA7234233E806F06683B9DE77*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 5))), (&___0_source), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = L_36;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_37 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_38 = V_7;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_37 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		V_2 = L_40;
		goto IL_010d;
	}

IL_0102:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_41 = ___1_destination;
		il2cpp_codegen_initobj(L_41, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		V_2 = (bool)0;
		goto IL_010d;
	}

IL_010d:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeConverter_2_Invoke_mA6EA339307DD421BFAE6AE065311D3F3E20EBCEF_gshared_inline (TypeConverter_2_tA1294B128343BB056E51EB6FF55066CE97CB7EEE* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m4413FACD18C6B43171CE3378B42EC74CE90D7455_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m594F1785260F543C80727C5AE774E29CF23D8959_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m2CDB8D2BAADA49EAE5F95CCBB38A610E551F5139_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t TypeConverter_2_Invoke_m04812DDA0993CDC73AE09E0F48FFCC7CAA10E8D1_gshared_inline (TypeConverter_2_t607BB8388D035574B209D39CDFBC1F5FCD78ED0B* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef uint16_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1BAF7CCF80CD01A05CF661D6060267F6FCDA0956_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (uint16_t*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mB18428A733917FF5D9B44175861147CA10B46B20_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m0800E281B1BAC1A8974961F84A0739B4B5D69841_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TypeConverter_2_Invoke_mB2B33D8117DB83B5402E252BA6091805D715D636_gshared_inline (TypeConverter_2_tEDCD8982BC6DDFE89F33195FDAC02B6C83A71FB6* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB89359003C500D4E91F5770F8FDF647B08A28D7D_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (uint32_t*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mBBD527B343F869224CD164D8DFEA4FC4066A740E_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m06863AC8F52B5115CCF0064BFF6E0222D7E90224_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TypeConverter_2_Invoke_m4508B91714DA608D2E75CD6C9C0BAA3756483D90_gshared_inline (TypeConverter_2_t71478FDDA03E31353E00AA454F92B11B3898F208* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef uint64_t (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m81A97F5C1EA36015C038DCBAB01FC014CD86BF6A_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (uint64_t*)(L_0);
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m6E0D1AF4CE31EEF2245AB222313E33BFF9035958_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_mB487817AC7ABF02B19716E754AE3E636656832AA_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeConverter_2_Invoke_m1BA070D1874F8A7E8632280C4B8C8F92D469077F_gshared_inline (TypeConverter_2_tE51C044D88BBC4611120A97594020A5A0F95370F* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mDB31CF1DC3F8D988E5FFE32AF88F0F6CBB665061_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m93F02B7A3E552FFCAB3CE2FF59C936436C6B36F4_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_mD3FDBD76A422EF87DC71ACF3B533502581B03B75_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeConverter_2_Invoke_m23FC7F630D53A3123DC7A011E601A01F56D965FE_gshared_inline (TypeConverter_2_tD6D1604B2DCFEB45D1885E1C5A6AA26DBAD50E5F* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m2214A49C41DF7044BF9E46A31DDEFCF30E222BA5_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mAC1B5A4572D5A19BC4395D6B3E4056DF60ACBFCF_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m804A788CB1B80CB8E124F81F0B70577533CEA276_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeConverter_2_Invoke_mEBE52EDE6BB158A3931FC005C17BA29E77C3A428_gshared_inline (TypeConverter_2_t7352D4A1AB4EE912C593B1CFEF10E9B9A14C9D0C* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7339E1D9120843E5B76233A0A62D3810A03E9E4B_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m50CA4D35C901DFD3896C3828F0323AA64806B8D1_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m6E42FE6A2733731FD34A8D0DF2E5A4EBA887EA32_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeConverter_2_Invoke_mC2318EB9013E659C6C2BD2A9295629301B030973_gshared_inline (TypeConverter_2_t1674952CD7CA572DACE4B8B62B277A454FFD5244* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F542817C2E4A678C11E38F9DC832B19BE154A82_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_mD8C294C3D33C9725EDEF652AE8156D10DC4D4CD1_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_m85967F8CB9FAD027F007800E553FF4D41214B16B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeConverter_2_Invoke_mA146BFD1D80B5052AA2FB39953FED09BCB40D840_gshared_inline (TypeConverter_2_t0D1ACA65D6A02C5FA97E867E1A45E2E4884B4D6A* __this, uint64_t* ___0_value, const RuntimeMethod* method) 
{
	typedef Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*FunctionPointerType) (RuntimeObject*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54025
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9C4B6C27B7225FC18A0BC10B8BDDA7925ADBFF79_gshared_inline (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(L_0);
	}
}
// Method Definition Index: 78598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsUnityObject_m045F197E7B78A8292A94ABC18FD8D77C1E24D60F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsUnityObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsEnum_mBABCE38129A0281F81AC4493B9E09F7B56F24F12_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsEnumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78383
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_2_Invoke_m22056620738FD44283C48FEFE188EBF9C3817904_gshared_inline (TypeConverter_2_t7E280199B9D2473089552A2C810A473A1C4B7BE5* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, bool*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
