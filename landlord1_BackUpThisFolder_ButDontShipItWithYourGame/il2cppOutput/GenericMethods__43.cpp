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
template <typename T1>
struct ConstrainedActionInvoker1
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct HashMapHelper_1_tE0B811FFE85476B2B6A8FF52916AD3CCCACDB8D1;
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35;
struct UnsafeList_1_t9EE037C854CAF313C828FD36BE2DCFBBB52E4659;
struct UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3;
struct UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct NativeTextElementInfoU5BU5D_t4990577B63060372F4854E7FB6EFC6BD17169D41;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46;
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD;
struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2;
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct IntPtr_t;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Type_t;
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA;
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE;
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E;
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B;
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452;
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34;
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C;
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA;
struct ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81;
struct BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8;
struct OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982;
struct SharedComponentInfo_tC04CFD574DE82A0BD72273D1EB8868562AE8D021;
struct ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07;
struct HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA515DF9A6BFAAD184ED199830B01884B94168561;
IL2CPP_EXTERN_C const RuntimeMethod* BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct BlobProxy_t02E2BE16CD8692CAE659D61252AF7A4B3FC5E9E4  : public RuntimeObject
{
};
struct BlobStringExtensions_t161E07103958FBA1C981E642FBF37D20E6D90FA8  : public RuntimeObject
{
};
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16 
{
	int32_t ___m_OffsetPtr;
	int32_t ___m_Length;
};
struct BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 
{
	void* ___m_data;
	int32_t ___m_length;
};
struct BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8 
{
	int32_t ___m_OffsetPtr;
};
struct Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D 
{
	int32_t* ___m_Ptr;
	int32_t ___m_Length;
	int32_t ___m_Index;
};
struct HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	RuntimeObject* ___compiledGraph;
};
struct NativeHashMap_2_tAA54A0A272366C8E734042AFB3718E33A796FB6B 
{
	HashMapHelper_1_tE0B811FFE85476B2B6A8FF52916AD3CCCACDB8D1* ___m_Data;
};
struct NativeList_1_t32DFFD312C81C04D79240FCA876F11855336EE47 
{
	UnsafeList_1_t9EE037C854CAF313C828FD36BE2DCFBBB52E4659* ___m_ListData;
};
struct NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8 
{
	UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* ___m_ListData;
};
struct NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE 
{
	UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* ___m_ListData;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 
{
	void* ____buffer;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA 
{
	uint8_t ___Item1;
	uint8_t ___Item2;
	uint8_t ___Item3;
	uint8_t ___Item4;
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
struct AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 
{
	int32_t ___TypeIndex;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF 
{
	int32_t ___Length;
	uint64_t ___Hash;
};
struct BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___Header;
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
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
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
struct ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A 
{
	int32_t ___Value;
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
struct ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B 
{
	uint64_t ___Id;
};
struct DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD 
{
	int32_t ___index;
	int32_t ___version;
};
struct DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 
{
	int32_t ___start;
	int32_t ___end;
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___Archetype;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 
{
	uint64_t ___a;
	uint64_t ___b;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			int32_t ___m_Data;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[4];
	};
};
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 
{
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl;
	uint64_t _____seqno;
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
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
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD 
{
	double ___cpuFrameTime;
	double ___cpuMainThreadFrameTime;
	double ___cpuMainThreadPresentWaitTime;
	double ___cpuRenderThreadFrameTime;
	double ___gpuFrameTime;
	uint64_t ___frameStartTimestamp;
	uint64_t ___firstSubmitTimestamp;
	uint64_t ___cpuTimePresentCalled;
	uint64_t ___cpuTimeFrameComplete;
	float ___heightScale;
	float ___widthScale;
	uint32_t ___syncInterval;
};
struct GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 
{
	int32_t ___levelCount;
	float ___lodSlope;
	float ___lodBias;
};
struct GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38 
{
	uint32_t ___data;
};
struct GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868 
{
	uint32_t ___data;
};
struct GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB 
{
	uint64_t ___sceneCullingMask;
};
struct GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F 
{
	int32_t ___forceLod;
	float ___lodSelectionBias;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 
{
	int32_t ___U3CindexU3Ek__BackingField;
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
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D 
{
	int16_t ___start;
	int16_t ___end;
};
struct IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7 
{
	int32_t ___Value;
	int32_t ___Index;
};
struct IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02 
{
	int32_t ___drawAllocIndex;
	int32_t ___drawCount;
	int32_t ___instanceAllocIndex;
	int32_t ___instanceCount;
};
struct IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB 
{
	uint32_t ___indexCount;
	uint32_t ___firstIndex;
	uint32_t ___baseVertex;
	uint32_t ___firstInstanceGlobalIndex;
	uint32_t ___maxInstanceCountAndTopology;
};
struct IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB 
{
	int32_t ___drawOffsetAndSplitMask;
	int32_t ___instanceIndexAndCrossFade;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431 
{
	uint32_t ____DrawInfoAllocIndex;
	uint32_t ____DrawInfoCount;
	uint32_t ____InstanceInfoAllocIndex;
	uint32_t ____InstanceInfoCount;
	int32_t ____BoundingSphereInstanceDataAddress;
	int32_t ____DebugCounterIndex;
	int32_t ____InstanceMultiplierShift;
	int32_t ____InstanceOcclusionCullerPad0;
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
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
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
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937 
{
	int32_t ___NameID;
	uint32_t ___Value;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354 
{
	String_t* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_pinvoke
{
	char* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___utf8ByteCount;
};
struct PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 
{
	int32_t ___PackedEntityIndex;
	int32_t ___PackedTypeIndex;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F 
{
	void* ___Buffer;
	int64_t ___Offset;
	int64_t ___Size;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6 
{
	HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3* ___HeaderData;
};
struct ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC 
{
	int32_t ___passId;
	int32_t ___inputSlot;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC 
{
	bool ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_pinvoke
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_com
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46* ___BlobAssetBatchPtr;
};
struct RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___BlobAsset;
};
#pragma pack(push, tp, 1)
struct RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47 
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
					int64_t ___m_BlobAssetRefStorage;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_BlobAssetRefStorage_forAlignmentOnly;
				};
			};
		};
		uint8_t RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47__padding[8];
	};
};
#pragma pack(pop, tp)
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3 
{
	int32_t ___v0;
	int32_t ___v1;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
};
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	float ___shr0;
	float ___shr1;
	float ___shr2;
	float ___shr3;
	float ___shr4;
	float ___shr5;
	float ___shr6;
	float ___shr7;
	float ___shr8;
	float ___shg0;
	float ___shg1;
	float ___shg2;
	float ___shg3;
	float ___shg4;
	float ___shg5;
	float ___shg6;
	float ___shg7;
	float ___shg8;
	float ___shb0;
	float ___shb1;
	float ___shb2;
	float ___shb3;
	float ___shb4;
	float ___shb5;
	float ___shb6;
	float ___shb7;
	float ___shb8;
};
struct SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 
{
	float ___height;
	uint32_t ___spriteIndex;
	int32_t ___cornerMode;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
#pragma pack(push, tp, 1)
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C 
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
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C__padding[4];
	};
};
#pragma pack(pop, tp)
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 
{
	int32_t ___size;
	uint8_t* ___p;
};
struct BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 
{
	int32_t ___allocIndex;
	int32_t ___offset;
};
struct SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC 
{
	uint8_t* ___p;
	int32_t ___index;
};
struct U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D__padding[64];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA 
{
	union
	{
		struct
		{
			bool ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415__padding[32];
	};
};
struct U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C__padding[32];
	};
};
struct U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE__padding[32];
	};
};
struct U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86__padding[32];
	};
};
struct U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476__padding[384];
	};
};
struct U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997__padding[80];
	};
};
struct U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553__padding[96];
	};
};
struct U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E__padding[96];
	};
};
struct U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6__padding[96];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF__padding[128];
	};
};
struct U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9__padding[96];
	};
};
struct U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69__padding[96];
	};
};
struct U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F__padding[384];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55__padding[128];
	};
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA__padding[20];
	};
};
struct BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 
{
	uint8_t* ___Ptr;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnityObjectRef_1_t09B4E21494306A37DB9BF5E470BB7EB3460A0927 
{
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B ___Id;
};
struct UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83 
{
	ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 
{
	intptr_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C 
{
	RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 
{
	alignas(IL2CPP_SIZEOF_VOID_P) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 
{
	ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D 
{
	GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B 
{
	GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 
{
	GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 
{
	GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 
{
	ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D 
{
	ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A 
{
	ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 
{
	ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3 
{
	BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4 
{
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27 
{
	SharedComponentInfo_tC04CFD574DE82A0BD72273D1EB8868562AE8D021* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 
{
	ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31 
{
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___Item1;
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___Item2;
};
struct AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___center;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___extents;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
struct AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1 
{
	int32_t ___AuthoringComponentID;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Parent;
	int32_t ___ParentInstanceID;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 
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
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk;
				};
				#pragma pack(pop, tp)
				struct
				{
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding_forAlignmentOnly[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_forAlignmentOnly;
				};
			};
		};
		uint8_t ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5__padding[16];
	};
};
#pragma pack(pop, tp)
struct BatchCullingProjectionType_tAD14BC373E72D5F74188E0899F8670FAB51FD481 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
#pragma pack(push, tp, 1)
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639 
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
					void* ___ValidationPtr;
				};
				#pragma pack(pop, tp)
				struct
				{
					void* ___ValidationPtr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Length_OffsetPadding[8];
					int32_t ___Length;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Length_OffsetPadding_forAlignmentOnly[8];
					int32_t ___Length_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Allocator_OffsetPadding[12];
					AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Allocator_OffsetPadding_forAlignmentOnly[12];
					AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Hash_OffsetPadding[16];
					uint64_t ___Hash;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Hash_OffsetPadding_forAlignmentOnly[16];
					uint64_t ___Hash_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Padding_OffsetPadding[24];
					uint64_t ___Padding;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Padding_OffsetPadding_forAlignmentOnly[24];
					uint64_t ___Padding_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639__padding[32];
	};
};
#pragma pack(pop, tp)
struct BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311 
{
	PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 ___Component;
	int32_t ___Offset;
	uint64_t ___Value;
};
struct BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51 
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_allocator;
	NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8 ___m_allocations;
	NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE ___m_patches;
	int32_t ___m_currentChunkIndex;
	int32_t ___m_chunkSize;
};
struct BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92 
{
	BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16 ___Data;
};
struct BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___radius;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct Child_tCA0AD12FC56504F3D4A64E40855F54238020861E 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct Codec_tF522DBC4700E6753BE420F44346672832B4303A3 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct ComponentBakeReason_t928549C4700B90F22B8FF7F91BDFFC5466CB2A13 
{
	int32_t ___value__;
};
struct ComponentTypeFlags_t7F729DFD48E0293C2B98C5E4F41C3E730F6158B0 
{
	uint8_t ___value__;
};
struct ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053 
{
	void* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct ConversionError_tA911789C09E2326E83B161606EE817DDF5ED8FA9 
{
	int32_t ___value__;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___usesTextCoreSettings;
	float ___textureId;
	int32_t ___gradientSettingsIndexOffset;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
	int32_t ___forceZ;
	float ___positionZ;
	int32_t ___remapUVs;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___atlasRect;
};
struct CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93 
{
	int32_t ___viewInstanceID;
	int32_t ___subviewCount;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occluderMipLayoutSize;
};
struct DistanceMetric_t071B9815BB961E33F7CA2C553CA725F61AE09EDE 
{
	int32_t ___value__;
};
struct DrawRendererFlags_t3AD0574208BFF93F323D5E1E92012F19EAE972CD 
{
	int32_t ___value__;
};
struct DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92 
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___EntityGuid;
	int32_t ___DuplicateCount;
};
struct EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C 
{
	ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___Chunk;
	int32_t ___StartIndex;
	int32_t ___Count;
};
struct EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB 
{
	ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___Chunk;
	int32_t ___IndexInChunk;
};
struct EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE 
{
	PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 ___Component;
	int32_t ___Offset;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Value;
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
struct ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___m_RenderQueueRange;
	int32_t ___m_LayerMask;
	uint32_t ___m_RenderingLayerMask;
	uint32_t ___m_BatchLayerMask;
	int32_t ___m_ExcludeMotionVectorObjects;
	int32_t ___m_ForceAllMotionVectorObjects;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___m_SortingLayerRange;
};
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
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
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
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
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
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
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
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct InstanceComponentGroup_tD2604C50227A821E92592963B831E9D9449D3FA4 
{
	uint32_t ___value__;
};
struct InstanceFlags_t65B077096B951ED0CAAB4D73656C02827C24D324 
{
	uint8_t ___value__;
};
struct InstanceOcclusionEventType_tF66ED25A6A1D3943D326795EA91E803D666ECF79 
{
	int32_t ___value__;
};
struct InstanceType_t3EB15046939F17DF216B4C181F98D064A5F78F27 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_pinvoke
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_com
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com ___percentageFlags;
	uint8_t ___forceLODMask;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241 
{
	bool ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_com
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842 
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___RootEntityGuid;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___ChildEntityGuid;
};
struct LoadReason_t6890871E119ACAB707211201A00DE631CA266CF9 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Min;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Max;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___headSrc;
	intptr_t ___headDst;
	int32_t ___headCount;
	intptr_t ___tailSrc;
	intptr_t ___tailDst;
	int32_t ___tailCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
};
struct OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627 
{
	U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 ____InvViewProjMatrix;
	U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 ____SilhouettePlanes;
	U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E ____SrcOffset;
	U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 ____MipOffsetAndSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OccluderDepthPyramidPad0;
	uint32_t ____OccluderDepthPyramidPad1;
	uint32_t ____SrcSliceIndices;
	uint32_t ____DstSubviewIndices;
	uint32_t ____MipCount;
	uint32_t ____SilhouettePlaneCount;
};
struct OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewProjMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___viewOriginWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___radialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___facingDirWorldSpace;
};
struct OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___offset;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size;
};
struct OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7 
{
	int32_t ___subviewIndex;
	int32_t ___depthSliceIndex;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___invViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___gpuProjMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffsetWorldSpace;
};
struct OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74 
{
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF ____OccluderMipBounds;
	U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F ____ViewProjMatrix;
	U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 ____ViewOriginWorldSpace;
	U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 ____FacingDirWorldSpace;
	U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 ____RadialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____OccluderDepthPyramidSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionTestDebugFlags;
	uint32_t ____OcclusionCullingCommonPad0;
	int32_t ____OcclusionTestCount;
	int32_t ____OccluderSubviewIndices;
	int32_t ____CullingSplitIndices;
	int32_t ____CullingSplitMask;
};
struct OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 ____OccluderMipBounds;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionCullingDebugPad0;
	uint32_t ____OcclusionCullingDebugPad1;
};
struct OcclusionTest_tFF967683F812A2788B5C8A9A220B83B43060435E 
{
	int32_t ___value__;
};
struct PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2 
{
	PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 ___Component;
	int32_t ___Offset;
	int32_t ___Size;
	int32_t ___Enabled;
};
struct Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct PassBreakReason_t57DD36F9EC4ED3DA89A4740BE8C32987018CF808 
{
	int32_t ___value__;
};
struct PassMergeState_t7815130D2990D177421E7CB405CE173EC704A117 
{
	int32_t ___value__;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 
{
	int32_t ___deformVerticesStartPos;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___bindPosesIndex;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___verticesIndex;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
};
struct PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634 
{
	int32_t ___entityIndex;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___targetEntity;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
	uint32_t ___contextID;
};
struct ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SectionEntity;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity;
};
struct SceneLoadFlags_t01B8805B69006CB4DE124ED8F0B0D2E4025157CE 
{
	int32_t ___value__;
};
struct SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B 
{
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_NestedScenes;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_SceneFilter;
};
struct SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct ShadingRateCombiner_tF7F5DDD676DF45F67B2A7BC7F14373F4DFAD2B1C 
{
	int32_t ___value__;
};
struct ShadingRateFragmentSize_tE61BBA9B957F4537F04519746FCABE0F5FA94C9F 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftTangent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightTangent;
	int32_t ___mode;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct SpriteShapeGeneratorResult_t4387EDA3BC612997E080D5A0CC96946B994C8FFC 
{
	int32_t ___value__;
};
struct StoreReason_tB71F110DFEED47ED8929B7874BE46BD4AFA9D5AC 
{
	int32_t ___value__;
};
struct SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___m_Entity;
	uint16_t ___m_Handle;
	uint16_t ___m_Version;
	uint32_t ___m_WorldSeqNo;
};
struct TransformUpdateFlags_tC8BD750B1A9A2F7EBEAC0528860B0A228C2CC5C3 
{
	uint8_t ___value__;
};
struct TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D 
{
	U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA ___Counts;
	int32_t ___IsUsed;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 
{
	int32_t* ___offsetPtr;
	BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 ___target;
	int32_t ___length;
};
struct AccessMode_t08155A76104B91A50C66C3D69AB1F04FF5D91B5D 
{
	int32_t ___value__;
};
struct BufferState_t9A744F89825C691F1F63EF47368227970F7FFE17 
{
	int32_t ___value__;
};
struct LocationType_tEC1E0EF46230B348F0F9D56FEA56D0ED791C79D1 
{
	int32_t ___value__;
};
struct FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 
{
	HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 ___m_Data;
};
struct BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D ___PrimaryEntityFlags;
	UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 ___ReferencedEntityUsages;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB 
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_pinvoke
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_com
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE 
{
	UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 ___Buffers;
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___FreeList;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Handle;
	int32_t ___BufferSizeInBytes;
};
struct CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455 
{
	uint8_t ___transformUpdateFlags;
	uint8_t ___instanceFlags;
};
struct CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368 
{
	UnityObjectRef_1_t09B4E21494306A37DB9BF5E470BB7EB3460A0927 ___Companion;
};
struct ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D 
{
	int32_t ___AuthoringComponentId;
	int32_t ___BakeReason;
	int32_t ___ReasonId;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ReasonGuid;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___BakingUnityTypeIndex;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
struct ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB 
{
	uint64_t ___StableTypeHash;
	uint8_t ___Flags;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Value;
};
struct ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Value;
};
struct EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008 
{
	EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2* ___m_Data;
	int32_t ___SystemID;
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 ___OriginSystemHandle;
	int32_t ___PassedPrePlaybackValidation;
};
struct FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5 
{
	int32_t ___EntityCount;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___PackedEntityIndices;
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 ___TypeIndices;
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
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74 
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	bool ___isOverriden;
	bool ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_pinvoke
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_com
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
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
struct IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805 
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobHandle;
	int32_t ___bufferState;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
};
struct InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
	int32_t ___visibleInstancesOnCPU;
	int32_t ___visibleInstancesOnGPU;
	int32_t ___visiblePrimitivesOnCPU;
	int32_t ___visiblePrimitivesOnGPU;
	int32_t ___drawCommands;
};
struct InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD 
{
	int32_t ___viewInstanceID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
	int32_t ___visibleInstances;
	int32_t ___culledInstances;
	int32_t ___visiblePrimitives;
	int32_t ___culledPrimitives;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E 
{
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___splitRange;
	int32_t ___projectionType;
	uint16_t ___splitExclusionMask;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C 
{
	int32_t ___reason;
	int32_t ___passId;
};
struct LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___Value;
};
struct LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Position;
	float ___Scale;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___Rotation;
};
struct MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___firstIndex;
	uint32_t ___indexCount;
};
struct PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 
{
	int32_t ___reason;
	int32_t ___breakPass;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD 
{
	int32_t ___passId;
	int32_t ___type;
	bool ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	bool ___asyncCompute;
	bool ___hasSideEffects;
	bool ___culled;
	bool ___beginNativeSubpass;
	bool ___fragmentInfoValid;
	bool ___fragmentInfoHasDepth;
	bool ___insertGraphicsFence;
	bool ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_pinvoke
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_com
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___shadingRateImageIndex;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
	int32_t ___hasShadingRateStates;
};
struct PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___InvMatrix;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___Color;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___Position;
	float ___FalloffIntensity;
	float ___FalloffDistance;
	float ___OuterAngle;
	float ___InnerAngle;
	float ___InnerRadiusMult;
	float ___VolumeOpacity;
	float ___ShadowIntensity;
	int32_t ___LightType;
};
struct PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756 
{
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 ___handle;
	int32_t ___systemTypeIndex;
};
struct PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___Value;
};
struct PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___GUID;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	int32_t ___RefCount;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C 
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	bool ___staticShadowCaster;
	int32_t ___rendererPriority;
	bool ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68 
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	bool ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_pinvoke
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_com
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4 
{
	int32_t ___LoadFlags;
};
struct ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ArtifactHash;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_Value;
	int32_t ___m_Version;
	int32_t ___m_Type;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC 
{
	bool ___isImported;
	bool ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	bool ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	bool ___clear;
	bool ___discard;
	bool ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_pinvoke
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_com
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___graphicsFormat;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID;
};
struct SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID;
		};
		#pragma pack(pop, tp)
		struct
		{
			Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SubSectionIndex_OffsetPadding[16];
			int32_t ___SubSectionIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SubSectionIndex_OffsetPadding_forAlignmentOnly[16];
			int32_t ___SubSectionIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___FileSize_OffsetPadding[20];
			int32_t ___FileSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___FileSize_OffsetPadding_forAlignmentOnly[20];
			int32_t ___FileSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ObjectReferenceCount_OffsetPadding[24];
			int32_t ___ObjectReferenceCount;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ObjectReferenceCount_OffsetPadding_forAlignmentOnly[24];
			int32_t ___ObjectReferenceCount_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BoundingVolume_OffsetPadding[28];
			MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF ___BoundingVolume;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BoundingVolume_OffsetPadding_forAlignmentOnly[28];
			MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF ___BoundingVolume_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Codec_OffsetPadding[52];
			int32_t ___Codec;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Codec_OffsetPadding_forAlignmentOnly[52];
			int32_t ___Codec_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___DecompressedFileSize_OffsetPadding[56];
			int32_t ___DecompressedFileSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___DecompressedFileSize_OffsetPadding_forAlignmentOnly[56];
			int32_t ___DecompressedFileSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ExternalEntitiesRefRange_OffsetPadding[60];
			int32_t ___ExternalEntitiesRefRange;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ExternalEntitiesRefRange_OffsetPadding_forAlignmentOnly[60];
			int32_t ___ExternalEntitiesRefRange_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BlobHeader_OffsetPadding[64];
			RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47 ___BlobHeader;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BlobHeader_OffsetPadding_forAlignmentOnly[64];
			RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47 ___BlobHeader_forAlignmentOnly;
		};
	};
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldToCameraMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CustomAxis;
	int32_t ___m_Criteria;
	int32_t ___m_DistanceMetric;
};
struct SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB 
{
	int32_t ___status;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 
{
	int32_t ___reason;
	int32_t ___passId;
	int32_t ___msaaReason;
	int32_t ___msaaPassId;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___ObjectReference;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___PersistentAsset;
	UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D ___GetComponent;
	UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 ___GetHierarchySingle;
	UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 ___GetHierarchy;
	UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B ___GetComponents;
	UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 ___ObjectExist;
	UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D ___ObjectProperty;
	UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A ___ObjectStatic;
	UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 ___Active;
	int32_t ___LightBaking;
};
struct FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 
{
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a0;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a1;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a2;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a3;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a4;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a5;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a6;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 
{
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a0;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a1;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a2;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a3;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a4;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a5;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a6;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a7;
	int32_t ___activeAttachments;
};
struct Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C 
{
	bool ___hasValue;
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___value;
};
struct Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B 
{
	bool ___hasValue;
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___value;
};
struct ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F 
{
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___Item1;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E 
{
	int32_t ___m_LoadAction;
	int32_t ___m_StoreAction;
	int32_t ___m_Format;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_LoadStoreTarget;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ResolveTarget;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor;
	float ___m_ClearDepth;
	uint32_t ___m_ClearStencil;
};
struct BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 
{
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 ___AddedComponents;
	UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 ___Entities;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 ___Dependencies;
	BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A ___Usage;
};
struct BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4 
{
	BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE ___Allocator;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___range;
	int32_t ___lightmapIndex;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010 
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_pinvoke
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_com
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___m_SortingSettings;
	U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D ___shaderPassNames;
	int32_t ___m_PerObjectData;
	int32_t ___m_Flags;
	int32_t ___m_OverrideShaderID;
	int32_t ___m_OverrideShaderPassIndex;
	int32_t ___m_OverrideMaterialInstanceId;
	int32_t ___m_OverrideMaterialPassIndex;
	int32_t ___m_fallbackMaterialInstanceId;
	int32_t ___m_MainLightIndex;
	int32_t ___m_UseSrpBatcher;
	int32_t ___m_LodCrossFadeStencilMask;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	bool ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___accessFlags;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	bool ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0 
{
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___Name;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___U3CHashU3Ek__BackingField;
};
struct RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D 
{
	int32_t ___Type;
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___Path;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	uint32_t ___Crc;
	int64_t ___Size;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106 
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	bool ___m_IsEmbedded;
	bool ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_pinvoke
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_com
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 
{
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a0;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a1;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a2;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a3;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a4;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a5;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a6;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C 
{
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a0;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a1;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a2;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a3;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a4;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a5;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a6;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a7;
	int32_t ___activeAttachments;
};
struct BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE 
{
	BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4 ___m_bufferAllocator;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_allocations;
	int32_t ___m_currentBlockIndex;
	uint8_t* ___m_nextPtr;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceIndex;
};
struct EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___Id;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	bool ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D 
{
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___ScenePath;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___HybridReferenceId;
};
struct RuntimeContentManagerProfilerFrameData_t2DE5BE68A86B0ABF999A2EB8069DF75596695AFC 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___id;
	int32_t ___parent;
	int32_t ___refCount;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2 
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	bool ___hasDepth;
	bool ___hasFoveatedRasterization;
	bool ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_pinvoke
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_com
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___shadingRateImageIndex;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
	int32_t ___hasShadingRateStates;
	int32_t ___shadingRateFragmentSize;
	int32_t ___primitiveShadingRateCombiner;
	int32_t ___fragmentShadingRateCombiner;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214 
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_pinvoke
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_com
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___Null;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Null;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
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
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_StaticFields
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Null;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_StaticFields
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___Invalid;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_StaticFields
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___s_Null;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_StaticFields
{
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___Invalid;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_StaticFields
{
	int32_t ___maximumCullingPlaneCount;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_StaticFields
{
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_None;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Buffer;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Exclude;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Readonly;
};
struct EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008_StaticFields
{
	SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 ____ms_CommandBufferIDAllocator;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileEcbPlayback;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileEcbDispose;
	SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 ____PLAYBACK_WITH_TRACE;
	SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 ____ENABLE_PRE_PLAYBACK_VALIDATION;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___LoadReasonMessages;
};
struct LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_StaticFields
{
	LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD ___Identity;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_StaticFields
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Invalid;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_StaticFields
{
	uint32_t ___s_CurrentValidBit;
	uint32_t ___s_SharedResourceValidBit;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_gshared (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_gshared (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_gshared (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_gshared (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_gshared (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_gshared (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_gshared (BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, int32_t ___0_index, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, int32_t ___0_chunkIndex, const RuntimeMethod* method) ;
inline int32_t NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*, const RuntimeMethod*))NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40 (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 (*) (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*, int32_t, const RuntimeMethod*))NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_gshared_inline)(__this, ___0_index, method);
}
inline void NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0 (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7, const RuntimeMethod*))NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_gshared)(___0_array, method);
}
inline int32_t NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*, const RuntimeMethod*))NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_gshared_inline)(__this, method);
}
inline OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 (*) (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*, int32_t, const RuntimeMethod*))NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179 (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7*, const RuntimeMethod*))NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F (void* ___0_pBuffer, int32_t ___1_numBytes, uint32_t ___2_seed, const RuntimeMethod* method) ;
inline BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_gshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobBuilder_GetPatchTarget_m4B4730A57DE2D062962412A21582052542E16723 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, void* ___0_address, BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4* ___1_blobDataRef, const RuntimeMethod* method) ;
inline void NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*, OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982*, const RuntimeMethod*))NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_gshared)(__this, ___0_ptr, ___1_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline void* BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* __this, const RuntimeMethod* method)
{
	return ((  void* (*) (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*, const RuntimeMethod*))BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobString_get_Length_mAC6DF9DA9F498307DF710C1E01A9F143FF55FF86 (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unicode_Utf8ToUtf8_m201605C57016378B046C4778E4CE25B2A2A44702 (uint8_t* ___0_srcBuffer, int32_t ___1_srcLength, uint8_t* ___2_destBuffer, int32_t* ___3_destLength, int32_t ___4_destCapacity, const RuntimeMethod* method) ;
inline int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973 (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_gshared)(__this, ___0_dest, method);
}
inline BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*, int32_t, const RuntimeMethod*))BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline void* BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22 (BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152* __this, const RuntimeMethod* method)
{
	return ((  void* (*) (BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152*, const RuntimeMethod*))BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* BlockAllocator_Allocate_m658C66EFC9B1D9F239C3969DE1C8BE7CD74DAC56 (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_bytesToAllocate, int32_t ___1_alignment, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339 (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_items, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*, int32_t, const RuntimeMethod*))BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_gshared)(__this, ___0_items, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* BlockAllocator_Construct_m19308FE9D6B334CF21ACBD1DA82453D418EEBCE6 (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_size, int32_t ___1_alignment, void* ___2_src, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_gshared)(__this, ___0_src, method);
}
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E (int32_t ___0_offset, int32_t ___1_alignment, const RuntimeMethod* method) ;
inline void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared)(__this, ___0_item1, ___1_item2, method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651 (void* ___0_ptr, int32_t ___1_bytes, const RuntimeMethod* method) ;
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared)(__this, ___0_offset, ___1_length, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared)(__this, ___0_offset, ___1_length, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared)(__this, ___0_offset, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, intptr_t ___3_type_handle, const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*, const RuntimeMethod*))UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 (*) (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*, int32_t, const RuntimeMethod*))UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_gshared_inline)(__this, ___0_index, method);
}
inline int32_t UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*, const RuntimeMethod*))UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_gshared_inline)(__this, method);
}
inline OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 (*) (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*, int32_t, const RuntimeMethod*))UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_gshared_inline)(__this, ___0_index, method);
}
// Method Definition Index: 22015
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	int32_t V_12 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t* V_21 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	uint8_t* V_28 = NULL;
	BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B V_29;
	memset((&V_29), 0, sizeof(V_29));
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:311>
		int32_t L_0 = __this->___m_currentChunkIndex;
		V_11 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_11;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:314>
		int32_t L_2 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_2, NULL);
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:317>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_3 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_3, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_4, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:318>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_5 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_6;
		L_6 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_5, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_6, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:320>
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		V_12 = 0;
		goto IL_00c1;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:323>
		int32_t L_7 = V_12;
		int32_t L_8 = V_12;
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_8);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_10 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_11 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_12;
		L_12 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_10, L_11, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_13 = L_12.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_7, 1)), (((int32_t)il2cpp_codegen_add(L_9, L_13))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:324>
		int32_t L_14 = V_12;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_15 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_16 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_17;
		L_17 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_15, L_16, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_18 = L_17.___p;
		(&V_13)->___p = L_18;
		int32_t L_19 = V_12;
		(&V_13)->___index = L_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_20 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_14, (L_20));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_21 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_22 = V_12;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_23 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_24;
		L_24 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_23, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_14;
		if (L_25)
		{
			goto IL_005b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:326>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_26 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_27;
		L_27 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_26, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_27);
		V_2 = L_28;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:328>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_29 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_29, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:329>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_30 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_31;
		L_31 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_30, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_31, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		V_15 = 0;
		goto IL_0145;
	}

