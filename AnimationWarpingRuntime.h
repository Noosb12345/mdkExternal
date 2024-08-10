
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/AnimationWarpingRuntime.FootPlacementInterpolationSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FFootPlacementInterpolationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     UnplantLinearStiffness                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     UnplantLinearDamping                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     UnplantAngularStiffness                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     UnplantAngularDamping                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     FloorLinearStiffness                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     FloorLinearDamping                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     FloorAngularStiffness                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FloorAngularDamping                                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bEnableFloorInterpolation                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementTraceSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FFootPlacementTraceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SweepRadius                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              ComplexTraceChannel                                         OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     MaxGroundPenetration                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SimpleCollisionInfluence                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              SimpleTraceChannel                                          OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementRootDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
class FFootPlacementRootDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FBoneReference)                            IKRootBone                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPelvisSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FFootPlacementPelvisSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     MaxOffset                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LinearStiffness                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearDamping                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HorizontalRebalancingWeight                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxOffsetHorizontal                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     HeelLiftRatio                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EPelvisHeightMode)                         PelvisHeightMode                                            OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EActorMovementCompensationMode)            ActorMovementCompensationMode                               OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(bool)                                      bEnableInterpolation                                        OFFSET(get<bool>, {0x1A, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacemenLegDefinition
/// Size: 0x0044 (0x000000 - 0x000044)
class FFootPlacemenLegDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FBoneReference)                            BallBone                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FName)                                     SpeedCurveName                                              OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	SMember(FName)                                     DisableLockCurveName                                        OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPlantSettings
/// Size: 0x0034 (0x000000 - 0x000034)
class FFootPlacementPlantSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DistanceToGround                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EFootPlacementLockType)                    LockType                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     UnplantRadius                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ReplantRadiusRatio                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     UnplantAngle                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ReplantAngleRatio                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxExtensionRatio                                           OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinExtensionRatio                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     SeparatingDistance                                          OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     UnalignmentSpeedThreshold                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     AnkleTwistReduction                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bAdjustHeelBeforePlanting                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_FootPlacement
/// Size: 0x0238 (0x0000C8 - 0x000300)
class FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(EWarpingEvaluationMode)                    PlantSpeedMode                                              OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0xCC, 16, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0xDC, 16, 0, 0})
	SMember(FFootPlacementPelvisSettings)              PelvisSettings                                              OFFSET(getStruct<T>, {0xEC, 28, 0, 0})
	CMember(TArray<FFootPlacemenLegDefinition>)        LegDefinitions                                              OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FFootPlacementPlantSettings)               PlantSettings                                               OFFSET(getStruct<T>, {0x118, 52, 0, 0})
	SMember(FFootPlacementInterpolationSettings)       InterpolationSettings                                       OFFSET(getStruct<T>, {0x14C, 36, 0, 0})
	SMember(FFootPlacementTraceSettings)               TraceSettings                                               OFFSET(getStruct<T>, {0x170, 28, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OffsetRootBone
/// Size: 0x0078 (0x0000C8 - 0x000140)
class FAnimNode_OffsetRootBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OrientationWarping
/// Size: 0x00C0 (0x0000C8 - 0x000188)
class FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(EWarpingEvaluationMode)                    Mode                                                        OFFSET(get<T>, {0xC8, 1, 0, 0})
	DMember(float)                                     OrientationAngle                                            OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     LocomotionAngle                                             OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     MinRootMotionSpeedThreshold                                 OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     LocomotionAngleDeltaThreshold                               OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    SpineBones                                                  OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    IKFootBones                                                 OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        RotationAxis                                                OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(float)                                     DistributedBoneOrientationAlpha                             OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     RotationInterpSpeed                                         OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     WarpingAlpha                                                OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     OffsetAlpha                                                 OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     MaxOffsetAngle                                              OFFSET(get<float>, {0x124, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FSlopeWarpingFootDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     FootSize                                                    OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootData
/// Size: 0x0060 (0x000000 - 0x000060)
class FSlopeWarpingFootData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_SlopeWarping
/// Size: 0x0160 (0x0000C8 - 0x000228)
class FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FSlopeWarpingFootDefinition>)       FeetDefinitions                                             OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FSlopeWarpingFootData>)             FeetData                                                    OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              PelvisOffsetInterpolator                                    OFFSET(getStruct<T>, {0x120, 8, 0, 0})
	SMember(FVector)                                   GravityDir                                                  OFFSET(getStruct<T>, {0x15C, 12, 0, 0})
	SMember(FVector)                                   CustomFloorOffset                                           OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	DMember(float)                                     CachedDeltaTime                                             OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FVector)                                   TargetFloorNormalWorldSpace                                 OFFSET(getStruct<T>, {0x178, 12, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              FloorNormalInterpolator                                     OFFSET(getStruct<T>, {0x184, 8, 0, 0})
	SMember(FVector)                                   TargetFloorOffsetLocalSpace                                 OFFSET(getStruct<T>, {0x1C0, 12, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              FloorOffsetInterpolator                                     OFFSET(getStruct<T>, {0x1CC, 8, 0, 0})
	DMember(float)                                     MaxStepHeight                                               OFFSET(get<float>, {0x208, 4, 0, 0})
	DMember(bool)                                      bKeepMeshInsideOfCapsule                                    OFFSET(get<bool>, {0x20C, 1, 1, 0})
	DMember(bool)                                      bPullPelvisDown                                             OFFSET(get<bool>, {0x20C, 1, 1, 1})
	DMember(bool)                                      bUseCustomFloorOffset                                       OFFSET(get<bool>, {0x20C, 1, 1, 2})
	DMember(bool)                                      bWasOnGround                                                OFFSET(get<bool>, {0x20C, 1, 1, 3})
	DMember(bool)                                      bShowDebug                                                  OFFSET(get<bool>, {0x20C, 1, 1, 4})
	DMember(bool)                                      bFloorSmoothingInitialized                                  OFFSET(get<bool>, {0x20C, 1, 1, 5})
	SMember(FVector)                                   ActorLocation                                               OFFSET(getStruct<T>, {0x210, 12, 0, 0})
	SMember(FVector)                                   GravityDirCompSpace                                         OFFSET(getStruct<T>, {0x21C, 12, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.StrideWarpingFootDefinition
/// Size: 0x0030 (0x000000 - 0x000030)
class FStrideWarpingFootDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FBoneReference)                            ThighBone                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_StrideWarping
/// Size: 0x0128 (0x0000C8 - 0x0001F0)
class FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(EWarpingEvaluationMode)                    Mode                                                        OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FVector)                                   StrideDirection                                             OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	DMember(float)                                     StrideScale                                                 OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     LocomotionSpeed                                             OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     MinRootMotionSpeedThreshold                                 OFFSET(get<float>, {0xE0, 4, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0xE4, 16, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0xF4, 16, 0, 0})
	CMember(TArray<FStrideWarpingFootDefinition>)      FootDefinitions                                             OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FInputClampConstants)                      StrideScaleModifier                                         OFFSET(getStruct<T>, {0x118, 20, 0, 0})
	SMember(FWarpingVectorValue)                       FloorNormalDirection                                        OFFSET(getStruct<T>, {0x12C, 16, 0, 0})
	SMember(FWarpingVectorValue)                       GravityDirection                                            OFFSET(getStruct<T>, {0x13C, 16, 0, 0})
	SMember(FIKFootPelvisPullDownSolver)               PelvisIKFootSolver                                          OFFSET(getStruct<T>, {0x150, 96, 0, 0})
	DMember(bool)                                      bOrientStrideDirectionUsingFloorNormal                      OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	DMember(bool)                                      bCompensateIKUsingFKThighRotation                           OFFSET(get<bool>, {0x1B1, 1, 0, 0})
	DMember(bool)                                      bClampIKUsingFKLimits                                       OFFSET(get<bool>, {0x1B2, 1, 0, 0})
};

/// Enum /Script/AnimationWarpingRuntime.EFootPlacementLockType
/// Size: 0x04
enum class EFootPlacementLockType : uint8_t
{
	EFootPlacementLockType__Unlocked                                                 = 0,
	EFootPlacementLockType__PivotAroundBall                                          = 1,
	EFootPlacementLockType__PivotAroundAnkle                                         = 2,
	EFootPlacementLockType__LockRotation                                             = 3
};

/// Enum /Script/AnimationWarpingRuntime.EPelvisHeightMode
/// Size: 0x03
enum class EPelvisHeightMode : uint8_t
{
	EPelvisHeightMode__AllLegs                                                       = 0,
	EPelvisHeightMode__AllPlantedFeet                                                = 1,
	EPelvisHeightMode__FrontPlantedFeetUphill_FrontFeetDownhill                      = 2
};

/// Enum /Script/AnimationWarpingRuntime.EActorMovementCompensationMode
/// Size: 0x03
enum class EActorMovementCompensationMode : uint8_t
{
	EActorMovementCompensationMode__ComponentSpace                                   = 0,
	EActorMovementCompensationMode__WorldSpace                                       = 1,
	EActorMovementCompensationMode__SuddenMotionOnly                                 = 2
};

/// Enum /Script/AnimationWarpingRuntime.EOffsetRootBoneMode
/// Size: 0x04
enum class EOffsetRootBoneMode : uint8_t
{
	EOffsetRootBoneMode__Accumulate                                                  = 0,
	EOffsetRootBoneMode__Interpolate                                                 = 1,
	EOffsetRootBoneMode__Hold                                                        = 2,
	EOffsetRootBoneMode__Release                                                     = 3
};

