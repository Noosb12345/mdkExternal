
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0040 (0x000028 - 0x000068)
class UGeometryCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UGeometryCacheTrack*>)        Tracks                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   StartFrame                                                  OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   EndFrame                                                    OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(uint64_t)                                  Hash                                                        OFFSET(get<uint64_t>, {0x60, 8, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000248 - 0x000250)
class AGeometryCacheActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UGeometryCacheComponent*)            GeometryCacheComponent                                      OFFSET(get<T>, {0x248, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// class UGeometryCacheComponent* GetGeometryCacheComponent();                                                              // [0x1f43fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<int32_t>)                           TopologyRanges                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   DummyProperty                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0070 (0x0004B0 - 0x000520)
class UGeometryCacheComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(class UGeometryCache*)                     GeometryCache                                               OFFSET(get<T>, {0x4B0, 8, 0, 0})
	DMember(bool)                                      bRunning                                                    OFFSET(get<bool>, {0x4B8, 1, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x4B9, 1, 0, 0})
	DMember(bool)                                      bExtrapolateFrames                                          OFFSET(get<bool>, {0x4BA, 1, 0, 0})
	DMember(float)                                     StartTimeOffset                                             OFFSET(get<float>, {0x4BC, 4, 0, 0})
	DMember(float)                                     PlaybackSpeed                                               OFFSET(get<float>, {0x4C0, 4, 0, 0})
	DMember(float)                                     MotionVectorScale                                           OFFSET(get<float>, {0x4C4, 4, 0, 0})
	DMember(int32_t)                                   NumTracks                                                   OFFSET(get<int32_t>, {0x4C8, 4, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x4CC, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x504, 4, 0, 0})
	DMember(bool)                                      bManualTick                                                 OFFSET(get<bool>, {0x508, 1, 0, 0})
	DMember(bool)                                      bOverrideWireframeColor                                     OFFSET(get<bool>, {0x509, 1, 0, 0})
	SMember(FLinearColor)                              WireframeOverrideColor                                      OFFSET(getStruct<T>, {0x50C, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	// void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x1f45850] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                             // [0x1f46560] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
	// void SetWireframeOverrideColor(FLinearColor Color);                                                                      // [0x1f45b60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x1f45e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x1f46190] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
	// void SetOverrideWireframeColor(bool bOverride);                                                                          // [0x1f45c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	// void SetMotionVectorScale(float NewMotionVectorScale);                                                                   // [0x1f46040] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x1f463f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(class UGeometryCache* NewGeomCache);                                                               // [0x1f45f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	// void SetExtrapolateFrames(bool bNewExtrapolating);                                                                       // [0x1f462e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                              // [0x1f465b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                     // [0x1f46610] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x1f46660] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                             // [0x1f466c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                            // [0x1f46580] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                                // [0x1f46500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x1f46540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x1f464e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	// bool IsExtrapolatingFrames();                                                                                            // [0x1f463d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
	// FLinearColor GetWireframeOverrideColor();                                                                                // [0x1f45b30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                              // [0x1f45f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                                // [0x1f462a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// float GetPlaybackDirection();                                                                                            // [0x1f45db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
	// bool GetOverrideWireframeColor();                                                                                        // [0x1f45c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// int32_t GetNumberOfFrames();                                                                                             // [0x1f45d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	// float GetMotionVectorScale();                                                                                            // [0x1f46150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	// float GetDuration();                                                                                                     // [0x1f45d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	// float GetAnimationTime();                                                                                                // [0x1f45dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(uint32_t)                                  NumMeshSamples                                              OFFSET(get<uint32_t>, {0x58, 4, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x1f4f4d0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0078 (0x000058 - 0x0000D0)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UGeometryCacheCodecBase*)            Codec                                                       OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     StartSampleTime                                             OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x1f50fc0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x1f50fc0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheReference
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraGeometryCacheReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UGeometryCache*)                     GeometryCache                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              GeometryCacheUserParamBinding                               OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
/// Size: 0x0288 (0x0000E0 - 0x000368)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TArray<FNiagaraGeometryCacheReference>)    GeometryCaches                                              OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(bool)                                      bIsLooping                                                  OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         OFFSET(get<uint32_t>, {0xF4, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0xF8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RotationBinding                                             OFFSET(getStruct<T>, {0x150, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                OFFSET(getStruct<T>, {0x1A8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ElapsedTimeBinding                                          OFFSET(getStruct<T>, {0x200, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(getStruct<T>, {0x258, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ArrayIndexBinding                                           OFFSET(getStruct<T>, {0x2B0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x308, 88, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0x360, 4, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               OFFSET(get<bool>, {0x364, 1, 0, 0})
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (0x000000 - 0x000070)
class FTrackRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCacheMeshBatchInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0009 (0x000000 - 0x000009)
class FGeometryCacheVertexInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FGeometryCacheMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