IL_0109:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:331>
		int32_t L_32 = V_15;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_33 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_34 = V_15;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_35;
		L_35 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_33, L_34, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_36 = L_35.___offsetPtr;
		(&V_13)->___p = (uint8_t*)L_36;
		int32_t L_37 = V_15;
		(&V_13)->___index = L_37;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_38 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_32, (L_38));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_39 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0145:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_40 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_41 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_42;
		L_42 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_41, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_40) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_16;
		if (L_43)
		{
			goto IL_0109;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:332>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_44 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_44, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:334>
		uint32_t L_45 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_46 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_47 = ___0_allocator;
		void* L_48;
		L_48 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, L_46))), ((int32_t)16), L_47, NULL);
		V_4 = (uint8_t*)L_48;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:335>
		uint8_t* L_49 = V_4;
		uint32_t L_50 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)L_50));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		V_17 = 0;
		goto IL_01c1;
	}

IL_0184:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:338>
		uint8_t* L_51 = V_5;
		int32_t L_52 = V_17;
		int32_t L_53;
		L_53 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_52);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_54 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_55 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_56;
		L_56 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_54, L_55, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_57 = L_56.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_58 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_59 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_60;
		L_60 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_58, L_59, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_61 = L_60.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, L_53)), (void*)L_57, ((int64_t)L_61), NULL);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_62 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_63 = V_17;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_64 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_65;
		L_65 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_64, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_63) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0184;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:340>
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:341>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_67 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_68;
		L_68 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_69 = L_68.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_70;
		L_70 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_67, L_69, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_71 = L_70.___p;
		V_7 = L_71;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:342>
		uint8_t* L_72 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_73 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_74;
		L_74 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_75 = L_74.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_76;
		L_76 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_73, L_75, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_77 = L_76.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, L_77));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		V_19 = 0;
		goto IL_0324;
	}

