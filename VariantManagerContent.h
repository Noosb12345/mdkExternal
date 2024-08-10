
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000028 - 0x000090)
class ULevelVariantSets : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UBlueprintGeneratedClass*)           DirectorClass                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UVariantSet*>)                VariantSets                                                 OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                          // [0x1fa1a10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                               // [0x1fa1bd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                             // [0x1fa1cf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0070 (0x000248 - 0x0002B8)
class ALevelVariantSetsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FSoftObjectPath)                           LevelVariantSets                                            OFFSET(getStruct<T>, {0x248, 32, 0, 0})
	CMember(TMap<class UBlueprintGeneratedClass*, class ULevelVariantSetsFunctionDirector*>) DirectorInstances     OFFSET(get<T>, {0x268, 80, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0x1fa2b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0x1fa2960] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                        // [0x1fa2d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                // [0x1fa2f00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelVariantSetsFunctionDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
class FCapturedPropSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   PropertyName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x0198 (0x000028 - 0x0001C0)
class UPropertyValue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<Properties>)                        Properties                                                  OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<int32_t>)                           PropertyIndices                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FCapturedPropSegment>)              CapturedPropSegments                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   FullDisplayString                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FName)                                     PropertySetterName                                          OFFSET(getStruct<T>, {0xC8, 8, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             OFFSET(get<T>, {0xD0, 80, 0, 0})
	DMember(bool)                                      bHasRecordedData                                            OFFSET(get<bool>, {0x120, 1, 0, 0})
	CMember(class UClass*)                             LeafPropertyClass                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TArray<char>)                              ValueBytes                                                  OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(EPropertyValueCategory)                    PropCategory                                                OFFSET(get<T>, {0x148, 1, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                                  // [0x1fa3cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                              // [0x1fa3d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                          // [0x1fa3cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueTransform : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueVisibility : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueColor : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueMaterial : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueOption : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UPropertyValueSoftObject : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000248 - 0x000270)
class ASwitchActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(int32_t)                                   LastSelectedOption                                          OFFSET(get<int32_t>, {0x268, 4, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                                  // [0x1faa630] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                             // [0x1faa720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0x1faa740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0068 (0x000000 - 0x000068)
class FVariantDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<class UVariantSet*>)        VariantSet                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UVariant*>)           Variant                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0058 (0x000028 - 0x000080)
class UVariant : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FVariantDependency>)                Dependencies                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TArray<class UVariantObjectBinding*>)      ObjectBindings                                              OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UTexture2D*)                         Thumbnail                                                   OFFSET(get<T>, {0x78, 8, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                         // [0x1fad320] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0x1fad130] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0x1facfa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x12d7650] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x1facbc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0x1fad540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0x1fac330] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                         // [0x1fad250] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x1facba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                          // [0x1fad690] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                            // [0x1fac210] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                                  // [0x1fad490] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x1fad4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);               // [0x1fac880] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t Index);                                                                         // [0x1fac550] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                              // [0x1fad340] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t Index);                                                                                    // [0x1fac230] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0x1fac6c0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (0x000000 - 0x000008)
class FFunctionCaller : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0070 (0x000028 - 0x000098)
class UVariantObjectBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   CachedActorLabel                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPtr                                                   OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	CMember(TLazyObjectPtr<class UObject*>)            LazyObjectPtr                                               OFFSET(get<T>, {0x58, 28, 0, 0})
	CMember(TArray<class UPropertyValue*>)             CapturedProperties                                          OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FFunctionCaller>)                   FunctionCallers                                             OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0050 (0x000028 - 0x000078)
class UVariantSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bExpanded                                                   OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TArray<class UVariant*>)                   Variants                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(class UTexture2D*)                         Thumbnail                                                   OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0x1faf2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0x1faf140] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x12d7650] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x1faed70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0x1faf720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                   // [0x1faf3b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                        // [0x1faf570] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x1faed50] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                    // [0x1faf870] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                                // [0x12e4210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x1faf690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x09
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128
};

