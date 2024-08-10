
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: M1Actor

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0050 (0x000000 - 0x000050)
class FCollisionLimitBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   OffsetLocation                                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0010 (0x000050 - 0x000060)
class FSphericalLimit : public FCollisionLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(ESphericalLimitType)                       LimitType                                                   OFFSET(get<T>, {0x54, 1, 0, 0})
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0010 (0x000050 - 0x000060)
class FCapsuleLimit : public FCollisionLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x0010 (0x000050 - 0x000060)
class FPlanarLimit : public FCollisionLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FPlane)                                    Plane                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FKawaiiPhysicsSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WorldDampingLocation                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     WorldDampingRotation                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LimitAngle                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector2D)                                 LimitAngleX                                                 OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FVector2D)                                 LimitAngleY                                                 OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FVector2D)                                 LimitAngleZ                                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FKawaiiPhysicsModifyBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FBoneReference)                            BoneRef                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<int32_t>)                           ChildIndexs                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FKawaiiPhysicsSettings)                    PhysicsSettings                                             OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FVector)                                   PrevLocation                                                OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	SMember(FQuat)                                     PrevRotation                                                OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FVector)                                   PoseLocation                                                OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	SMember(FQuat)                                     PoseRotation                                                OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FVector)                                   PoseScale                                                   OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FVector)                                   PoseMovement                                                OFFSET(getStruct<T>, {0xAC, 12, 0, 0})
	SMember(FVector)                                   WindVelocity                                                OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	DMember(float)                                     LengthFromRoot                                              OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(bool)                                      bDummy                                                      OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x01B8 (0x0000C8 - 0x000280)
class FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    ExcludeBones                                                OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    RootBonesParallel                                           OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(int32_t)                                   TargetFrameRate                                             OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(bool)                                      OverrideTargetFramerate                                     OFFSET(get<bool>, {0xFC, 1, 0, 0})
	SMember(FKawaiiPhysicsSettings)                    PhysicsSettings                                             OFFSET(getStruct<T>, {0x100, 48, 0, 0})
	CMember(class UCurveFloat*)                        DampingCurve                                                OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UCurveFloat*)                        WorldDampingLocationCurve                                   OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UCurveFloat*)                        WorldDampingRotationCurve                                   OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UCurveFloat*)                        StiffnessCurve                                              OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UCurveFloat*)                        RadiusCurve                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UCurveFloat*)                        LimitAngleCurve                                             OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UCurveFloat*)                        SmoothingCurve                                              OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bUpdatePhysicsSettingsInGame                                OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(float)                                     DummyBoneLength                                             OFFSET(get<float>, {0x16C, 4, 0, 0})
	CMember(EPlanarConstraint)                         PlanarConstraint                                            OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(TArray<FSphericalLimit>)                   SphericalLimits                                             OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FCapsuleLimit>)                     CapsuleLimits                                               OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<FPlanarLimit>)                      PlanarLimits                                                OFFSET(get<T>, {0x198, 16, 0, 0})
	DMember(float)                                     TeleportDistanceThreshold                                   OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     TeleportRotationThreshold                                   OFFSET(get<float>, {0x1AC, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(getStruct<T>, {0x1B0, 12, 0, 0})
	DMember(bool)                                      bEnableWind                                                 OFFSET(get<bool>, {0x1BC, 1, 0, 0})
	DMember(float)                                     WindScale                                                   OFFSET(get<float>, {0x1C0, 4, 0, 0})
	SMember(FM1WindChannels)                           WindChannels                                                OFFSET(getStruct<T>, {0x1C4, 1, 0, 0})
	DMember(float)                                     InterpSpeedWhenSuspendingSim                                OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     EvaluationResetTime                                         OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     EvaluationSuspendSimTimeAfterReset                          OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     EvaluationSmoothingTime                                     OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     SmoothMovementThreshold                                     OFFSET(get<float>, {0x1D8, 4, 0, 0})
	CMember(EPhysicsSignificanceLevel)                 Significance                                                OFFSET(get<T>, {0x1DC, 1, 0, 0})
	CMember(TArray<FKawaiiPhysicsModifyBone>)          ModifyBones                                                 OFFSET(get<T>, {0x1E0, 16, 0, 0})
	DMember(float)                                     TotalBoneLength                                             OFFSET(get<float>, {0x1F0, 4, 0, 0})
	SMember(FTransform)                                PreSkelCompTransform                                        OFFSET(getStruct<T>, {0x200, 48, 0, 0})
	DMember(bool)                                      bInitPhysicsSettings                                        OFFSET(get<bool>, {0x230, 1, 0, 0})
};

/// Enum /Script/KawaiiPhysics.EPlanarConstraint
/// Size: 0x04
enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None                                                          = 0,
	EPlanarConstraint__X                                                             = 1,
	EPlanarConstraint__Y                                                             = 2,
	EPlanarConstraint__Z                                                             = 3
};

/// Enum /Script/KawaiiPhysics.EPhysicsSignificanceLevel
/// Size: 0x04
enum class EPhysicsSignificanceLevel : uint8_t
{
	EPhysicsSignificanceLevel__Low                                                   = 0,
	EPhysicsSignificanceLevel__Medium                                                = 1,
	EPhysicsSignificanceLevel__High                                                  = 2,
	EPhysicsSignificanceLevel__Num                                                   = 3
};