IL_0222:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:346>
		int32_t L_78 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_79;
		L_79 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_78);
		int32_t L_80 = L_79.___index;
		V_20 = L_80;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:347>
		int32_t L_81 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_82;
		L_82 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_81);
		uint8_t* L_83 = L_82.___p;
		V_21 = (int32_t*)L_83;
		goto IL_0290;
	}

IL_0245:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:351>
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:352>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_85 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_86 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_87;
		L_87 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_86);
		int32_t L_88 = L_87.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_89;
		L_89 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_85, L_88, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_90 = L_89.___p;
		V_7 = L_90;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:353>
		uint8_t* L_91 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_92 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_93 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_94;
		L_94 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_93);
		int32_t L_95 = L_94.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_96;
		L_96 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_92, L_95, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_97 = L_96.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, L_97));
	}

IL_0290:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:349>
		int32_t* L_98 = V_21;
		uint8_t* L_99 = V_8;
		V_25 = (bool)((((int32_t)((!(((uintptr_t)L_98) >= ((uintptr_t)L_99)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_100 = V_25;
		if (L_100)
		{
			goto IL_0245;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:356>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_101 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_102 = V_20;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_103;
		L_103 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_101, L_102, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_22 = L_103;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:358>
		int32_t L_104 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_105;
		L_105 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_104);
		int32_t L_106 = L_105.___index;
		int32_t L_107;
		L_107 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_106);
		int32_t* L_108 = V_21;
		uint8_t* L_109 = V_7;
		V_23 = ((int32_t)il2cpp_codegen_add(L_107, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_108, (intptr_t)L_109))/1))))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:359>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_110 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_111 = L_110.___target;
		int32_t L_112 = L_111.___allocIndex;
		int32_t L_113;
		L_113 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_112);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_114 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_115 = L_114.___target;
		int32_t L_116 = L_115.___offset;
		V_24 = ((int32_t)il2cpp_codegen_add(L_113, L_116));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:361>
		uint8_t* L_117 = V_5;
		int32_t L_118 = V_23;
		int32_t L_119 = V_24;
		int32_t L_120 = V_23;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_117, L_118))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_119, L_120));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:362>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_121 = V_22;
		int32_t L_122 = L_121.___length;
		V_26 = (bool)((!(((uint32_t)L_122) <= ((uint32_t)0)))? 1 : 0);
		bool L_123 = V_26;
		if (!L_123)
		{
			goto IL_031d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:364>
		uint8_t* L_124 = V_5;
		int32_t L_125 = V_23;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_126 = V_22;
		int32_t L_127 = L_126.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_124, L_125)), 4))) = (int32_t)L_127;
	}

