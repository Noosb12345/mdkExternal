
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataflowCore
/// dependency: Engine

/// Struct /Script/DataflowNodes.FloatOverrideDataflowNode
/// Size: 0x0018 (0x0000E8 - 0x000100)
class FFloatOverrideDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	SMember(FName)                                     KeyName                                                     OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     ValueOut                                                    OFFSET(get<float>, {0xF8, 4, 0, 0})
};

/// Struct /Script/DataflowNodes.SelectionSetDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
class FSelectionSetDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FString)                                   Indices                                                     OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	CMember(TArray<int32_t>)                           IndicesOut                                                  OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Struct /Script/DataflowNodes.GetSkeletalMeshDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class FGetSkeletalMeshDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
};

/// Struct /Script/DataflowNodes.GetSkeletonDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class FGetSkeletonDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
};

/// Struct /Script/DataflowNodes.SkeletalMeshBoneDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
class FSkeletalMeshBoneDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(int32_t)                                   BoneIndexOut                                                OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xFC, 8, 0, 0})
};

/// Struct /Script/DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
/// Size: 0x0048 (0x0000E8 - 0x000130)
class FSkeletalMeshReferenceTransformDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class USkeletalMesh*)                      SkeletalMeshIn                                              OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(int32_t)                                   BoneIndexIn                                                 OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	SMember(FTransform)                                TransformOut                                                OFFSET(getStruct<T>, {0x100, 48, 0, 0})
};

/// Struct /Script/DataflowNodes.GetStaticMeshDataflowNode
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class FGetStaticMeshDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
};

