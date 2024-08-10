
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/M1DevFeedback.M1DevFeedbackSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UM1DevFeedbackSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int64_t)                                   NiagaraParticleMemoryWarningSize                            OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	SMember(FString)                                   WebhookUrl                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CookingErrorWebhookUrl                                      OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   CookingTestErrorWebhookUrl                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