IL_031d:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_128 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_0324:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_129 = V_19;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_130 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_131;
		L_131 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_130, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_27 = (bool)((((int32_t)L_129) < ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_27;
		if (L_132)
		{
			goto IL_0222;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:368>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:369>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:370>
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:372>
		uint8_t* L_133 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_133;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:373>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_134 = V_9;
		il2cpp_codegen_initobj(L_134, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:374>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_135 = V_9;
		int32_t L_136 = V_2;
		NullCheck(L_135);
		L_135->___Length = L_136;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:375>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_137 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_138 = ___0_allocator;
		NullCheck(L_137);
		L_137->___Allocator = L_138;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:378>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_139 = V_9;
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_142 = V_2;
		uint32_t L_143;
		L_143 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141)), L_142, (uint32_t)0, NULL);
		NullCheck(L_139);
		L_139->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_143));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:381>
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_144 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_144->___m_Align8Union = ((int64_t)0);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:382>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_145 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_146 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_147 = V_4;
		uint32_t L_148 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_149 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, (int32_t)L_148));
		V_28 = L_149;
		L_146->___m_Ptr = L_149;
		uint8_t* L_150 = V_28;
		NullCheck(L_145);
		L_145->___ValidationPtr = (void*)L_150;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:384>
		BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B L_151 = V_10;
		V_29 = L_151;
		goto IL_03bd;
	}

IL_03bd:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:385>
		BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B L_152 = V_29;
		return L_152;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
// Method Definition Index: 22015
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	int32_t V_12 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t* V_21 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	uint8_t* V_28 = NULL;
	BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 V_29;
	memset((&V_29), 0, sizeof(V_29));
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:311>
		int32_t L_0 = __this->___m_currentChunkIndex;
		V_11 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_11;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:314>
		int32_t L_2 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_2, NULL);
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:317>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_3 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_3, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_4, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:318>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_5 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_6;
		L_6 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_5, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_6, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:320>
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		V_12 = 0;
		goto IL_00c1;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:323>
		int32_t L_7 = V_12;
		int32_t L_8 = V_12;
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_8);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_10 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_11 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_12;
		L_12 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_10, L_11, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_13 = L_12.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_7, 1)), (((int32_t)il2cpp_codegen_add(L_9, L_13))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:324>
		int32_t L_14 = V_12;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_15 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_16 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_17;
		L_17 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_15, L_16, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_18 = L_17.___p;
		(&V_13)->___p = L_18;
		int32_t L_19 = V_12;
		(&V_13)->___index = L_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_20 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_14, (L_20));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_21 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_22 = V_12;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_23 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_24;
		L_24 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_23, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_14;
		if (L_25)
		{
			goto IL_005b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:326>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_26 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_27;
		L_27 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_26, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_27);
		V_2 = L_28;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:328>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_29 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_29, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:329>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_30 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_31;
		L_31 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_30, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_31, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		V_15 = 0;
		goto IL_0145;
	}

IL_0109:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:331>
		int32_t L_32 = V_15;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_33 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_34 = V_15;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_35;
		L_35 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_33, L_34, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_36 = L_35.___offsetPtr;
		(&V_13)->___p = (uint8_t*)L_36;
		int32_t L_37 = V_15;
		(&V_13)->___index = L_37;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_38 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_32, (L_38));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_39 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0145:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_40 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_41 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_42;
		L_42 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_41, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_40) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_16;
		if (L_43)
		{
			goto IL_0109;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:332>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_44 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_44, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:334>
		uint32_t L_45 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_46 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_47 = ___0_allocator;
		void* L_48;
		L_48 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, L_46))), ((int32_t)16), L_47, NULL);
		V_4 = (uint8_t*)L_48;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:335>
		uint8_t* L_49 = V_4;
		uint32_t L_50 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)L_50));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		V_17 = 0;
		goto IL_01c1;
	}

IL_0184:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:338>
		uint8_t* L_51 = V_5;
		int32_t L_52 = V_17;
		int32_t L_53;
		L_53 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_52);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_54 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_55 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_56;
		L_56 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_54, L_55, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_57 = L_56.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_58 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_59 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_60;
		L_60 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_58, L_59, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_61 = L_60.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, L_53)), (void*)L_57, ((int64_t)L_61), NULL);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_62 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_63 = V_17;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_64 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_65;
		L_65 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_64, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_63) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0184;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:340>
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:341>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_67 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_68;
		L_68 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_69 = L_68.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_70;
		L_70 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_67, L_69, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_71 = L_70.___p;
		V_7 = L_71;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:342>
		uint8_t* L_72 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_73 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_74;
		L_74 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_75 = L_74.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_76;
		L_76 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_73, L_75, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_77 = L_76.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, L_77));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		V_19 = 0;
		goto IL_0324;
	}

IL_0222:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:346>
		int32_t L_78 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_79;
		L_79 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_78);
		int32_t L_80 = L_79.___index;
		V_20 = L_80;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:347>
		int32_t L_81 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_82;
		L_82 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_81);
		uint8_t* L_83 = L_82.___p;
		V_21 = (int32_t*)L_83;
		goto IL_0290;
	}

IL_0245:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:351>
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:352>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_85 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_86 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_87;
		L_87 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_86);
		int32_t L_88 = L_87.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_89;
		L_89 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_85, L_88, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_90 = L_89.___p;
		V_7 = L_90;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:353>
		uint8_t* L_91 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_92 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_93 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_94;
		L_94 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_93);
		int32_t L_95 = L_94.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_96;
		L_96 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_92, L_95, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_97 = L_96.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, L_97));
	}

IL_0290:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:349>
		int32_t* L_98 = V_21;
		uint8_t* L_99 = V_8;
		V_25 = (bool)((((int32_t)((!(((uintptr_t)L_98) >= ((uintptr_t)L_99)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_100 = V_25;
		if (L_100)
		{
			goto IL_0245;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:356>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_101 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_102 = V_20;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_103;
		L_103 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_101, L_102, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_22 = L_103;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:358>
		int32_t L_104 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_105;
		L_105 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_104);
		int32_t L_106 = L_105.___index;
		int32_t L_107;
		L_107 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_106);
		int32_t* L_108 = V_21;
		uint8_t* L_109 = V_7;
		V_23 = ((int32_t)il2cpp_codegen_add(L_107, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_108, (intptr_t)L_109))/1))))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:359>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_110 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_111 = L_110.___target;
		int32_t L_112 = L_111.___allocIndex;
		int32_t L_113;
		L_113 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_112);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_114 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_115 = L_114.___target;
		int32_t L_116 = L_115.___offset;
		V_24 = ((int32_t)il2cpp_codegen_add(L_113, L_116));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:361>
		uint8_t* L_117 = V_5;
		int32_t L_118 = V_23;
		int32_t L_119 = V_24;
		int32_t L_120 = V_23;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_117, L_118))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_119, L_120));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:362>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_121 = V_22;
		int32_t L_122 = L_121.___length;
		V_26 = (bool)((!(((uint32_t)L_122) <= ((uint32_t)0)))? 1 : 0);
		bool L_123 = V_26;
		if (!L_123)
		{
			goto IL_031d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:364>
		uint8_t* L_124 = V_5;
		int32_t L_125 = V_23;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_126 = V_22;
		int32_t L_127 = L_126.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_124, L_125)), 4))) = (int32_t)L_127;
	}

IL_031d:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_128 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_0324:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_129 = V_19;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_130 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_131;
		L_131 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_130, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_27 = (bool)((((int32_t)L_129) < ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_27;
		if (L_132)
		{
			goto IL_0222;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:368>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:369>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:370>
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:372>
		uint8_t* L_133 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_133;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:373>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_134 = V_9;
		il2cpp_codegen_initobj(L_134, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:374>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_135 = V_9;
		int32_t L_136 = V_2;
		NullCheck(L_135);
		L_135->___Length = L_136;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:375>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_137 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_138 = ___0_allocator;
		NullCheck(L_137);
		L_137->___Allocator = L_138;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:378>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_139 = V_9;
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_142 = V_2;
		uint32_t L_143;
		L_143 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141)), L_142, (uint32_t)0, NULL);
		NullCheck(L_139);
		L_139->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_143));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:381>
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_144 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_144->___m_Align8Union = ((int64_t)0);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:382>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_145 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_146 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_147 = V_4;
		uint32_t L_148 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_149 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, (int32_t)L_148));
		V_28 = L_149;
		L_146->___m_Ptr = L_149;
		uint8_t* L_150 = V_28;
		NullCheck(L_145);
		L_145->___ValidationPtr = (void*)L_150;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:384>
		BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 L_151 = V_10;
		V_29 = L_151;
		goto IL_03bd;
	}

IL_03bd:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:385>
		BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 L_152 = V_29;
		return L_152;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
// Method Definition Index: 22015
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	int32_t V_12 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t* V_21 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	uint8_t* V_28 = NULL;
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 V_29;
	memset((&V_29), 0, sizeof(V_29));
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:311>
		int32_t L_0 = __this->___m_currentChunkIndex;
		V_11 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_11;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:314>
		int32_t L_2 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_2, NULL);
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:317>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_3 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_3, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_4, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:318>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_5 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_6;
		L_6 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_5, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_6, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:320>
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		V_12 = 0;
		goto IL_00c1;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:323>
		int32_t L_7 = V_12;
		int32_t L_8 = V_12;
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_8);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_10 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_11 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_12;
		L_12 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_10, L_11, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_13 = L_12.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_7, 1)), (((int32_t)il2cpp_codegen_add(L_9, L_13))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:324>
		int32_t L_14 = V_12;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_15 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_16 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_17;
		L_17 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_15, L_16, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_18 = L_17.___p;
		(&V_13)->___p = L_18;
		int32_t L_19 = V_12;
		(&V_13)->___index = L_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_20 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_14, (L_20));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_21 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_22 = V_12;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_23 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_24;
		L_24 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_23, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_14;
		if (L_25)
		{
			goto IL_005b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:326>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_26 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_27;
		L_27 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_26, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_27);
		V_2 = L_28;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:328>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_29 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_29, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:329>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_30 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_31;
		L_31 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_30, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_31, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		V_15 = 0;
		goto IL_0145;
	}

IL_0109:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:331>
		int32_t L_32 = V_15;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_33 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_34 = V_15;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_35;
		L_35 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_33, L_34, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_36 = L_35.___offsetPtr;
		(&V_13)->___p = (uint8_t*)L_36;
		int32_t L_37 = V_15;
		(&V_13)->___index = L_37;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_38 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_32, (L_38));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_39 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0145:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_40 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_41 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_42;
		L_42 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_41, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_40) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_16;
		if (L_43)
		{
			goto IL_0109;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:332>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_44 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_44, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:334>
		uint32_t L_45 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_46 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_47 = ___0_allocator;
		void* L_48;
		L_48 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, L_46))), ((int32_t)16), L_47, NULL);
		V_4 = (uint8_t*)L_48;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:335>
		uint8_t* L_49 = V_4;
		uint32_t L_50 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)L_50));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		V_17 = 0;
		goto IL_01c1;
	}

IL_0184:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:338>
		uint8_t* L_51 = V_5;
		int32_t L_52 = V_17;
		int32_t L_53;
		L_53 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_52);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_54 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_55 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_56;
		L_56 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_54, L_55, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_57 = L_56.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_58 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_59 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_60;
		L_60 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_58, L_59, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_61 = L_60.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, L_53)), (void*)L_57, ((int64_t)L_61), NULL);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_62 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_63 = V_17;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_64 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_65;
		L_65 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_64, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_63) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0184;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:340>
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:341>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_67 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_68;
		L_68 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_69 = L_68.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_70;
		L_70 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_67, L_69, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_71 = L_70.___p;
		V_7 = L_71;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:342>
		uint8_t* L_72 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_73 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_74;
		L_74 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_75 = L_74.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_76;
		L_76 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_73, L_75, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_77 = L_76.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, L_77));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		V_19 = 0;
		goto IL_0324;
	}

