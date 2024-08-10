
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0050 (0x000030 - 0x000080)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UNiagaraSystem*)                     Template                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	DMember(bool)                                      bDestroyAtEnd                                               OFFSET(get<bool>, {0x64, 1, 0, 0})


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);                                              // [0x1360280] Final|Native|Public|BlueprintCallable|Const 
};

/// Struct /Script/NiagaraAnimNotifies.CurveParameterPair
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurveParameterPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     AnimCurveName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     UserVariableName                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x0070 (0x000080 - 0x0000F0)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bEnableNormalizedNotifyProgress                             OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FName)                                     NotifyProgressUserParameter                                 OFFSET(getStruct<T>, {0x84, 8, 0, 0})
	CMember(TArray<FCurveParameterPair>)               AnimCurves                                                  OFFSET(get<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	// float GetNotifyProgress(class UMeshComponent* MeshComp);                                                                 // [0x13607c0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0058 (0x000038 - 0x000090)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UNiagaraSystem*)                     Template                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	DMember(bool)                                      bAbsoluteScale                                              OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      Attached                                                    OFFSET(get<bool>, {0x80, 1, 1, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x84, 8, 0, 0})


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                            // [0x13617e0] Final|Native|Public|BlueprintCallable|Const 
};

