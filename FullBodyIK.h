
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: RigVM

/// Struct /Script/FullBodyIK.FBIKBoneLimit
/// Size: 0x0010 (0x000000 - 0x000010)
class FFBIKBoneLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EFBIKBoneLimitType)                        LimitType_X                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFBIKBoneLimitType)                        LimitType_Y                                                 OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EFBIKBoneLimitType)                        LimitType_Z                                                 OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector)                                   Limit                                                       OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/FullBodyIK.FBIKConstraintOption
/// Size: 0x0058 (0x000000 - 0x000058)
class FFBIKConstraintOption : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bUseStiffness                                               OFFSET(get<bool>, {0xD, 1, 0, 0})
	SMember(FVector)                                   LinearStiffness                                             OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   AngularStiffness                                            OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	DMember(bool)                                      bUseAngularLimit                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FFBIKBoneLimit)                            AngularLimit                                                OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	DMember(bool)                                      bUsePoleVector                                              OFFSET(get<bool>, {0x3C, 1, 0, 0})
	CMember(EPoleVectorOption)                         PoleVectorOption                                            OFFSET(get<T>, {0x3D, 1, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
};

/// Struct /Script/FullBodyIK.MotionProcessInput
/// Size: 0x0002 (0x000000 - 0x000002)
class FMotionProcessInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bForceEffectorRotationTarget                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bOnlyApplyWhenReachedToTarget                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/FullBodyIK.FBIKDebugOption
/// Size: 0x0050 (0x000000 - 0x000050)
class FFBIKDebugOption : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bDrawDebugHierarchy                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bColorAngularMotionStrength                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bColorLinearMotionStrength                                  OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bDrawDebugAxes                                              OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bDrawDebugEffector                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bDrawDebugConstraints                                       OFFSET(get<bool>, {0x5, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(float)                                     DrawSize                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/FullBodyIK.SolverInput
/// Size: 0x0024 (0x000000 - 0x000024)
class FSolverInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     LinearMotionStrength                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinLinearMotionStrength                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AngularMotionStrength                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinAngularMotionStrength                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DefaultTargetClamp                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bUseJacobianTranspose                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FullBodyIK.FBIKEndEffector
/// Size: 0x0040 (0x000000 - 0x000040)
class FFBIKEndEffector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   PositionDepth                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   RotationDepth                                               OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     Pull                                                        OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
/// Size: 0x0198 (0x000000 - 0x000198)
class FRigUnit_FullbodyIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK
/// Size: 0x0250 (0x000100 - 0x000350)
class FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FRigElementKey)                            Root                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(TArray<FFBIKEndEffector>)                  Effectors                                                   OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FFBIKConstraintOption>)             Constraints                                                 OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FSolverInput)                              SolverProperty                                              OFFSET(getStruct<T>, {0x130, 36, 0, 0})
	SMember(FMotionProcessInput)                       MotionProperty                                              OFFSET(getStruct<T>, {0x154, 2, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x156, 1, 0, 0})
	SMember(FFBIKDebugOption)                          DebugOption                                                 OFFSET(getStruct<T>, {0x160, 80, 0, 0})
	SMember(FRigUnit_FullbodyIK_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x1B0, 408, 0, 0})
};

/// Enum /Script/FullBodyIK.EFBIKBoneLimitType
/// Size: 0x03
enum class EFBIKBoneLimitType : uint8_t
{
	EFBIKBoneLimitType__Free                                                         = 0,
	EFBIKBoneLimitType__Limit                                                        = 1,
	EFBIKBoneLimitType__Locked                                                       = 2
};

/// Enum /Script/FullBodyIK.EPoleVectorOption
/// Size: 0x02
enum class EPoleVectorOption : uint8_t
{
	EPoleVectorOption__Direction                                                     = 0,
	EPoleVectorOption__Location                                                      = 1
};