IL_0222:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:346>
		int32_t L_78 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_79;
		L_79 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_78);
		int32_t L_80 = L_79.___index;
		V_20 = L_80;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:347>
		int32_t L_81 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_82;
		L_82 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_81);
		uint8_t* L_83 = L_82.___p;
		V_21 = (int32_t*)L_83;
		goto IL_0290;
	}

IL_0245:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:351>
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:352>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_85 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_86 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_87;
		L_87 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_86);
		int32_t L_88 = L_87.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_89;
		L_89 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_85, L_88, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_90 = L_89.___p;
		V_7 = L_90;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:353>
		uint8_t* L_91 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_92 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_93 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_94;
		L_94 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_93);
		int32_t L_95 = L_94.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_96;
		L_96 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_92, L_95, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_97 = L_96.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, L_97));
	}

IL_0290:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:349>
		int32_t* L_98 = V_21;
		uint8_t* L_99 = V_8;
		V_25 = (bool)((((int32_t)((!(((uintptr_t)L_98) >= ((uintptr_t)L_99)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_100 = V_25;
		if (L_100)
		{
			goto IL_0245;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:356>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_101 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_102 = V_20;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_103;
		L_103 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_101, L_102, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_22 = L_103;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:358>
		int32_t L_104 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_105;
		L_105 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_104);
		int32_t L_106 = L_105.___index;
		int32_t L_107;
		L_107 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_106);
		int32_t* L_108 = V_21;
		uint8_t* L_109 = V_7;
		V_23 = ((int32_t)il2cpp_codegen_add(L_107, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_108, (intptr_t)L_109))/1))))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:359>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_110 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_111 = L_110.___target;
		int32_t L_112 = L_111.___allocIndex;
		int32_t L_113;
		L_113 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_112);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_114 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_115 = L_114.___target;
		int32_t L_116 = L_115.___offset;
		V_24 = ((int32_t)il2cpp_codegen_add(L_113, L_116));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:361>
		uint8_t* L_117 = V_5;
		int32_t L_118 = V_23;
		int32_t L_119 = V_24;
		int32_t L_120 = V_23;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_117, L_118))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_119, L_120));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:362>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_121 = V_22;
		int32_t L_122 = L_121.___length;
		V_26 = (bool)((!(((uint32_t)L_122) <= ((uint32_t)0)))? 1 : 0);
		bool L_123 = V_26;
		if (!L_123)
		{
			goto IL_031d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:364>
		uint8_t* L_124 = V_5;
		int32_t L_125 = V_23;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_126 = V_22;
		int32_t L_127 = L_126.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_124, L_125)), 4))) = (int32_t)L_127;
	}

IL_031d:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_128 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_0324:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_129 = V_19;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_130 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_131;
		L_131 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_130, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_27 = (bool)((((int32_t)L_129) < ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_27;
		if (L_132)
		{
			goto IL_0222;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:368>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:369>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:370>
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:372>
		uint8_t* L_133 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_133;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:373>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_134 = V_9;
		il2cpp_codegen_initobj(L_134, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:374>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_135 = V_9;
		int32_t L_136 = V_2;
		NullCheck(L_135);
		L_135->___Length = L_136;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:375>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_137 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_138 = ___0_allocator;
		NullCheck(L_137);
		L_137->___Allocator = L_138;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:378>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_139 = V_9;
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_142 = V_2;
		uint32_t L_143;
		L_143 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141)), L_142, (uint32_t)0, NULL);
		NullCheck(L_139);
		L_139->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_143));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:381>
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_144 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_144->___m_Align8Union = ((int64_t)0);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:382>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_145 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_146 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_147 = V_4;
		uint32_t L_148 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_149 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, (int32_t)L_148));
		V_28 = L_149;
		L_146->___m_Ptr = L_149;
		uint8_t* L_150 = V_28;
		NullCheck(L_145);
		L_145->___ValidationPtr = (void*)L_150;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:384>
		BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 L_151 = V_10;
		V_29 = L_151;
		goto IL_03bd;
	}

IL_03bd:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:385>
		BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 L_152 = V_29;
		return L_152;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
// Method Definition Index: 22015
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	int32_t V_12 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t* V_21 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	uint8_t* V_28 = NULL;
	BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 V_29;
	memset((&V_29), 0, sizeof(V_29));
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:311>
		int32_t L_0 = __this->___m_currentChunkIndex;
		V_11 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_11;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:314>
		int32_t L_2 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_2, NULL);
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:317>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_3 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_3, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_4, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:318>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_5 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_6;
		L_6 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_5, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_6, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:320>
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		V_12 = 0;
		goto IL_00c1;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:323>
		int32_t L_7 = V_12;
		int32_t L_8 = V_12;
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_8);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_10 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_11 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_12;
		L_12 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_10, L_11, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_13 = L_12.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_7, 1)), (((int32_t)il2cpp_codegen_add(L_9, L_13))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:324>
		int32_t L_14 = V_12;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_15 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_16 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_17;
		L_17 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_15, L_16, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_18 = L_17.___p;
		(&V_13)->___p = L_18;
		int32_t L_19 = V_12;
		(&V_13)->___index = L_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_20 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_14, (L_20));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_21 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_22 = V_12;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_23 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_24;
		L_24 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_23, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_14;
		if (L_25)
		{
			goto IL_005b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:326>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_26 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_27;
		L_27 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_26, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_27);
		V_2 = L_28;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:328>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_29 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_29, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:329>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_30 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_31;
		L_31 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_30, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_31, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		V_15 = 0;
		goto IL_0145;
	}

IL_0109:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:331>
		int32_t L_32 = V_15;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_33 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_34 = V_15;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_35;
		L_35 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_33, L_34, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_36 = L_35.___offsetPtr;
		(&V_13)->___p = (uint8_t*)L_36;
		int32_t L_37 = V_15;
		(&V_13)->___index = L_37;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_38 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_32, (L_38));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_39 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0145:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_40 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_41 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_42;
		L_42 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_41, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_40) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_16;
		if (L_43)
		{
			goto IL_0109;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:332>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_44 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_44, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:334>
		uint32_t L_45 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_46 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_47 = ___0_allocator;
		void* L_48;
		L_48 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, L_46))), ((int32_t)16), L_47, NULL);
		V_4 = (uint8_t*)L_48;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:335>
		uint8_t* L_49 = V_4;
		uint32_t L_50 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)L_50));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		V_17 = 0;
		goto IL_01c1;
	}

IL_0184:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:338>
		uint8_t* L_51 = V_5;
		int32_t L_52 = V_17;
		int32_t L_53;
		L_53 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_52);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_54 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_55 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_56;
		L_56 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_54, L_55, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_57 = L_56.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_58 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_59 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_60;
		L_60 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_58, L_59, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_61 = L_60.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, L_53)), (void*)L_57, ((int64_t)L_61), NULL);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_62 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_63 = V_17;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_64 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_65;
		L_65 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_64, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_63) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0184;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:340>
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:341>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_67 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_68;
		L_68 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_69 = L_68.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_70;
		L_70 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_67, L_69, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_71 = L_70.___p;
		V_7 = L_71;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:342>
		uint8_t* L_72 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_73 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_74;
		L_74 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_75 = L_74.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_76;
		L_76 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_73, L_75, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_77 = L_76.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, L_77));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		V_19 = 0;
		goto IL_0324;
	}

IL_0222:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:346>
		int32_t L_78 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_79;
		L_79 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_78);
		int32_t L_80 = L_79.___index;
		V_20 = L_80;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:347>
		int32_t L_81 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_82;
		L_82 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_81);
		uint8_t* L_83 = L_82.___p;
		V_21 = (int32_t*)L_83;
		goto IL_0290;
	}

IL_0245:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:351>
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:352>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_85 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_86 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_87;
		L_87 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_86);
		int32_t L_88 = L_87.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_89;
		L_89 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_85, L_88, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_90 = L_89.___p;
		V_7 = L_90;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:353>
		uint8_t* L_91 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_92 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_93 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_94;
		L_94 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_93);
		int32_t L_95 = L_94.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_96;
		L_96 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_92, L_95, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_97 = L_96.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, L_97));
	}

IL_0290:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:349>
		int32_t* L_98 = V_21;
		uint8_t* L_99 = V_8;
		V_25 = (bool)((((int32_t)((!(((uintptr_t)L_98) >= ((uintptr_t)L_99)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_100 = V_25;
		if (L_100)
		{
			goto IL_0245;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:356>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_101 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_102 = V_20;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_103;
		L_103 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_101, L_102, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_22 = L_103;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:358>
		int32_t L_104 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_105;
		L_105 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_104);
		int32_t L_106 = L_105.___index;
		int32_t L_107;
		L_107 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_106);
		int32_t* L_108 = V_21;
		uint8_t* L_109 = V_7;
		V_23 = ((int32_t)il2cpp_codegen_add(L_107, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_108, (intptr_t)L_109))/1))))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:359>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_110 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_111 = L_110.___target;
		int32_t L_112 = L_111.___allocIndex;
		int32_t L_113;
		L_113 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_112);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_114 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_115 = L_114.___target;
		int32_t L_116 = L_115.___offset;
		V_24 = ((int32_t)il2cpp_codegen_add(L_113, L_116));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:361>
		uint8_t* L_117 = V_5;
		int32_t L_118 = V_23;
		int32_t L_119 = V_24;
		int32_t L_120 = V_23;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_117, L_118))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_119, L_120));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:362>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_121 = V_22;
		int32_t L_122 = L_121.___length;
		V_26 = (bool)((!(((uint32_t)L_122) <= ((uint32_t)0)))? 1 : 0);
		bool L_123 = V_26;
		if (!L_123)
		{
			goto IL_031d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:364>
		uint8_t* L_124 = V_5;
		int32_t L_125 = V_23;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_126 = V_22;
		int32_t L_127 = L_126.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_124, L_125)), 4))) = (int32_t)L_127;
	}

IL_031d:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_128 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_0324:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_129 = V_19;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_130 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_131;
		L_131 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_130, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_27 = (bool)((((int32_t)L_129) < ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_27;
		if (L_132)
		{
			goto IL_0222;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:368>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:369>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:370>
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:372>
		uint8_t* L_133 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_133;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:373>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_134 = V_9;
		il2cpp_codegen_initobj(L_134, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:374>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_135 = V_9;
		int32_t L_136 = V_2;
		NullCheck(L_135);
		L_135->___Length = L_136;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:375>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_137 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_138 = ___0_allocator;
		NullCheck(L_137);
		L_137->___Allocator = L_138;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:378>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_139 = V_9;
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_142 = V_2;
		uint32_t L_143;
		L_143 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141)), L_142, (uint32_t)0, NULL);
		NullCheck(L_139);
		L_139->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_143));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:381>
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_144 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_144->___m_Align8Union = ((int64_t)0);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:382>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_145 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_146 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_147 = V_4;
		uint32_t L_148 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_149 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, (int32_t)L_148));
		V_28 = L_149;
		L_146->___m_Ptr = L_149;
		uint8_t* L_150 = V_28;
		NullCheck(L_145);
		L_145->___ValidationPtr = (void*)L_150;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:384>
		BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 L_151 = V_10;
		V_29 = L_151;
		goto IL_03bd;
	}

IL_03bd:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:385>
		BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 L_152 = V_29;
		return L_152;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
