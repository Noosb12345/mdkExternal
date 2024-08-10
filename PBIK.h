
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: RigVM

/// Struct /Script/PBIK.PBIKBoneSetting
/// Size: 0x0044 (0x000000 - 0x000044)
class FPBIKBoneSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     RotationStiffness                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PositionStiffness                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EPBIKLimitType)                            X                                                           OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     MinX                                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxX                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(EPBIKLimitType)                            Y                                                           OFFSET(get<T>, {0x1C, 1, 0, 0})
	DMember(float)                                     MinY                                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxY                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(EPBIKLimitType)                            Z                                                           OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     MinZ                                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaxZ                                                        OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bUsePreferredAngles                                         OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FVector)                                   PreferredAngles                                             OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Struct /Script/PBIK.RootPrePullSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FRootPrePullSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RotationAlphaX                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RotationAlphaY                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RotationAlphaZ                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PositionAlphaX                                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PositionAlphaY                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PositionAlphaZ                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/PBIK.PBIKSolverSettings
/// Size: 0x003C (0x000000 - 0x00003C)
class FPBIKSolverSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MassMultiplier                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAllowStretch                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(EPBIKRootBehavior)                         RootBehavior                                                OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FRootPrePullSettings)                      PrePullRootSettings                                         OFFSET(getStruct<T>, {0xC, 32, 0, 0})
	DMember(float)                                     GlobalPullChainAlpha                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaxAngle                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OverRelaxation                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bStartSolveFromInputPose                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/PBIK.PBIKSolver
/// Size: 0x0068 (0x000000 - 0x000068)
class FPBIKSolver : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/PBIK.PBIKDebug
/// Size: 0x0008 (0x000000 - 0x000008)
class FPBIKDebug : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     DrawScale                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/PBIK.PBIKEffector
/// Size: 0x0060 (0x000000 - 0x000060)
class FPBIKEffector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     StrengthAlpha                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PullChainAlpha                                              OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     PinRotation                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/PBIK.RigUnit_PBIK
/// Size: 0x0120 (0x000100 - 0x000220)
class FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FName)                                     Root                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	CMember(TArray<FPBIKEffector>)                     Effectors                                                   OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<int32_t>)                           EffectorSolverIndices                                       OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FPBIKBoneSetting>)                  BoneSettings                                                OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedBones                                               OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FPBIKSolverSettings)                       Settings                                                    OFFSET(getStruct<T>, {0x148, 60, 0, 0})
	SMember(FPBIKDebug)                                Debug                                                       OFFSET(getStruct<T>, {0x184, 8, 0, 0})
	CMember(TArray<int32_t>)                           BoneSettingToSolverBoneIndex                                OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<int32_t>)                           SolverBoneToElementIndex                                    OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FPBIKSolver)                               Solver                                                      OFFSET(getStruct<T>, {0x1B0, 104, 0, 0})
	DMember(bool)                                      bNeedsInit                                                  OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Enum /Script/PBIK.EPBIKLimitType
/// Size: 0x03
enum class EPBIKLimitType : uint8_t
{
	EPBIKLimitType__Free                                                             = 0,
	EPBIKLimitType__Limited                                                          = 1,
	EPBIKLimitType__Locked                                                           = 2
};

/// Enum /Script/PBIK.EPBIKRootBehavior
/// Size: 0x03
enum class EPBIKRootBehavior : uint8_t
{
	EPBIKRootBehavior__PrePull                                                       = 0,
	EPBIKRootBehavior__PinToInput                                                    = 1,
	EPBIKRootBehavior__Free                                                          = 2
};

