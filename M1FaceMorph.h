
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/M1FaceMorph.M1FaceMorphData
/// Size: 0x0040 (0x000028 - 0x000068)
class UM1FaceMorphData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<class USkeletalMesh*>)      Source                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/M1FaceMorph.M1FaceMorphLimitBase
/// Size: 0x0001 (0x000000 - 0x000001)
class FM1FaceMorphLimitBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/M1FaceMorph.M1FaceMorphLimitBoneBase
/// Size: 0x0080 (0x000000 - 0x000080)
class FM1FaceMorphLimitBoneBase : public FM1FaceMorphLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FBoneSocketTarget)                         bone                                                        OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   OffsetLocation                                              OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x6C, 12, 0, 0})
};

/// Struct /Script/M1FaceMorph.M1FaceMorphSphericalLimit
/// Size: 0x0008 (0x000078 - 0x000080)
class FM1FaceMorphSphericalLimit : public FM1FaceMorphLimitBoneBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     Core                                                        OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Struct /Script/M1FaceMorph.M1FaceMorphBoxLimit
/// Size: 0x0018 (0x000078 - 0x000090)
class FM1FaceMorphBoxLimit : public FM1FaceMorphLimitBoneBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FVector)                                   Core                                                        OFFSET(getStruct<T>, {0x84, 12, 0, 0})
};

/// Struct /Script/M1FaceMorph.M1FaceMorphMaterialSlotLimit
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1FaceMorphMaterialSlotLimit : public FM1FaceMorphLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     MaterialSlotName                                            OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   LOD                                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

