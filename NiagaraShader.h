
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: NiagaraCore

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScriptBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0098 (0x000000 - 0x000098)
class FSimulationStageMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     SimulationStageName                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     EnabledBinding                                              OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     ElementCountXBinding                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     ElementCountYBinding                                        OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     ElementCountZBinding                                        OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(ENiagaraIterationSource)                   IterationSourceType                                         OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FName)                                     IterationDataInterface                                      OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	SMember(FName)                                     IterationDirectBinding                                      OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	CMember(ENiagaraSimStageExecuteBehavior)           ExecuteBehavior                                             OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bWritesParticles                                            OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bPartialParticleUpdate                                      OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bParticleIterationStateEnabled                              OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bGpuIndirectDispatch                                        OFFSET(get<bool>, {0x40, 1, 1, 3})
	SMember(FName)                                     ParticleIterationStateBinding                               OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	SMember(FIntPoint)                                 ParticleIterationStateRange                                 OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	CMember(TArray<FName>)                             OutputDestinations                                          OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FName>)                             InputDataInterfaces                                         OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   NumIterations                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	SMember(FName)                                     NumIterationsBinding                                        OFFSET(getStruct<T>, {0x7C, 8, 0, 0})
	CMember(ENiagaraGpuDispatchType)                   GpuDispatchType                                             OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(ENiagaraDirectDispatchElementType)         GpuDirectDispatchElementType                                OFFSET(get<T>, {0x85, 1, 0, 0})
	SMember(FIntVector)                                GpuDispatchNumThreads                                       OFFSET(getStruct<T>, {0x88, 12, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraDataInterfaceGeneratedFunction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FNiagaraVariableCommonReference>)   VariadicInputs                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FNiagaraVariableCommonReference>)   VariadicOutputs                                             OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraDataInterfaceGPUParamInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   DataInterfaceHLSLSymbol                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DIClassName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(uint32_t)                                  ShaderParametersOffset                                      OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	CMember(TArray<FNiagaraDataInterfaceGeneratedFunction>) GeneratedFunctions                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptExternalConstant
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraShaderScriptExternalConstant : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Type                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraShaderScriptParametersMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraDataInterfaceGPUParamInfo>) DataInterfaceParamInfo                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           LooseMetadataNames                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bExternalConstantsInterpolated                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FNiagaraShaderScriptExternalConstant>) ExternalConstants                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraCompileEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraCompileEventSeverity)              Severity                                                    OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ShortDescription                                            OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bDismissable                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FGuid)                                     NodeGuid                                                    OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	SMember(FGuid)                                     PinGuid                                                     OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	CMember(TArray<FGuid>)                             StackGuids                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FNiagaraCompileEventSource)                Source                                                      OFFSET(getStruct<T>, {0x60, 1, 0, 0})
};

/// Enum /Script/NiagaraShader.ENiagaraMipMapGenerationType
/// Size: 0x06
enum class ENiagaraMipMapGenerationType : uint8_t
{
	ENiagaraMipMapGenerationType__Unfiltered                                         = 0,
	ENiagaraMipMapGenerationType__Linear                                             = 1,
	ENiagaraMipMapGenerationType__Blur1                                              = 2,
	ENiagaraMipMapGenerationType__Blur2                                              = 3,
	ENiagaraMipMapGenerationType__Blur3                                              = 4,
	ENiagaraMipMapGenerationType__Blur4                                              = 5
};

/// Enum /Script/NiagaraShader.ENiagaraGpuDispatchType
/// Size: 0x04
enum class ENiagaraGpuDispatchType : uint8_t
{
	ENiagaraGpuDispatchType__OneD                                                    = 0,
	ENiagaraGpuDispatchType__TwoD                                                    = 1,
	ENiagaraGpuDispatchType__ThreeD                                                  = 2,
	ENiagaraGpuDispatchType__Custom                                                  = 3
};

/// Enum /Script/NiagaraShader.ENiagaraDirectDispatchElementType
/// Size: 0x03
enum class ENiagaraDirectDispatchElementType : uint8_t
{
	ENiagaraDirectDispatchElementType__NumThreads                                    = 0,
	ENiagaraDirectDispatchElementType__NumThreadsNoClipping                          = 1,
	ENiagaraDirectDispatchElementType__NumGroups                                     = 2
};

/// Enum /Script/NiagaraShader.ENiagaraSimStageExecuteBehavior
/// Size: 0x03
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
	ENiagaraSimStageExecuteBehavior__Always                                          = 0,
	ENiagaraSimStageExecuteBehavior__OnSimulationReset                               = 1,
	ENiagaraSimStageExecuteBehavior__NotOnSimulationReset                            = 2
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x04
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Display                                            = 1,
	FNiagaraCompileEventSeverity__Warning                                            = 2,
	FNiagaraCompileEventSeverity__Error                                              = 3
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSource
/// Size: 0x02
enum class FNiagaraCompileEventSource : uint8_t
{
	FNiagaraCompileEventSource__Unset                                                = 0,
	FNiagaraCompileEventSource__ScriptDependency                                     = 1
};

