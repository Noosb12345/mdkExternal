
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioEndpointSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEndpointSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEncodingSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatializationPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USourceDataOverridePluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UReverbPluginSourceSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.AudioParameterControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioParameterControllerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
	// void SetTriggerParameter(FName InName);                                                                                  // [0x50e32f0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringParameter
	// void SetStringParameter(FName InName, FString InValue);                                                                  // [0x50e27a0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
	// void SetStringArrayParameter(FName InName, TArray<FString>& InValue);                                                    // [0x50e25c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
	// void SetParameters_Blueprint(TArray<FAudioParameter>& InParameters);                                                     // [0x50e20c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
	// void SetObjectParameter(FName InName, class UObject* InValue);                                                           // [0x50e2440] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
	// void SetObjectArrayParameter(FName InName, TArray<UObject*>& InValue);                                                   // [0x50e2280] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntParameter
	// void SetIntParameter(FName InName, int32_t inInt);                                                                       // [0x50e2e40] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
	// void SetIntArrayParameter(FName InName, TArray<int32_t>& InValue);                                                       // [0x50e2ca0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
	// void SetFloatParameter(FName InName, float InFloat);                                                                     // [0x50e2b10] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
	// void SetFloatArrayParameter(FName InName, TArray<float>& InValue);                                                       // [0x50e2950] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
	// void SetBoolParameter(FName InName, bool InBool);                                                                        // [0x50e3160] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
	// void SetBoolArrayParameter(FName InName, TArray<bool>& InValue);                                                         // [0x50e2fc0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.ResetParameters
	// void ResetParameters();                                                                                                  // [0x2b9c640] Native|Public|BlueprintCallable 
};

/// Class /Script/AudioExtensions.AudioCodecEncoderSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioCodecEncoderSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundModulatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEffectSettingsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundfieldEffectBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USoundfieldEffectSettingsBase*)      Settings                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AudioExtensions.WaveformTransformationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaveformTransformationBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioExtensions.WaveformTransformationChain
/// Size: 0x0010 (0x000028 - 0x000038)
class UWaveformTransformationChain : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UWaveformTransformationBase*>) Transformations                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/AudioExtensions.AudioPcmEncoderSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EPcmBitDepthConversion)                    BitDepthConversion                                          OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/AudioExtensions.AudioParameter
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FAudioParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     FloatParam                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      BoolParam                                                   OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   IntParam                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(class UObject*)                            ObjectParam                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FString)                                   StringParam                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             ArrayFloatParam                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<bool>)                              ArrayBoolParam                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<int32_t>)                           ArrayIntParam                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<class UObject*>)                    ArrayObjectParam                                            OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           ArrayStringParam                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(EAudioParameterType)                       ParamType                                                   OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FName)                                     TypeName                                                    OFFSET(getStruct<T>, {0x84, 8, 0, 0})
};

/// Enum /Script/AudioExtensions.EAudioParameterType
/// Size: 0x14
enum class EAudioParameterType : uint8_t
{
	EAudioParameterType__None                                                        = 0,
	EAudioParameterType__Boolean                                                     = 1,
	EAudioParameterType__Integer                                                     = 2,
	EAudioParameterType__Float                                                       = 3,
	EAudioParameterType__String                                                      = 4,
	EAudioParameterType__Object                                                      = 5,
	EAudioParameterType__NoneArray                                                   = 6,
	EAudioParameterType__BooleanArray                                                = 7,
	EAudioParameterType__IntegerArray                                                = 8,
	EAudioParameterType__FloatArray                                                  = 9,
	EAudioParameterType__StringArray                                                 = 10,
	EAudioParameterType__ObjectArray                                                 = 11,
	EAudioParameterType__Trigger                                                     = 12,
	EAudioParameterType__COUNT                                                       = 13
};

/// Enum /Script/AudioExtensions.EPcmBitDepthConversion
/// Size: 0x03
enum class EPcmBitDepthConversion : uint8_t
{
	EPcmBitDepthConversion__SameAsSource                                             = 0,
	EPcmBitDepthConversion__Int16                                                    = 1,
	EPcmBitDepthConversion__Float32                                                  = 2
};