// Method Definition Index: 22015
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	int32_t V_12 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t* V_21 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	uint8_t* V_28 = NULL;
	BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C V_29;
	memset((&V_29), 0, sizeof(V_29));
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:311>
		int32_t L_0 = __this->___m_currentChunkIndex;
		V_11 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_11;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:314>
		int32_t L_2 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_2, NULL);
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:317>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_3 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_3, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_4, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:318>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_5 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_6;
		L_6 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_5, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_6, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:320>
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		V_12 = 0;
		goto IL_00c1;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:323>
		int32_t L_7 = V_12;
		int32_t L_8 = V_12;
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_8);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_10 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_11 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_12;
		L_12 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_10, L_11, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_13 = L_12.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_7, 1)), (((int32_t)il2cpp_codegen_add(L_9, L_13))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:324>
		int32_t L_14 = V_12;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_15 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_16 = V_12;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_17;
		L_17 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_15, L_16, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_18 = L_17.___p;
		(&V_13)->___p = L_18;
		int32_t L_19 = V_12;
		(&V_13)->___index = L_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_20 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_14, (L_20));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_21 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:321>
		int32_t L_22 = V_12;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_23 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_24;
		L_24 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_23, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_14;
		if (L_25)
		{
			goto IL_005b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:326>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_26 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_27;
		L_27 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_26, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_27);
		V_2 = L_28;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:328>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_29 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_29, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:329>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_30 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_31;
		L_31 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_30, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_31, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		V_15 = 0;
		goto IL_0145;
	}

IL_0109:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:331>
		int32_t L_32 = V_15;
		il2cpp_codegen_initobj((&V_13), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_33 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_34 = V_15;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_35;
		L_35 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_33, L_34, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_36 = L_35.___offsetPtr;
		(&V_13)->___p = (uint8_t*)L_36;
		int32_t L_37 = V_15;
		(&V_13)->___index = L_37;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_38 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_32, (L_38));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_39 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0145:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:330>
		int32_t L_40 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_41 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_42;
		L_42 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_41, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_40) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_16;
		if (L_43)
		{
			goto IL_0109;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:332>
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_44 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_44, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:334>
		uint32_t L_45 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_46 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_47 = ___0_allocator;
		void* L_48;
		L_48 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, L_46))), ((int32_t)16), L_47, NULL);
		V_4 = (uint8_t*)L_48;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:335>
		uint8_t* L_49 = V_4;
		uint32_t L_50 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, (int32_t)L_50));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		V_17 = 0;
		goto IL_01c1;
	}

IL_0184:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:338>
		uint8_t* L_51 = V_5;
		int32_t L_52 = V_17;
		int32_t L_53;
		L_53 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_52);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_54 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_55 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_56;
		L_56 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_54, L_55, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_57 = L_56.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_58 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_59 = V_17;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_60;
		L_60 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_58, L_59, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_61 = L_60.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, L_53)), (void*)L_57, ((int64_t)L_61), NULL);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_62 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01c1:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:337>
		int32_t L_63 = V_17;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_64 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_65;
		L_65 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_64, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_63) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0184;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:340>
		V_6 = 0;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:341>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_67 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_68;
		L_68 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_69 = L_68.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_70;
		L_70 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_67, L_69, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_71 = L_70.___p;
		V_7 = L_71;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:342>
		uint8_t* L_72 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_73 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_74;
		L_74 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_75 = L_74.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_76;
		L_76 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_73, L_75, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_77 = L_76.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, L_77));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		V_19 = 0;
		goto IL_0324;
	}

IL_0222:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:346>
		int32_t L_78 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_79;
		L_79 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_78);
		int32_t L_80 = L_79.___index;
		V_20 = L_80;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:347>
		int32_t L_81 = V_19;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_82;
		L_82 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_81);
		uint8_t* L_83 = L_82.___p;
		V_21 = (int32_t*)L_83;
		goto IL_0290;
	}

IL_0245:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:351>
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:352>
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_85 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_86 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_87;
		L_87 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_86);
		int32_t L_88 = L_87.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_89;
		L_89 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_85, L_88, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_90 = L_89.___p;
		V_7 = L_90;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:353>
		uint8_t* L_91 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_92 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_93 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_94;
		L_94 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_93);
		int32_t L_95 = L_94.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_96;
		L_96 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_92, L_95, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_97 = L_96.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, L_97));
	}

IL_0290:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:349>
		int32_t* L_98 = V_21;
		uint8_t* L_99 = V_8;
		V_25 = (bool)((((int32_t)((!(((uintptr_t)L_98) >= ((uintptr_t)L_99)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_100 = V_25;
		if (L_100)
		{
			goto IL_0245;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:356>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_101 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_102 = V_20;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_103;
		L_103 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_101, L_102, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_22 = L_103;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:358>
		int32_t L_104 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_105;
		L_105 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_104);
		int32_t L_106 = L_105.___index;
		int32_t L_107;
		L_107 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_106);
		int32_t* L_108 = V_21;
		uint8_t* L_109 = V_7;
		V_23 = ((int32_t)il2cpp_codegen_add(L_107, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_108, (intptr_t)L_109))/1))))));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:359>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_110 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_111 = L_110.___target;
		int32_t L_112 = L_111.___allocIndex;
		int32_t L_113;
		L_113 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_112);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_114 = V_22;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_115 = L_114.___target;
		int32_t L_116 = L_115.___offset;
		V_24 = ((int32_t)il2cpp_codegen_add(L_113, L_116));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:361>
		uint8_t* L_117 = V_5;
		int32_t L_118 = V_23;
		int32_t L_119 = V_24;
		int32_t L_120 = V_23;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_117, L_118))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_119, L_120));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:362>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_121 = V_22;
		int32_t L_122 = L_121.___length;
		V_26 = (bool)((!(((uint32_t)L_122) <= ((uint32_t)0)))? 1 : 0);
		bool L_123 = V_26;
		if (!L_123)
		{
			goto IL_031d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:364>
		uint8_t* L_124 = V_5;
		int32_t L_125 = V_23;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_126 = V_22;
		int32_t L_127 = L_126.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_124, L_125)), 4))) = (int32_t)L_127;
	}

IL_031d:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_128 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_0324:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:344>
		int32_t L_129 = V_19;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_130 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_131;
		L_131 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_130, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		V_27 = (bool)((((int32_t)L_129) < ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_27;
		if (L_132)
		{
			goto IL_0222;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:368>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:369>
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:370>
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:372>
		uint8_t* L_133 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_133;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:373>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_134 = V_9;
		il2cpp_codegen_initobj(L_134, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:374>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_135 = V_9;
		int32_t L_136 = V_2;
		NullCheck(L_135);
		L_135->___Length = L_136;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:375>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_137 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_138 = ___0_allocator;
		NullCheck(L_137);
		L_137->___Allocator = L_138;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:378>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_139 = V_9;
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_142 = V_2;
		uint32_t L_143;
		L_143 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141)), L_142, (uint32_t)0, NULL);
		NullCheck(L_139);
		L_139->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_143));
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:381>
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_144 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_144->___m_Align8Union = ((int64_t)0);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:382>
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_145 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_146 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_147 = V_4;
		uint32_t L_148 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_149 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, (int32_t)L_148));
		V_28 = L_149;
		L_146->___m_Ptr = L_149;
		uint8_t* L_150 = V_28;
		NullCheck(L_145);
		L_145->___ValidationPtr = (void*)L_150;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:384>
		BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C L_151 = V_10;
		V_29 = L_151;
		goto IL_03bd;
	}

IL_03bd:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:385>
		BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C L_152 = V_29;
		return L_152;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
// Method Definition Index: 22014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t* V_0 = NULL;
	void* V_1 = NULL;
	BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_4;
	memset((&V_4), 0, sizeof(V_4));
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Il2CppFullySharedGenericStruct* V_6 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:262>
		BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* L_0 = ___0_ptr;
		int32_t* L_1 = (int32_t*)(&L_0->___m_OffsetPtr);
		void* L_2;
		L_2 = il2cpp_codegen_unsafe_cast(L_1);
		V_0 = (int32_t*)L_2;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:263>
		Il2CppFullySharedGenericStruct* L_3 = ___1_obj;
		void* L_4;
		L_4 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_4;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:267>
		void* L_5 = V_1;
		bool L_6;
		L_6 = BlobBuilder_GetPatchTarget_m4B4730A57DE2D062962412A21582052542E16723(__this, L_5, (&V_2), NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:269>
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:270>
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:271>
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:272>
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:273>
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:274>
		il2cpp_codegen_initobj((&V_5), sizeof(OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982));
		int32_t* L_8 = V_0;
		(&V_5)->___offsetPtr = L_8;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_9 = V_2;
		(&V_5)->___target = L_9;
		(&V_5)->___length = 0;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_10 = V_5;
		V_4 = L_10;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:276>
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_11 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A(L_11, (&V_4), NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var);
		goto IL_0063;
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:280>
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA515DF9A6BFAAD184ED199830B01884B94168561)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:283>
		Il2CppFullySharedGenericStruct* L_13 = ___1_obj;
		V_6 = L_13;
		goto IL_0068;
	}

IL_0068:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobBuilder.cs:284>
		Il2CppFullySharedGenericStruct* L_14 = V_6;
		return L_14;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_AdjustorThunk (RuntimeObject* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34(_thisAdjusted, ___0_ptr, ___1_obj, method);
	return _returnValue;
}
// Method Definition Index: 29792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlobProxy_GetPrimitive_TisIl2CppFullySharedGenericStruct_mA2CF9F9B4341D6E6463805E31E9D6A0A9B6D0F64_gshared (intptr_t ___0_basePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9DFF00FD241A19AA3447C47C68985D18A55D64D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t9DFF00FD241A19AA3447C47C68985D18A55D64D8);
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobsDebug.cs:200>
		void* L_0;
		L_0 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___0_basePtr), NULL);
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t9DFF00FD241A19AA3447C47C68985D18A55D64D8);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_1);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlobsDebug.cs:201>
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 22112
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_gshared (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:961>
		BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* L_0 = (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*)(&__this->___Data);
		void* L_1;
		L_1 = BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE(L_0, BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_RuntimeMethod_var);
		V_0 = (uint8_t*)L_1;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:962>
		int32_t L_2;
		L_2 = BlobString_get_Length_mAC6DF9DA9F498307DF710C1E01A9F143FF55FF86(__this, NULL);
		V_1 = L_2;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:963>
		Il2CppFullySharedGenericAny* L_3 = ___0_dest;
		int32_t L_4 = V_1;
		ConstrainedActionInvoker1< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (void*)L_3, L_4);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:964>
		Il2CppFullySharedGenericAny* L_6 = ___0_dest;
		uint8_t* L_8;
		L_8 = ConstrainedFuncInvoker1< uint8_t*, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, (void*)L_6, 0);
		void* L_9;
		L_9 = il2cpp_codegen_unsafe_cast(L_8);
		V_2 = (uint8_t*)L_9;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:965>
		Il2CppFullySharedGenericAny* L_10 = ___0_dest;
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (void*)L_10);
		V_3 = L_12;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:966>
		uint8_t* L_13 = V_0;
		int32_t L_14 = V_1;
		uint8_t* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = Unicode_Utf8ToUtf8_m201605C57016378B046C4778E4CE25B2A2A44702(L_13, L_14, L_15, (&V_5), L_16, NULL);
		V_4 = L_17;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:967>
		Il2CppFullySharedGenericAny* L_18 = ___0_dest;
		int32_t L_19 = V_5;
		ConstrainedActionInvoker1< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_20, (void*)L_18, L_19);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:968>
		int32_t L_21 = V_4;
		V_6 = L_21;
		goto IL_0064;
	}

