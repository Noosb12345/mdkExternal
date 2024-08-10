
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDLSSOverrideSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EDLSSSettingOverride)                      EnableDLSSInEditorViewportsOverride                         OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EDLSSSettingOverride)                      EnableDLSSInPlayInEditorViewportsOverride                   OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bShowDLSSIncompatiblePluginsToolsWarnings                   OFFSET(get<bool>, {0x2A, 1, 0, 0})
	CMember(EDLSSSettingOverride)                      ShowDLSSSDebugOnScreenMessages                              OFFSET(get<T>, {0x2B, 1, 0, 0})
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UDLSSSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bEnableDLSSD3D12                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSD3D11                                            OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSVulkan                                           OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSInEditorViewports                                OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSInPlayInEditorViewports                          OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bShowDLSSSDebugOnScreenMessages                             OFFSET(get<bool>, {0x2D, 1, 0, 0})
	SMember(FString)                                   GenericDLSSBinaryPath                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bGenericDLSSBinaryExists                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(uint32_t)                                  NVIDIANGXApplicationId                                      OFFSET(get<uint32_t>, {0x44, 4, 0, 0})
	SMember(FString)                                   CustomDLSSBinaryPath                                        OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bCustomDLSSBinaryExists                                     OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bAllowOTAUpdate                                             OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      bShowDLSSIncompatiblePluginsToolsWarnings                   OFFSET(get<bool>, {0x5A, 1, 0, 0})
	CMember(EDLSSPreset)                               DLAAPreset                                                  OFFSET(get<T>, {0x5B, 1, 0, 0})
	CMember(EDLSSPreset)                               DLSSQualityPreset                                           OFFSET(get<T>, {0x5D, 1, 0, 0})
	CMember(EDLSSPreset)                               DLSSBalancedPreset                                          OFFSET(get<T>, {0x5E, 1, 0, 0})
	CMember(EDLSSPreset)                               DLSSPerformancePreset                                       OFFSET(get<T>, {0x5F, 1, 0, 0})
	CMember(EDLSSPreset)                               DLSSUltraPerformancePreset                                  OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Enum /Script/DLSS.EDLSSSettingOverride
/// Size: 0x03
enum class EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled                                                    = 0,
	EDLSSSettingOverride__Disabled                                                   = 1,
	EDLSSSettingOverride__UseProjectSettings                                         = 2
};

/// Enum /Script/DLSS.EDLSSPreset
/// Size: 0x08
enum class EDLSSPreset : uint8_t
{
	EDLSSPreset__Default                                                             = 0,
	EDLSSPreset__A                                                                   = 1,
	EDLSSPreset__B                                                                   = 2,
	EDLSSPreset__C                                                                   = 3,
	EDLSSPreset__D                                                                   = 4,
	EDLSSPreset__E                                                                   = 5,
	EDLSSPreset__F                                                                   = 6,
	EDLSSPreset__G                                                                   = 7
};

