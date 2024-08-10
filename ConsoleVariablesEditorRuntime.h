
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore

/// Struct /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesEditorAssetSaveData
/// Size: 0x0028 (0x000000 - 0x000028)
class FConsoleVariablesEditorAssetSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   CommandName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CommandValueAsString                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(ECheckBoxState)                            CheckedState                                                OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Class /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
/// Size: 0x0028 (0x000028 - 0x000050)
class UConsoleVariablesAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   VariableCollectionDescription                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FConsoleVariablesEditorAssetSaveData>) SavedCommands                                            OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
	// void SetVariableCollectionDescription(FString InVariableCollectionDescription);                                          // [0x1648be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
	// void ReplaceSavedCommands(TArray<FConsoleVariablesEditorAssetSaveData>& Replacement);                                    // [0x16483d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
	// bool RemoveConsoleVariable(FString InCommandString);                                                                     // [0x1647d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
	// FString GetVariableCollectionDescription();                                                                              // [0x1648b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
	// int32_t GetSavedCommandsCount();                                                                                         // [0x16483b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
	// TArray<FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked);                                                 // [0x16489b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
	// FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked);                                                // [0x16487d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
	// TArray<FConsoleVariablesEditorAssetSaveData> GetSavedCommands();                                                         // [0x1648af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
	// bool FindSavedDataByCommandString(FString InCommandString, FConsoleVariablesEditorAssetSaveData& OutValue, TEnumAsByte<ESearchCase> SearchCase); // [0x1648100] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
	// void ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked);                                  // [0x1648510] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
	// void CopyFrom(class UConsoleVariablesAsset* InAssetToCopy);                                                              // [0x1647be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
	// void AddOrSetConsoleObjectSavedData(FConsoleVariablesEditorAssetSaveData& InData);                                       // [0x1647ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