IL_0064:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:969>
		int32_t L_22 = V_6;
		return L_22;
	}
}
IL2CPP_EXTERN_C  int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method)
{
	BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973(_thisAdjusted, ___0_dest, method);
	return _returnValue;
}
// Method Definition Index: 22114
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlobStringExtensions_AllocateString_TisIl2CppFullySharedGenericAny_mE5B659BE5F0C763671AD5CBDEB7D880A890DE591_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* ___0_builder, BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* ___1_blobStr, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:1007>
		Il2CppFullySharedGenericAny* L_0 = ___2_value;
		int32_t L_2;
		L_2 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:1008>
		Il2CppFullySharedGenericAny* L_3 = ___2_value;
		uint8_t* L_5;
		L_5 = ConstrainedFuncInvoker1< uint8_t*, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (void*)L_3, 0);
		void* L_6;
		L_6 = il2cpp_codegen_unsafe_cast(L_5);
		V_1 = (uint8_t*)L_6;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:1009>
		BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* L_7 = ___0_builder;
		BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* L_8 = ___1_blobStr;
		BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* L_9 = (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*)(&L_8->___Data);
		int32_t L_10 = V_0;
		BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 L_11;
		L_11 = BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E(L_7, L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_RuntimeMethod_var);
		V_2 = L_11;
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:1010>
		void* L_12;
		L_12 = BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22((&V_2), BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_RuntimeMethod_var);
		uint8_t* L_13 = V_1;
		int32_t L_14 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, (void*)L_13, ((int64_t)((int32_t)il2cpp_codegen_add(L_14, 1))), NULL);
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/Blobs.cs:1011>
		return;
	}
}
// Method Definition Index: 22126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_items, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlockAllocator.cs:150>
		int32_t L_0 = ___0_items;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_3;
		L_3 = BlockAllocator_Allocate_m658C66EFC9B1D9F239C3969DE1C8BE7CD74DAC56(__this, ((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_3;
		goto IL_0016;
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlockAllocator.cs:151>
		Il2CppFullySharedGenericStruct* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_AdjustorThunk (RuntimeObject* __this, int32_t ___0_items, const RuntimeMethod* method)
{
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339(_thisAdjusted, ___0_items, method);
	return _returnValue;
}
// Method Definition Index: 22128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlockAllocator.cs:164>
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_2 = ___0_src;
		uint8_t* L_3;
		L_3 = BlockAllocator_Construct_m19308FE9D6B334CF21ACBD1DA82453D418EEBCE6(__this, L_0, L_1, (void*)L_2, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.entities@8cc175c78756/Unity.Entities/BlockAllocator.cs:165>
		Il2CppFullySharedGenericStruct* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method)
{
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE(_thisAdjusted, ___0_src, method);
	return _returnValue;
}
// Method Definition Index: 51809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62E7059E0A70F6E4678A17960D10526ECB43125E_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:234>
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:235>
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&V_0), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:236>
		int32_t* L_8 = ___1_dataSize;
		int32_t* L_9 = ___1_dataSize;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___0_length;
		int32_t L_12;
		L_12 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:237>
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_13 = V_0;
		V_1 = L_13;
		goto IL_0029;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:238>
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 51809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8686F640C741E1DD106A1143CE32DDDFEF8BE3D1_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:234>
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:235>
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&V_0), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:236>
		int32_t* L_8 = ___1_dataSize;
		int32_t* L_9 = ___1_dataSize;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___0_length;
		int32_t L_12;
		L_12 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:237>
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_13 = V_0;
		V_1 = L_13;
		goto IL_0029;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:238>
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 51809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisIl2CppFullySharedGenericStruct_m4185EDFE641B55BCD995908A4D2E69571C464694_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:234>
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:235>
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&V_0), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:236>
		int32_t* L_8 = ___1_dataSize;
		int32_t* L_9 = ___1_dataSize;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___0_length;
		int32_t L_12;
		L_12 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:237>
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_13 = V_0;
		V_1 = L_13;
		goto IL_0029;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:238>
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 51804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:217>
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:221>
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_6 = V_0;
		V_1 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:222>
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
// Method Definition Index: 51804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:217>
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:221>
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_6 = V_0;
		V_1 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:222>
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
// Method Definition Index: 51804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:217>
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		L_5 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:221>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_0;
		V_1 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/Memory/BuddyAllocator.cs:222>
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEnumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D_m09E6A24C114F8D936CD0E04CCF698BF498F029C7_gshared (Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* ___0_destination, Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5_mBF1724579F1B56AE7C6BDF919C304D2369837AA9_gshared (HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* ___0_destination, HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeHashMap_2_tAA54A0A272366C8E734042AFB3718E33A796FB6B_mA375A5ED937DCF668177009ED7FAE3B152D8DF68_gshared (NativeHashMap_2_tAA54A0A272366C8E734042AFB3718E33A796FB6B* ___0_destination, NativeHashMap_2_tAA54A0A272366C8E734042AFB3718E33A796FB6B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativeHashMap_2_tAA54A0A272366C8E734042AFB3718E33A796FB6B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativeHashMap_2_tAA54A0A272366C8E734042AFB3718E33A796FB6B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativeHashMap_2_tAA54A0A272366C8E734042AFB3718E33A796FB6B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeList_1_t32DFFD312C81C04D79240FCA876F11855336EE47_m482699988B2B9832727F5CC30396298156AD2DC2_gshared (NativeList_1_t32DFFD312C81C04D79240FCA876F11855336EE47* ___0_destination, NativeList_1_t32DFFD312C81C04D79240FCA876F11855336EE47* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativeList_1_t32DFFD312C81C04D79240FCA876F11855336EE47* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativeList_1_t32DFFD312C81C04D79240FCA876F11855336EE47* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativeList_1_t32DFFD312C81C04D79240FCA876F11855336EE47>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_destination, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83_m26C035D32C582897E6CB98E0800742D6E3CA17DC_gshared (UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* ___0_destination, UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050_m824055F8D4E7831DBCE90A34014895964E8DDB81_gshared (UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* ___0_destination, UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C_gshared (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C_m37DDC375F7B3444C9FB5D4258F55DFA6931DD965_gshared (UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* ___0_destination, UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27_mA63016ED280364EAFD980D645B675D84DE85CA19_gshared (UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* ___0_destination, UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m12EDE716234EA7B5FAB80E38167C4C23BEDE4005_gshared (UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* ___0_destination, UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31_mF81F4AC44DBA680090966B2E89DB951C43EB178F_gshared (ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* ___0_destination, ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F_m91762A84AC7693E7CD955E9BB5F2DFF5D2A65413_gshared (ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* ___0_destination, ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA_mCB14434333DCB75A5FD671D9A992747A378043D9_gshared (ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* ___0_destination, ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A_m47E56668B77DFD297A10C77037500A873C750328_gshared (AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___0_destination, AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215_gshared (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_mE3296A47D09F3EF42FDBE6366F0EFE9B8B8D716B_gshared (AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* ___0_destination, AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E_m4320EA7312165DBC8C28DCC0819922AB9E09737C_gshared (AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* ___0_destination, AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_mFD64A6E6AB9AC81D394489F4DC79DE6C54611199_gshared (ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* ___0_destination, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mC01FBD6EAFE8897CF380AC1759FC30EC30202178_gshared (AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* ___0_destination, AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_mE722009CF3369F14C5504F191D0EA30479F00E86_gshared (AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___0_destination, AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m5505016ED42AF30E5A05B5BD95C832D6E222D802_gshared (BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* ___0_destination, BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m30599D9EEC5CBA92A026E19AFB3510603F2595EB_gshared (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___0_destination, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m8557E6B1B48B7EB426E6CCFA83223FDCB8F16135_gshared (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___0_destination, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m9EE961D328A463A3B89EBC9E2B20D70A09D560A9_gshared (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___0_destination, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_m9077277D8883FD2E5F1C35914E5687671E04EE0B_gshared (BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* ___0_destination, BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m9A2F7CC1076C0970CF5322DCF69DF848356AECB1_gshared (BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___0_destination, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_m07C5692A5AC9900DBE4A97A7D64DC00A324FD11D_gshared (BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* ___0_destination, BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mB99454F33CE449D17BB84D775AF29921A0F439E4_gshared (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___0_destination, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5_gshared (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_destination, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		bool* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		bool* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<bool>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010_m795273AEE7A248BA5B241E561023F0456EF5DED1_gshared (BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___0_destination, BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647_gshared (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint8_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455_mE0D96A3C81AD5AD346CDBF7A7B6681D0DAE2A203_gshared (CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* ___0_destination, CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Il2CppChar* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Il2CppChar* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_m90358EDBD657F2A65A616BDA77F632448B5D5725_gshared (Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* ___0_destination, Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Child_tCA0AD12FC56504F3D4A64E40855F54238020861E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A_m351CF1234D2F3B19A05BD8529848863B59AF10BE_gshared (ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* ___0_destination, ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m46F9D818622E706905CD0CA0580113322F78F774_gshared (CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* ___0_destination, CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m0BCD6F1057896314E4F1ED2F94590E58137DEDBA_gshared (ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* ___0_destination, ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mF20AF83583019BD94003804325D87F62516EA87D_gshared (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___0_destination, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m3536FE07206FB1E7BC9FD06CA1C453D868FD14DF_gshared (ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* ___0_destination, ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053_mC9440463B8228E66F1782AEF4966BD75B0B6373C_gshared (ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* ___0_destination, ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7_gshared (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030_m8BE23AEA81D52C00FA650C675BF152DC50D940CB_gshared (ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* ___0_destination, ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B_m9DBF28CA5778BC51AB0A2002034091079466A4A2_gshared (ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* ___0_destination, ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7_mD49040CD4A5470A61B61DE40A83010E621DE6055_gshared (ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* ___0_destination, ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52_gshared (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03_gshared (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_destination, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80_gshared (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_m0B40FDD1EA9F25179F6D21CD8594AB44CE1D11B2_gshared (DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* ___0_destination, DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD_mC49612746C663EF46D693501EF707DA1C808F672_gshared (DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___0_destination, DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_mB020FE36A95248E17F02AFAD99294E33BE87EBB7_gshared (DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___0_destination, DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_m3AB80BE2651836BC6D6235533746976454F760B2_gshared (DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___0_destination, DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54_gshared (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m6AAEDA6D4101BC102C278A650ACE547DB784D03B_gshared (DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___0_destination, DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m209C2AA6C05B334B5F3A8BCD998B7D82B299DA03_gshared (DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* ___0_destination, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_m6F2BA74A7DBF719AE1754F3527EEA972637626A0_gshared (DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___0_destination, DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92_mFEF8924CF51CE34975623F55F0E3B8F0CBAA17A5_gshared (DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* ___0_destination, DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m9A96D3097384189DCBEAE28F8081F0B1B038375D_gshared (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___0_destination, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B7A994635719C7715C228649A7C72B0FD951EC5_gshared (EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* ___0_destination, EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C_m70FB3A59EF71C1827A792611D9A7841E1222FACE_gshared (EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* ___0_destination, EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008_m66FB49228DD838E36D93A99C26175F1B57ABA536_gshared (EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* ___0_destination, EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m16DE78387779D4771CE617A74A6A88A3DE9DC554_gshared (EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* ___0_destination, EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900_gshared (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB_mD51DCAF128863348A985828483E27A0DE8A94B2F_gshared (EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___0_destination, EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_m60B27127C13EBFBEF83357351674A1AD09091243_gshared (EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* ___0_destination, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_mD372A53451E3513498197D0BFD1125525B7C4813_gshared (EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* ___0_destination, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m36C8E884DDAC2A6A954DE17B7F9D6D703C2ABBF9_gshared (EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* ___0_destination, EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54_m64364ED739B90028DF305801B606CC0A42504C44_gshared (ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* ___0_destination, ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5_m9CABF6E56C9804324CAA61E859B0A6171DE67222_gshared (FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* ___0_destination, FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m88366C383E0F7D411CF9D6D704A8C556B040A911_gshared (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_destination, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m1E85E73EC2F987434B6816973C73119659D084A1_gshared (FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* ___0_destination, FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD_m70F47463A76C3CEC5A60BF38409A206BE7D50A49_gshared (FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___0_destination, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_m64A2E113137CB36C10E2E26EEBC8AF66DDCD1151_gshared (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* ___0_destination, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182_gshared (GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_destination, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m7146E166797850AFFFC5C0B8AFE6FACAC714FB6B_gshared (GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___0_destination, GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m5E50631671535491F4124E183D496FE30921E8C9_gshared (GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___0_destination, GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mFE85A77CF4B3338FC9F32B0EA8E7210F35665C1B_gshared (GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___0_destination, GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F_m1C555DD96B1B21625A3782B5088903189B3AB29F_gshared (GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* ___0_destination, GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenRendererMeshLodData_tFC0A33207178DDD3BD7B630CFB2B933D56EC073F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mD479C3965ADC585B6CA62A6136D07509F042E52C_gshared (GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___0_destination, GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m33C6006A3976CB7B6910ED7366970B135FDC814A_gshared (GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___0_destination, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E_gshared (GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_destination, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC_gshared (GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_destination, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134_gshared (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_destination, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_mEA71C71CAFCA3F9ED7F25460A0A4A3FA3914F816_gshared (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___0_destination, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768_gshared (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_destination, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDD9567632B50FB12048FB204F112409B38761089_gshared (Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* ___0_destination, Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F_gshared (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m31148BC9E64E6998B9195D19EE3DC7309F795FF4_gshared (InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___0_destination, InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7_mC53160E39A14A0109B28077DBC11849BFF5F1B8E_gshared (IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* ___0_destination, IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02_m09B1854526DAF2C7071C6F820280DBEE74DF86A2_gshared (IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___0_destination, IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m1752DB1596C4C4586766BA2A8E5507DA34D09731_gshared (IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___0_destination, IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_m05DEEBCE948053CBFFA6C094E423741164584AF3_gshared (IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___0_destination, IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_m2D74F1A4370C5E1065B193D91E60173CBBD0D7D9_gshared (IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___0_destination, IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m3B632A22634A03CAF6057149181CAB1BD31A9740_gshared (InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___0_destination, InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m8C253FF157C04780CD45441FF7BD611F0F4B4F5C_gshared (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_destination, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m6846F5DED6276BB72762DCFF6DEE1B40BF57BBEF_gshared (InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___0_destination, InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_m608B6E3A4051EA12739AA32FFDC046DDE15FC89D_gshared (InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___0_destination, InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31_gshared (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		intptr_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		intptr_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<intptr_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988_gshared (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_destination, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_m59D4034115D09B7995687545F7C6855F1FA51788_gshared (LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___0_destination, LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m433B7A1CA94D568396DF3741053FC07B09E4BAAD_gshared (LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___0_destination, LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197_gshared (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_destination, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E_m7F3C07C5DF89FD9E467CF118710A8F5C7660A1DB_gshared (LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___0_destination, LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_m306B1D5EFF20A21AE19F0A23DF16C51E00BA69C2_gshared (LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* ___0_destination, LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD_m7106EBFF1B7A17EA7ECFBE04FBA050C43C31BDCA_gshared (LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* ___0_destination, LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_m62E7DEC725150649939CEE85D426FC64CAF2DAF7_gshared (LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* ___0_destination, LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_mB299AD4CE049174320A1A22C157EF59CCDB3A6B2_gshared (LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___0_destination, LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_mAE9CFA4AAA9C549030FA623708FE5D3D66254F45_gshared (LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* ___0_destination, LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m70F5C899D91876AF4440E45AC34D8C4D1CF39AE4_gshared (LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* ___0_destination, LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367_gshared (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_destination, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_m9CC9BB5524CD97C8007D1EEBE09C53ED6D819499_gshared (MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___0_destination, MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4_gshared (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisName_t9E47EF25D1808C27515EB99D71DB90E187AC1354_m8A9793514C049D29935B8879F1ABE6C9ADB6728B_gshared (Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___0_destination, Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_m92D158431A5BC9D2B05C80575A0DDA8B5ED9B213_gshared (NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___0_destination, NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7877A89A8912BD549B31F67DAC4FEEE193752C28_gshared (NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___0_destination, NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m1344A30C8C64641C8CB6DB508EC56FE1BF15F736_gshared (NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___0_destination, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A_gshared (RuntimeObject** ___0_destination, RuntimeObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject** L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		RuntimeObject** L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(112, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m43F8A4AC2388A9F0C27AB0A185085F53623608CA_gshared (OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___0_destination, OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933_m5A003E688413079C66237DE790878F634A60F8EB_gshared (OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___0_destination, OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB_mC6AFBBAA2DFE1E74FF820515977ACF76A6F110EC_gshared (OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___0_destination, OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7_mED6034C6AE7A91FD3482A1B2F2F57DC6CAEC124F_gshared (OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___0_destination, OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_mB35746D9853EBB9E5ABDFA095D7C5B7C58C8B51F_gshared (OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___0_destination, OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m0E5023F31322576D419474CB9F7795E2E5D7688C_gshared (OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___0_destination, OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m5A2A066F4CCE33666CF9BDEBC74E258298B3536D_gshared (PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* ___0_destination, PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_m5B5DB7F4B9DEAC23AC95811D9FF0F2E121A6BEC7_gshared (PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* ___0_destination, PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m4E2D09E86C402005D09BE119CCBED5107028EEC7_gshared (Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* ___0_destination, Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m2C86E0E5D4E10481221216636DD7BC3BDD8A5214_gshared (PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___0_destination, PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m41BC15726CAB8F70CD000CB3674D3128237FE452_gshared (PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___0_destination, PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m1C1B67C346EEED0CD456B9E87D080590068B3082_gshared (PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___0_destination, PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m9E7E2846C3D4BCC5B682D0E2EAEABACFEEE1845E_gshared (PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___0_destination, PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m39B28318F5BDEAE4BD94956E767CC9704364FEE2_gshared (PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___0_destination, PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81_m53B76166E7C643B991C527349F0CB94CF181551D_gshared (PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* ___0_destination, PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mFFA415BC5699C28FB7D9351423688F092CD77B8A_gshared (PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* ___0_destination, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756_mBF32C2E8E1F754D8720FA83E8C7B5A9161178410_gshared (PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* ___0_destination, PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m98F8F240CF9617ADC53CB29DC7D50C943055F818_gshared (PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* ___0_destination, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m52BBDC9369F0B2213AC12BE9396E3416598DB060_gshared (PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* ___0_destination, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mCE8B5F55530C5C95E1331DD460E2422D0B07CEDE_gshared (PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* ___0_destination, PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m684B55676F462B8F1F515FF1FE50C8A1007F3602_gshared (PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* ___0_destination, PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_m65056604EDB91E596F6B04CE75E7E88E83EC0F65_gshared (PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* ___0_destination, PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_mAD3A7872F3E168B29C23B1BFB359585FE7BD8556_gshared (PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* ___0_destination, PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFFD97FF079AD2A975D7DF2A78BA8D205567AB2FD_gshared (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___0_destination, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7_gshared (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E_gshared (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_destination, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_m79B934C6299FBEAD050C8623DEECA5910C785A77_gshared (ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___0_destination, ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA_gshared (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_destination, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0_m2E21A32DC9122E1BA5798EA1C4A290020B4DEAAE_gshared (RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* ___0_destination, RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D_mD1F65B7F1A6947C9CF1EFF74F162B1831C42D52B_gshared (RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* ___0_destination, RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m6894206E85F92C7E4AF252F3E44348C8831A8A95_gshared (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___0_destination, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m3E9036AC6B2F145C0BD1D5BF478C68862E3D162D_gshared (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___0_destination, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_mCC5FE82DA6115518D0515F505693D2403D91255F_gshared (RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___0_destination, RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_m8C5EFDBB84C3693069DECF855A3A029189508D96_gshared (RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___0_destination, RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m6C1BFCA169B7975092A71984085F5E217E166747_gshared (RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* ___0_destination, RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_m1B5F811F96CA5D226D470D4B2530B253B1DAEC8D_gshared (RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* ___0_destination, RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20_m5CD61F0C7584FC7E66CE911A6E7A83D1ED6148CD_gshared (ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* ___0_destination, ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE_m593C8513D98F9D9BA1A385C824FCE1997DA4373F_gshared (ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* ___0_destination, ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_m8BF13A9C87EC4EAAB1A5AF7FF6B0E631E5A32445_gshared (ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* ___0_destination, ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_mE56E868D1E861AD9139DDD68E2FC6520686F0235_gshared (ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___0_destination, ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m487A364CEA8D45CA1019912E652DBE060211AD52_gshared (ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___0_destination, ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m7A2C6E00E5CCE631EFDFD1737985A5805815B52F_gshared (ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___0_destination, ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mDEF8860657F738E1C37779358F5FC2EC8B4F795D_gshared (ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___0_destination, ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306_m07B3840C7FB6870DC6ED9BA668FA2CA2E16E7265_gshared (RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* ___0_destination, RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F_mF0E2D3A6E9EC57A71BF71C2AE13BC961D756C7B1_gshared (RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* ___0_destination, RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeContentManagerProfilerFrameData_t2DE5BE68A86B0ABF999A2EB8069DF75596695AFC_mBFD50538F3FF45DC19E4AFD4C2AB0E87BF160BD0_gshared (RuntimeContentManagerProfilerFrameData_t2DE5BE68A86B0ABF999A2EB8069DF75596695AFC* ___0_destination, RuntimeContentManagerProfilerFrameData_t2DE5BE68A86B0ABF999A2EB8069DF75596695AFC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RuntimeContentManagerProfilerFrameData_t2DE5BE68A86B0ABF999A2EB8069DF75596695AFC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RuntimeContentManagerProfilerFrameData_t2DE5BE68A86B0ABF999A2EB8069DF75596695AFC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RuntimeContentManagerProfilerFrameData_t2DE5BE68A86B0ABF999A2EB8069DF75596695AFC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00_m6BBE2C84FACB26992B1842EBE0984479EA6E57F0_gshared (RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* ___0_destination, RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250_gshared (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int8_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mCCF4F4BF8089954CAE1CD9E3D93C988B39D78E6A_gshared (SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* ___0_destination, SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_m2FCF34DB31999BB7D4828F4D647F473AECA66D66_gshared (SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* ___0_destination, SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_mDEB8B0A6AD34927456CE46873CFDF255BE6CA5DA_gshared (SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* ___0_destination, SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B_m8BE80521E3BD71A758846C5B1D0350C9D890F2CA_gshared (SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* ___0_destination, SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927_mA0B81E09ED1BBA7016128DB0E0C0D1A6CF2F10FB_gshared (SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* ___0_destination, SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m42F98D61E192B3608E680537424A88BA013879C4_gshared (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_destination, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mCCC311A9CB3BBFDF387DB99FA39A44D1D64A739F_gshared (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___0_destination, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3_mA466B3EC6F5C5235453D952AF18AAD4C75654FD6_gshared (ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* ___0_destination, ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m44539DB4218E8B9D6803A1DB854D6A394284EC2F_gshared (ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___0_destination, ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_mB33B125C7A1AC219217D2366979A4B5E8EEEB129_gshared (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___0_destination, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5_m12B84C7512D4AB965886549A8F87C4ADA8C255E9_gshared (ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* ___0_destination, ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m94E6E2313F69F3768A56E42612429E5C38D5FAA2_gshared (SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___0_destination, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_mC66BC9906CD26C4203D0566DC87425459D5F94EE_gshared (SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___0_destination, SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46_gshared (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___0_destination, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70_m62F0A1933499CAFC1B7396FFAB0569A5F700942A_gshared (SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* ___0_destination, SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB_mA774A7373AAC35BA5E6344386892BD09BFF91407_gshared (SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* ___0_destination, SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// Method Definition Index: 3513
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
// Method Definition Index: 3605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 64731
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:198>
		UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_inline((UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:199>
		int32_t L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 64728
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:156>
		UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* L_0 = __this->___m_ListData;
		int32_t L_1 = ___0_index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_2;
		L_2 = UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_inline((UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*)L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:157>
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 64731
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:198>
		UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_inline((UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:199>
		int32_t L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 64728
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:156>
		UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* L_0 = __this->___m_ListData;
		int32_t L_1 = ___0_index;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_2;
		L_2 = UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_inline((UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*)L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/NativeList.cs:157>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 54031
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// Method Definition Index: 54031
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
// Method Definition Index: 63112
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/CollectionHelper.cs:252>
		int32_t L_0 = ___0_value;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/CollectionHelper.cs:253>
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 65781
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/UnsafeList.cs:92>
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 65785
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/UnsafeList.cs:134>
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		uint32_t L_3 = sizeof(BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8);
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_4 = (*(BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8*)((BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		V_0 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/UnsafeList.cs:135>
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 65781
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/UnsafeList.cs:92>
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 65785
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/UnsafeList.cs:134>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		uint32_t L_3 = sizeof(OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_4 = (*(OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982*)((OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		V_0 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@14e905e9bd30/Unity.Collections/UnsafeList.cs:135>
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_5 = V_0;
		return L_5;
	}
}
