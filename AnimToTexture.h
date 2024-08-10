
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/AnimToTexture.AnimSequenceInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FAnimSequenceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UAnimSequence*)                      AnimSequence                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bUseCustomRange                                             OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   StartFrame                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   EndFrame                                                    OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/AnimToTexture.AnimInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FAnimInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   NumFrames                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AnimStart                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Class /Script/AnimToTexture.AnimToTextureDataAsset
/// Size: 0x01E0 (0x000030 - 0x000210)
class UAnimToTextureDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TWeakObjectPtr<class USkeletalMesh*>)      SkeletalMesh                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   SkeletalLODIndex                                            OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(TWeakObjectPtr<class UStaticMesh*>)        StaticMesh                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(int32_t)                                   StaticLODIndex                                              OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   UVChannel                                                   OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   MaxHeight                                                   OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   MaxWidth                                                    OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bEnforcePowerOfTwo                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(EAnimToTexturePrecision)                   Precision                                                   OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(EAnimToTextureMode)                        Mode                                                        OFFSET(get<T>, {0xAA, 1, 0, 0})
	CMember(TWeakObjectPtr<class UTexture2D*>)         VertexPositionTexture                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UTexture2D*>)         VertexNormalTexture                                         OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UTexture2D*>)         BonePositionTexture                                         OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TWeakObjectPtr<class UTexture2D*>)         BoneRotationTexture                                         OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(TWeakObjectPtr<class UTexture2D*>)         BoneWeightTexture                                           OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FName)                                     AttachToSocket                                              OFFSET(getStruct<T>, {0x1A0, 8, 0, 0})
	DMember(float)                                     SampleRate                                                  OFFSET(get<float>, {0x1A8, 4, 0, 0})
	CMember(TArray<FAnimSequenceInfo>)                 AnimSequences                                               OFFSET(get<T>, {0x1B0, 16, 0, 0})
	DMember(int32_t)                                   NumFrames                                                   OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	DMember(int32_t)                                   VertexRowsPerFrame                                          OFFSET(get<int32_t>, {0x1C4, 4, 0, 0})
	SMember(FVector)                                   VertexMinBBox                                               OFFSET(getStruct<T>, {0x1C8, 12, 0, 0})
	SMember(FVector)                                   VertexSizeBBox                                              OFFSET(getStruct<T>, {0x1D4, 12, 0, 0})
	DMember(int32_t)                                   BoneWeightRowsPerFrame                                      OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	DMember(int32_t)                                   BoneRowsPerFrame                                            OFFSET(get<int32_t>, {0x1E4, 4, 0, 0})
	SMember(FVector)                                   BoneMinBBox                                                 OFFSET(getStruct<T>, {0x1E8, 12, 0, 0})
	SMember(FVector)                                   BoneSizeBBox                                                OFFSET(getStruct<T>, {0x1F4, 12, 0, 0})
	CMember(TArray<FAnimInfo>)                         Animations                                                  OFFSET(get<T>, {0x200, 16, 0, 0})


	/// Functions
	// Function /Script/AnimToTexture.AnimToTextureDataAsset.ResetInfo
	// void ResetInfo();                                                                                                        // [0x1ee38b0] Final|Native|Public  
	// Function /Script/AnimToTexture.AnimToTextureDataAsset.GetIndexFromAnimSequence
	// int32_t GetIndexFromAnimSequence(class UAnimSequence* Sequence);                                                         // [0x1ee3990] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimToTexture.AnimToTextureDataAsset.BP_GetStaticMesh
	// class UStaticMesh* BP_GetStaticMesh();                                                                                   // [0x1ee3810] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimToTexture.AnimToTextureDataAsset.BP_GetSkeletalMesh
	// class USkeletalMesh* BP_GetSkeletalMesh();                                                                               // [0x1ee3770] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimToTexture.AnimToTextureDataAsset.BP_GetBoneWeightTexture
	// class UTexture2D* BP_GetBoneWeightTexture();                                                                             // [0x1ee36b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimToTexture.AnimToTextureDataAsset.BP_GetBoneRotationTexture
	// class UTexture2D* BP_GetBoneRotationTexture();                                                                           // [0x1ee36f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimToTexture.AnimToTextureDataAsset.BP_GetBonePositionTexture
	// class UTexture2D* BP_GetBonePositionTexture();                                                                           // [0x1ee3730] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimToTextureInstancePlaybackLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary.UpdateInstanceData
	// bool UpdateInstanceData(FAnimToTextureInstanceData& InstanceData, int32_t InstanceIndex, FAnimToTextureInstancePlaybackData& PlaybackData, FTransform& Transform); // [0x1ee4c40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary.SetupInstancedMeshComponent
	// void SetupInstancedMeshComponent(class UInstancedStaticMeshComponent* InstancedMeshComponent, FAnimToTextureInstanceData& InstanceData, int32_t NumInstances); // [0x1ee5510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary.GetInstanceTransform
	// bool GetInstanceTransform(FAnimToTextureInstanceData& InstanceData, int32_t InstanceIndex, FTransform& InstanceTransform); // [0x1ee4720] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary.GetInstancePlaybackData
	// bool GetInstancePlaybackData(FAnimToTextureInstanceData& InstanceData, int32_t InstanceIndex, FAnimToTextureInstancePlaybackData& InstancePlaybackData); // [0x1ee49d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary.BatchUpdateInstancedMeshComponent
	// void BatchUpdateInstancedMeshComponent(class UInstancedStaticMeshComponent* InstancedMeshComponent, FAnimToTextureInstanceData& InstanceData); // [0x1ee5300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary.AnimStateFromDataAsset
	// bool AnimStateFromDataAsset(class UAnimToTextureDataAsset* DataAsset, int32_t StateIndex, FAnimToTextureAnimState& AnimState); // [0x1ee4460] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary.AllocateInstanceData
	// void AllocateInstanceData(FAnimToTextureInstanceData& InstanceData, int32_t Count);                                      // [0x1ee5090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimToTexture.EvaluateSequenceAnimInstance
