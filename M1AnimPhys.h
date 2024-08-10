
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: M1Actor

/// Class /Script/M1AnimPhys.M1AnimNotifyState_DisableAnimPhys
/// Size: 0x0038 (0x000030 - 0x000068)
class UM1AnimNotifyState_DisableAnimPhys : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<class USkeleton*>)          TargetSkeleton                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(EM1AnimPhysDisabledState)                  DiresedState                                                OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimPhysColliderBase
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1AnimPhysColliderBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   OffsetLocation                                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimPhysSphereCollider
/// Size: 0x0004 (0x000028 - 0x00002C)
class FM1AnimPhysSphereCollider : public FM1AnimPhysColliderBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimPhysCapsuleCollider
/// Size: 0x0008 (0x000028 - 0x000030)
class FM1AnimPhysCapsuleCollider : public FM1AnimPhysColliderBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/M1AnimPhys.M1AnimPhysCollisionData
/// Size: 0x0020 (0x000028 - 0x000048)
class UM1AnimPhysCollisionData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FM1AnimPhysSphereCollider>)         SphereColliders                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FM1AnimPhysCapsuleCollider>)        CapsuleColliders                                            OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimPhysSetupSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1AnimPhysSetupSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     WorldDampingLocation                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WorldDampingRotation                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     EndBoneLength                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     LimitAngle                                                  OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector2D)                                 LimitAngleX                                                 OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FVector2D)                                 LimitAngleY                                                 OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FVector2D)                                 LimitAngleZ                                                 OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	SMember(FM1AnimPhysRule)                           Rule                                                        OFFSET(getStruct<T>, {0x34, 1, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimPhysPlanarCollider
/// Size: 0x0000 (0x000028 - 0x000028)
class FM1AnimPhysPlanarCollider : public FM1AnimPhysColliderBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/M1AnimPhys.M1AnimPhysCollisionSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1AnimPhysCollisionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     PhysBodyScale                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCollidedWithAttachedMesh                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bCollidedWithSimulatedPhysBody                              OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bCollidedWithFloor                                          OFFSET(get<bool>, {0x6, 1, 0, 0})
	CMember(TArray<FM1AnimPhysSphereCollider>)         SphereColliders                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1AnimPhysCapsuleCollider>)        CapsuleColliders                                            OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1AnimPhysPlanarCollider>)         PlanarColliders                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimPhysExternalForceSettings
/// Size: 0x0034 (0x000000 - 0x000034)
class FM1AnimPhysExternalForceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(float)                                     WorldMaxSpeed                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	DMember(bool)                                      bEnableWind                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FM1WindChannels)                           WindChannels                                                OFFSET(getStruct<T>, {0x11, 1, 0, 0})
	DMember(float)                                     WindScale                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bEnableLiftAndDrag                                          OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FVector)                                   LiftAndDragScale                                            OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	DMember(float)                                     Lift                                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Drag                                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     LerpSpeed                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimPhysSmoothingSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1AnimPhysSmoothingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     EvaluationResetTime                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EvaluationSuspendSimTimeAfterReset                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EvaluationWarmUpTime                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bScaleDampingWithExternalSpeed                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     ScaleDampingLerpSpeed                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FVector)                                   ScaleDampingMultiplier                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/M1AnimPhys.M1AnimNode_AnimPhys
/// Size: 0x03C0 (0x000010 - 0x0003D0)
class FM1AnimNode_AnimPhys : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FPoseLink)                                 Base                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    BonesToSimulate                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    BonesToExculude                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FM1AnimPhysSetupSettings)                  SetupSettings                                               OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	SMember(FM1AnimPhysCollisionSettings)              CollisionSettings                                           OFFSET(getStruct<T>, {0x80, 56, 0, 0})
	SMember(FM1AnimPhysExternalForceSettings)          ExternalForceSettings                                       OFFSET(getStruct<T>, {0xB8, 52, 0, 0})
	SMember(FM1AnimPhysSmoothingSettings)              SmoothingSettings                                           OFFSET(getStruct<T>, {0xEC, 32, 0, 0})
};

/// Enum /Script/M1AnimPhys.FM1AnimPhysRule
/// Size: 0x02
enum class FM1AnimPhysRule : uint8_t
{
	FM1AnimPhysRule__AlwaysEnabled                                                   = 0,
	FM1AnimPhysRule__EnabledWhenPhysBodyWasSimulated                                 = 1
};

