
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: RigVM

/// Struct /Script/ControlRigSpline.ControlRigSplineImpl
/// Size: 0x0058 (0x000000 - 0x000058)
class FControlRigSplineImpl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/ControlRigSpline.ControlRigSpline
/// Size: 0x0018 (0x000000 - 0x000018)
class FControlRigSpline : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_ControlRigSplineBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineFromPoints
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ESplineType)                               SplineMode                                                  OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bClosed                                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(int32_t)                                   SamplesPerSegment                                           OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(float)                                     Compression                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Stretch                                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_SetSplinePoints
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetSplinePoints : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x110, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_PositionFromControlRigSpline
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   UpVector                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_TangentFromControlRigSpline
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_DrawControlRigSpline
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_GetLengthControlRigSpline
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetLengthControlRigSpline : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurve
/// Size: 0x0180 (0x000100 - 0x000280)
class FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x138, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x144, 12, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x178, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x1E0, 152, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
/// Size: 0x0180 (0x000100 - 0x000280)
class FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x138, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x144, 12, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x178, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x1E0, 152, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChain
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x110, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x110, 24, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Script/ControlRigSpline.RigUnit_ParameterAtPercentage
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FControlRigSpline)                         Spline                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Percentage                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Enum /Script/ControlRigSpline.ESplineType
/// Size: 0x03
enum class ESplineType : uint8_t
{
	ESplineType__BSpline                                                             = 0,
	ESplineType__Hermite                                                             = 1,
	ESplineType__Max                                                                 = 2
};