/// Size: 0x0018 (0x000318 - 0x000330)
class UEvaluateSequenceAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UAnimSequence*)                      SequenceToEvaluate                                          OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(float)                                     TimeToEvaluate                                              OFFSET(get<float>, {0x320, 4, 0, 0})
};

/// Struct /Script/AnimToTexture.AnimToTextureAnimState
/// Size: 0x0014 (0x000000 - 0x000014)
class FAnimToTextureAnimState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     StartFrame                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NumFrames                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     bLooping                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     GlobalStartTime                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AnimToTexture.AnimToTextureInstancePlaybackData
/// Size: 0x0014 (0x000000 - 0x000014)
class FAnimToTextureInstancePlaybackData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FAnimToTextureAnimState)                   CurrentState                                                OFFSET(getStruct<T>, {0x0, 20, 0, 0})
};

/// Struct /Script/AnimToTexture.AnimToTextureAnimationSyncData
/// Size: 0x0004 (0x000000 - 0x000004)
class FAnimToTextureAnimationSyncData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AnimToTexture.AnimToTextureInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FAnimToTextureInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FAnimToTextureInstancePlaybackData>) PlaybackData                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FInstancedStaticMeshInstanceData>)  StaticMeshInstanceData                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/AnimToTexture.EAnimToTextureMode
/// Size: 0x02
enum class EAnimToTextureMode : uint8_t
{
	EAnimToTextureMode__Vertex                                                       = 0,
	EAnimToTextureMode__Bone                                                         = 1
};

/// Enum /Script/AnimToTexture.EAnimToTexturePrecision
/// Size: 0x02
enum class EAnimToTexturePrecision : uint8_t
{
	EAnimToTexturePrecision__EightBits                                               = 0,
	EAnimToTexturePrecision__SixteenBits                                             = 1
};

/// Enum /Script/AnimToTexture.EAnimToTextureNumBoneInfluences
/// Size: 0x03
enum class EAnimToTextureNumBoneInfluences : uint8_t
{
	EAnimToTextureNumBoneInfluences__One                                             = 0,
	EAnimToTextureNumBoneInfluences__Two                                             = 1,
	EAnimToTextureNumBoneInfluences__Four                                            = 2
};

