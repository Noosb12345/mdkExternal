
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/M1Data.M1DataTable
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UM1DataTable : public UDataTable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FString>)                           FilePaths                                                   OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bDirty                                                      OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/M1Data.M1DataTableGroup
/// Size: 0x0010 (0x000120 - 0x000130)
class UM1DataTableGroup : public UM1DataTable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/M1Data.M1SecondaryDataManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UM1SecondaryDataManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/M1Data.M1DataCenter
/// Size: 0x0208 (0x000030 - 0x000238)
class UM1DataCenter : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TArray<class UM1DataTable*>)               Tables                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<class UScriptStruct*, class UM1DataTable*>) RowStructToTable                                      OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<class UScriptStruct*, class UM1DataTable*>) RowStructToGroupOrTable                               OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(TMap<class UScriptStruct*, class UM1DataTableGroup*>) TableGroups                                      OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(TArray<class UM1SecondaryDataManager*>)    SecondaryManagers                                           OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TMap<class UScriptStruct*, class UM1DataTable*>) AltTableMap                                           OFFSET(get<T>, {0x198, 80, 0, 0})
	CMember(TMap<FString, class UM1DataTable*>)        PatchTableMap                                               OFFSET(get<T>, {0x1E8, 80, 0, 0})
};

/// Struct /Script/M1Data.M1TemplateId
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1TemplateId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ScaledInteger
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ScaledInteger : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Value                                                       OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/M1Data.M1AbilityParamData
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1AbilityParamData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EM1AbilityParamType)                       Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AbilityOperationStatModifierData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1AbilityOperationStatModifierData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1StatRefType)                            StatRefType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1StatType)                               StatType                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EM1StatModifierOp)                         ModOp                                                       OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AbilityOperationData
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1AbilityOperationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoftClassPath)                            CalcClass                                                   OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1AbilityOperationStatModifierData>) Modifiers                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      QueryTags                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TaggedAbilityOperationData
/// Size: 0x0058 (0x000000 - 0x000058)
class FM1TaggedAbilityOperationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              Tag                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FM1AbilityOperationData)                   Operation                                                   OFFSET(getStruct<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/M1Data.DataLinkBase
/// Size: 0x0028 (0x000000 - 0x000028)
class FDataLinkBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UM1DataTable*)                       Table                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.DataLink
/// Size: 0x0008 (0x000028 - 0x000030)
class FDataLink : public FDataLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     RowName                                                     OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/M1Data.M1StatusEffectDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1StatusEffectDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InvokeStatusEffectData
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1InvokeStatusEffectData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FM1StatusEffectDataLink)                   StatusEffect                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(EM1AbilityCreatedObjectRemovalPolicy)      RemovalPolicy                                               OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TaggedInvokeStatusEffectData
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1TaggedInvokeStatusEffectData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              Tag                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FM1InvokeStatusEffectData)                 InvokeStatusEffect                                          OFFSET(getStruct<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/M1Data.M1AbilityActorDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AbilityActorDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SpawnAbilityActorData
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1SpawnAbilityActorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FM1AbilityActorDataLink)                   AbilityActor                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(EM1AbilityCreatedObjectRemovalPolicy)      RemovalPolicy                                               OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TaggedSpawnAbilityActorData
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1TaggedSpawnAbilityActorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              Tag                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FM1SpawnAbilityActorData)                  SpawnAbilityActor                                           OFFSET(getStruct<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/M1Data.M1AbilityActorData
/// Size: 0x0060 (0x000008 - 0x000068)
class FM1AbilityActorData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FSoftClassPath)                            AbilityActorClass                                           OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(TArray<FM1TaggedAbilityOperationData>)     Operations                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FM1TaggedInvokeStatusEffectData>)   InvokeStatusEffects                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FM1TaggedSpawnAbilityActorData>)    SpawnAbilityActors                                          OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MapSubData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MapSubData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EM1MapSubType)                             Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   FieldDifficulty                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BattleZoneId                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ItemTidBox
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ItemTidBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1ItemType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   TemplateId                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ClientChecksum
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1ClientChecksum : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ChecksumClientService                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ChecksumGameService                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ChecksumDediService                                         OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DedicatedServerInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FM1DedicatedServerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   IpAddr                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Port                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ServerName                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   UserName                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int64_t)                                   NetworkVersion                                              OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	SMember(FString)                                   MapName                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(int64_t)                                   Oid                                                         OFFSET(get<int64_t>, {0x50, 8, 0, 0})
	SMember(FM1TemplateId)                             MapTemplateId                                               OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	SMember(FM1MapSubData)                             MapSubData                                                  OFFSET(getStruct<T>, {0x5C, 16, 0, 0})
	DMember(bool)                                      Private                                                     OFFSET(get<bool>, {0x6C, 1, 0, 0})
	SMember(FM1ClientChecksum)                         Checksum                                                    OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/M1Data.M1MoveDedicatedServerNoti
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FM1MoveDedicatedServerNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EM1MoveDedicatedServerReason)              Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<int64_t>)                           AccountUids                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FM1DedicatedServerInfo)                    ServerInfo                                                  OFFSET(getStruct<T>, {0x18, 160, 0, 0})
	DMember(bool)                                      MovePosition                                                OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BoostItemEffect
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1BoostItemEffect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(EM1BuffSubItemType)                        BuffType                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int64_t)                                   BoostGroupId                                                OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   BoostValue                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FM1TemplateId)                             newBoostItemTid                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BoostExpData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1BoostExpData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1BoostType)                              Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   BoostExp                                                    OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterAddExpNoti
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1CharacterAddExpNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             PlayerTid                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   BoostExp                                                    OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	CMember(TArray<FM1BoostExpData>)                   BoostDataList                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InventorySlotCount
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1InventorySlotCount : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(EM1InventoryType)                          InventoryType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   MaxCount                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      ExpandSlotItem                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/M1Data.M1InventorySlotExpansionOverNotiData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1InventorySlotExpansionOverNotiData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(EM1InventoryType)                          InventoryType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FM1ItemTidBox)                             ItemTidBox                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MasteryCanLevelUpNoti
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MasteryCanLevelUpNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Level                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CodexItemInfoList
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CodexItemInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1ItemTidBox>)                     ItemInfoList                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RequestSupportInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FM1RequestSupportInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int64_t)                                   RequesterAccountUid                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   RequesterAccountName                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int64_t)                                   RequesteeAccountUid                                         OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	SMember(FString)                                   Token                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FM1TemplateId)                             MissionTid                                                  OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FString)                                   PlatformId                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int64_t)                                   PlatfromUid                                                 OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     PlatformType                                                OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(bool)                                      CrossPlayOn                                                 OFFSET(get<bool>, {0x51, 1, 0, 0})
};

/// Struct /Script/M1Data.M1TeleportToMissionInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1TeleportToMissionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<int64_t>)                           AccountUids                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FM1TemplateId)                             MissionId                                                   OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(EM1MoveDedicatedServerReason)              Reason                                                      OFFSET(get<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InitializationData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1InitializationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(EM1ItemType)                               ItemType                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   TemplateId                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneLoadoutSlotName
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RuneLoadoutSlotName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      LoadoutSlotIndex                                            OFFSET(get<char>, {0x0, 1, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneEquipInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RuneEquipInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1RuneSubClassType)                       SubClassType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      SocketIndex                                                 OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(int64_t)                                   RuneUid                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   RuneCost                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneLoadoutSlotInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RuneLoadoutSlotInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      LoadoutSlotIndex                                            OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FM1RuneEquipInfo>)                  RuneEquips                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneSocketInfo
/// Size: 0x0003 (0x000000 - 0x000003)
class FM1RuneSocketInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EM1RuneSubClassType)                       SubClassType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      SocketIndex                                                 OFFSET(get<char>, {0x1, 1, 0, 0})
	CMember(EM1RuneSocketType)                         RuneSocketType                                              OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/M1Data.M1RuneLoadoutInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1RuneLoadoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1ItemTidBox)                             OwnerTid                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SelectedLoadoutSlotIndex                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxCapacityBase                                             OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      HasAdditionalCapacity                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(TArray<FM1RuneLoadoutSlotName>)            LoadoutSlotNames                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1RuneLoadoutSlotInfo>)            LoadoutSlots                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FM1RuneSocketInfo>)                 RuneSockets                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MasteryExpNoti
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MasteryExpNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Level                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/M1Data.M1ProficiencyAddExpResult
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1ProficiencyAddExpResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1TemplateId)                             EquipmentId                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   OriginExp                                                   OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   BoostedExp                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	CMember(TArray<FM1BoostExpData>)                   BoostExpDatas                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x30, 8, 0, 0})
};

/// Struct /Script/M1Data.M1WeaponProficiencyPointNoti
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1WeaponProficiencyPointNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1ProficiencyAddExpResult>)        ResultList                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PartyMoveRes
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FM1PartyMoveRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EM1PartyErrorCode)                         ErrorCode                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<int64_t>)                           AccountUids                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FM1DedicatedServerInfo)                    ServerInfo                                                  OFFSET(getStruct<T>, {0x18, 160, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleClearInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1VoidBattleClearInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ClearCount                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1UnlockedFieldInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1UnlockedFieldInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1TemplateId)                             MapTemplateId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      HasEntered                                                  OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(TArray<FM1MapSubData>)                     MapSubData                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FString>)                           CampEntryPointId                                            OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BattleZoneId                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ConsumableInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1ConsumableInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int64_t)                                   Count                                                       OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	CMember(EM1ItemTagStatus)                          TagStatus                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/M1Data.M1CurrencyInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1CurrencyInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1CurrencyType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   Count                                                       OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1UnixTime
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1UnixTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/M1Data.M1EquipmentBaseInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1EquipmentBaseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1UnixTime)                               CreateDate                                                  OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(EM1ItemTagStatus)                          TagStatus                                                   OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      WareHouse                                                   OFFSET(get<bool>, {0x15, 1, 0, 0})
};

/// Struct /Script/M1Data.M1RecordInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1RecordInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RuneInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Enchant                                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int16_t)                                   EquipCount                                                  OFFSET(get<int16_t>, {0x10, 2, 0, 0})
};

/// Struct /Script/M1Data.M1TitleItemInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1TitleItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RunePosition
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RunePosition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   RuneUid                                                     OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(EM1RuneSubClassType)                       RuneSubClassType                                            OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(char)                                      SocketIndex                                                 OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Struct /Script/M1Data.M1RunePositionBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RunePositionBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1RunePosition>)                   RunePositionList                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ItemUidBox
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ItemUidBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1ItemType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1DecomposeResultItemInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1DecomposeResultItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   TemplateId                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EM1ItemType)                               Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ItemDecomposeResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ItemDecomposeResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1DecomposeResultItemInfo>)        ItemList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1JunkItemDecomposeResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1JunkItemDecomposeResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1DecomposeResultItemInfo>)        ItemList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ItemBoxesInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ItemBoxesInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1ItemUidBox>)                     ItemBoxList                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneEquippedInfoBundle
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RuneEquippedInfoBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1RuneLoadoutInfo>)                Values                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BoostItemEffectBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1BoostItemEffectBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1BoostItemEffect>)                DataList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CodexTrackingData
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1CodexTrackingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EM1CodexTrackingType)                      TrackingType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int8_t)                                    SlotIndex                                                   OFFSET(get<int8_t>, {0x1, 1, 0, 0})
	SMember(FM1TemplateId)                             TrackingTid                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FM1TemplateId)                             ResearchMaterial                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CodexTrackingList
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1CodexTrackingList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1CodexTrackingData>)              Trackings                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InitializationBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1InitializationBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1InitializationData>)             InitializationDataList                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InventorySlotCountBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1InventorySlotCountBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1InventorySlotCount>)             DataList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MasteryInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MasteryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1TemplateId)                             Level                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1PackageItemElementInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1PackageItemElementInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1ItemTidBox)                             ItemTid                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PackageItemOpenResult
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1PackageItemOpenResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EM1PackageItemReason)                      Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FM1PackageItemElementInfo)                 Item                                                        OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1CharacterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxLevel                                                    OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   ResetCount                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizingItemInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1CustomizingItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EvolutionIdx                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   EvolutionComplete                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   StackCount                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PerkInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1PerkInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   EquipmentUid                                                OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentRandomOptionInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1EquipmentRandomOptionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   EquipmentUid                                                OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   Index                                                       OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FM1ScaledInteger)                          StatValue                                                   OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorEnchantInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ReactorEnchantInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   EquipmentUid                                                OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   EnchantLevel                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MissionInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1MissionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1TemplateId)                             MissionId                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      Complete                                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   CompleteCnt                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1TitleItemInvenvory
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1TitleItemInvenvory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1TitleReason)                            Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     GainTitles                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FM1TemplateId)                             PrefixTitle                                                 OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FM1TemplateId)                             SuffixTitle                                                 OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1WeaponProficiencyInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1WeaponProficiencyInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(bool)                                      IsReset                                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/M1Data.M1WearingInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1WearingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   SocketIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   EquipmentUid                                                OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1SlotVersionPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1SlotVersionPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(char)                                      SlotIndex                                                   OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneLoadoutReq
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RuneLoadoutReq : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1ItemTidBox)                             OwnerTid                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FM1SlotVersionPair>)                Versions                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1StatTypeOpFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1StatTypeOpFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1StatType)                               StatType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1StatModifierOp)                         ModOp                                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PaintSimpleInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1PaintSimpleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             PaintTid                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1SkinSimpleInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1SkinSimpleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Evolution                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1PaintSimpleInfo>)                Paints                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1WearingSimpleInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1WearingSimpleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   SocketIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   EquipmentUid                                                OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FM1TemplateId)                             EquipmentTid                                                OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FM1SkinSimpleInfo)                         Customize                                                   OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterSimpleInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1CharacterSimpleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             CharacterTid                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxLevel                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      Favorites                                                   OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(TArray<FM1SkinSimpleInfo>)                 Customizes                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AccountSimpleInfo
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FM1AccountSimpleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   LoginPlatformId                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int64_t)                                   LoginPlatformUid                                            OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     LoginPlatformType                                           OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FM1WearingSimpleInfo>)              WearingList                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int64_t)                                   CombatPower                                                 OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	SMember(FDateTime)                                 CreatedTime                                                 OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	DMember(int64_t)                                   PlayTime                                                    OFFSET(get<int64_t>, {0x58, 8, 0, 0})
	CMember(TArray<FM1CharacterSimpleInfo>)            CharacterList                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int64_t)                                   SelectedCharacter                                           OFFSET(get<int64_t>, {0x70, 8, 0, 0})
	DMember(int64_t)                                   MasteryRankLevel                                            OFFSET(get<int64_t>, {0x78, 8, 0, 0})
	DMember(int64_t)                                   MasteryRankExp                                              OFFSET(get<int64_t>, {0x80, 8, 0, 0})
	SMember(FString)                                   Region                                                      OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FM1TemplateId)                             LastMapTemplateId                                           OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	SMember(FM1TemplateId)                             LastBattleZoneId                                            OFFSET(getStruct<T>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   LastFieldDifficulty                                         OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     CustomizeList                                               OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AuthAndLoadCharactersRes
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FM1AuthAndLoadCharactersRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FM1AccountSimpleInfo)                      AccountSimpleInfo                                           OFFSET(getStruct<T>, {0x0, 184, 0, 0})
};

/// Struct /Script/M1Data.M1SettingInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FM1SettingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/M1Data.M1LoadSettingRes
/// Size: 0x0002 (0x000000 - 0x000002)
class FM1LoadSettingRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      Success                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FM1SettingInfo)                            SettingInfo                                                 OFFSET(getStruct<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/M1Data.M1CrashInfoTransData
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1CrashInfoTransData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   dumpPath                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   logPath                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1GameServerMoveData
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1GameServerMoveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MoveServerIndex                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   MoveServerVersion                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   MoveServerAddr                                              OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int16_t)                                   MovePort                                                    OFFSET(get<int16_t>, {0x28, 2, 0, 0})
	DMember(int64_t)                                   DediOid                                                     OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	SMember(FString)                                   sessionToken                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BlockUser
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1BlockUser : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlatformId                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int64_t)                                   PlatformUid                                                 OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     PlatformType                                                OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BlockList
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1BlockList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1BlockUpdateType)                        UpdateType                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1BlockUser>)                      BlockUsers                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PlatformBlockUser
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1PlatformBlockUser : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   PlatformUid                                                 OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/M1Data.M1PlatformBlockList
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1PlatformBlockList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1PlatformBlockUser>)              Users                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1Friend
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1Friend : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      Online                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      BookMark                                                    OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FString)                                   PlatformId                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int64_t)                                   PlatformUid                                                 OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     PlatformType                                                OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   MasteryRankLevel                                            OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/M1Data.M1FriendRequest
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1FriendRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 RequestTime                                                 OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   RequesterPlatformId                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int64_t)                                   RequestPlatformUid                                          OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     RequestPlayformType                                         OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/M1Data.M1FriendList
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1FriendList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1FriendUpdateType)                       UpdateType                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1Friend>)                         Value                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FriendRequestList
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1FriendRequestList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1FriendUpdateType)                       UpdateType                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1FriendRequest>)                  Value                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RemoveAllByPlatformBlockParam
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RemoveAllByPlatformBlockParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           AccountNames                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1NGSPacket
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1NGSPacket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InGameSocialOptionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1InGameSocialOptionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1InGameSocialOptionType)                 FriendRequestOption                                         OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EM1InGameSocialOptionType)                 PartyRequestOption                                          OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(EM1InGameSocialOptionType)                 ChattingOption                                              OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(EM1InGameSocialOptionType)                 SupportOption                                               OFFSET(get<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DummyData
/// Size: 0x0001 (0x000000 - 0x000001)
class FM1DummyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/M1Data.M1PartyJoinLobbyForCertRes
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FM1PartyJoinLobbyForCertRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(EM1PartyContentsType)                      ContentsType                                                OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EM1PartyErrorCode)                         ErrorCode                                                   OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FM1DedicatedServerInfo)                    SelectedDedicatedServerInfo                                 OFFSET(getStruct<T>, {0x8, 160, 0, 0})
};

/// Struct /Script/M1Data.M1CashShopCategoryClickRecord
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1CashShopCategoryClickRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1ShopCategoryType)                       CategoryType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ClickCount                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CashShopSubCategoryClickRecord
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CashShopSubCategoryClickRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   GroupCategory                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ClickCount                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CashShopProductClickRecord
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1CashShopProductClickRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             ProductId                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ClickCount                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CashShopClickRecordNoti
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1CashShopClickRecordNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FM1CashShopCategoryClickRecord>)    CategoryClickRecords                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FM1CashShopSubCategoryClickRecord>) SubCategoryClickRecords                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1CashShopProductClickRecord>)     ProductClickRecords                                         OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AnnouncementNoti
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1AnnouncementNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1AnnouncementType)                       announcementType                                            OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   noticeContext                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RPC_SUB_HEADER
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1RPC_SUB_HEADER : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   SourceServer                                                OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   TargetServer                                                OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/M1Data.M1RPC_HEADER
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RPC_HEADER : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   RequestID                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int16_t)                                   ProcedureId                                                 OFFSET(get<int16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/M1Data.M1EE_ERROR
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1EE_ERROR : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   RequestID                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ErrorCode                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   ErrorMessage                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EE_OK
/// Size: 0x0001 (0x000000 - 0x000001)
class FM1EE_OK : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/M1Data.DataLinkUnion
/// Size: 0x0008 (0x000028 - 0x000030)
class FDataLinkUnion : public FDataLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/M1Data.M1AutomationTestOtherDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AutomationTestOtherDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1AutomationTestCharacterDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AutomationTestCharacterDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1AutomationTestNpcDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AutomationTestNpcDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1AutomationTestNestData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1AutomationTestNestData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   MaxHp                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxMp                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1AutomationTestStatData
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1AutomationTestStatData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1AutomationTestNestData)                 Nest                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   MaxHp                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxMp                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(EM1AutomationTestAttr)                     MainAttr                                                    OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(TArray<EM1AutomationTestAttr>)             SubAttrs                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AutomationTestOtherData
/// Size: 0x0050 (0x000008 - 0x000058)
class FM1AutomationTestOtherData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FSoftObjectPath)                           UnrealAsset1                                                OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FName)                                     Name1                                                       OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FVector)                                   Vector1                                                     OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FRotator)                                  Rotator1                                                    OFFSET(getStruct<T>, {0x44, 12, 0, 0})
	SMember(FDateTime)                                 Dt                                                          OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/M1Data.M1AutomationTestCharacterData
/// Size: 0x0080 (0x000008 - 0x000088)
class FM1AutomationTestCharacterData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<EM1AutomationTestAttr>)             CharacterAttrs                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1AutomationTestNestData>)         Nests                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FM1AutomationTestStatData)                 Stat                                                        OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FM1AutomationTestOtherDataLink)            Other                                                       OFFSET(getStruct<T>, {0x58, 48, 0, 0})
};

/// Struct /Script/M1Data.M1AutomationTestNpcData
/// Size: 0x0028 (0x000088 - 0x0000B0)
class FM1AutomationTestNpcData : public FM1AutomationTestCharacterData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FM1AutomationTestStatData)                 SecondStat                                                  OFFSET(getStruct<T>, {0x88, 40, 0, 0})
};

/// Struct /Script/M1Data.M1InstantUseItemDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstantUseItemDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1StatDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1StatDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RangedWeaponRecoilDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RangedWeaponRecoilDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstantUseDropGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstantUseDropGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1StringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1StringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ItemStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ItemStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SystemStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SystemStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1UIStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1UIStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SkillStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SkillStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CharacterStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CharacterStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1StoryStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1StoryStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ReservedStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ReservedStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ContentsStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ContentsStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ProductStringTableDataRowLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ProductStringTableDataRowLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MonsterTagDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MonsterTagDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MonsterAIDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MonsterAIDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1HitPointDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1HitPointDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1NpcDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1NpcDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1NpcServiceUnlockDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1NpcServiceUnlockDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1DialogDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1DialogDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EncountDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EncountDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1LoadingTooltipDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1LoadingTooltipDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1LoadingImageRandomDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1LoadingImageRandomDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1TestAssetDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1TestAssetDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1AbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneUIDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneUIDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneAutoEquipLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneAutoEquipLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SkillDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SkillDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EpicMonsterSkillDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EpicMonsterSkillDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MonsterSkillDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MonsterSkillDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EliteMonsterSkillDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EliteMonsterSkillDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EliteMonsterSkillGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EliteMonsterSkillGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SkillAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SkillAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PhysicalPowerOptionDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PhysicalPowerOptionDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SkillRedirectDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SkillRedirectDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SkillTooltipDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SkillTooltipDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PerkTooltipDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PerkTooltipDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SeasonReinforceAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SeasonReinforceAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SeasonReinforceDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SeasonReinforceDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SummonsDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SummonsDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SummonsAIDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SummonsAIDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SummonsSkillDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SummonsSkillDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CustomizingAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CustomizingAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PerkAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PerkAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ReactorAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ReactorAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SetOptionAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SetOptionAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MissionMonsterAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MissionMonsterAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ChatBlockRuleDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ChatBlockRuleDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ChatChannelDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ChatChannelDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CreditsDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CreditsDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1FieldObjectSpawnGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1FieldObjectSpawnGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MissionTargetAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MissionTargetAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MissionTargetDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MissionTargetDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1LaboratoryMonsterSpawnDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1LaboratoryMonsterSpawnDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstanceDungeonAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstanceDungeonAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1DifficultyAbilityDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1DifficultyAbilityDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MultiSupplierDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MultiSupplierDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SearchKeywordDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SearchKeywordDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RangedFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RangedFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InstantUseItemData
/// Size: 0x0070 (0x000008 - 0x000078)
class FM1InstantUseItemData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(int32_t)                                   ObtainableCountPerChance                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      Private                                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FM1AbilityDataLink)                        Ability                                                     OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FSoftClassPath)                            PropClass                                                   OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(EM1StatType)                               CurrentStatCapacity                                         OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(EM1RoundsType)                             RoundsCapacity                                              OFFSET(get<T>, {0x71, 1, 0, 0})
	DMember(bool)                                      NumberLimit                                                 OFFSET(get<bool>, {0x72, 1, 0, 0})
	CMember(EM1ImportanceType)                         ImportanceType                                              OFFSET(get<T>, {0x73, 1, 0, 0})
};

/// Struct /Script/M1Data.M1SearchKeywordInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1SearchKeywordInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Payload                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FSoftObjectPath)                           IconImage                                                   OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterSizeData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1CharacterSizeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1CharacterSize)                          Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1StatModifierClampInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1StatModifierClampInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1RangedFloat)                            Total                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FM1RangedFloat)                            Add                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FM1RangedFloat)                            Multiply                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/M1Data.M1GaugeStatInfo
/// Size: 0x0003 (0x000000 - 0x000003)
class FM1GaugeStatInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bGauge                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EM1StatType)                               MaxType                                                     OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bFillOnInit                                                 OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/M1Data.M1StatUIData
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1StatUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      UIRecord                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   UIGroupId                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   OrderInGroup                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EM1StatUIRecordType)                       UIRecordType                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   DecimalPlaces                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bChart                                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FM1RangedFloat)                            ChartRange                                                  OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/M1Data.M1StatBaseData
/// Size: 0x0008 (0x000008 - 0x000010)
class FM1StatBaseData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1StatType)                               StatTypeEnum                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EM1StatValueOrder)                         ValueOrder                                                  OFFSET(get<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1StatData
/// Size: 0x0080 (0x000010 - 0x000090)
class FM1StatData : public FM1StatBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FM1StatUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FM1StatModifierClampInfo)                  ClampInfo                                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     CombatPowerConstant                                         OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FSoftObjectPath)                           IconImage                                                   OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	SMember(FM1GaugeStatInfo)                          GaugeInfo                                                   OFFSET(getStruct<T>, {0x88, 3, 0, 0})
	DMember(int32_t)                                   SortOrder                                                   OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RecoilInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RecoilInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Pitch                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RangedWeaponRecoilData
/// Size: 0x0030 (0x000008 - 0x000038)
class FM1RangedWeaponRecoilData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(float)                                     RecoilApplyInterpSpeed                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     RecoilRecoverInterpSpeed                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     RecoilRecoverStartDelay                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     RecoilResetTimeAfterFire                                    OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TArray<FM1RecoilInfo>)                     RecoilInfos                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InstantUseDropGroupElement
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1InstantUseDropGroupElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     ItemId                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ValueMin                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ValueMax                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InstantUseDropGroupData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1InstantUseDropGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1InstantUseDropGroupElement>)     DropGroupElementList                                        OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1KeyText
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1KeyText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Desc                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Narrative                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   NarrativeLong                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1StringTableDataRow
/// Size: 0x0080 (0x000008 - 0x000088)
class FM1StringTableDataRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FM1KeyText)                                KO                                                          OFFSET(getStruct<T>, {0x8, 64, 0, 0})
	SMember(FM1KeyText)                                EN                                                          OFFSET(getStruct<T>, {0x48, 64, 0, 0})
};

/// Struct /Script/M1Data.M1ItemStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1ItemStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1SystemStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1SystemStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1UIStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1UIStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1SkillStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1SkillStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1CharacterStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1CharacterStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1StoryStringTableDataRow
/// Size: 0x0008 (0x000088 - 0x000090)
class FM1StoryStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      NeedStringKeyReplacement                                    OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Struct /Script/M1Data.M1ReservedStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1ReservedStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1ContentsStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1ContentsStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1ProductStringTableDataRow
/// Size: 0x0000 (0x000088 - 0x000088)
class FM1ProductStringTableDataRow : public FM1StringTableDataRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/M1Data.M1MonsterTagData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1MonsterTagData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     GroupId                                                     OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(EM1EMonsterTagRateType)                    RateType                                                    OFFSET(get<T>, {0x1C, 1, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterAIVulgusPost
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1MonsterAIVulgusPost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     NonBattleTargetSearchRadius                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NonBattlePatrolRadius                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     NonBattlePatrolHitRadius                                    OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterAIOverride
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1MonsterAIOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1MonsterAIVulgusPost)                    VulgusPost                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterAIMission
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MonsterAIMission : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TargetObjectSearchRadius                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TargetObjectApproachRadius                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<float>)                             MissionRangeList                                            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterAIBattleState
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1MonsterAIBattleState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     AttackRadius                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TargetSearchRadius                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TargetSearchTimeMin                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TargetSearchTimeMax                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TargetSearchAngle                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TargetChangeRate                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EM1RelationsCheckType)                     Relations                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FGameplayTag)                              QueryTag                                                    OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	CMember(EM1AITargetingPriority)                    TargetingPriority                                           OFFSET(get<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      CheckTargetVisible                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     TargetHoldRadius                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     PursuitRadius                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     AllianceCallRadius                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     AllianceBattleRadius                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     PatrolHitRadius                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     PatrolRadius                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      UseCoverUpInBattle                                          OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     WaitTimeOnCoverUp                                           OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      UseHomeLocationWithTargetSearch                             OFFSET(get<bool>, {0x4C, 1, 0, 0})
	CMember(TArray<float>)                             BattleRangeList                                             OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterAISubBehaviorTree
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1MonsterAISubBehaviorTree : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              Tag                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FSoftObjectPath)                           BTPath                                                      OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterAIData
/// Size: 0x01B0 (0x000008 - 0x0001B8)
class FM1MonsterAIData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FSoftObjectPath)                           BTPath                                                      OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FM1MonsterAISubBehaviorTree)               SubBT                                                       OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(EM1MonsterAIPattern)                       MonsterPattern                                              OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(bool)                                      TargetSearchEnable                                          OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(float)                                     SightRadius                                                 OFFSET(get<float>, {0x64, 4, 0, 0})
	CMember(EM1AITargetingType)                        TargetingType                                               OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(float)                                     AfterAttackDelay                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	SMember(FM1MonsterAIBattleState)                   NonBattle                                                   OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FM1MonsterAIBattleState)                   Battle                                                      OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	SMember(FM1MonsterAIBattleState)                   BattleEnd                                                   OFFSET(getStruct<T>, {0x130, 96, 0, 0})
	SMember(FM1MonsterAIMission)                       Mission                                                     OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FM1MonsterAIOverride)                      Override                                                    OFFSET(getStruct<T>, {0x1A8, 12, 0, 0})
};

/// Struct /Script/M1Data.M1RangeCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RangeCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      NeedRangeCheck                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     RangeMin                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RangeMax                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HighRange                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LowRange                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AngleRangeMax                                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/M1Data.M1HitPointInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1HitPointInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   BoneName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     HPDamageRate                                                OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EM1DamageAdvantageType)                    AdvantageType                                               OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/M1Data.M1HitPointData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1HitPointData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1HitPointInfo>)                   Param                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1NpcServiceUnlockCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1NpcServiceUnlockCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1NpcServiceUnlockConditionType)          Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Values                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1NpcService
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1NpcService : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EM1NpcServiceType)                         ServiceType                                                 OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FString)                                   ServiceValue                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FSoftClassPath)                            WidgetClass                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TArray<FM1NpcServiceUnlockCondition>)      UnlockConditions                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1NpcSpawnParam
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1NpcSpawnParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EM1NpcSpawnConditionType)                  ConditionType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ConditionValue                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/M1Data.M1NpcDespawnParam
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1NpcDespawnParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EM1NpcSpawnConditionType)                  ConditionType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ConditionValue                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     ReplacementNpcName                                          OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/M1Data.M1NpcSpawnPeriod
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1NpcSpawnPeriod : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Start                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     End                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1NpcSpawnInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1NpcSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FM1NpcSpawnPeriod>)                 SpawnPeriods                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FM1NpcDataLink)                            ReplacementNpc                                              OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/M1Data.M1NpcData
/// Size: 0x0100 (0x000008 - 0x000108)
class FM1NpcData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringIdName                                                OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FName)                                     StringIdButtonName                                          OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	SMember(FSoftClassPath)                            BlueprintClass                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(EM1NpcSpawnType)                           SpawnType                                                   OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     NameTagOffset                                               OFFSET(get<float>, {0x44, 4, 0, 0})
	SMember(FSoftObjectPath)                           HudIcon                                                     OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	SMember(FSoftObjectPath)                           MapIcon                                                     OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	DMember(bool)                                      ShowMapIcon                                                 OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      SkipNpcMenu                                                 OFFSET(get<bool>, {0x89, 1, 0, 0})
	CMember(TArray<FM1NpcService>)                     Services                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FM1NpcSpawnParam>)                  SpawnParams                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FM1NpcDespawnParam>)                DespawnParams                                               OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      Collision                                                   OFFSET(get<bool>, {0xC0, 1, 0, 0})
	SMember(FM1NpcSpawnInfo)                           SpawnInfo                                                   OFFSET(getStruct<T>, {0xC8, 64, 0, 0})
};

/// Struct /Script/M1Data.M1NpcServiceUnlockData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1NpcServiceUnlockData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EM1NpcServiceType)                         ServiceType                                                 OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<FM1NpcServiceUnlockCondition>)      UnlockConditions                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     UnlockNotificationToastId                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MarkerInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MarkerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   MarkerKey                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DialogData
/// Size: 0x0038 (0x000008 - 0x000040)
class FM1DialogData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     CharacterId                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EM1DialogueType)                           Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   VoiceKey                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     NextDialog                                                  OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(TArray<FM1MarkerInfo>)                     MarkerInfoList                                              OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MonsterDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EncountInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1EncountInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1MonsterDataLink)                        MonsterId                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     EncountRate                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1EncountData
/// Size: 0x0038 (0x000008 - 0x000040)
class FM1EncountData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   EncountLevelMin                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   EncountLevelMax                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int64_t)                                   EncountPointMin                                             OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   EncountPointMax                                             OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(float)                                     EncountTimer                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TArray<FM1EncountInfo>)                    Encount                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MasteryRank
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1MasteryRank : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Min                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Max                                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1LoadingTooltipData
/// Size: 0x0028 (0x000008 - 0x000030)
class FM1LoadingTooltipData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FM1MasteryRank)                            MasteryRank                                                 OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1LoadingGroupList
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1LoadingGroupList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   GroupId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Ratio                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1LoadingImageRandomData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1LoadingImageRandomData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1LoadingGroupList>)               LoadingGroupList                                            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TestAssetData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1TestAssetData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           AssetData                                                   OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/M1Data.M1AbilityTargetData
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1AbilityTargetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSoftClassPath)                            AbilityTargetClass                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AbilityData
/// Size: 0x0068 (0x000008 - 0x000070)
class FM1AbilityData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FSoftClassPath)                            AbilityClass                                                OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(TArray<FM1TaggedAbilityOperationData>)     Operations                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FM1TaggedInvokeStatusEffectData>)   InvokeStatusEffects                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FM1TaggedSpawnAbilityActorData>)    SpawnAbilityActors                                          OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneAbilityData
/// Size: 0x0000 (0x000070 - 0x000070)
class FM1RuneAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/M1Data.M1RuneUIStatDesc
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1RuneUIStatDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EM1StatType)                               StatEnum                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   StatsType                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     SeperatedStringKey                                          OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(float)                                     ReferValue                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bCanNotCombine                                              OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/M1Data.M1RuneUIReferData
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1RuneUIReferData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneUIDesc
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1RuneUIDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ConditionStringKey                                          OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     CommentStringKey                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FM1RuneUIReferData>)                Refer                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1RuneUIStatDesc>)                 Stat                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneUIData
/// Size: 0x0028 (0x000008 - 0x000030)
class FM1RuneUIData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     TitleStringKey                                              OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(TArray<FM1RuneUIDesc>)                     CombineDesc                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PlayerDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PlayerDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneAutoEquip
/// Size: 0x0058 (0x000008 - 0x000060)
class FM1RuneAutoEquip : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FM1PlayerDataLink)                         EquipTargetCharacter                                        OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	CMember(EM1EquipItemClassType)                     EquipTargetWeapon                                           OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TArray<FM1RuneDataLink>)                   RuneList                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   Comment                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillAssetData
/// Size: 0x0100 (0x000000 - 0x000100)
class FM1SkillAssetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FSoftObjectPath)                           NormalIcon                                                  OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           ActiveIcon                                                  OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FSoftObjectPath)                           PreviewImage                                                OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FSoftObjectPath)                           PreviewMovie                                                OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FSoftObjectPath)                           Montage                                                     OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FSoftObjectPath)                           Sequence                                                    OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FSoftClassPath)                            CustomIconWidget                                            OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FSoftClassPath)                            CustomHUDWidget                                             OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
};

/// Struct /Script/M1Data.M1StatValuePair
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1StatValuePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1StatType)                               StatTypeEnum                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(double)                                    StatValue                                                   OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1TaggedAbilityParamData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1TaggedAbilityParamData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Tag                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillLevelData
/// Size: 0x0078 (0x000000 - 0x000078)
class FM1SkillLevelData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Cooltime                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxStackCount                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     StackChargingTime                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ActiveDuration                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FM1StatValuePair)                          ActivateCost                                                OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FM1SkillAbilityDataLink)                   SkillAbility                                                OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FM1TaggedAbilityParamData>)         TaggedParams                                                OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillData
/// Size: 0x0128 (0x000008 - 0x000130)
class FM1SkillData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FM1SkillAssetData)                         AssetData                                                   OFFSET(getStruct<T>, {0x18, 256, 0, 0})
	CMember(EM1SkillType)                              Type                                                        OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EM1ElementalDamageChannel)                 ElementalType                                               OFFSET(get<T>, {0x119, 1, 0, 0})
	CMember(EM1SkillArcheType)                         ArcheType                                                   OFFSET(get<T>, {0x11A, 1, 0, 0})
	DMember(char)                                      GroupIndex                                                  OFFSET(get<char>, {0x11B, 1, 0, 0})
	DMember(bool)                                      bCanUsedInAir                                               OFFSET(get<bool>, {0x11C, 1, 0, 0})
	CMember(TArray<FM1SkillLevelData>)                 LvData                                                      OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillTargetSearchParam
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1SkillTargetSearchParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           EnvQuery                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     RadiusMin                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     RadiusMax                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/M1Data.M1EpicMonsterSkillData
/// Size: 0x0000 (0x000130 - 0x000130)
class FM1EpicMonsterSkillData : public FM1SkillData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/M1Data.M1MonsterSkillData
/// Size: 0x0050 (0x000130 - 0x000180)
class FM1MonsterSkillData : public FM1SkillData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(float)                                     SelectRate                                                  OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FM1RangeCondition)                         RangeCondition                                              OFFSET(getStruct<T>, {0x134, 24, 0, 0})
	SMember(FM1SkillTargetSearchParam)                 SearchParam                                                 OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	DMember(bool)                                      bStopSkillWhenMainTargetInvalid                             OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(bool)                                      bCanMove                                                    OFFSET(get<bool>, {0x179, 1, 0, 0})
};

/// Struct /Script/M1Data.M1EliteMonsterSkillData
/// Size: 0x0010 (0x000130 - 0x000140)
class FM1EliteMonsterSkillData : public FM1SkillData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      DontGiveByMonster                                           OFFSET(get<bool>, {0x130, 1, 0, 0})
	SMember(FName)                                     UIGroupId                                                   OFFSET(getStruct<T>, {0x134, 8, 0, 0})
};

/// Struct /Script/M1Data.M1EliteMonsterSkillSelectInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1EliteMonsterSkillSelectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1EliteMonsterSkillDataLink)              ID                                                          OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     Rate                                                        OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1EliteMonsterSkillGroupData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1EliteMonsterSkillGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1EliteMonsterSkillSelectInfo>)    Skills                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillAbilityData
/// Size: 0x0048 (0x000070 - 0x0000B8)
class FM1SkillAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSoftObjectPath)                           Montage                                                     OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FSoftObjectPath)                           Sequence                                                    OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	DMember(bool)                                      bCanBeInterrupted                                           OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PhysicalPowerOptionData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1PhysicalPowerOptionData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bLaunchWhenDeathRagDoll                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     LaunchPower                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LaunchAssistAngle                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PowerAfterLaunch                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PhysicalPower                                               OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/M1Data.M1SkillRedirectInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1SkillRedirectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1SkillDataLink)                          Skill                                                       OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FString)                                   Slot                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillRedirectData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1SkillRedirectData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FM1SkillRedirectInfo>)              NormalSkills                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1SkillRedirectInfo>)              UltimateSkills                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillTooltipLevelData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1SkillTooltipLevelData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillTooltipDetailData
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1SkillTooltipDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     DataStringID                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     FormatStringID                                              OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EM1SkillInfoTextFormatType)                TextFormatType                                              OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   DecimalPlaces                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(EM1SkillInfoBenefitType)                   BenefitType                                                 OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FSoftClassPath)                            CalcClass                                                   OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TArray<FM1SkillTooltipLevelData>)          LvData                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SkillTooltipData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1SkillTooltipData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FM1SkillTooltipDetailData>)         DetailData                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PerkTooltipData
/// Size: 0x0000 (0x000020 - 0x000020)
class FM1PerkTooltipData : public FM1SkillTooltipData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/M1Data.M1SeasonReinforceAbilityData
/// Size: 0x0000 (0x000070 - 0x000070)
class FM1SeasonReinforceAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/M1Data.M1SeasonReinforceData
/// Size: 0x0060 (0x000008 - 0x000068)
class FM1SeasonReinforceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(EM1SeasonReinforceGroupType)               GroupType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Cooltime                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FM1SeasonReinforceAbilityDataLink)         SeasonReinforceAbility                                      OFFSET(getStruct<T>, {0x38, 48, 0, 0})
};

/// Struct /Script/M1Data.M1StatusEffectUIData
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1StatusEffectUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSoftObjectPath)                           Icon                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   NoticeStringId                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FName)                                     ToastId                                                     OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/M1Data.M1StatusEffectData
/// Size: 0x0098 (0x000070 - 0x000108)
class FM1StatusEffectData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FGameplayTag)                              BlockingOwnerTag                                            OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   Channel                                                     OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   ApplyPriority                                               OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	CMember(EM1StatusEffectAmassType)                  AmassType                                                   OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bReplaceOnlyDuration                                        OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(int32_t)                                   MaxStackCount                                               OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   StartStackCount                                             OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(EM1StatusEffectStackDecreasePolicy)        StackDecreasePolicy                                         OFFSET(get<T>, {0x8C, 1, 0, 0})
	SMember(FString)                                   Duration                                                    OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	DMember(float)                                     Period                                                      OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FM1StatusEffectUIData)                     UIData                                                      OFFSET(getStruct<T>, {0xA8, 56, 0, 0})
	SMember(FGameplayTag)                              IdTag                                                       OFFSET(getStruct<T>, {0xE0, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      RemoveTags                                                  OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      ImmuneTags                                                  OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SummonsLevelInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1SummonsLevelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LifeTime                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  AdjectiveStats                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterLevelInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1CharacterLevelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  VariableStats                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int64_t)                                   RewardCharacterExp                                          OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   RewardProficiencyExp                                        OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   RewardBattlePassExp                                         OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	CMember(TArray<int32_t>)                           PassiveSkillLevels                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<int32_t>)                           ActiveSkillLevels                                           OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterData
/// Size: 0x00D0 (0x000008 - 0x0000D8)
class FM1CharacterData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EM1DamageAdvantageType)                    AdvantageType                                               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FName)                                     HitPoint                                                    OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FSoftClassPath)                            BlueprintClass                                              OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FSoftObjectPath)                           LegacyDataAsset                                             OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(TArray<FM1CharacterLevelInfo>)             Lv                                                          OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<EM1StatType>)                       UnusedGaugeStats                                            OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  Stats                                                       OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  BareHandStats                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FM1SkillDataLink>)                  PassiveSkills                                               OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FM1SkillDataLink>)                  ActiveSkills                                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(EM1CharacterSize)                          CharacterSize                                               OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterUIData
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MonsterUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterData
/// Size: 0x00A8 (0x0000D8 - 0x000180)
class FM1MonsterData : public FM1CharacterData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(EM1MonsterCategory)                        MonsterCategory                                             OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(EM1LegionCategory)                         LegionCategory                                              OFFSET(get<T>, {0xD9, 1, 0, 0})
	SMember(FM1MonsterAIDataLink)                      AI                                                          OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
	SMember(FString)                                   ActionGroupId                                               OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FString)                                   PartsGroupId                                                OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	DMember(bool)                                      UseControllerRotationYaw                                    OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(bool)                                      DisableInstantDropItem                                      OFFSET(get<bool>, {0x131, 1, 0, 0})
	DMember(float)                                     AttackAccuracyRate                                          OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(int64_t)                                   SpawnMonsterId                                              OFFSET(get<int64_t>, {0x138, 8, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FM1MonsterUIData)                          UIData                                                      OFFSET(getStruct<T>, {0x150, 32, 0, 0})
	DMember(bool)                                      ShowMapIcon                                                 OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(float)                                     GrantEliteWeight                                            OFFSET(get<float>, {0x174, 4, 0, 0})
	CMember(EM1MonsterSpecialty)                       Specialty                                                   OFFSET(get<T>, {0x178, 1, 0, 0})
};

/// Struct /Script/M1Data.M1SummonsData
/// Size: 0x0010 (0x000180 - 0x000190)
class FM1SummonsData : public FM1MonsterData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FM1SummonsLevelInfo>)               SummonsLv                                                   OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SummonsAIData
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class FM1SummonsAIData : public FM1MonsterAIData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Struct /Script/M1Data.M1SummonsSkillData
/// Size: 0x0000 (0x000180 - 0x000180)
class FM1SummonsSkillData : public FM1MonsterSkillData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Struct /Script/M1Data.M1CustomizingAbilityData
/// Size: 0x0000 (0x000070 - 0x000070)
class FM1CustomizingAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/M1Data.M1PerkAbilityData
/// Size: 0x0000 (0x000070 - 0x000070)
class FM1PerkAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/M1Data.M1ReactorAbilityData
/// Size: 0x0000 (0x000070 - 0x000070)
class FM1ReactorAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/M1Data.M1SetOptionAbilityData
/// Size: 0x0000 (0x000070 - 0x000070)
class FM1SetOptionAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/M1Data.M1MissionMonsterAbilityData
/// Size: 0x0000 (0x000070 - 0x000070)
class FM1MissionMonsterAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/M1Data.M1ChatBlockRuleData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1ChatBlockRuleData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1ChattingBlockRule)                      Rule                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      UseBlock                                                    OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(int32_t)                                   RestrictStackCount                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ResetStackInterval                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   UnblockTime                                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ChatChannelData
/// Size: 0x0038 (0x000008 - 0x000040)
class FM1ChatChannelData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EM1ChattingType)                           Channel                                                     OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<EM1ChattingTab>)                    DisplayTabs                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      DisplayInAllLanguages                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      UserUseCheck                                                OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(int32_t)                                   InputCoolTime                                               OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FString)                                   ChatCmd                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   ChatCmdParamCnt                                             OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CreditInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CreditInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1CreditType)                             CreditType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CreditsData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1CreditsData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1CreditInfo>)                     Infos                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FieldObjectDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1FieldObjectDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1FieldObjectSpawnInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1FieldObjectSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Rate                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1FieldObjectDataLink)                    FieldObject                                                 OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/M1Data.M1FieldObjectSpawnGroupData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1FieldObjectSpawnGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1FieldObjectSpawnInfo>)           SpawnObject                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1StatOverrideData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1StatOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1StatType)                               StatType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1LvFactorData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1LvFactorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   NumOfPartyMember                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1StatOverrideData>)               StatOverrideList                                            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionTargetActiveAbilityData
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1MissionTargetActiveAbilityData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     FirstDelay                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CooltimeMin                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CooltimeMax                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MissionTargetAbilityData
/// Size: 0x0010 (0x000070 - 0x000080)
class FM1MissionTargetAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      Passive                                                     OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FM1MissionTargetActiveAbilityData)         ActiveAbility                                               OFFSET(getStruct<T>, {0x74, 12, 0, 0})
};

/// Struct /Script/M1Data.M1MissionTargetLevelData
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1MissionTargetLevelData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  VariableBaseStats                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1MissionTargetAbilityDataLink>)   Abilities                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionTargetData
/// Size: 0x0050 (0x000008 - 0x000058)
class FM1MissionTargetData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EM1MissionTargetType)                      Type                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FSoftClassPath)                            BlueprintClass                                              OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	CMember(TArray<FM1MissionTargetLevelData>)         Lv                                                          OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/M1Data.M1LaboratoryMonsterSpawnData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1LaboratoryMonsterSpawnData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1MonsterDataLink>)                SpawnList                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonAbilityData
/// Size: 0x0048 (0x000070 - 0x0000B8)
class FM1InstanceDungeonAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	DMember(bool)                                      ApplyToPlayer                                               OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(TArray<EM1MonsterCategory>)                MonsterCategories                                           OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DifficultyAbilityData
/// Size: 0x0028 (0x000070 - 0x000098)
class FM1DifficultyAbilityData : public FM1AbilityData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x78, 32, 0, 0})
};

/// Struct /Script/M1Data.M1MultiSupplierAbilityParamData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MultiSupplierAbilityParamData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   AbilityId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EM1StatType)                               CurrentStatCapacity                                         OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EM1RoundsType)                             RoundsCapacity                                              OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MultiSupplierData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1MultiSupplierData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ReuseTimer                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FM1MultiSupplierAbilityParamData>)  Operations                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SearchKeywordData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1SearchKeywordData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1SearchKeywordType)                      SearchType                                                  OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<FM1SearchKeywordInfo>)              Keywords                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ConsumableItemDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ConsumableItemDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BoostItemDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BoostItemDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BoostItemMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BoostItemMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CurrencyInternalDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CurrencyInternalDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CurrencyDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CurrencyDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CustomizingItemDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CustomizingItemDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CustomizingItemMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CustomizingItemMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CharacterDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CharacterDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MasteryLevelDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MasteryLevelDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CharacterLevelDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CharacterLevelDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EquipmentDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EquipmentDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BaseItemDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BaseItemDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1DropGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1DropGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1DropItemLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1DropItemLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PackageGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PackageGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PackageItemDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PackageItemDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RangedWeaponDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RangedWeaponDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MonsterMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MonsterMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BossMonsterDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BossMonsterDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1AccessoryDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AccessoryDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ItemOptionDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ItemOptionDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ItemOptionMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ItemOptionMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RandomOptionChangeDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RandomOptionChangeDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RandomOptionGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RandomOptionGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MonsterSpawnGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MonsterSpawnGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CheatDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CheatDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PartsDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PartsDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BalanceDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BalanceDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MapBattleZoneDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MapBattleZoneDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MapDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MapDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BunchItemDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BunchItemDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ProductDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ProductDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PaidProductDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PaidProductDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BattlePassProductDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BattlePassProductDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CommonShopDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CommonShopDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BattlePassShopDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BattlePassShopDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ResearchDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ResearchDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MissionDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MissionDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MissionTaskSubDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MissionTaskSubDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MissionWaveDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MissionWaveDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1QuestDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1QuestDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1QuestParamGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1QuestParamGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneClassTypeDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneClassTypeDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneSocketGrantDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneSocketGrantDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ProficiencyDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ProficiencyDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ProficiencyMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ProficiencyMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneComposeDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneComposeDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RuneComposeMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RuneComposeMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PerkDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PerkDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PlatformAchievementDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PlatformAchievementDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ReactorMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ReactorMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ReactorDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ReactorDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ReactorEnchantRequireDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ReactorEnchantRequireDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1VoidBattleDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1VoidBattleDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1VoidBattleMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1VoidBattleMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1WorldMissionDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1WorldMissionDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1WorldMissionMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1WorldMissionMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstanceFieldContentsDataBaseLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstanceFieldContentsDataBaseLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstanceDungeonDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstanceDungeonDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstanceDungeonMODDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstanceDungeonMODDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstanceDungeonFixedMODDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstanceDungeonFixedMODDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstanceDungeonSelectionMODDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstanceDungeonSelectionMODDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InstanceDungeonSelectionMODGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InstanceDungeonSelectionMODGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1CharacterDungeonDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1CharacterDungeonDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InvasionDungeonDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InvasionDungeonDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InvasionDungeonMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InvasionDungeonMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1InvasionDungeonMODDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1InvasionDungeonMODDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MailDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MailDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MailMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MailMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EventDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EventDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EventMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EventMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ItemLevelUpgradeDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ItemLevelUpgradeDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EquipmentDecomposeDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EquipmentDecomposeDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SetOptionDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SetOptionDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1DropItemLevelWeightDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1DropItemLevelWeightDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1TitleDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1TitleDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1TitleMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1TitleMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BattlePassLevelDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BattlePassLevelDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BattlePassChallengeDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BattlePassChallengeDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BattlePassChallengeMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BattlePassChallengeMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BattlePassDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BattlePassDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1BattlePassMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1BattlePassMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1AchievementDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AchievementDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1AchievementCategoryDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1AchievementCategoryDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RecordDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RecordDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1StatBaseDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1StatBaseDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1EventBoostingDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1EventBoostingDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MiniGameDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MiniGameDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1MiniGameMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1MiniGameMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1DifficultyInfoDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1DifficultyInfoDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1DifficultyInfoMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1DifficultyInfoMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1QuestGroupDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1QuestGroupDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RotationDropDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RotationDropDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RotationDropMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1RotationDropMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PaintExtractDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PaintExtractDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1PaintExtractMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1PaintExtractMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ItemSelectorDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1ItemSelectorDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SeasonDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SeasonDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1SeasonMiscDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1SeasonMiscDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1RedeemItemBox
/// Size: 0x0008 (0x000030 - 0x000038)
class FM1RedeemItemBox : public FDataLinkUnion
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1RedeemType)                             Type                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/M1Data.M1ItemUIData
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1ItemUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           IconBigPath                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FSoftObjectPath)                           IconSmallPath                                               OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/M1Data.M1ItemDataBox
/// Size: 0x0008 (0x000030 - 0x000038)
class FM1ItemDataBox : public FDataLinkUnion
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1ItemType)                               Type                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/M1Data.M1ConsumableItemData
/// Size: 0x0128 (0x000008 - 0x000130)
class FM1ConsumableItemData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FM1ItemUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x18, 96, 0, 0})
	CMember(EM1ConsumableItemCategoryType)             Category                                                    OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(EM1ItemTierType)                           TierType                                                    OFFSET(get<T>, {0x79, 1, 0, 0})
	CMember(EM1ConsumableItemHowToUse)                 HowToUse                                                    OFFSET(get<T>, {0x7A, 1, 0, 0})
	DMember(int32_t)                                   ObtainableCountPerChance                                    OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   MaxCapacity                                                 OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(bool)                                      Deletable                                                   OFFSET(get<bool>, {0x84, 1, 0, 0})
	SMember(FM1ItemDataBox)                            SellingType                                                 OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	DMember(int32_t)                                   SellingPrice                                                OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	SMember(FM1RedeemItemBox)                          RedeemItem                                                  OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
	SMember(FSoftClassPath)                            PropClass                                                   OFFSET(getStruct<T>, {0x100, 32, 0, 0})
	DMember(int32_t)                                   ImportantPriority                                           OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	CMember(EM1ImportanceType)                         ImportanceType                                              OFFSET(get<T>, {0x124, 1, 0, 0})
	DMember(int32_t)                                   MasteryLevel                                                OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(bool)                                      IsTemporary                                                 OFFSET(get<bool>, {0x12C, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BoostItemData
/// Size: 0x0010 (0x000130 - 0x000140)
class FM1BoostItemData : public FM1ConsumableItemData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(int32_t)                                   BoostGroupId                                                OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	CMember(EM1BuffItemType)                           BuffItemType                                                OFFSET(get<T>, {0x134, 1, 0, 0})
	CMember(EM1BuffSubItemType)                        BuffSubItemType                                             OFFSET(get<T>, {0x135, 1, 0, 0})
	DMember(int32_t)                                   BoostValue                                                  OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   RemainSec                                                   OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BoostLimitData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1BoostLimitData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1BuffSubItemType)                        BuffSubItemType                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LimitValue                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BoostItemMiscData
/// Size: 0x0130 (0x000008 - 0x000138)
class FM1BoostItemMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TArray<FM1BoostLimitData>)                 LimitList                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FM1CommonShopDataLink)                     SlotIncrementShop                                           OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	SMember(FM1ProductDataLink)                        WareHouseSlotIncrementProduct                               OFFSET(getStruct<T>, {0x48, 48, 0, 0})
	SMember(FM1ProductDataLink)                        EquipInventoryIncrementProduct                              OFFSET(getStruct<T>, {0x78, 48, 0, 0})
	SMember(FM1ProductDataLink)                        ConsumableInventoryIncrementProduct                         OFFSET(getStruct<T>, {0xA8, 48, 0, 0})
	SMember(FM1ProductDataLink)                        CharacterSlotIncrementProduct                               OFFSET(getStruct<T>, {0xD8, 48, 0, 0})
	SMember(FM1ProductDataLink)                        PresetSlotIncrementProduct                                  OFFSET(getStruct<T>, {0x108, 48, 0, 0})
};

/// Struct /Script/M1Data.M1CurrencyInternalData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1CurrencyInternalData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1CurrencyInternalType)                   CurrencyInternalType                                        OFFSET(get<T>, {0xC, 2, 0, 0})
	DMember(bool)                                      Paid                                                        OFFSET(get<bool>, {0xE, 1, 0, 0})
	CMember(EM1LoginPlatformTypes)                     Platform                                                    OFFSET(get<T>, {0xF, 1, 0, 0})
	DMember(bool)                                      IsTemporary                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/M1Data.M1CurrencyData
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FM1CurrencyData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FM1ItemUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x18, 96, 0, 0})
	CMember(EM1CurrencyType)                           CurrencyType                                                OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(int64_t)                                   StackLimit                                                  OFFSET(get<int64_t>, {0x80, 8, 0, 0})
	SMember(FSoftClassPath)                            PropClass                                                   OFFSET(getStruct<T>, {0x88, 32, 0, 0})
	CMember(TArray<FM1CurrencyInternalDataLink>)       InternalCurrencyList                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      IsTemporary                                                 OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Struct /Script/M1Data.M1RewardType
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1RewardType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1ItemDataBox)                            RewardItem                                                  OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CurrencyPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1CurrencyPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1CurrencyType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizingCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CustomizingCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1CustomizingConditionType)               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizingEvolutionInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1CustomizingEvolutionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ConditionQuestId                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizingItemData
/// Size: 0x0130 (0x000008 - 0x000138)
class FM1CustomizingItemData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FM1ItemUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x18, 96, 0, 0})
	CMember(EM1CustomizingItemCategoryType)            Category                                                    OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      bEvolvable                                                  OFFSET(get<bool>, {0x79, 1, 0, 0})
	CMember(EM1CustomizingBoundType)                   BoundType                                                   OFFSET(get<T>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bCommonItem                                                 OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(EM1ItemTierType)                           TierType                                                    OFFSET(get<T>, {0x81, 1, 0, 0})
	DMember(int32_t)                                   PaintIndices                                                OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   AssetParams                                                 OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FString>)                           AssetDataParams                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FM1CustomizingAbilityDataLink)             AbilityParam                                                OFFSET(getStruct<T>, {0xA8, 48, 0, 0})
	SMember(FM1CustomizingCondition)                   Condition                                                   OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	CMember(TArray<FM1CustomizingEvolutionInfo>)       EvolutionInfos                                              OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FM1RewardType>)                     DuplicatedRewards                                           OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(int32_t)                                   MasteryLevel                                                OFFSET(get<int32_t>, {0x110, 4, 0, 0})
	DMember(int32_t)                                   MaxStackCount                                               OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	CMember(TArray<EM1LoginPlatformTypes>)             PlatformTypes                                               OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(EM1ImportanceType)                         ImportanceType                                              OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(bool)                                      IsTemporary                                                 OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(bool)                                      bShowOnlyIfOwned                                            OFFSET(get<bool>, {0x12A, 1, 0, 0})
	DMember(int32_t)                                   SortId                                                      OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	CMember(EM1ItemAcquireType)                        AcquireType                                                 OFFSET(get<T>, {0x130, 1, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizingItemMiscData
/// Size: 0x0008 (0x000008 - 0x000010)
class FM1CustomizingItemMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxEmotionEquipCount                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PartsDropElement
/// Size: 0x0090 (0x000000 - 0x000090)
class FM1PartsDropElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FM1PartsDataLink)                          PartsDataId                                                 OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FM1DropItemLink)                           DropItemDebone                                              OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FM1DropItemLink)                           DropItemDestruction                                         OFFSET(getStruct<T>, {0x60, 48, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterUIData
/// Size: 0x0080 (0x000000 - 0x000080)
class FM1CharacterUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           BigIconPath                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FSoftObjectPath)                           IntroduceSequence                                           OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FSoftClassPath)                            CustomHUDWidgetPath                                         OFFSET(getStruct<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/M1Data.M1CommonGaugeData
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1CommonGaugeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   CurrentStatStringId                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   MaxStatStringId                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bFillOnInit                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FSoftClassPath)                            WidgetPath                                                  OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/M1Data.M1RequiredItemData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RequiredItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1ItemType)                               ItemType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PlayerData
/// Size: 0x0108 (0x0000D8 - 0x0001E0)
class FM1PlayerData : public FM1CharacterData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	SMember(FName)                                     CharacterConceptStringId                                    OFFSET(getStruct<T>, {0xE0, 8, 0, 0})
	CMember(EM1CharacterGender)                        CharacterGender                                             OFFSET(get<T>, {0xE8, 1, 0, 0})
	CMember(EM1CharacterGrade)                         CharacterGrade                                              OFFSET(get<T>, {0xE9, 1, 0, 0})
	SMember(FM1CharacterUIData)                        UIData                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FM1CommonGaugeData)                        CommonGauge                                                 OFFSET(getStruct<T>, {0x170, 72, 0, 0})
	DMember(int32_t)                                   MasteryLevel                                                OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
	DMember(bool)                                      IsTemporary                                                 OFFSET(get<bool>, {0x1BC, 1, 0, 0})
	CMember(TArray<FM1RewardType>)                     SellRewards                                                 OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FString)                                   GroupId                                                     OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MasteryUIData
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1MasteryUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1VariableMaxCapacity
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1VariableMaxCapacity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1ConsumableItemDataLink)                 TargetItemId                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   MaxCapacity                                                 OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MasteryLevelData
/// Size: 0x00A0 (0x000008 - 0x0000A8)
class FM1MasteryLevelData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RequiredExpToNextLv                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   TotalRequiredExpToNextLv                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   RuneWeaponCapacity                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   RuneCharacterCapacity                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(char)                                      RuneWeaponSlot                                              OFFSET(get<char>, {0x1C, 1, 0, 0})
	DMember(char)                                      RuneCharacterSlot                                           OFFSET(get<char>, {0x1D, 1, 0, 0})
	DMember(int32_t)                                   EquipInventorySlot                                          OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   WareHouseSlot                                               OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   WeaponSlot                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ReactorSlot                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   AccessoryNeckSlot                                           OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   AccessoryEarringSlot                                        OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   AccessoryRingSlot                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   AccessoryBraceletSlot                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   TradeCount                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   CodexTargetSlot                                             OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   PresetSlot                                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   VoidVaultStabilizerMaxStack                                 OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   ConsumableSlot                                              OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FSoftObjectPath)                           IconBigPath                                                 OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	CMember(TArray<FM1MasteryUIData>)                  Info                                                        OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterLevelData
/// Size: 0x0028 (0x000008 - 0x000030)
class FM1CharacterLevelData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int64_t)                                   RequiredExp                                                 OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   AccumulatedExp                                              OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   RuneCharacterCapacity                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int64_t)                                   RewardMasteryExp                                            OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentLevel
/// Size: 0x0080 (0x000000 - 0x000080)
class FM1EquipmentLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  VariableBaseStats                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FM1RandomOptionGroupDataLink)              RandomOptionGroupId                                         OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	SMember(FM1AbilityDataLink)                        ActiveAbility                                               OFFSET(getStruct<T>, {0x48, 48, 0, 0})
	DMember(int32_t)                                   SellingPrice                                                OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentData
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FM1EquipmentData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FM1ItemUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x18, 96, 0, 0})
	CMember(EM1EquipmentCategoryType)                  CategoryType                                                OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(EM1EquipItemClassType)                     ClassType                                                   OFFSET(get<T>, {0x79, 1, 0, 0})
	CMember(EM1ItemTierType)                           TierType                                                    OFFSET(get<T>, {0x7A, 1, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  BaseStats                                                   OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FM1EquipmentLevel>)                 Lv                                                          OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(int32_t)                                   RuneSocketCount                                             OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  RequiredStats                                               OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FSoftClassPath)                            PropClass                                                   OFFSET(getStruct<T>, {0xB8, 32, 0, 0})
	CMember(EM1CurrencyType)                           SellingType                                                 OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(int32_t)                                   ImportantPriority                                           OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	CMember(EM1ImportanceType)                         ImportanceType                                              OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(int32_t)                                   MasteryLevel                                                OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(bool)                                      IsTemporary                                                 OFFSET(get<bool>, {0xE8, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BaseWeaponItemElement
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1BaseWeaponItemElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1EquipmentDataLink)                      ID                                                          OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BaseCustomizeItemElement
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1BaseCustomizeItemElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1CustomizingItemDataLink)                ID                                                          OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bEquip                                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BaseItemData
/// Size: 0x00A0 (0x000008 - 0x0000A8)
class FM1BaseItemData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1PlayerDataLink)                         CharacterId                                                 OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(TArray<FM1BaseWeaponItemElement>)          WeaponsSlot                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FM1BaseWeaponItemElement>)          AccessorySlot                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FM1BaseWeaponItemElement)                  ReactorSlot                                                 OFFSET(getStruct<T>, {0x60, 56, 0, 0})
	CMember(TArray<FM1BaseCustomizeItemElement>)       CustomizingList                                             OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DropGroupElement
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1DropGroupElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   ValueMin                                                    OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ValueMax                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DropGroupData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1DropGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1DropGroupType)                          DropGroupType                                               OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FM1DropGroupElement>)               DropGroupElementList                                        OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DropItemElement
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1DropItemElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1DropGroupDataLink)                      DropGroupId                                                 OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InstantUseDropItemElement
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1InstantUseDropItemElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1InstantUseDropGroupDataLink)            DropGroupId                                                 OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DropItem
/// Size: 0x0028 (0x000008 - 0x000030)
class FM1DropItem : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1DropItemElement>)                DropItemElementList                                         OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1InstantUseDropItemElement>)      InstantUseDropItemElementList                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PackageGroupElement
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1PackageGroupElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   ValueMin                                                    OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ValueMax                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PackageGroupData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1PackageGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1PackageGroupElement>)            PackageGroupElementList                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PackageGroupUpgradeInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1PackageGroupUpgradeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FM1ConsumableItemDataLink)                 RequiredStabilizerId                                        OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FM1PackageGroupDataLink)                   PackageGroupId                                              OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/M1Data.M1PackageItemData
/// Size: 0x0048 (0x000008 - 0x000050)
class FM1PackageItemData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1PackageGroupDataLink)                   DefaultPackageGroupId                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(TArray<FM1PackageGroupUpgradeInfo>)        PackageGroupUpgradeInfoList                                 OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ChargeLevelData
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1ChargeLevelData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ChargeAmount                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ChargeRate                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DischargeRate                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SteadyDuration                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DamageMultiplier                                            OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RangedWeaponData
/// Size: 0x00B0 (0x0000F0 - 0x0001A0)
class FM1RangedWeaponData : public FM1EquipmentData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSoftClassPath)                            BlueprintClass                                              OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	CMember(EM1WeaponInstanceType)                     InstanceType                                                OFFSET(get<T>, {0x110, 1, 0, 0})
	CMember(EM1ReloadType)                             ReloadType                                                  OFFSET(get<T>, {0x111, 1, 0, 0})
	CMember(EM1SpreadType)                             SpreadType                                                  OFFSET(get<T>, {0x112, 1, 0, 0})
	DMember(bool)                                      AddProficiency                                              OFFSET(get<bool>, {0x113, 1, 0, 0})
	DMember(int32_t)                                   BurstCount                                                  OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	DMember(float)                                     RangedInTime                                                OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     RangedIdleHoldTime                                          OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     ZoomInHoldDelayTime                                         OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     ZoomOutHoldDelayTime                                        OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     ZoomReleaseTimeAfterFire                                    OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     ZoomOutDelayTimeAfterFire                                   OFFSET(get<float>, {0x12C, 4, 0, 0})
	SMember(FString)                                   Recoil                                                      OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FString)                                   ZoomRecoil                                                  OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	CMember(EM1RoundsType)                             RoundsType                                                  OFFSET(get<T>, {0x150, 1, 0, 0})
	SMember(FName)                                     PhysicalPowerOptionKey                                      OFFSET(getStruct<T>, {0x154, 8, 0, 0})
	DMember(float)                                     FireDirectionAdjustZ                                        OFFSET(get<float>, {0x15C, 4, 0, 0})
	CMember(TArray<FM1ChargeLevelData>)                ChargeLevelData                                             OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FM1PerkDataLink)                           Perk                                                        OFFSET(getStruct<T>, {0x170, 48, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterHPInfoClass
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1MonsterHPInfoClass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EM1MonsterCategory)                        MonsterCategory                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FSoftClassPath)                            MonsterInfoClass                                            OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterMiscData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1MonsterMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1MonsterHPInfoClass>)             InfoClassList                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BossLvDropElement
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1BossLvDropElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FM1DropItemLink)                           DropItemIdBossKill                                          OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FM1PartsDropElement>)               PartsDrop                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   DropEquipLevelRangeMin                                      OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   DropEquipLevelRangeMax                                      OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   StandardLv                                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BossMonsterData
/// Size: 0x0058 (0x000180 - 0x0001D8)
class FM1BossMonsterData : public FM1MonsterData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(float)                                     ForwardMoveScale                                            OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     SideMoveScale                                               OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     BackwardMoveScale                                           OFFSET(get<float>, {0x188, 4, 0, 0})
	CMember(TArray<FM1BossLvDropElement>)              LvDrop                                                      OFFSET(get<T>, {0x190, 16, 0, 0})
	SMember(FM1DropItemLink)                           DropItemIdMinion                                            OFFSET(getStruct<T>, {0x1A0, 48, 0, 0})
	DMember(bool)                                      HasLifeTime                                                 OFFSET(get<bool>, {0x1D0, 1, 0, 0})
};

/// Struct /Script/M1Data.M1AccessoryData
/// Size: 0x0030 (0x0000F0 - 0x000120)
class FM1AccessoryData : public FM1EquipmentData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FM1SetOptionDataLink)                      SetOption                                                   OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
};

/// Struct /Script/M1Data.M1ItemOptionStat
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ItemOptionStat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1StatType)                               StatTypeEnum                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1StatModifierOp)                         Op                                                          OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     StatValueMin                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StatValueMax                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(char)                                      DecimalPlaces                                               OFFSET(get<char>, {0xC, 1, 0, 0})
};

/// Struct /Script/M1Data.M1ItemOptionData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1ItemOptionData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1ItemOptionType)                         OptionType                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   OptionGrade                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FM1ItemOptionStat)                         BaseStat                                                    OFFSET(getStruct<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ItemOptionStatRangeRate
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ItemOptionStatRangeRate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   UpperRange                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Rate                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ItemOptionTierRange
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ItemOptionTierRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1ItemOptionTierType)                     OptionTierType                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   UpperRange                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ItemOptionMiscData
/// Size: 0x0040 (0x000008 - 0x000048)
class FM1ItemOptionMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<EM1StatType>)                       RandomOptionRangedWeaponBanStatGroup                        OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<EM1StatType>)                       RandomOptionReactorBanStatGroup                             OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1ItemOptionStatRangeRate>)        StatValueSection                                            OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FM1ItemOptionTierRange>)            OptionTierSection                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RandomOptionChangeCostWithTier
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RandomOptionChangeCostWithTier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1ItemTierType)                           Tier                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FM1RequiredItemData>)               Cost                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RandomOptionChangeData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1RandomOptionChangeData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   OptionLockStep                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EM1EquipmentCategoryType)                  EquipmentCategoryType                                       OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FM1RandomOptionChangeCostWithTier>) CostByTier                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RandomOptionGroupElement
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1RandomOptionGroupElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1ItemOptionDataLink)                     OptionId                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   InitialRate                                                 OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   ChangeRate                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RandomOptionGroupData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1RandomOptionGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1RandomOptionGroupElement>)       Elements                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterTagRatePair
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1MonsterTagRatePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Rate                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterDropInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1MonsterDropInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EM1MonsterCategory)                        MonsterCategory                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1MonsterSubType)                         MonsterSubType                                              OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FM1DropItemLink)                           DropItem                                                    OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(int32_t)                                   DropEquipLevelRangeMin                                      OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   DropEquipLevelRangeMax                                      OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterSpawnGroupData
/// Size: 0x0048 (0x000008 - 0x000050)
class FM1MonsterSpawnGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MonsterLevelMin                                             OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   MonsterLevelMax                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MonsterCountMin                                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MonsterCountMax                                             OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     MonsterSpawnInterval                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   MonsterCountToRetain                                        OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   RespawnDelay                                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FM1MonsterDropInfo>)                MonsterDropInfoList                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FM1MonsterTagRatePair>)             Tags                                                        OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FieldObjectActivateConditionParamsByDifficulty
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1FieldObjectActivateConditionParamsByDifficulty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1DifficultyInfoDataLink)                 DifficultyId                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FieldObjectActivateCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1FieldObjectActivateCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1FieldObjectActivateConditionType)       Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FM1FieldObjectActivateConditionParamsByDifficulty>) ParamsByDifficulty                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DifficultiesDropItem
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1DifficultiesDropItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FM1DifficultyInfoDataLink)                 DifficultyId                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FM1DropItemLink)                           DropItem                                                    OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/M1Data.M1FieldObjectData
/// Size: 0x0090 (0x000008 - 0x000098)
class FM1FieldObjectData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(EM1FieldObjectType)                        ObjectType                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(EM1EciveActionType)                        EciveType                                                   OFFSET(get<T>, {0x15, 1, 0, 0})
	CMember(EM1FieldObjectActivateType)                ActivateType                                                OFFSET(get<T>, {0x16, 1, 0, 0})
	CMember(TArray<FString>)                           ActivateParams                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1FieldObjectActivateCondition>)   ActivateConditions                                          OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FM1DropItemLink)                           NoneDifficultyDropItem                                      OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	CMember(TArray<FM1DifficultiesDropItem>)           DifficultiesDropItem                                        OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FSoftClassPath)                            BlueprintClass                                              OFFSET(getStruct<T>, {0x78, 32, 0, 0})
};

/// Struct /Script/M1Data.M1CheatData
/// Size: 0x0048 (0x000008 - 0x000050)
class FM1CheatData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ParentId                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Command                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bHasParam                                                   OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PartsData
/// Size: 0x0080 (0x000008 - 0x000088)
class FM1PartsData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      CanDebone                                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     MaxHpRate                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     CanDeboneHPRate                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DeboneDamageRate                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      CancelActionOnDestruction                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      RecreationOnBerserkModeEnd                                  OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(float)                                     HpDamageRateToRoot                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FName>)                             NeedToPartsDestruction                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      NeedToBerserkState                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FName)                                     HitPointId                                                  OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  Stats                                                       OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FName>)                             HitBoneNames                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FName>)                             WeaknessHitBoneNames                                        OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RandomOptionCountInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RandomOptionCountInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1EquipmentCategoryType)                  Category                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<int32_t>)                           Tier                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1WareHouseIncrementCost
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1WareHouseIncrementCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   IncrementGrade                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   IncrementSlotCount                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Cost                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BalanceData
/// Size: 0x0158 (0x000008 - 0x000160)
class FM1BalanceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(int32_t)                                   MaxGeneralRounds                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxEnhancedRounds                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxImpactRounds                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxHighpowerRounds                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DefaultGeneralRounds                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   DefaultEnhancedRounds                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   DefaultImpactRounds                                         OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   DefaultHighpowerRounds                                      OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     ElementalAdvantageRate                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     ElementalAdvantageRateChampion                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     ElementalAdvantageRateNamed                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ElementalAdvantageRateBoss                                  OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     ElementalAdvantageRateMissionTarget                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ElementalInferiorityRate                                    OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     ElementalNormalRate                                         OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SocketColorBonusValue                                       OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(TArray<FM1RandomOptionCountInfo>)          RandomOptionCountInfos                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   EquipmentItemMaxLv                                          OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   BaseCharacterSlot                                           OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   CharacterIncrementSlotByCash                                OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   ConsumableIncrementSlotByCash                               OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   BaseRuneInventorySlot                                       OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   EquipInventoryIncrementSlotByCash                           OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   SocialInventoryLimit                                        OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   WareHouseIncrementSlotByCash                                OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   PresetIncrementSlotByCash                                   OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   BaseLoadOutSlot                                             OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   LoadoutIncrementSlotByCash                                  OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   ResearchMaxCount                                            OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(float)                                     SphereLifeTime                                              OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     SphereBonusTime                                             OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     SphereBurningTime                                           OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     EpicBossLifeTime                                            OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     EpicBossBonusTime                                           OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     EpicBossBurningTime                                         OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   RemainingMonsterMarker                                      OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(float)                                     Proficiency1EquipSlot                                       OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     InviteHoldTime                                              OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   InviteMaxCount                                              OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(float)                                     SendSupportCoolTime                                         OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   SendSupportMaxCount                                         OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   ReceiveSupportMaxCount                                      OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(float)                                     ReceiveSupportTime                                          OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(int64_t)                                   FieldOptionLimitedMap                                       OFFSET(get<int64_t>, {0xC0, 8, 0, 0})
	DMember(int64_t)                                   FieldOptionLimitedMapMissionID                              OFFSET(get<int64_t>, {0xC8, 8, 0, 0})
	DMember(float)                                     ShieldBreakEffectRecoverRate                                OFFSET(get<float>, {0xD0, 4, 0, 0})
	CMember(TArray<float>)                             PlayerDEFInflectionVar                                      OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<float>)                             MonsterDEFInflectionVar                                     OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<float>)                             PlayerAttackerLevelCnst                                     OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<float>)                             MonsterAttackerLevelCnst                                    OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(float)                                     DEFScaleConst                                               OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     ElementScaleConst                                           OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     DEFLimitConst                                               OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     ElementLimitConst                                           OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(int32_t)                                   BattleZoneCompleted                                         OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   JunkDecomposeMaxCount                                       OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   MaxFriendUserCount                                          OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   MaxFriendRequestCount                                       OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   MaxBlockUserCount                                           OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   ReportResetTime                                             OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(int32_t)                                   EciveSearchMaxCountObject                                   OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(int32_t)                                   EciveSearchMaxCountMoster                                   OFFSET(get<int32_t>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   PresetNameLimitLength                                       OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   MaxRecentUserCount                                          OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	CMember(EM1ItemTierType)                           EquipmentValuableNoticeTier                                 OFFSET(get<T>, {0x150, 1, 0, 0})
	DMember(int32_t)                                   PerkValuableNoticeLevel                                     OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	DMember(int32_t)                                   ReactorValuableNoticeLevel                                  OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	DMember(float)                                     PartyMoveDelayTime                                          OFFSET(get<float>, {0x15C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MapEntryPointUIData
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1MapEntryPointUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FSoftObjectPath)                           LockIconPath                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           UnlockIconPath                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/M1Data.M1MapEntryPointInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FM1MapEntryPointInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   PointId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FM1MapBattleZoneDataLink)                  BattleZone                                                  OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(EM1EntryPointUnlockType)                   UnlockType                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   RoleStringId                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FM1MapEntryPointUIData)                    UIData                                                      OFFSET(getStruct<T>, {0x68, 64, 0, 0})
};

/// Struct /Script/M1Data.M1EliteAbilityGroup
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1EliteAbilityGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1EliteMonsterSkillGroupDataLink)         ID                                                          OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   Rate                                                        OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MapEliteMonsterSpawnData
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1MapEliteMonsterSpawnData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   EliteMonsterSpawnMin                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EliteMonsterSpawnMax                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     EliteMonsterSpawnRatio                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   EliteMonsterSpawnSkipCount                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FM1EliteAbilityGroup>)              EliteAbilityGroup                                           OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1EliteMonsterSkillGroupDataLink>) DefaultEliteAbilityGroup                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MapBattleZoneOpenCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MapBattleZoneOpenCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1MapBattleZoneOpenConditionType)         Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MapTargetInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MapTargetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1MapTargetType)                          TargetType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   TargetId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   ProgressValue                                               OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bEssential                                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/M1Data.M1MapSubDataStrId
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MapSubDataStrId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EM1MapSubType)                             Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/M1Data.M1MapGoalInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1MapGoalInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EM1MapGoalType)                            GoalType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   GoalId                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FM1MapSubDataStrId)                        SubData                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/M1Data.M1MapLoadingInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MapLoadingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1MapSubType)                             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MapBattleZoneData
/// Size: 0x0058 (0x000008 - 0x000060)
class FM1MapBattleZoneData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   SortId                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FM1MapBattleZoneOpenCondition>)     BattleZoneOpenCondition                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FM1MapTargetInfo>)                  TargetInfo                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FM1MapGoalInfo>)                    GoalInfo                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MapData
/// Size: 0x0118 (0x000008 - 0x000120)
class FM1MapData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bForTest                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   SortId                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(EM1MapType)                                Type                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FSoftObjectPath)                           Level                                                       OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FSoftObjectPath)                           IntroduceSequence                                           OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FSoftObjectPath)                           EnterSequence                                               OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	CMember(TArray<FM1MapSubDataStrId>)                SubData                                                     OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FM1MapEntryPointInfo>)              EntryPointInfos                                             OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FM1MapLoadingInfo>)                 LoadingTooltipTag                                           OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FM1MapLoadingInfo>)                 LoadingImageGroup                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      FieldOption                                                 OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FM1MapEliteMonsterSpawnData)               EliteMonsterSpawnData                                       OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
	CMember(TArray<FM1MapBattleZoneDataLink>)          BattleZones                                                 OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ProductIdInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ProductIdInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1LoginPlatformTypes)                     PlatformType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BunchItemDetailData
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1BunchItemDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   PriceAmount                                                 OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BunchItemData
/// Size: 0x0078 (0x000130 - 0x0001A8)
class FM1BunchItemData : public FM1ConsumableItemData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FM1ItemDataBox)                            PriceType                                                   OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	CMember(TArray<FM1BunchItemDetailData>)            SubItemList                                                 OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FM1MailDataLink)                           Mail                                                        OFFSET(getStruct<T>, {0x178, 48, 0, 0})
};

/// Struct /Script/M1Data.M1ProductDiscountPeriodData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ProductDiscountPeriodData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   DiscountRate                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ProductDetailData
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1ProductDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   PriceAmount                                                 OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   DiscountPriceAmount                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EM1LoginPlatformTypes)                     PlatformType                                                OFFSET(get<T>, {0x44, 1, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     BGId                                                        OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   SortId                                                      OFFSET(get<int32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ProductUIData
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1ProductUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           IconBigPath                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FSoftObjectPath)                           DetailImagePath                                             OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/M1Data.M1ProductData
/// Size: 0x0178 (0x000008 - 0x000180)
class FM1ProductData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1ProductType)                            Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FM1ItemDataBox)                            PriceType                                                   OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	CMember(TArray<FM1ProductDetailData>)              Items                                                       OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FM1ProductDiscountPeriodData>)      DiscountPeriodDataList                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   GroupId                                                     OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FM1MailDataLink)                           Mail                                                        OFFSET(getStruct<T>, {0x78, 48, 0, 0})
	SMember(FM1ProductUIData)                          UIData                                                      OFFSET(getStruct<T>, {0xA8, 96, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FName)                                     BGId                                                        OFFSET(getStruct<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bPopular                                                    OFFSET(get<bool>, {0x119, 1, 0, 0})
	SMember(FSoftObjectPath)                           BGMaterial                                                  OFFSET(getStruct<T>, {0x120, 32, 0, 0})
	DMember(int32_t)                                   Page                                                        OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(int32_t)                                   SortId                                                      OFFSET(get<int32_t>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   RequiredLevel                                               OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   RequiredPage                                                OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x150, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	DMember(int32_t)                                   BuyableCount                                                OFFSET(get<int32_t>, {0x160, 4, 0, 0})
	CMember(EM1ShopResetType)                          ResetType                                                   OFFSET(get<T>, {0x164, 1, 0, 0})
	CMember(EM1DayOfWeek)                              ResetDayOfWeek                                              OFFSET(get<T>, {0x165, 1, 0, 0})
	DMember(int32_t)                                   ResetHour                                                   OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	CMember(TArray<FM1ConsumableItemDataLink>)         TicketInfos                                                 OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PaidProductData
/// Size: 0x0010 (0x000180 - 0x000190)
class FM1PaidProductData : public FM1ProductData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FM1ProductIdInfo>)                  ProductIdInfoList                                           OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassProductData
/// Size: 0x0008 (0x000180 - 0x000188)
class FM1BattlePassProductData : public FM1ProductData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	DMember(bool)                                      Premium                                                     OFFSET(get<bool>, {0x180, 1, 0, 0})
	DMember(bool)                                      LargeSize                                                   OFFSET(get<bool>, {0x181, 1, 0, 0})
};

/// Struct /Script/M1Data.M1CommonShopData
/// Size: 0x0058 (0x000008 - 0x000060)
class FM1CommonShopData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1ShopCategoryType)                       CategoryType                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FName)                                     ShopGroupCategoryId                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(EM1ShopType)                               ShopType                                                    OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TArray<FM1ProductDataLink>)                Items                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FM1MailDataLink)                           Mail                                                        OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassShopData
/// Size: 0x0000 (0x000060 - 0x000060)
class FM1BattlePassShopData : public FM1CommonShopData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/M1Data.M1ResearchCurrency
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ResearchCurrency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1CurrencyType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Price                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BoostCurrency
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1BoostCurrency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1CurrencyType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Price                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ResearchResultItem
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1ResearchResultItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ResearchResourceItem
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1ResearchResourceItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1ConsumableItemDataLink)                 ItemId                                                      OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ResearchData
/// Size: 0x0080 (0x000008 - 0x000088)
class FM1ResearchData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     GroupId                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   SortId                                                      OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     ResearchTime                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      Repeatable                                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FM1ResearchCurrency)                       ResearchCurrency                                            OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FM1BoostCurrency)                          BoostCurrency                                               OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FM1ResearchResultItem)                     ResearchResultItem                                          OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	CMember(TArray<FM1ResearchResourceItem>)           ResearchResourceItems                                       OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(EM1ResearchType)                           Type                                                        OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bNew                                                        OFFSET(get<bool>, {0x81, 1, 0, 0})
	CMember(EM1ImportanceType)                         Importance                                                  OFFSET(get<T>, {0x82, 1, 0, 0})
};

/// Struct /Script/M1Data.M1ItemDef
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1ItemDef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int64_t)                                   Amount                                                      OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   Ratio                                                       OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ItemDefBundle
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ItemDefBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Ratio                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1ItemDef>)                        Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionRewards
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1MissionRewards : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   LevelMin                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LevelMax                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   CharacterExp                                                OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   MasteryExp                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	SMember(FM1CurrencyPair)                           Currency                                                    OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(TArray<FM1ItemDefBundle>)                  ItemBundles                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1ItemDef>)                        Items                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FM1ItemDef>)                        FirstItems                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FM1ItemDefBundle>)                  ItemsByGrade                                                OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionFieldPrerequisite
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MissionFieldPrerequisite : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1PrerequisiteType)                       Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   RequiredProgress                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MissionRequiredActivateCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MissionRequiredActivateCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1MissionRequiredActivateConditionType)   Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionRewardsEvaluateCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MissionRewardsEvaluateCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1MissionRewardsEvaluateConditionType)    Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionData
/// Size: 0x0158 (0x000008 - 0x000160)
class FM1MissionData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1MissionCategory)                        MissionCategory                                             OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FName)                                     MissionTypeStringId                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(TArray<EM1LegionCategory>)                 LegionCategory                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FName)                                     PlayTimeGuideStringId                                       OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FM1QuestDataLink)                          PrerequsiteQuestId                                          OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	CMember(TArray<FM1MissionDataLink>)                PrerequisiteMissionIds                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   RequiredMasteryRank                                         OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	SMember(FM1MissionFieldPrerequisite)               FieldPrerequisite                                           OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FM1MissionRequiredActivateCondition)       RequiredActivateCondition                                   OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FM1MissionRewardsEvaluateCondition)        RewardsEvaluateCondition                                    OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	CMember(TArray<FM1ConsumableItemDataLink>)         LinkedVaults                                                OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FM1MissionRewards)                         Rewards                                                     OFFSET(getStruct<T>, {0xE0, 96, 0, 0})
	DMember(int32_t)                                   MissionMonsterLevel                                         OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	SMember(FString)                                   OutgoingMailId                                              OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	DMember(bool)                                      bHideDisplayPathGuide                                       OFFSET(get<bool>, {0x158, 1, 0, 0})
	DMember(float)                                     ExpRatio                                                    OFFSET(get<float>, {0x15C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MissionTaskSubData
/// Size: 0x0068 (0x000008 - 0x000070)
class FM1MissionTaskSubData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FName)                                     OptionalStringId                                            OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(TArray<FM1MonsterDropInfo>)                MonsterDropInfoList                                         OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   TaskSuccessScore                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FName)                                     TaskDropCollection                                          OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	SMember(FName)                                     TaskDropSupply                                              OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	DMember(float)                                     EliteApperanceChance                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   EliteMonsterSpawnMax                                        OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     EliteMonsterSpawnChance                                     OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(TArray<FM1EliteAbilityGroup>)              EliteAbilityGroup                                           OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FM1EliteMonsterSkillGroupDataLink>) DefaultEliteAbilityGroup                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionWaveData
/// Size: 0x00B0 (0x000008 - 0x0000B8)
class FM1MissionWaveData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(int32_t)                                   WaveMonsterLevel                                            OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FM1MonsterDropInfo>)                DropItems                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FM1MissionRewards)                         WaveRewards                                                 OFFSET(getStruct<T>, {0x28, 96, 0, 0})
	DMember(float)                                     EliteApperanceChance                                        OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   EliteMonsterSpawnMax                                        OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(float)                                     EliteMonsterSpawnChance                                     OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(TArray<FM1EliteAbilityGroup>)              EliteAbilityGroup                                           OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FM1EliteMonsterSkillGroupDataLink>) DefaultEliteAbilityGroup                                    OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1QuestStartPoint
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1QuestStartPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1QuestStartPointType)                    Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1QuestStartCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1QuestStartCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1QuestStartConditionType)                Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1QuestSubCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1QuestSubCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1QuestSubConditionType)                  Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CompleteCondition
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1CompleteCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EM1CompleteConditionType)                  Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   WorldMapTarget                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1QuestSubCondition>)              SubConditions                                               OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1OpenField
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1OpenField : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             MapTemplateId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1MapSubDataStrId)                        SubData                                                     OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/M1Data.M1QuestRewardItem
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1QuestRewardItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      IsMainItem                                                  OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      ShowAsGroupQuestReward                                      OFFSET(get<bool>, {0x41, 1, 0, 0})
};

/// Struct /Script/M1Data.M1QuestDirection
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1QuestDirection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1QuestDirectionType)                     Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FSoftObjectPath)                           AssetPath                                                   OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/M1Data.M1QuestCompleteConditionGroupInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1QuestCompleteConditionGroupInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EM1QuestCompleteConditionGroupType)        Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     GroupStringId                                               OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/M1Data.M1QuestData
/// Size: 0x00E0 (0x000008 - 0x0000E8)
class FM1QuestData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringIdName                                                OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(EM1QuestType)                              Type                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(TArray<FM1QuestStartPoint>)                StartPoints                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1QuestStartCondition>)            StartConditions                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FM1QuestCompleteConditionGroupInfo)        CompleteConditionGroupInfo                                  OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	CMember(TArray<FM1CompleteCondition>)              CompleteConditions                                          OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FM1QuestDirection>)                 QuestDirections                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FM1OpenField)                              OpenField                                                   OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	DMember(int64_t)                                   RewardCharacterExp                                          OFFSET(get<int64_t>, {0x88, 8, 0, 0})
	DMember(int64_t)                                   RewardMasteryExp                                            OFFSET(get<int64_t>, {0x90, 8, 0, 0})
	DMember(int64_t)                                   RewardSeasonExp                                             OFFSET(get<int64_t>, {0x98, 8, 0, 0})
	CMember(TArray<FM1CurrencyPair>)                   RewardCurrencies                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FM1QuestRewardItem>)                RewardItems                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FM1PlayerDataLink>)                 RequiredCharacterIds                                        OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FString)                                   OutgoingMailId                                              OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(int32_t)                                   SubTrackerPriority                                          OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   ProgressId                                                  OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1QuestParamGroupData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1QuestParamGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     StringIdName                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EM1CompleteConditionType)                  Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FString>)                           Ids                                                         OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneClassTypeData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1RuneClassTypeData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1RuneClassType)                          RuneClassType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      WeaponBook                                                  OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(TArray<EM1EquipItemClassType>)             WeaponClassType                                             OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneLvData
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1RuneLvData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1StatusEffectDataLink)                   StatusEffect                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  BaseStats                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EnchantRequiredCurrencyData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1EnchantRequiredCurrencyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1CurrencyType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DecomposeRewardCurrencyData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1DecomposeRewardCurrencyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1CurrencyType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneDetailData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FM1RuneDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(int32_t)                                   EnchantLevel                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1RuneAbilityDataLink)                    Ability                                                     OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   RuneCost                                                    OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   CapacityIncrement                                           OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(float)                                     AbilityCooltime                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     AbilityProbability                                          OFFSET(get<float>, {0x54, 4, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FM1TaggedAbilityParamData>)         TaggedParams                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FM1EnchantRequiredCurrencyData>)    EnchantRequiredCurrencies                                   OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FM1DecomposeRewardCurrencyData>)    DecomposeRewardCurrencies                                   OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   RequiredMasteryLevel                                        OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneData
/// Size: 0x0150 (0x000008 - 0x000158)
class FM1RuneData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FString)                                   RuneGroupId                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(EM1RuneClassType)                          RuneClassType                                               OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EM1RuneSubClassType)                       RuneSubClassType                                            OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(EM1EquipItemClassType)                     LimitedEquipItemClassType                                   OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(TArray<FM1PlayerDataLink>)                 RequireCharacterClassTypes                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(EM1ItemTierType)                           RuneTierType                                                OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EM1RuneSocketType)                         RuneSocketType                                              OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(EM1CurrencyType)                           SellingType                                                 OFFSET(get<T>, {0x42, 1, 0, 0})
	DMember(int32_t)                                   SellingPrice                                                OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(TArray<FM1RuneLvData>)                     Lv                                                          OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FM1ItemUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x58, 96, 0, 0})
	SMember(FM1RuneAbilityDataLink)                    Ability                                                     OFFSET(getStruct<T>, {0xB8, 48, 0, 0})
	DMember(float)                                     Probability                                                 OFFSET(get<float>, {0xE8, 4, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FM1TaggedAbilityParamData>)         TaggedParams                                                OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FM1RuneDetailData>)                 DetailDataList                                              OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      Enchantable                                                 OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      Decomposable                                                OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      Composable                                                  OFFSET(get<bool>, {0x122, 1, 0, 0})
	SMember(FSoftClassPath)                            PropClass                                                   OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	DMember(int32_t)                                   ImportantPriority                                           OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	CMember(EM1ImportanceType)                         ImportanceType                                              OFFSET(get<T>, {0x14C, 1, 0, 0})
	DMember(int32_t)                                   MasteryLevel                                                OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(bool)                                      IsTemporary                                                 OFFSET(get<bool>, {0x154, 1, 0, 0})
};

/// Struct /Script/M1Data.M1RuneCostIncreaseResource
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1RuneCostIncreaseResource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1ConsumableItemDataLink)                 ItemData                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneMiscData
/// Size: 0x0180 (0x000008 - 0x000188)
class FM1RuneMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	DMember(int32_t)                                   RuneWeapontMaxCount                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RuneCharacterMaxCount                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     RuneCostReduceValue                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     RuneCostIncreaseValue                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EM1ItemTierType)                           RuneDecomposeNoticeTier                                     OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   RuneDecomposeNoticeEnchantLevel                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FM1RuneCostIncreaseResource)               CharacterRuneCostIncreaseResource                           OFFSET(getStruct<T>, {0x20, 56, 0, 0})
	SMember(FM1RuneCostIncreaseResource)               WeaponRuneCostIncreaseResource                              OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	SMember(FM1ConsumableItemDataLink)                 RuneSocketGrantItem                                         OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	DMember(int32_t)                                   CharacterAddRuneCapacity                                    OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   WeaponAddRuneCapacity                                       OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     CapacityIncreaseCorrection                                  OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     CapacityReduceCorrection                                    OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(TArray<FString>)                           ValidRuneGroupIds                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FM1RequiredItemData)                       LoadoutSlotExpandRequiredItem                               OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	DMember(int32_t)                                   LoadoutNameLimitLength                                      OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	SMember(FM1CommonShopDataLink)                     RuneShop                                                    OFFSET(getStruct<T>, {0xF8, 48, 0, 0})
	SMember(FM1ProductDataLink)                        RuneCapacityExtendProduct                                   OFFSET(getStruct<T>, {0x128, 48, 0, 0})
	SMember(FM1ProductDataLink)                        RuneSocketTypeProduct                                       OFFSET(getStruct<T>, {0x158, 48, 0, 0})
};

/// Struct /Script/M1Data.M1RuneSocketGrantDetailData
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1RuneSocketGrantDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1ConsumableItemDataLink)                 ItemId                                                      OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   Order                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneSocketGrantData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1RuneSocketGrantData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1RuneClassType)                          ClassType                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EM1RuneSocketType)                         SocketType                                                  OFFSET(get<T>, {0xD, 1, 0, 0})
	CMember(TArray<FM1RuneSocketGrantDetailData>)      DetailDatas                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ProficiencyData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1ProficiencyData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RequiredProficiency                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   RewardMasteryExp                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   WeaponRuneCapacity                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ProficiencyAdditionalData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ProficiencyAdditionalData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1ItemTierType)                           Tier                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     RewardMasteryExpRate                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ProficiencyMiscData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1ProficiencyMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1ProficiencyAdditionalData>)      AdditionalDataList                                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneComposeResourceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RuneComposeResourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1ItemTierType)                           Tier                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   GroupWeight                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RuneIdData
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1RuneIdData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FM1RuneDataLink)                           RuneId                                                      OFFSET(getStruct<T>, {0x0, 48, 0, 0})
};

/// Struct /Script/M1Data.M1RuneComposeRewardData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RuneComposeRewardData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   RewardWeight                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EM1RuneClassType)                          ClassType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EM1RuneSocketType)                         SocketType                                                  OFFSET(get<T>, {0x5, 1, 0, 0})
	CMember(TArray<FM1RuneIdData>)                     RuneIdList                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneComposeData
/// Size: 0x0028 (0x000008 - 0x000030)
class FM1RuneComposeData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1RuneComposeResourceData>)        ResourceWeightList                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1RuneComposeRewardData>)          RewardDataList                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneComposeCostData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RuneComposeCostData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1ItemTierType)                           Tier                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1CurrencyType)                           CurrencyType                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(int64_t)                                   Amount                                                      OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1RuneComposeMiscData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1RuneComposeMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   ComposeTargetCount                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   AdditionalRewardWeightByClass                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   AdditionalRewardWeightBySocket                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FM1RuneComposeCostData>)            CostDataList                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PerkEnchantRequiredItemData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1PerkEnchantRequiredItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1ItemType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PerkDetailData
/// Size: 0x0080 (0x000000 - 0x000080)
class FM1PerkDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   EnchantLevel                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1PerkAbilityDataLink)                    Ability                                                     OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     AbilityProbability                                          OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FM1TaggedAbilityParamData>)         TaggedParams                                                OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FM1PerkEnchantRequiredItemData>)    EnchantRequiredItems                                        OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PerkUIData
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1PerkUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftClassPath)                            CustomHUDWidget                                             OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FSoftObjectPath)                           PreviewMovie                                                OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/M1Data.M1PerkData
/// Size: 0x0078 (0x000008 - 0x000080)
class FM1PerkData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1PerkDetailData>)                 DetailDataList                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FM1PerkUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/M1Data.M1PlatformAchievementPlatformInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1PlatformAchievementPlatformInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1ContentsPlatformType)                   Platform                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAlreadyAchieved                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PlatformAchievementData
/// Size: 0x0030 (0x000008 - 0x000038)
class FM1PlatformAchievementData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1PlatformAchievementPlatformInfo>) PlatformAchievementInfos                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(EM1PlatformAchievementObjectiveCondition)  ObjectiveCondition                                          OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<FString>)                           ObjectiveParams                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorOptimizedCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ReactorOptimizedCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1ReactorOptimizedConditionType)          ConditionType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   ConditionId                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorOptimizedValueByTier
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1ReactorOptimizedValueByTier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EM1ItemTierType)                           Tier                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     SatisfactionRatio                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DissatisfactionRatio                                        OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorMiscData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1ReactorMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1ReactorOptimizedValueByTier>)    OptimizedValueByTierList                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorEnchantEffectInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ReactorEnchantEffectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   EnchantLevel                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1StatValuePair>)                  Stats                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorEnchantEffectByItemLevel
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ReactorEnchantEffectByItemLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ItemLevel                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1ReactorEnchantEffectInfo>)       EnchantEffectInfo                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorData
/// Size: 0x0078 (0x0000F0 - 0x000168)
class FM1ReactorData : public FM1EquipmentData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(bool)                                      Enchantable                                                 OFFSET(get<bool>, {0xF0, 1, 0, 0})
	CMember(TArray<FM1ReactorEnchantEffectByItemLevel>) EnchantEffectByItemLv                                      OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FM1ReactorAbilityDataLink)                 Ability                                                     OFFSET(getStruct<T>, {0x108, 48, 0, 0})
	CMember(TArray<FM1AbilityParamData>)               Params                                                      OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<FM1TaggedAbilityParamData>)         TaggedParams                                                OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<FM1ReactorOptimizedCondition>)      OptimizedConditions                                         OFFSET(get<T>, {0x158, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorEnchantRequiredItemData
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1ReactorEnchantRequiredItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EM1ItemType)                               ItemType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ConditionLevel                                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorEnchantRequiredData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ReactorEnchantRequiredData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   EnchantLevel                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1ReactorEnchantRequiredItemData>) RequiredItemDataList                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorEnchantRequiredDataByItemLevel
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ReactorEnchantRequiredDataByItemLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ItemLevel                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1ReactorEnchantRequiredData>)     RequireDataByEnchantLv                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReactorEnchantRequireData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1ReactorEnchantRequireData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1ItemTierType)                           Tier                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<FM1ReactorEnchantRequiredDataByItemLevel>) EnchantRequireDataByItemLv                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1LevelByNumOfSquadMember
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1LevelByNumOfSquadMember : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumOfMembers                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MonsterLevel                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1VoidBattleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   MonsterId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1LevelByNumOfSquadMember>)        MonsterLevelBySquad                                         OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(EM1VoidBattleDifficulty)                   Difficulty                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   TimeLimit                                                   OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   DeathCount                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FString)                                   FieldId                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleRequiredItem
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1VoidBattleRequiredItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1ConsumableItemDataLink)                 ItemId                                                      OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int32_t)                                   Amount                                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleUnlockCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1VoidBattleUnlockCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1VoidBattleUnlockConditionType)          Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleStartCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1VoidBattleStartCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1VoidBattleStartConditionType)           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Params                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleRewards
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1VoidBattleRewards : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1CurrencyPair)                           Currency                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleUIData
/// Size: 0x0080 (0x000000 - 0x000080)
class FM1VoidBattleUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSoftObjectPath)                           LockIconPath                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           UnlockIconPath                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FSoftObjectPath)                           SmallIconPath                                               OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FSoftClassPath)                            InfoWidgetPath                                              OFFSET(getStruct<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleBossElementalResTypes
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1VoidBattleBossElementalResTypes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EM1ElementalDegreeType)                    BlazerResType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1ElementalDegreeType)                    GlacierResType                                              OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EM1ElementalDegreeType)                    ElectricityResType                                          OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(EM1ElementalDegreeType)                    DemonicResType                                              OFFSET(get<T>, {0x3, 1, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleBossInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1VoidBattleBossInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1ElementalDamageChannel)                 ElementalAtkType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   RecommendElementalDefValue                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FM1VoidBattleBossElementalResTypes)        ElementalResTypes                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinMembers                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleData
/// Size: 0x0130 (0x000008 - 0x000138)
class FM1VoidBattleData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1VoidBattleInfo)                         VoidBattleInfos                                             OFFSET(getStruct<T>, {0x10, 80, 0, 0})
	CMember(TArray<FM1VoidBattleRequiredItem>)         RequiredItems                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FM1VoidBattleUnlockCondition>)      UnlockConditions                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FM1VoidBattleStartCondition>)       StartConditions                                             OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FM1VoidBattleRewards)                      Rewards                                                     OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	CMember(TArray<FM1ConsumableItemDataLink>)         LinkedVaults                                                OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FM1VoidBattleBossInfo)                     BossInfo                                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FM1VoidBattleUIData)                       UIData                                                      OFFSET(getStruct<T>, {0xB8, 128, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleMiscData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1VoidBattleMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ForcedExitTimeInVoid                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ForcedRestartTimeVoid                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   PartyVaultSelectionTimeInVoid                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1WorldMissionData
/// Size: 0x0040 (0x000008 - 0x000048)
class FM1WorldMissionData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1MapDataLink)                            MapId                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FName)                                     EnterWorldMissionToast                                      OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/M1Data.M1WorldMissionMiscData
/// Size: 0x0000 (0x000008 - 0x000008)
class FM1WorldMissionMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/M1Data.M1InstanceDungeonScoreInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1InstanceDungeonScoreInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxScore                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<int32_t>)                           MonsterKillScore                                            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceFieldContentsDataBase
/// Size: 0x0068 (0x000008 - 0x000070)
class FM1InstanceFieldContentsDataBase : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1MapDataLink)                            MapId                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FM1MissionDataLink)                        MissionId                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonData
/// Size: 0x00A8 (0x000070 - 0x000118)
class FM1InstanceDungeonData : public FM1InstanceFieldContentsDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FSoftObjectPath)                           BGImagePath                                                 OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FString)                                   Group                                                       OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(EM1InstanceDungeonDifficulty)              Difficulty                                                  OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(int32_t)                                   MinMembers                                                  OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	SMember(FM1CurrencyPair)                           SelectMODChangeCost                                         OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
	CMember(TArray<FM1InstanceDungeonAbilityDataLink>) DefaultAbilities                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FM1InstanceDungeonFixedMODDataLink>) FixedMODData                                               OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FM1InstanceDungeonSelectionMODGroupDataLink) SelectionMODData                                          OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	SMember(FM1InstanceDungeonScoreInfo)               ScoreInfo                                                   OFFSET(getStruct<T>, {0x100, 24, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonMODData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1InstanceDungeonMODData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonScoreSection
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1InstanceDungeonScoreSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Score                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Ratio                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonReward
/// Size: 0x0050 (0x000000 - 0x000050)
class FM1InstanceDungeonReward : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FM1RewardType)                             Item                                                        OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	CMember(TArray<FM1InstanceDungeonScoreSection>)    ScoreSection                                                OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonFixedMODData
/// Size: 0x0020 (0x000020 - 0x000040)
class FM1InstanceDungeonFixedMODData : public FM1InstanceDungeonMODData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FM1InstanceDungeonAbilityDataLink>) AbilityData                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1InstanceDungeonReward>)          Rewards                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonSelectionMODData
/// Size: 0x0040 (0x000020 - 0x000060)
class FM1InstanceDungeonSelectionMODData : public FM1InstanceDungeonMODData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   Category                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   CategoryRatio                                               OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     ScoreBonus                                                  OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FM1InstanceDungeonAbilityDataLink)         AbilityData                                                 OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonSelectionMODInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1InstanceDungeonSelectionMODInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      Default                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FM1InstanceDungeonSelectionMODDataLink)    MODData                                                     OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonSelectionMODGroupData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1InstanceDungeonSelectionMODGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SelectionMaxCount                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FM1InstanceDungeonSelectionMODInfo>) MODInfo                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CharacterDungeonData
/// Size: 0x0030 (0x000070 - 0x0000A0)
class FM1CharacterDungeonData : public FM1InstanceFieldContentsDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FM1QuestDataLink)                          QuestId                                                     OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionDungeonTimeAttackReward
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1InvasionDungeonTimeAttackReward : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     TimeSec                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SeasonExp                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionDungeonRewardInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1InvasionDungeonRewardInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   SeasonExp                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1InvasionDungeonTimeAttackReward>) TimeAttack                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1ItemDef>)                        Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionDungeonData
/// Size: 0x0080 (0x000070 - 0x0000F0)
class FM1InvasionDungeonData : public FM1InstanceFieldContentsDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSoftObjectPath)                           BGImagePath                                                 OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FM1InstanceDungeonDataLink)                InstanceDungeon                                             OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	DMember(int32_t)                                   SeasonExpLimit                                              OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	SMember(FM1InvasionDungeonRewardInfo)              RewardInfo                                                  OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionDungeonMiscData
/// Size: 0x0060 (0x000008 - 0x000068)
class FM1InvasionDungeonMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FM1QuestDataLink)                          UnlockQuest                                                 OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FM1InvasionDungeonDataLink)                UnlockDungeon                                               OFFSET(getStruct<T>, {0x38, 48, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionDungeonMODData
/// Size: 0x0030 (0x000020 - 0x000050)
class FM1InvasionDungeonMODData : public FM1InstanceDungeonMODData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FM1InstanceDungeonAbilityDataLink)         AbilityData                                                 OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/M1Data.M1MailData
/// Size: 0x0028 (0x000008 - 0x000030)
class FM1MailData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1MailType)                               MailType                                                    OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FName)                                     MailStringId                                                OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   NarrativePriority                                           OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<EM1LoginPlatformTypes>)             PlatformTypes                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MailMiscData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1MailMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MailLostHoldCount                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     MailLostExpiredTime                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MailItemCountMax                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     MailOpReloadPeriodSec                                       OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ChallengeDetailData
/// Size: 0x0068 (0x000000 - 0x000068)
class FM1ChallengeDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FM1QuestDataLink)                          QuestId                                                     OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(EM1EventResetType)                         ResetType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FM1MailDataLink)                           EventRewardMailId                                           OFFSET(getStruct<T>, {0x38, 48, 0, 0})
};

/// Struct /Script/M1Data.M1EventData
/// Size: 0x0070 (0x000008 - 0x000078)
class FM1EventData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(EM1EventType)                              Type                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FSoftObjectPath)                           BGPath                                                      OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	CMember(TArray<FM1ChallengeDetailData>)            ChallengeDataList                                           OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EventMiscData
/// Size: 0x0030 (0x000008 - 0x000038)
class FM1EventMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   DailyResetTime                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EM1DayOfWeek)                              WeeklyResetDate                                             OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FSoftClassPath)                            EventWidgetClass                                            OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(float)                                     OntimeEventCheckPeriodSec                                   OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MaterialData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MaterialData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1ItemTierType)                           MaterialTier                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FM1RequiredItemData>)               RequiredItems                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ItemLevelUpgradeData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1ItemLevelUpgradeData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1ItemTierType)                           TargetTier                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FM1MaterialData>)                   MaterialDataList                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DecomposeRewardItemInfo
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1DecomposeRewardItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EM1ItemType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   MinValue                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DecomposeRewardInfoPerLevel
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1DecomposeRewardInfoPerLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1DecomposeRewardItemInfo>)        Rewards                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentDecomposeData
/// Size: 0x0028 (0x000008 - 0x000030)
class FM1EquipmentDecomposeData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1DecomposeTargetType)                    CategoryType                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FString)                                   CategoryParam                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1DecomposeRewardInfoPerLevel>)    RewardsPerLevel                                             OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SetOptionDetailData
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1SetOptionDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   RequiredEquipAmount                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FM1SetOptionAbilityDataLink)               Ability                                                     OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/M1Data.M1SetOptionData
/// Size: 0x0030 (0x000008 - 0x000038)
class FM1SetOptionData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(TArray<EM1EquipmentSlotType>)              EquipmentSlotList                                           OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1SetOptionDetailData>)            DetailDataList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DropItemLevelWeightDetailData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1DropItemLevelWeightDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   diff                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DropItemLevelWeightData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1DropItemLevelWeightData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<int32_t>)                           WeightList                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TitleData
/// Size: 0x0030 (0x000008 - 0x000038)
class FM1TitleData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   TitleFemale                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(EM1TitleType)                              Type                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/M1Data.M1TitleMiscData
/// Size: 0x0030 (0x000008 - 0x000038)
class FM1TitleMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           ReverseOrderList                                            OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassChallengeReward
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1BattlePassChallengeReward : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1ItemDataBox)                            Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassLevelDetail
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1BattlePassLevelDetail : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RequiredExp                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TotalRequiredExp                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1RewardType>)                     RewardDataList                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      PremiumExclusive                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassLevelData
/// Size: 0x0048 (0x000008 - 0x000050)
class FM1BattlePassLevelData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1BattlePassLevelDetail>)          LevelList                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FM1MailDataLink)                           RewardMail                                                  OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassDetailData
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1BattlePassDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1BattlePassType)                         Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FM1BattlePassShopDataLink)                 ShopData                                                    OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassChallengeDetailData
/// Size: 0x0080 (0x000000 - 0x000080)
class FM1BattlePassChallengeDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FM1ChallengeDetailData)                    ChallengeData                                               OFFSET(getStruct<T>, {0x0, 104, 0, 0})
	DMember(int32_t)                                   RewardBattlePassExp                                         OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(TArray<FM1BattlePassChallengeReward>)      Rewards                                                     OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassChallengeData
/// Size: 0x0060 (0x000008 - 0x000068)
class FM1BattlePassChallengeData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(EM1ChallengeDataType)                      Type                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FDateTime)                                 OpenTime                                                    OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FDateTime)                                 CloseTime                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(TArray<FM1BattlePassChallengeDetailData>)  DetailDataList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FM1BattlePassChallengeDataLink)            NextWeekId                                                  OFFSET(getStruct<T>, {0x38, 48, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassChallengeMiscData
/// Size: 0x0048 (0x000008 - 0x000050)
class FM1BattlePassChallengeMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   TrackingChallengeCount                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FSoftObjectPath)                           BattlePassXPIconPath                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FSoftClassPath)                            ChallengeWidgetClass                                        OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassData
/// Size: 0x0088 (0x000008 - 0x000090)
class FM1BattlePassData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FDateTime)                                 AdjustmentTime                                              OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   MonsterKillExp                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FM1BattlePassDetailData>)           DetailList                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FM1BattlePassChallengeDataLink>)    ChallengeData                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FM1BattlePassLevelDataLink)                LevelData                                                   OFFSET(getStruct<T>, {0x58, 48, 0, 0})
	SMember(FName)                                     BGId                                                        OFFSET(getStruct<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassMiscData
/// Size: 0x00A0 (0x000008 - 0x0000A8)
class FM1BattlePassMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FM1ItemDataBox)                            PremiumResource                                             OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	DMember(int32_t)                                   PremiumResourceAmount                                       OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FM1ItemDataBox)                            LevelUpResource                                             OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	DMember(int32_t)                                   LevelUpResourceAmount                                       OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   BundleUnitCount                                             OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   BundleDiscountRate                                          OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   CompileRate                                                 OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(double)                                    AlertRemainSeconds                                          OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(int32_t)                                   MissionRepeatExp                                            OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   MissionWaveExp                                              OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   VoidBattleExp                                               OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   AdjustmentRandTime                                          OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1AchievementData
/// Size: 0x0028 (0x0000E8 - 0x000110)
class FM1AchievementData : public FM1QuestData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	DMember(int32_t)                                   AchievementPoint                                            OFFSET(get<int32_t>, {0x108, 4, 0, 0})
};

/// Struct /Script/M1Data.M1AchievementCategoryData
/// Size: 0x0050 (0x000008 - 0x000058)
class FM1AchievementCategoryData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   CategoryId                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   StringId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TArray<FM1AchievementDataLink>)            AchievementList                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   SortOrder                                                   OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RecordData
/// Size: 0x0068 (0x000008 - 0x000070)
class FM1RecordData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FString)                                   RecordTypeParam                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FSoftObjectPath)                           SeqAssetPath                                                OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	CMember(EM1RecordType)                             RecordType                                                  OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Struct /Script/M1Data.M1EventBoostTargetContent
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1EventBoostTargetContent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1EventBoostContentType)                  ContentType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FName>)                             ConditionList                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EventBoostRewardType
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1EventBoostRewardType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1ItemDataBox)                            RewardItem                                                  OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(int64_t)                                   Coefficient                                                 OFFSET(get<int64_t>, {0x38, 8, 0, 0})
};

/// Struct /Script/M1Data.M1EventBoostingDetailData
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1EventBoostingDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1EventBoostType)                         BoostType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FM1MapDataLink>)                    FieldList                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1EventBoostTargetContent>)        ContentList                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1EventBoostRewardType>)           RewardTypeList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EventBoostingData
/// Size: 0x0018 (0x000078 - 0x000090)
class FM1EventBoostingData : public FM1EventData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   BoostLimitMasteryRank                                       OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	CMember(TArray<FM1EventBoostingDetailData>)        BoostDataList                                               OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MiniGameParam
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MiniGameParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MiniGameDetailData
/// Size: 0x0070 (0x000000 - 0x000070)
class FM1MiniGameDetailData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FM1DifficultyInfoDataLink)                 FieldDifficulty                                             OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FM1MiniGameParam>)                  Params                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FM1DropItemLink)                           Reward                                                      OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/M1Data.M1MiniGameData
/// Size: 0x0020 (0x000008 - 0x000028)
class FM1MiniGameData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1MiniGameType)                           Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TArray<FM1MiniGameDetailData>)             DetailDataList                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MiniGameSpecialCharacterInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1MiniGameSpecialCharacterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1PlayerDataLink)                         Character                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FName)                                     DialogueId                                                  OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MiniGameExtraSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MiniGameExtraSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1MiniGameType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FM1MiniGameSpecialCharacterInfo>)   SpecialCharacters                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MiniGameMiscData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1MiniGameMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1MiniGameExtraSettings>)          ExtraSettings                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DifficultyAbilityInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1DifficultyAbilityInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      ApplyToPlayer                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FM1DifficultyAbilityDataLink)              AbilityData                                                 OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/M1Data.M1BattleZoneDifficultyData
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1BattleZoneDifficultyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1MapBattleZoneDataLink)                  BattleZoneId                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FM1DifficultyAbilityInfo>)          DifficultyAbilityInfo                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FieldDifficultyData
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1FieldDifficultyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1MapDataLink)                            MapId                                                       OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FM1BattleZoneDifficultyData>)       BattleZoneDifficulty                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DifficultyInfoData
/// Size: 0x0078 (0x000008 - 0x000080)
class FM1DifficultyInfoData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FM1QuestDataLink)                          UnlockQuest                                                 OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(TArray<FM1FieldDifficultyData>)            FieldDifficultyData                                         OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DifficultyInfoMiscData
/// Size: 0x0010 (0x000008 - 0x000018)
class FM1DifficultyInfoMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<EM1MonsterCategory>)                MonsterCategory                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1QuestGroupData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1QuestGroupData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FM1QuestDataLink>)                  QuestList                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RotationDropData
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FM1RotationDropData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1MapBattleZoneDataLink)                  BattleZoneId                                                OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FM1DifficultyInfoDataLink)                 DifficultyId                                                OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FSoftObjectPath)                           BGImagePath                                                 OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	CMember(TArray<FM1DropItemLink>)                   RotationDrop                                                OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RotationDropRatio
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1RotationDropRatio : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   Normal                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Elite                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Champion                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Named                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Boss                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MissionDropRatio
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1MissionDropRatio : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1MissionCategory)                        MissionCategory                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   DropRatio                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RotationDropMiscData
/// Size: 0x0038 (0x000008 - 0x000040)
class FM1RotationDropMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FDateTime)                                 RotationStartTime                                           OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   RotationDateInterval                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   RotationChangeTime                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FM1RotationDropRatio)                      RotationDropRatio                                           OFFSET(getStruct<T>, {0x18, 20, 0, 0})
	CMember(TArray<FM1MissionDropRatio>)               MissionDropRatio                                            OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PaintExtractData
/// Size: 0x0078 (0x000008 - 0x000080)
class FM1PaintExtractData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1RequiredItemData>)               ExtractCost                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1CustomizingItemDataLink>)        PaintCustomizingItemList                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      LimitMarkOn                                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	SMember(FSoftObjectPath)                           IconPath                                                    OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FSoftObjectPath)                           PaintGroupImagePath                                         OFFSET(getStruct<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/M1Data.M1PaintExtractMiscData
/// Size: 0x0008 (0x000008 - 0x000010)
class FM1PaintExtractMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxPaintExtractOnceCount                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ItemSelectorUnit
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ItemSelectorUnit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1ItemDataBox>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ItemSelectorData
/// Size: 0x0090 (0x000008 - 0x000098)
class FM1ItemSelectorData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1ItemSelectorUnit>)               Units                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FM1ItemUIData)                             UIData                                                      OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	DMember(bool)                                      bIncludeUltimate                                            OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonReinforceSlotData
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1SeasonReinforceSlotData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RequiredSeasonReinforcePoint                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RequiredPreUseSeasonReinforcePoint                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1SeasonReinforceDataLink>)        SeasonReinforceList                                         OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonReinforceGroupData
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1SeasonReinforceGroupData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1SeasonReinforceGroupType)               GroupType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FM1SeasonReinforceDataLink)                CollectionBuff                                              OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonLevelData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1SeasonLevelData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   RequiredSeasonExpToNextLv                                   OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SeasonReinforcePoint                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonData
/// Size: 0x00B0 (0x000008 - 0x0000B8)
class FM1SeasonData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     StringId                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FSoftObjectPath)                           BgImgPath                                                   OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FM1QuestDataLink)                          SeasonReinforceUnlockQuest                                  OFFSET(getStruct<T>, {0x48, 48, 0, 0})
	CMember(TArray<FM1QuestDataLink>)                  SeasonQuestIdList                                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FM1SeasonLevelData>)                SeasonLevelList                                             OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FM1SeasonReinforceSlotData>)        ReinforceSlotList                                           OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FM1SeasonReinforceGroupData>)       ReinforceGroupList                                          OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1UICloseDialogData
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1UICloseDialogData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   UnlockSeasonReinforceCount                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1DialogDataLink)                         DialogId                                                    OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonMiscData
/// Size: 0x0018 (0x000008 - 0x000020)
class FM1SeasonMiscData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   MaxEquippedReinforcePerGroup                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxEquipReinforce                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FM1UICloseDialogData>)              UICloseDialogDatas                                          OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DatasheetDummyType
/// Size: 0x0001 (0x000000 - 0x000001)
class FM1DatasheetDummyType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/M1Data.M1RuneCompact
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RuneCompact : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   Uid                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Enchant                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int16_t)                                   EquipCount                                                  OFFSET(get<int16_t>, {0xC, 2, 0, 0})
};

/// Struct /Script/M1Data.M1RunesByTid
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RunesByTid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1RuneCompact>)                    Runes                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentRandomOptionCompact
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1EquipmentRandomOptionCompact : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1ScaledInteger)                          StatValue                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentRandomOptions
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1EquipmentRandomOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   EquipmentUid                                                OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   OptionIndexBitFlags                                         OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	CMember(TArray<FM1EquipmentRandomOptionCompact>)   Options                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InventoryInfo
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FM1InventoryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FM1EquipmentBaseInfo>)              Equipments                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FM1ConsumableInfo>)                 Consumables                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1RunesByTid>)                     Runes                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1CharacterInfo>)                  Characters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FM1CurrencyInfo>)                   Currencies                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FM1WeaponProficiencyInfo>)          WeaponProficiencies                                         OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FM1EquipmentRandomOptions>)         RandomOptions                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FM1PerkInfo>)                       Perks                                                       OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FM1ReactorEnchantInfo>)             ReactorInfos                                                OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FM1TitleItemInfo>)                  TitleInfos                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FM1RecordInfo>)                     RecordInfos                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AccountInfo
/// Size: 0x0198 (0x000000 - 0x000198)
class FM1AccountInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   MasteryLevel                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   MasteryExp                                                  OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	SMember(FM1InventoryInfo)                          Inventory                                                   OFFSET(getStruct<T>, {0x28, 176, 0, 0})
	CMember(TArray<FM1WearingInfo>)                    WearingList                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FM1UnlockedFieldInfo>)              UnlockedFields                                              OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FM1VoidBattleClearInfo>)            VoidBattleClearCounts                                       OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(int64_t)                                   SelectedCharacterUid                                        OFFSET(get<int64_t>, {0x108, 8, 0, 0})
	SMember(FM1TemplateId)                             LastMapTemplateId                                           OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	SMember(FM1TemplateId)                             LastBattleZoneId                                            OFFSET(getStruct<T>, {0x114, 4, 0, 0})
	SMember(FString)                                   LoginPlatformId                                             OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	DMember(int64_t)                                   LoginPlatformUid                                            OFFSET(get<int64_t>, {0x128, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     LoginPlatformType                                           OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(int64_t)                                   Npsn                                                        OFFSET(get<int64_t>, {0x138, 8, 0, 0})
	SMember(FString)                                   CountryName                                                 OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FString)                                   OsType                                                      OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   OsName                                                      OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   TeamAssignmentID                                            OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      IsCreator                                                   OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PlatformInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1PlatformInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   LoginPlatformId                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int64_t)                                   LoginPlatformUid                                            OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     LoginPlatformType                                           OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/M1Data.M1GetAccountInfoRes
/// Size: 0x01C8 (0x000000 - 0x0001C8)
class FM1GetAccountInfoRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   ServiceId                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   RegionId                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FDateTime)                                 ServerTimeSync                                              OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FM1AccountInfo)                            Account                                                     OFFSET(getStruct<T>, {0x30, 408, 0, 0})
};

/// Struct /Script/M1Data.M1StartServerSessionRes
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1StartServerSessionRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   DediOid                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1PartyMemberInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1PartyMemberInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int64_t)                                   AuthValue                                                   OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	SMember(FM1TemplateId)                             MasteryLevel                                                OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FString)                                   PlatformId                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int64_t)                                   PlatformUid                                                 OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     PlatformType                                                OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      Master                                                      OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      IsCreator                                                   OFFSET(get<bool>, {0x42, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PartyMemberChangeNoti
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1PartyMemberChangeNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      HasParty                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   PartyId                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	CMember(TArray<FM1PartyMemberInfo>)                Members                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PartyRequestInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FM1PartyRequestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   SeqId                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FM1TemplateId)                             MasteryLevel                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(int64_t)                                   AuthValue                                                   OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	SMember(FM1TemplateId)                             CharacterTid                                                OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	DMember(int64_t)                                   CharacterLevel                                              OFFSET(get<int64_t>, {0x40, 8, 0, 0})
	DMember(int64_t)                                   ElapsedTimeSec                                              OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	SMember(FString)                                   PlatformId                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int64_t)                                   PlatfromUid                                                 OFFSET(get<int64_t>, {0x60, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     PlatformType                                                OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(bool)                                      CrossPlayOn                                                 OFFSET(get<bool>, {0x69, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PartyRequestChangeNoti
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1PartyRequestChangeNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1PartyRequestInfo>)               Requests                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DediGameInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1DediGameInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      IsPrivate                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   FieldMasterId                                               OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   LeaveUserId                                                 OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MapModifier
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1MapModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FM1TemplateId)                             ModifierId                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DediGameModifierInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1DediGameModifierInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1MapModifier>)                    Modifiers                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingStartInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MatchingStartInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1MapSubData)                             MapSubData                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   EstimatedTimeSec                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      IsPrivate                                                   OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingSuccessInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MatchingSuccessInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(bool)                                      IsPrivate                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingCancelInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MatchingCancelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(EM1MatchingCancelReason)                   Reason                                                      OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1LeaveCharacterNotiInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1LeaveCharacterNotiInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(bool)                                      ServerMove                                                  OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PartyJoinDedicatedServerParam
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1PartyJoinDedicatedServerParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   MasterUid                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             MapTemplateId                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1MapSubData)                             MapSubData                                                  OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	DMember(bool)                                      CheckUnlock                                                 OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      PrivateField                                                OFFSET(get<bool>, {0x1D, 1, 0, 0})
	CMember(TArray<FM1MapModifier>)                    Modifiers                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SetMatchingPlayerCntNoti
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1SetMatchingPlayerCntNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int64_t>)                           AccountUids                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TrackingDataLink
/// Size: 0x0000 (0x000030 - 0x000030)
class FM1TrackingDataLink : public FDataLink
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ItemInfoBox
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1ItemInfoBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/M1Data.M1ItemPack
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1ItemPack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1ItemTidBox)                             ItemInfo                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentRandomOptionPair
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1EquipmentRandomOptionPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1ScaledInteger)                          StatValue                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1CheatCreateEquipmentReq
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1CheatCreateEquipmentReq : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             EquipmentTid                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   OptionalLevel                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1EquipmentRandomOptionPair>)      RandomOptions                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CheatCreateItemReq
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1CheatCreateItemReq : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1ItemTidBox)                             ItemTid                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   OptionalLevel                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FM1EquipmentRandomOptionPair>)      RandomOptions                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CheatCreateBulkEquipmentReq
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1CheatCreateBulkEquipmentReq : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1EquipmentCategoryType)                  CategoryType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1EquipItemClassType)                     ClassType                                                   OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EM1ItemTierType)                           Tier                                                        OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   OptionalLevel                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1EquipmentRandomOptionPair>)      RandomOptions                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InventoryUpdateNoti
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FM1InventoryUpdateNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   InventoryRevision                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1ItemInfoBox>)                    CreatedItems                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1ItemInfoBox>)                    UpdatedItems                                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1ItemUidBox>)                     DeletedItems                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FM1CurrencyInfo>)                   Currencies                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FM1WeaponProficiencyInfo>)          WeaponProficiencies                                         OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FM1EquipmentRandomOptionInfo>)      UpdatedRandomOptions                                        OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FM1PerkInfo>)                       Perks                                                       OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FM1ReactorEnchantInfo>)             ReactorInfos                                                OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FM1TitleItemInfo>)                  TitleInfos                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FM1RecordInfo>)                     RecordInfos                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DropItemRequest
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1DropItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FM1TemplateId)                             MonsterSpawnGroupTid                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   MonsterUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   MonsterLevel                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<EM1MonsterSubType>)                 MonsterSubTypeList                                          OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<int64_t>)                           AccountUidList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(EM1MonsterCategory)                        MonsterCategory                                             OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BossKillDropItemRequest
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1BossKillDropItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1TemplateId)                             MonsterTid                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   MonsterUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   MonsterLevel                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<int64_t>)                           AccountUidList                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BossPartsDropItemRequest
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1BossPartsDropItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FM1TemplateId)                             MonsterTid                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   MonsterUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   MonsterLevel                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FM1TemplateId)                             PartsTid                                                    OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(bool)                                      IsDebone                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(TArray<int64_t>)                           AccountUidList                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MonsterRequestInfoBox
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MonsterRequestInfoBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1EventBoostContentType)                  ContentType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   ContentId                                                   OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MissionTaskDropItemRequest
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1MissionTaskDropItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1TemplateId)                             MissionTaskTemplateId                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EM1MonsterCategory)                        MonsterCategory                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EM1MissionCategory)                        MissionCategory                                             OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(int64_t)                                   MonsterUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   MonsterLevel                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FM1TemplateId)                             PartsTid                                                    OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(TArray<EM1MonsterSubType>)                 MonsterSubTypeList                                          OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<int64_t>)                           AccountUidList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionWaveDropItemRequest
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1MissionWaveDropItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FM1TemplateId)                             MissionWaveTemplateId                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EM1MonsterCategory)                        MonsterCategory                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(int64_t)                                   MonsterUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   MonsterLevel                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FM1TemplateId)                             PartsTid                                                    OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(TArray<EM1MonsterSubType>)                 MonsterSubTypeList                                          OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<int64_t>)                           AccountUidList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FieldObjectDropItemRequest
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1FieldObjectDropItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             FieldObjectTemplateId                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<int64_t>)                           AccountUidList                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MiniGameDropItemRequest
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MiniGameDropItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             MiniGameTid                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             DifficyltyTid                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TArray<int64_t>)                           AccountUidList                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DropItemNotiElement
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1DropItemNotiElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   DropOid                                                     OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FM1ItemTidBox)                             ItemTid                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1DropItemInfoNoti
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1DropItemInfoNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   MosterUId                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             PartsTid                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1DropItemNotiElement>)            DropItemNotiList                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ShopSellInfoNoti
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1ShopSellInfoNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1ItemUidBox)                             ItemUid                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(EM1CommonShopResultType)                   Result                                                      OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ShopBuyInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1ShopBuyInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             ShopId                                                      OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1TemplateId)                             ProductId                                                   OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(EM1CommonShopResultType)                   Result                                                      OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FDateTime)                                 BuyTime                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   BuyCount                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<FM1ItemTidBox>)                     AcquireList                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ShopBuyInfoBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ShopBuyInfoBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1ShopBuyInfo>)                    BuyInfoList                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CheatCreateCharacterRes
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1CheatCreateCharacterRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EM1CheatCreateCharacterResultType)         Result                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FM1CharacterInfo)                          CreatedCharacter                                            OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/M1Data.M1CheatCreateCharacterReq
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CheatCreateCharacterReq : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1TemplateId>)                     TemplateIds                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ResearchDataType
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ResearchDataType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   RemainTicks                                                 OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	CMember(EM1ResearchStatus)                         ResearchStatus                                              OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/M1Data.M1ResearchDataNoti
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ResearchDataNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1ResearchDataType>)               ResearchDataTypeList                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ResearchResultNoti
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1ResearchResultNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             ResearchTemplateId                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EM1ResearchReason)                         Reason                                                      OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(int64_t)                                   RemainTicks                                                 OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	CMember(EM1ResearchStatus)                         ResearchStatus                                              OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/M1Data.M1ResearchBookMarkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ResearchBookMarkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             ResearchTemplateId                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MissionInfoList
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MissionInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   LastPlayMissionId                                           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1MissionInfo>)                    MissionInfos                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionRequest
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MissionRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             MissionId                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FString)                                   ControllerType                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AccountUidWithMissionGrade
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1AccountUidWithMissionGrade : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   MissionGrade                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1SuccessMissionRequest
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1SuccessMissionRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1TemplateId)                             MissionId                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1AccountUidWithMissionGrade>)     AccountMissionGradePairs                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ControllerType                                              OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SuccessMissionResByAccount
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1SuccessMissionResByAccount : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1CurrencyInfo>)                   CurrencyBoost                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   ExpBoost                                                    OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   ExpBoostByEvent                                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MasteryBoost                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/M1Data.M1SuccessMissionRes
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1SuccessMissionRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1SuccessMissionResByAccount>)     AccountList                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionMidRewardRequest
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MissionMidRewardRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             MissionWaveTId                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<int64_t>)                           AccountList                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionMidRewardResByAccount
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MissionMidRewardResByAccount : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ExpBoost                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1ItemPack>)                       Acquires                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MissionMidRewardRes
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MissionMidRewardRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1MissionMidRewardResByAccount>)   AccountList                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1LoadoutSlotTypeAndIndex
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1LoadoutSlotTypeAndIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1ItemTidBox)                             OwnerTid                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(char)                                      LoadoutSlotIndex                                            OFFSET(get<char>, {0x8, 1, 0, 0})
};

/// Struct /Script/M1Data.M1CheckEnchantRuneRes
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CheckEnchantRuneRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1RuneReason)                             Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1LoadoutSlotTypeAndIndex>)        CapacityOverSlots                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FieldUnlockedNoti
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1FieldUnlockedNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             MapTemplateId                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1MapSubData)                             MapSubData                                                  OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	CMember(TArray<FString>)                           CampEntryPointId                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BattleZoneId                                                OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1QuestParam
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1QuestParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      Complete                                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/M1Data.M1QuestInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1QuestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             QuestId                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1QuestParam>)                     QuestParams                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EM1QuestCompleteState)                     CompleteState                                               OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(bool)                                      Restartable                                                 OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/M1Data.M1QuestStartMultiple
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1QuestStartMultiple : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1TemplateId>)                     StartRequestQuestIds                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1IncQuestProgressReq
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1IncQuestProgressReq : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1TemplateId)                             questTid                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   paramIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   incCount                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1IncQuestProgressReqList
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1IncQuestProgressReqList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1IncQuestProgressReq>)            Requests                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1IncQuestProgressRes
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1IncQuestProgressRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1IncQuestProgressReason)                 Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FM1QuestParam)                             Param                                                       OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      CompleteAll                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/M1Data.M1IncQuestProgressResList
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1IncQuestProgressResList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1IncQuestProgressRes>)            responses                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TracingQuestInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1TracingQuestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             questTid                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EM1QuestType)                              QuestType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/M1Data.M1QuestInfoList
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1QuestInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FM1TracingQuestInfo>)               TracingQuestInfos                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FM1QuestInfo>)                      QuestInfos                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FM1TemplateId)                             DailyChallengeId                                            OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FM1TemplateId)                             WeeklyChallengeId                                           OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/M1Data.M1SetQuestTrackerNoti
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1SetQuestTrackerNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TracingQuestInfo)                       QuestInfo                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MainQuestJumpResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MainQuestJumpResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1TemplateId>)                     CompleteQuestIds                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1WeaponProficiencyBoostInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1WeaponProficiencyBoostInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1TemplateId)                             WeaponUid                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Boost                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1AddWeaponProficiencyPointRes
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1AddWeaponProficiencyPointRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FM1WeaponProficiencyBoostInfo>)     WeaponProficiencyBoostList                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   MasteryBoost                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1WeapnProficiencyPoint
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1WeapnProficiencyPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             WeaponTemplateId                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FM1TemplateId)                             MonsterTemplateId                                           OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CheatMasteryExpUp
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1CheatMasteryExpUp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/M1Data.M1RuneComposeResult
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RuneComposeResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1RuneReason)                             Result                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             RewardTemplateId                                            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleEntranceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1VoidBattleEntranceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             MapId                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1MapSubData)                             MapSubData                                                  OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	DMember(bool)                                      Entrance                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleEntranceInfoByAccount
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1VoidBattleEntranceInfoByAccount : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccId                                                       OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1VoidBattleEntranceInfo>)         EntranceInfos                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleStartConditionByTid
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1VoidBattleStartConditionByTid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1VoidBattleStartCondition>)       StartConditions                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleEntranceInfoList
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1VoidBattleEntranceInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FM1VoidBattleEntranceInfoByAccount>) EntranceInfos                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FM1VoidBattleStartConditionByTid>)  StartConditions                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      NoTimeCheck                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleClearUpdateNoti
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1VoidBattleClearUpdateNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ClearCount                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionEntranceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1InvasionEntranceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TotalRewardExp                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             InvasionDungeon                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     AbilityDataList                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionEntranceInfoList
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1InvasionEntranceInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      NoEntrant                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ScheduleIdx                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RemainTimeSec                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FM1InvasionEntranceInfo>)           EntranceInfos                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RequestMatchingResult
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1RequestMatchingResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EM1MatchingReason)                         Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      isPrivateMatching                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   EstimatedTimeSec                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingStartPlayerAttribute
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1MatchingStartPlayerAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   maxClearRound                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   ControllerType                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   CountryName                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     playerWeaponAtk                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     playerSkillAtk                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     playerDefense                                               OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     PlayerMaxShield                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     playerMaxHp                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     playerMaxMentality                                          OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingStartAttribute
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MatchingStartAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FM1MapModifier>)                    Modifiers                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FM1MatchingStartPlayerAttribute>)   playerAttributes                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingGameEndPlayerAttribute
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MatchingGameEndPlayerAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   recordRevive                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   recordDeath                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   recordDamagegive                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   recordElapsedtime                                           OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   recordFinalClearRound                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingGameEndAttribute
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1MatchingGameEndAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   matchRecordDeath                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   matchRecordDamagegive                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   matchElapsedtime                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   matchFinalRound                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   matchVoidBattleID                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   matchWorldMissionID                                         OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FM1MatchingGameEndPlayerAttribute>) playerAttributes                                            OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonSelectMODRerollRequest
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1InstanceDungeonSelectMODRerollRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonCompleteResult
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1InstanceDungeonCompleteResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EM1InstanceDungeonCompleteReason)          Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InstanceDungeonCompleteRequest
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1InstanceDungeonCompleteRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             FixedModifier                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Score                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionDungeonCompleteResult
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1InvasionDungeonCompleteResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EM1InstanceDungeonCompleteReason)          Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RewardBaseExp                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RewardBonusExp                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   TotalRewardExpBef                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   TotalRewardExpAft                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1InvasionDungeonCompleteRequest
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1InvasionDungeonCompleteRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ClearTimeSec                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1VoidBattleCompleteResult
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1VoidBattleCompleteResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1VoidBattleRewards)                      Rewards                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MatchingAuidList
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MatchingAuidList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int64_t>)                           Auids                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MailItemInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1MailItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1ItemTidBox)                             ItemTidBox                                                  OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int64_t)                                   Amount                                                      OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(bool)                                      received                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentMailItemInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1EquipmentMailItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      received                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(TArray<FM1EquipmentRandomOptionInfo>)      RandomOptions                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1PerkInfo>)                       Perks                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RuneMailItemInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RuneMailItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             TemplateId                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   EnchantLevel                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      received                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/M1Data.M1MailInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FM1MailInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(EM1MailType)                               MailType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   mailId                                                      OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FM1TemplateId)                             mailTemplateId                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   sender                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FDateTime)                                 startDate                                                   OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FDateTime)                                 endDate                                                     OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      reading                                                     OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TArray<FM1MailItemInfo>)                   ItemList                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FM1EquipmentMailItemInfo>)          equipItemList                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FM1RuneMailItemInfo>)               runeItemList                                                OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MailInfoBundle
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MailInfoBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1MailReason)                             Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1MailInfo>)                       mailList                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MailMultiRequestInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1MailMultiRequestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int64_t>)                           mailIdList                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MailDeleteAllInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MailDeleteAllInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1MailReason)                             Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<int64_t>)                           remainMailList                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1NewMailPushInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1NewMailPushInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1MailType)                               MailType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	CMember(TArray<int64_t>)                           NewMailIdList                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1MailDeletePushInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1MailDeletePushInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<int64_t>)                           deleteMailList                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizePaintInventory
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1CustomizePaintInventory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             PaintTid                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1CustomizeItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1TemplateId)                             Tid                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EvolutionIdx                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   EvolutionComplete                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   StackCount                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeCharacter
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1CustomizeCharacter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeCharacterInventory
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CustomizeCharacterInventory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             PlayerTid                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1CustomizeCharacter>)             Customizes                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeWeaponInventory
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1CustomizeWeaponInventory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             WeaponTid                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             CustomizeTid                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeRingSlotInvenvory
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1CustomizeRingSlotInvenvory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             CustomizeTid                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeBoundedSkin
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CustomizeBoundedSkin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BindPaintTids                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeBoundedCharacter
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CustomizeBoundedCharacter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             PlayerTid                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BindSkinTids                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeBoundedWeapon
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CustomizeBoundedWeapon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             WeaponTid                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BindSkinTids                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CustomizeInvenvory
/// Size: 0x0098 (0x000000 - 0x000098)
class FM1CustomizeInvenvory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(EM1CustomizeReason)                        Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1CustomizeItem>)                  GainItems                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1CustomizeCharacterInventory>)    CustomizeCharacters                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FM1CustomizeWeaponInventory>)       CustomizeWeapons                                            OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FM1CustomizePaintInventory>)        CustomizePaints                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FM1CustomizeRingSlotInvenvory>)     CustomizeRingSlot                                           OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FM1TemplateId>)                     CustomizeEtc                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FM1CustomizeBoundedSkin>)           CustomizeBoundedSkin                                        OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FM1CustomizeBoundedCharacter>)      CustomizeBoundedCharacter                                   OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FM1CustomizeBoundedWeapon>)         CustomizeBoundedWeapon                                      OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RequestCustomizingCharacter
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RequestCustomizingCharacter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             PlayerTid                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             CustomizeTid                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RequestCustomizingWeapon
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RequestCustomizingWeapon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             WeaponTid                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             CustomizeTid                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RequestCustomizingSkinPaint
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1RequestCustomizingSkinPaint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             CustomizeTid                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1PaintData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1PaintData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             PaintTid                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RequestCustomizingSkinPaints
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RequestCustomizingSkinPaints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1PaintData>)                      Paints                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1UpdateCustomizingSkinPaints
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1UpdateCustomizingSkinPaints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1CustomizePaintInventory>)        Inventory                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RequestCustomizingRingSlot
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RequestCustomizingRingSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             CustomizeTid                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RequestCustomizingEtc
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RequestCustomizingEtc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EM1CustomizingItemCategoryType)            CustomizeType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FM1TemplateId)                             CustomizeTid                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RequestCustomizingEvolution
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1RequestCustomizingEvolution : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EvolutionIndex                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ResponseBoundedCharacter
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1ResponseBoundedCharacter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             PlayerTid                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BindTids                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ResponseBoundedWeapon
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1ResponseBoundedWeapon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             WeaponTid                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BindTids                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ResponseBoundedSkin
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1ResponseBoundedSkin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             SkinTid                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     BindTids                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1EquipEncyclopediaUpdateNoti
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1EquipEncyclopediaUpdateNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FM1TemplateId)                             EquipTemplateId                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1EquipEncyclopediaData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1EquipEncyclopediaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1TemplateId>)                     EquipTemplateIdList                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PlatformAchievementCompleteInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1PlatformAchievementCompleteInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             AchievementId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<EM1ContentsPlatformType>)           AchievedPlatforms                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PlatformAchievementCompleteInfoList
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1PlatformAchievementCompleteInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1PlatformAchievementCompleteInfo>) CompleteInfos                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FilterOption
/// Size: 0x0003 (0x000000 - 0x000003)
class FM1FilterOption : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EM1ItemTierType)                           ItemTierType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1RoundsType)                             RoundsType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EM1EquipItemClassType)                     ClassType                                                   OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/M1Data.M1EquipmentCategoryTypes
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1EquipmentCategoryTypes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<EM1EquipmentCategoryType>)          DataList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassLevelNoti
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1BattlePassLevelNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1TemplateId)                             BattlePassTid                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BattlePassLevel                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int64_t)                                   BattlePassExp                                               OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	CMember(EM1BattlePassLevelReason)                  Reason                                                      OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/M1Data.M1KilledMonsterInfo
/// Size: 0x0014 (0x000000 - 0x000014)
class FM1KilledMonsterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EM1EquipmentSlotType)                      SlotType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FM1TemplateId)                             MonsterTid                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EM1EventBoostContentType)                  ContentType                                                 OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   ContentTemplateId                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassSeasonInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1BattlePassSeasonInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FM1TemplateId)                             BattlePassId                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RewardMaxLevel                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(bool)                                      Premium                                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      LevelUpgrade                                                OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/M1Data.M1BattlePassSeasonInfoBundle
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1BattlePassSeasonInfoBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1BattlePassSeasonInfo>)           Bundles                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1FixedOptionIndexes
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1FixedOptionIndexes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int16_t>)                           OptionIndexes                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ShopBuyData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ShopBuyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   ProductTid                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BuyCount                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FDateTime)                                 BuyDate                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1ShopBuyBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ShopBuyBundleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1ShopBuyData>)                    DataList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BattleShopCompileUnit
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1BattleShopCompileUnit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             BattlePassTid                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             ShopTid                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     ProductTidList                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BattleShopCompileUnitBundle
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1BattleShopCompileUnitBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1BattleShopCompileUnit>)          DataList                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CurrencyInternalTran
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1CurrencyInternalTran : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1CurrencyInternalType)                   Type                                                        OFFSET(get<T>, {0x0, 2, 0, 0})
	DMember(int64_t)                                   Count                                                       OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1CurrencyInternalTranBundle
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1CurrencyInternalTranBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<FM1CurrencyInternalTran>)           DataList                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1TrackingData
/// Size: 0x0000 (0x000008 - 0x000008)
class FM1TrackingData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/M1Data.M1PresetWearingInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1PresetWearingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EM1PresetSlotType)                         SlotIndex                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int64_t)                                   ItemUid                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FM1ItemTidBox)                             ItemTid                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(char)                                      LoadoutSlotIndex                                            OFFSET(get<char>, {0x1C, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PresetInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1PresetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PresetIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   PresetName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FM1PresetWearingInfo>)              WearingList                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PresetInfoBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1PresetInfoBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1PresetInfo>)                     Presets                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ApplyPresetRes
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1ApplyPresetRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1PresetReason)                           Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FM1PresetInfo)                             PresetInfo                                                  OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/M1Data.M1ItemShortIndexBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ItemShortIndexBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int16_t>)                           ItemShortIndexList                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ExtractPaintRes
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ExtractPaintRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1ItemReason)                             Result                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1TemplateId>)                     PaintList                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ItemSelectorInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ItemSelectorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FM1TemplateId)                             SelectorTid                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BuyAdditionalData
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1BuyAdditionalData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FM1TemplateId)                             TicketDataId                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FM1ItemSelectorInfo>)               SelectorData                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ReinforceSlotInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1ReinforceSlotInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   GroupIndex                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonReinforceInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1SeasonReinforceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   RemainReinforcePoint                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FM1ReinforceSlotInfo>)              UnlockedSeasonReinforceList                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FM1ReinforceSlotInfo>)              EquippedSeasonReinforceList                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1SeasonInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   SeasonId                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FM1SeasonReinforceInfo)                    SeasonReinforceInfo                                         OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/M1Data.M1SeasonExpNoti
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1SeasonExpNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SeasonId                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int64_t)                                   Exp                                                         OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/M1Data.M1BuyItemDataUnit
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1BuyItemDataUnit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1TemplateId)                             ShopTemplateId                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1TemplateId)                             ProductTid                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FM1BuyAdditionalData)                      AdditionalData                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/M1Data.M1BuyItemDataBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1BuyItemDataBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1BuyItemDataUnit>)                DataList                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ItemPackBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ItemPackBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1ItemPack>)                       ItemPacks                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1RegionLatency
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1RegionLatency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     latency                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/M1Data.M1RegionLatencyInfosMs
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1RegionLatencyInfosMs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1RegionLatency>)                  Infos                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1PSOptionData
/// Size: 0x0001 (0x000000 - 0x000001)
class FM1PSOptionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      CrossPlayOn                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/M1Data.M1XBOXOptionData
/// Size: 0x000C (0x000000 - 0x00000C)
class FM1XBOXOptionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      CrossPlayOn                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EM1XBOXInnerOptionType)                    InnerSocialOption                                           OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(EM1XBOXOuterOptionType)                    OuterSocialOption                                           OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1CrossPlayOptionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1CrossPlayOptionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FM1PSOptionData)                           PS                                                          OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FM1XBOXOptionData)                         XBOX                                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/M1Data.M1ExternalParticipateInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1ExternalParticipateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ParticipateUserName                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ServerIndex                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ServerVersion                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1LoginRequestInfo
/// Size: 0x0130 (0x000000 - 0x000130)
class FM1LoginRequestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EM1ExternalLinkerType)                     ExternalLinkerType                                          OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   ExternalLinkerData                                          OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   CountryName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   SignCountry                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(EM1OsTypes)                                OsType                                                      OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FString)                                   OsName                                                      OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   OsLanguage                                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(EM1Locale)                                 Locale                                                      OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FString)                                   LoginPlatformId                                             OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	DMember(int64_t)                                   LoginPlatformUid                                            OFFSET(get<int64_t>, {0x98, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     LoginPlatform                                               OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FM1RegionLatencyInfosMs)                   RegionLatencyInfos                                          OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FM1CrossPlayOptionData)                    CrossPlayOptionData                                         OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FM1ExternalParticipateInfo)                ParticipateInfo                                             OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	DMember(bool)                                      Boosting                                                    OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(int32_t)                                   Revision                                                    OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(bool)                                      IsCreator                                                   OFFSET(get<bool>, {0xF8, 1, 0, 0})
	SMember(FM1ClientChecksum)                         Checksum                                                    OFFSET(getStruct<T>, {0x100, 48, 0, 0})
};

/// Struct /Script/M1Data.M1LoginResponseInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FM1LoginResponseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(EM1LoginResultType)                        LoginResultType                                             OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   GameServerAddr                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int16_t)                                   Port                                                        OFFSET(get<int16_t>, {0x18, 2, 0, 0})
	DMember(int32_t)                                   GameServerIndex                                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FString)                                   GameServerVersion                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   sessionToken                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x40, 8, 0, 0})
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      ForcedCrossPlayOff                                          OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(int64_t)                                   QueueNumber                                                 OFFSET(get<int64_t>, {0x60, 8, 0, 0})
};

/// Struct /Script/M1Data.M1ScaledIntegerRange
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ScaledIntegerRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/M1Data.M1JoinDedicatedServerParam
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1JoinDedicatedServerParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FM1TemplateId)                             MapTemplateId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FM1MapSubData)                             MapSubData                                                  OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	DMember(bool)                                      CheckUnlock                                                 OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      PrivateField                                                OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(TArray<FM1MapModifier>)                    Modifiers                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/M1Data.M1JoinDedicatedServerOid
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1JoinDedicatedServerOid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   DediOid                                                     OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(bool)                                      CheckUnlock                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/M1Data.M1JoinDedicatedServerAccounts
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1JoinDedicatedServerAccounts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int64_t>)                           Accounts                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1JoinDedicatedServerRes
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FM1JoinDedicatedServerRes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EM1JoinDedicatedServerReason)              Reason                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FM1DedicatedServerInfo)                    SelectedDedicatedServerInfo                                 OFFSET(getStruct<T>, {0x8, 160, 0, 0})
	DMember(bool)                                      ForcedOverWrite                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      MovePosition                                                OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Struct /Script/M1Data.M1SearchResponse
/// Size: 0x0068 (0x000000 - 0x000068)
class FM1SearchResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(EM1SearchType)                             Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EM1SearchErrorCode)                        ErrorCode                                                   OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FM1TemplateId)                             MapTemplatedId                                              OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   MasteryLevel                                                OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	SMember(FM1TemplateId)                             CharacterTid                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(int64_t)                                   CharacterLevel                                              OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	SMember(FString)                                   LoginPlatformId                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int64_t)                                   LoginPlatformUid                                            OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     LoginPlatform                                               OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(int64_t)                                   ExternAuthValue                                             OFFSET(get<int64_t>, {0x58, 8, 0, 0})
	DMember(bool)                                      IsCreator                                                   OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/M1Data.M1RecentPlayerNoti
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1RecentPlayerNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   LoginPlatformId                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int64_t)                                   LoginPlatformUid                                            OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     LoginPlatformType                                           OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/M1Data.M1PartyErrorMessageNoti
/// Size: 0x0048 (0x000000 - 0x000048)
class FM1PartyErrorMessageNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   SeqId                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EM1PartyContentsType)                      ContensType                                                 OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(int64_t)                                   ReceiverUid                                                 OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	SMember(FString)                                   SenderName                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   SenderPlatformId                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(EM1PartyErrorCode)                         SenderMessage                                               OFFSET(get<T>, {0x40, 4, 0, 0})
};

/// Struct /Script/M1Data.M1FriendErrorMessageNoti
/// Size: 0x0030 (0x000000 - 0x000030)
class FM1FriendErrorMessageNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   ReceiverUid                                                 OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   TargetName                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   TargetPlatformId                                            OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(EM1FriendContentsType)                     ContentsType                                                OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(EM1FriendErrorCode)                        ErrorCode                                                   OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Struct /Script/M1Data.M1BlockErrorMessageNoti
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1BlockErrorMessageNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(EM1BlockErrorCode)                         ErrorCode                                                   OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/M1Data.M1WorldChattingMessage
/// Size: 0x0058 (0x000000 - 0x000058)
class FM1WorldChattingMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   SenderLanguage                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SenderName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   SenderMessage                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FDateTime)                                 SendTime                                                    OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FString)                                   SenderPlatformId                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int64_t)                                   SenderPlatformUid                                           OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     SenderPlatformType                                          OFFSET(get<T>, {0x50, 1, 0, 0})
};

/// Struct /Script/M1Data.M1WorldChattingNoti
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1WorldChattingNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1WorldChattingMessage>)           Messages                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1ChattingMessage
/// Size: 0x0070 (0x000000 - 0x000070)
class FM1ChattingMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EM1ChattingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   ReceiverName                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   SenderLanguage                                              OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   SenderName                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   SenderMessage                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FDateTime)                                 SendTime                                                    OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FString)                                   SenderPlatformId                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int64_t)                                   SenderPlatformUid                                           OFFSET(get<int64_t>, {0x60, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     SenderPlatformType                                          OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Struct /Script/M1Data.M1SupportErrorMessageNoti
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1SupportErrorMessageNoti : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   SeqId                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   ReceiverUid                                                 OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	CMember(EM1SupportReason)                          ErrorCode                                                   OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ItemInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1ItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   ID                                                          OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Quantity                                                    OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   CreateDate                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/M1Data.M1DediAccountInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1DediAccountInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   AccountUid                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   AccountName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/M1Data.M1DediInfoForMonitor
/// Size: 0x0060 (0x000000 - 0x000060)
class FM1DediInfoForMonitor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   ProcessId                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Port                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   UserCnt                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FString)                                   State                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   StartInfo                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int64_t)                                   Oid                                                         OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   MultiWorldIndex                                             OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ThreadAffinityIndex                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     WorldTickTimeMs                                             OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TotalWorldTickTimeMs                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      UsingSpicaNetwork                                           OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TArray<FM1DediAccountInfo>)                ParticipantList                                             OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/M1Data.M1UpdateDediInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1UpdateDediInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ContainerName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   BlobPath                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ConnectionString                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      saveUpdatedDedi                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   DediRevision                                                OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/M1Data.M1StopDediInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1StopDediInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   MapId                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ReserveUserInfo
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FM1ReserveUserInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(int64_t)                                   AccountID                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   shardKey                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   sessionToken                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   ServerIndex                                                 OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   serverPrivateIp                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   nearestRegion                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   ServerVersion                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(char)                                      linkerSystem                                                OFFSET(get<char>, {0x68, 1, 0, 0})
	DMember(int64_t)                                   AuthValue                                                   OFFSET(get<int64_t>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   clientRevision                                              OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	SMember(FString)                                   CountryName                                                 OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   SignCountry                                                 OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(EM1OsTypes)                                OsType                                                      OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FString)                                   OsName                                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   OsLanguage                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(EM1Locale)                                 Locale                                                      OFFSET(get<T>, {0xD8, 1, 0, 0})
	SMember(FString)                                   LoginPlatformId                                             OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	DMember(int64_t)                                   LoginPlatformUid                                            OFFSET(get<int64_t>, {0xF0, 8, 0, 0})
	CMember(EM1LoginPlatformTypes)                     LoginPlatform                                               OFFSET(get<T>, {0xF8, 1, 0, 0})
	SMember(FString)                                   toyServiceId                                                OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      moved                                                       OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(int64_t)                                   LastDediOid                                                 OFFSET(get<int64_t>, {0x118, 8, 0, 0})
	SMember(FM1TemplateId)                             LastMapTid                                                  OFFSET(getStruct<T>, {0x120, 4, 0, 0})
	SMember(FM1MapSubData)                             LastMapSubData                                              OFFSET(getStruct<T>, {0x124, 16, 0, 0})
	SMember(FM1TemplateId)                             LastMissionTid                                              OFFSET(getStruct<T>, {0x134, 4, 0, 0})
	DMember(int64_t)                                   LastPartyId                                                 OFFSET(get<int64_t>, {0x138, 8, 0, 0})
	CMember(TArray<FM1PartyMemberInfo>)                LastPartyMember                                             OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FM1CrossPlayOptionData)                    crossPlayData                                               OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FString)                                   ParticipateUserName                                         OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   FieldId                                                     OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   fieldUid                                                    OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FDateTime)                                 chatBannedTime                                              OFFSET(getStruct<T>, {0x190, 8, 0, 0})
	DMember(bool)                                      Boosting                                                    OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(bool)                                      IsCreator                                                   OFFSET(get<bool>, {0x199, 1, 0, 0})
};

/// Struct /Script/M1Data.M1KickInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FM1KickInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EM1KickType)                               KickType                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Reason                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/M1Data.M1KickUserInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FM1KickUserInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   AccountID                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FM1KickInfo)                               kickInfo                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/M1Data.M1ChatBanInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ChatBanInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   AccountID                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1MailLanguageInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1MailLanguageInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EM1Locale)                                 Code                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   sender                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1OntimeEventItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1OntimeEventItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EM1ItemType)                               ItemType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   ItemTemplateId                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Amount                                                      OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1OntimeEvent
/// Size: 0x0040 (0x000000 - 0x000040)
class FM1OntimeEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int64_t)                                   EventId                                                     OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 ExpireTime                                                  OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(TArray<FM1MailLanguageInfo>)               LanguageList                                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FM1OntimeEventItem>)                ItemList                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/M1Data.M1OntimeEventRemoveData
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1OntimeEventRemoveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   EventId                                                     OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/M1Data.M1OntimeEventBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1OntimeEventBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1OntimeEvent>)                    OntimeEventList                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1AccountList
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1AccountList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int64_t>)                           Accounts                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/M1Data.M1CommunityReportInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FM1CommunityReportInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ReporteeName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EM1ReportReasonType)                       ReportType                                                  OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   Comment                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ReporterCountry                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/M1Data.M1BuyPayItemInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FM1BuyPayItemInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   AccountUid                                                  OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/M1Data.M1DediRequestInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1DediRequestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   DediOid                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/M1Data.M1ShopRestrictionInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FM1ShopRestrictionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ProductionTid                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/M1Data.M1ShopRestrictionInfoBundle
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1ShopRestrictionInfoBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FM1ShopRestrictionInfo>)            ShopRestrictionInfoList                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/M1Data.EM1AuthResults
/// Size: 0x06
enum class EM1AuthResults : uint32_t
{
	EM1AuthResults__Fail                                                             = 0,
	EM1AuthResults__Success                                                          = 1,
	EM1AuthResults__Reenter                                                          = 2,
	EM1AuthResults__ParticipateWithSuccess                                           = 3,
	EM1AuthResults__ParticipateWithFail                                              = 4,
	EM1AuthResults__ParticipateWithCrossPlayFail                                     = 5
};

/// Enum /Script/M1Data.EM1BlockUpdateType
/// Size: 0x03
enum class EM1BlockUpdateType : uint32_t
{
	EM1BlockUpdateType__Load                                                         = 0,
	EM1BlockUpdateType__Add                                                          = 1,
	EM1BlockUpdateType__Remove                                                       = 2
};

/// Enum /Script/M1Data.EM1FriendUpdateType
/// Size: 0x04
enum class EM1FriendUpdateType : uint32_t
{
	EM1FriendUpdateType__Load                                                        = 0,
	EM1FriendUpdateType__Add                                                         = 1,
	EM1FriendUpdateType__Remove                                                      = 2,
	EM1FriendUpdateType__Update                                                      = 3
};

/// Enum /Script/M1Data.EM1InGameSocialOptionType
/// Size: 0x03
enum class EM1InGameSocialOptionType : uint32_t
{
	EM1InGameSocialOptionType__On                                                    = 0,
	EM1InGameSocialOptionType__OnlyFriend                                            = 1,
	EM1InGameSocialOptionType__Off                                                   = 2
};

/// Enum /Script/M1Data.EM1AutomationTestAttr
/// Size: 0x05
enum class EM1AutomationTestAttr : uint32_t
{
	EM1AutomationTestAttr__Str                                                       = 0,
	EM1AutomationTestAttr__Wis                                                       = 1,
	EM1AutomationTestAttr__Int                                                       = 3,
	EM1AutomationTestAttr__Dex                                                       = 4,
	EM1AutomationTestAttr__Con                                                       = 5
};

/// Enum /Script/M1Data.EM1DropContainerType
/// Size: 0x05
enum class EM1DropContainerType : uint8_t
{
	EM1DropContainerType__None                                                       = 0,
	EM1DropContainerType__Item                                                       = 1,
	EM1DropContainerType__MissionCollectibles                                        = 2,
	EM1DropContainerType__MissionSupplies                                            = 3,
	EM1DropContainerType__Max                                                        = 4
};

/// Enum /Script/M1Data.EM1StatUIRecordType
/// Size: 0x05
enum class EM1StatUIRecordType : uint8_t
{
	EM1StatUIRecordType__Plus                                                        = 0,
	EM1StatUIRecordType__Percent                                                     = 1,
	EM1StatUIRecordType__Multiply                                                    = 2,
	EM1StatUIRecordType__Meter                                                       = 3,
	EM1StatUIRecordType__Second                                                      = 4
};

/// Enum /Script/M1Data.EM1SearchKeywordType
/// Size: 0x05
enum class EM1SearchKeywordType : uint8_t
{
	EM1SearchKeywordType__CharacterModule                                            = 0,
	EM1SearchKeywordType__WeaponModule                                               = 1,
	EM1SearchKeywordType__ResearchCharacter                                          = 10,
	EM1SearchKeywordType__ResearchWeapon                                             = 11,
	EM1SearchKeywordType__ResearchEnhance                                            = 12
};

/// Enum /Script/M1Data.EM1ProjectileAlignmentType
/// Size: 0x05
enum class EM1ProjectileAlignmentType : uint8_t
{
	EM1ProjectileAlignmentType__None                                                 = 0,
	EM1ProjectileAlignmentType__Horizontal                                           = 1,
	EM1ProjectileAlignmentType__Vertical                                             = 2,
	EM1ProjectileAlignmentType__Random                                               = 3,
	EM1ProjectileAlignmentType__Range                                                = 4
};

/// Enum /Script/M1Data.EM1EMonsterTagRateType
/// Size: 0x02
enum class EM1EMonsterTagRateType : uint8_t
{
	EM1EMonsterTagRateType__Ratio                                                    = 0,
	EM1EMonsterTagRateType__Percent                                                  = 1
};

/// Enum /Script/M1Data.EM1AITargetingType
/// Size: 0x04
enum class EM1AITargetingType : uint32_t
{
	EM1AITargetingType__CharacterFirst                                               = 0,
	EM1AITargetingType__CharacterOnly                                                = 1,
	EM1AITargetingType__ObjectFirst                                                  = 2,
	EM1AITargetingType__ObjectOnly                                                   = 3
};

/// Enum /Script/M1Data.EM1AITargetingPriority
/// Size: 0x03
enum class EM1AITargetingPriority : uint32_t
{
	EM1AITargetingPriority__Closest                                                  = 0,
	EM1AITargetingPriority__Farthest                                                 = 1,
	EM1AITargetingPriority__Random                                                   = 2
};

/// Enum /Script/M1Data.EM1MonsterAIPattern
/// Size: 0x02
enum class EM1MonsterAIPattern : uint8_t
{
	EM1MonsterAIPattern__Normal                                                      = 0,
	EM1MonsterAIPattern__Named                                                       = 1
};

/// Enum /Script/M1Data.EM1MonsterAIDataOverrideType
/// Size: 0x01
enum class EM1MonsterAIDataOverrideType : uint8_t
{
	EM1MonsterAIDataOverrideType__VulgusPost                                         = 0
};

/// Enum /Script/M1Data.EM1ActionTargetType
/// Size: 0x03
enum class EM1ActionTargetType : uint8_t
{
	EM1ActionTargetType__Primary                                                     = 0,
	EM1ActionTargetType__Secondary                                                   = 1,
	EM1ActionTargetType__SubOrPrimary                                                = 2
};

/// Enum /Script/M1Data.EM1ActionArmType
/// Size: 0x04
enum class EM1ActionArmType : uint8_t
{
	EM1ActionArmType__None                                                           = 0,
	EM1ActionArmType__Left                                                           = 1,
	EM1ActionArmType__Right                                                          = 2,
	EM1ActionArmType__Both                                                           = 3
};

/// Enum /Script/M1Data.EM1MonsterActionType
/// Size: 0x03
enum class EM1MonsterActionType : uint8_t
{
	EM1MonsterActionType__None                                                       = 0,
	EM1MonsterActionType__Barrage                                                    = 1,
	EM1MonsterActionType__Single                                                     = 2
};

/// Enum /Script/M1Data.EM1AreaType
/// Size: 0x04
enum class EM1AreaType : uint8_t
{
	EM1AreaType__Sphere                                                              = 0,
	EM1AreaType__Cone                                                                = 1,
	EM1AreaType__Box                                                                 = 2,
	EM1AreaType__Cylinder                                                            = 3
};

/// Enum /Script/M1Data.EM1NpcSpawnType
/// Size: 0x03
enum class EM1NpcSpawnType : uint8_t
{
	EM1NpcSpawnType__AlwaysSpawn                                                     = 0,
	EM1NpcSpawnType__QuestSpecificSpawn                                              = 1,
	EM1NpcSpawnType__Replacement                                                     = 2
};

/// Enum /Script/M1Data.EM1NpcServiceType
/// Size: 0x39
enum class EM1NpcServiceType : uint8_t
{
	EM1NpcServiceType__None                                                          = 0,
	EM1NpcServiceType__BuyItem                                                       = 1,
	EM1NpcServiceType__SellItem                                                      = 2,
	EM1NpcServiceType__ChangeRuneSocketColor                                         = 3,
	EM1NpcServiceType__ChangeRuneSocketLink                                          = 4,
	EM1NpcServiceType__CustomizeItem                                                 = 5,
	EM1NpcServiceType__UpgradeItem                                                   = 6,
	EM1NpcServiceType__OpenWorldMap                                                  = 7,
	EM1NpcServiceType__OpenLocalMap                                                  = 8,
	EM1NpcServiceType__Mission                                                       = 9,
	EM1NpcServiceType__Research                                                      = 10,
	EM1NpcServiceType__Quest                                                         = 11,
	EM1NpcServiceType__CharacterReset                                                = 12,
	EM1NpcServiceType__RuneEnchant                                                   = 13,
	EM1NpcServiceType__RuneDecompose                                                 = 14,
	EM1NpcServiceType__MasteryRankUp                                                 = 15,
	EM1NpcServiceType__RuneCompose                                                   = 16,
	EM1NpcServiceType__Mail                                                          = 17,
	EM1NpcServiceType__VoidBattleNormal                                              = 18,
	EM1NpcServiceType__VoidBattleHard                                                = 19,
	EM1NpcServiceType__WorldMission                                                  = 20,
	EM1NpcServiceType__ItemLevelUpgrade                                              = 21,
	EM1NpcServiceType__Warehouse                                                     = 22,
	EM1NpcServiceType__PerkEnchant                                                   = 23,
	EM1NpcServiceType__ReactorEnchant                                                = 24,
	EM1NpcServiceType__RangedWeaponRandomOptionChange                                = 25,
	EM1NpcServiceType__ReactorRandomOptionChange                                     = 26,
	EM1NpcServiceType__RecordObject                                                  = 27,
	EM1NpcServiceType__Laboratory                                                    = 28,
	EM1NpcServiceType__LaboratoryOption                                              = 29,
	EM1NpcServiceType__LaboratoryMonsterAllClear                                     = 30,
	EM1NpcServiceType__InstanceDungeon                                               = 31,
	EM1NpcServiceType__InstanceDungeonNormal                                         = 32,
	EM1NpcServiceType__InstanceDungeonHard                                           = 33,
	EM1NpcServiceType__MultiSupply                                                   = 34,
	EM1NpcServiceType__OpenPopup                                                     = 35,
	EM1NpcServiceType__EnterInstanceDungeon                                          = 36,
	EM1NpcServiceType__PaintExtract                                                  = 37,
	EM1NpcServiceType__InvasionDungeon                                               = 38
};

/// Enum /Script/M1Data.EM1NpcSpawnConditionType
/// Size: 0x03
enum class EM1NpcSpawnConditionType : uint8_t
{
	EM1NpcSpawnConditionType__None                                                   = 0,
	EM1NpcSpawnConditionType__QuestStart                                             = 1,
	EM1NpcSpawnConditionType__QuestComplete                                          = 2
};

/// Enum /Script/M1Data.EM1NpcServiceUnlockConditionType
/// Size: 0x04
enum class EM1NpcServiceUnlockConditionType : uint8_t
{
	EM1NpcServiceUnlockConditionType__None                                           = 0,
	EM1NpcServiceUnlockConditionType__CompleteQuest                                  = 1,
	EM1NpcServiceUnlockConditionType__OwnQuest                                       = 2,
	EM1NpcServiceUnlockConditionType__EquipCharacter                                 = 3
};

/// Enum /Script/M1Data.EM1DialogueType
/// Size: 0x04
enum class EM1DialogueType : uint8_t
{
	EM1DialogueType__None                                                            = 0,
	EM1DialogueType__Mission                                                         = 1,
	EM1DialogueType__Quest                                                           = 2,
	EM1DialogueType__NpcDialogueScene                                                = 3
};

/// Enum /Script/M1Data.EM1StatRefType
/// Size: 0x05
enum class EM1StatRefType : uint8_t
{
	EM1StatRefType__None                                                             = 0,
	EM1StatRefType__SourceSnapshot                                                   = 1,
	EM1StatRefType__SourceLinked                                                     = 2,
	EM1StatRefType__TargetSnapshot                                                   = 3,
	EM1StatRefType__TargetLinked                                                     = 4
};

/// Enum /Script/M1Data.EM1AbilityCreatedObjectRemovalPolicy
/// Size: 0x03
enum class EM1AbilityCreatedObjectRemovalPolicy : uint8_t
{
	EM1AbilityCreatedObjectRemovalPolicy__DoNothing                                  = 0,
	EM1AbilityCreatedObjectRemovalPolicy__RemoveWithThisAbility                      = 1,
	EM1AbilityCreatedObjectRemovalPolicy__RemoveWhenInstigatorEndPlay                = 2
};

/// Enum /Script/M1Data.EM1StatusEffectStackDecreasePolicy
/// Size: 0x03
enum class EM1StatusEffectStackDecreasePolicy : uint8_t
{
	EM1StatusEffectStackDecreasePolicy__DoNothing                                    = 0,
	EM1StatusEffectStackDecreasePolicy__WhenRemoveOtherSE                            = 1,
	EM1StatusEffectStackDecreasePolicy__WhenEndDuration                              = 2
};

/// Enum /Script/M1Data.EM1SkillType
/// Size: 0x04
enum class EM1SkillType : uint8_t
{
	EM1SkillType__None                                                               = 0,
	EM1SkillType__Active                                                             = 1,
	EM1SkillType__Passive                                                            = 2,
	EM1SkillType__Max                                                                = 3
};

/// Enum /Script/M1Data.EM1SkillArcheType
/// Size: 0x06
enum class EM1SkillArcheType : uint8_t
{
	EM1SkillArcheType__None                                                          = 0,
	EM1SkillArcheType__Fusion                                                        = 1,
	EM1SkillArcheType__Singular                                                      = 2,
	EM1SkillArcheType__Dimension                                                     = 3,
	EM1SkillArcheType__Tech                                                          = 4,
	EM1SkillArcheType__Max                                                           = 5
};

/// Enum /Script/M1Data.EM1SkillInfoBenefitType
/// Size: 0x04
enum class EM1SkillInfoBenefitType : uint8_t
{
	EM1SkillInfoBenefitType__None                                                    = 0,
	EM1SkillInfoBenefitType__Increase                                                = 1,
	EM1SkillInfoBenefitType__Decrease                                                = 2,
	EM1SkillInfoBenefitType__Max                                                     = 3
};

/// Enum /Script/M1Data.EM1SkillInfoTextFormatType
/// Size: 0x03
enum class EM1SkillInfoTextFormatType : uint8_t
{
	EM1SkillInfoTextFormatType__None                                                 = 0,
	EM1SkillInfoTextFormatType__Title                                                = 1,
	EM1SkillInfoTextFormatType__Annotation                                           = 2
};

/// Enum /Script/M1Data.EM1StatusEffectAmassType
/// Size: 0x04
enum class EM1StatusEffectAmassType : uint8_t
{
	EM1StatusEffectAmassType__Replace                                                = 0,
	EM1StatusEffectAmassType__Preserve                                               = 1,
	EM1StatusEffectAmassType__StackReplace                                           = 2,
	EM1StatusEffectAmassType__StackPreserve                                          = 3
};

/// Enum /Script/M1Data.EM1ChattingTab
/// Size: 0x02
enum class EM1ChattingTab : uint8_t
{
	EM1ChattingTab__Tab_Normal                                                       = 0,
	EM1ChattingTab__Tab_World                                                        = 1
};

/// Enum /Script/M1Data.EM1ChattingBlockRule
/// Size: 0x03
enum class EM1ChattingBlockRule : uint8_t
{
	EM1ChattingBlockRule__SystemDefault                                              = 0,
	EM1ChattingBlockRule__ChatDefault                                                = 1,
	EM1ChattingBlockRule__SocialMotion                                               = 2
};

/// Enum /Script/M1Data.EM1CreditType
/// Size: 0x06
enum class EM1CreditType : uint8_t
{
	EM1CreditType__Title                                                             = 0,
	EM1CreditType__Staff                                                             = 1,
	EM1CreditType__Staff_Center                                                      = 2,
	EM1CreditType__Image                                                             = 3,
	EM1CreditType__FreeText                                                          = 4,
	EM1CreditType__Space                                                             = 5
};

/// Enum /Script/M1Data.EM1MissionTargetType
/// Size: 0x14
enum class EM1MissionTargetType : uint8_t
{
	EM1MissionTargetType__None                                                       = 255,
	EM1MissionTargetType__Destruction                                                = 0,
	EM1MissionTargetType__Defense                                                    = 1,
	EM1MissionTargetType__Supply                                                     = 2,
	EM1MissionTargetType__Explosion                                                  = 3,
	EM1MissionTargetType__DataCollection                                             = 4,
	EM1MissionTargetType__Escort                                                     = 5,
	EM1MissionTargetType__MultiCollection                                            = 6,
	EM1MissionTargetType__MultiAssassination                                         = 7,
	EM1MissionTargetType__Interaction                                                = 8,
	EM1MissionTargetType__DestructionIronHeart                                       = 9,
	EM1MissionTargetType__VoidFragment                                               = 10,
	EM1MissionTargetType__CompetitiveOccupation                                      = 11,
	EM1MissionTargetType__InstantDeathBarrier                                        = 12
};

/// Enum /Script/M1Data.EM1InvasionArcheSymbolType
/// Size: 0x07
enum class EM1InvasionArcheSymbolType : uint8_t
{
	EM1InvasionArcheSymbolType__None                                                 = 0,
	EM1InvasionArcheSymbolType__InvasionArche                                        = 1,
	EM1InvasionArcheSymbolType__InvasionArche3                                       = 2,
	EM1InvasionArcheSymbolType__InvasionArche4                                       = 3,
	EM1InvasionArcheSymbolType__InvasionArche5                                       = 4,
	EM1InvasionArcheSymbolType__InvasionArche6                                       = 5,
	EM1InvasionArcheSymbolType__InvasionArche7                                       = 6
};

/// Enum /Script/M1Data.EM1ContentsPlatformType
/// Size: 0x05
enum class EM1ContentsPlatformType : uint8_t
{
	EM1ContentsPlatformType__PS4                                                     = 0,
	EM1ContentsPlatformType__PS5                                                     = 1,
	EM1ContentsPlatformType__Xbox                                                    = 2,
	EM1ContentsPlatformType__Steam                                                   = 3,
	EM1ContentsPlatformType__Max                                                     = 4
};

/// Enum /Script/M1Data.EM1RelationsCheckType
/// Size: 0x03
enum class EM1RelationsCheckType : uint8_t
{
	EM1RelationsCheckType__Both                                                      = 0,
	EM1RelationsCheckType__OnlyEnemy                                                 = 1,
	EM1RelationsCheckType__OnlyAlly                                                  = 2
};

/// Enum /Script/M1Data.EM1EquipmentCategoryType
/// Size: 0x09
enum class EM1EquipmentCategoryType : uint8_t
{
	EM1EquipmentCategoryType__None                                                   = 0,
	EM1EquipmentCategoryType__RangedWeapon                                           = 1,
	EM1EquipmentCategoryType__MeleeWeapon_Deleted                                    = 2,
	EM1EquipmentCategoryType__Reactor                                                = 3,
	EM1EquipmentCategoryType__Necklace                                               = 4,
	EM1EquipmentCategoryType__Earrings                                               = 5,
	EM1EquipmentCategoryType__Ring                                                   = 6,
	EM1EquipmentCategoryType__Bracelet                                               = 7,
	EM1EquipmentCategoryType__Max                                                    = 8
};

/// Enum /Script/M1Data.EM1EquipItemClassType
/// Size: 0x19
enum class EM1EquipItemClassType : uint8_t
{
	EM1EquipItemClassType__None                                                      = 0,
	EM1EquipItemClassType__WeaponHandGun                                             = 1,
	EM1EquipItemClassType__WeaponHandCannon                                          = 2,
	EM1EquipItemClassType__WeaponShotGun                                             = 3,
	EM1EquipItemClassType__WeaponSubMachineGun                                       = 4,
	EM1EquipItemClassType__WeaponMachineGun                                          = 5,
	EM1EquipItemClassType__WeaponAssaultRifle                                        = 6,
	EM1EquipItemClassType__WeaponTacticalRifle                                       = 7,
	EM1EquipItemClassType__WeaponScoutRifle                                          = 8,
	EM1EquipItemClassType__WeaponSniperRifle                                         = 9,
	EM1EquipItemClassType__WeaponLauncher                                            = 10,
	EM1EquipItemClassType__WeaponBow                                                 = 11,
	EM1EquipItemClassType__WeaponBeamRifle                                           = 12,
	EM1EquipItemClassType__WeaponMelee_Deleted                                       = 13,
	EM1EquipItemClassType__ArmorCloth                                                = 14,
	EM1EquipItemClassType__ArmorLeather                                              = 15,
	EM1EquipItemClassType__ArmorMetal                                                = 16,
	EM1EquipItemClassType__WeaponSword                                               = 17,
	EM1EquipItemClassType__WeaponBattleAxe                                           = 18
};

/// Enum /Script/M1Data.EM1ItemTierType
/// Size: 0x06
enum class EM1ItemTierType : uint8_t
{
	EM1ItemTierType__None                                                            = 0,
	EM1ItemTierType__Tier1                                                           = 1,
	EM1ItemTierType__Tier2                                                           = 2,
	EM1ItemTierType__Tier3                                                           = 3,
	EM1ItemTierType__Tier4                                                           = 4,
	EM1ItemTierType__Max                                                             = 5
};

/// Enum /Script/M1Data.EM1ConsumableItemCategoryType
/// Size: 0x14
enum class EM1ConsumableItemCategoryType : uint8_t
{
	EM1ConsumableItemCategoryType__None                                              = 0,
	EM1ConsumableItemCategoryType__AmmoRecovery                                      = 1,
	EM1ConsumableItemCategoryType__BuffItem                                          = 2,
	EM1ConsumableItemCategoryType__Material                                          = 3,
	EM1ConsumableItemCategoryType__CharacterTicket                                   = 4,
	EM1ConsumableItemCategoryType__VoidVault                                         = 5,
	EM1ConsumableItemCategoryType__MiniGameKey                                       = 6,
	EM1ConsumableItemCategoryType__VoidPiece                                         = 7,
	EM1ConsumableItemCategoryType__EnhancementItem                                   = 8,
	EM1ConsumableItemCategoryType__VoidVaultStabilizer                               = 9,
	EM1ConsumableItemCategoryType__Bunch                                             = 10,
	EM1ConsumableItemCategoryType__PaintExtractMaterial                              = 11,
	EM1ConsumableItemCategoryType__KeyMaterial                                       = 12,
	EM1ConsumableItemCategoryType__Max                                               = 13
};

/// Enum /Script/M1Data.EM1ConsumableItemHowToUse
/// Size: 0x04
enum class EM1ConsumableItemHowToUse : uint8_t
{
	EM1ConsumableItemHowToUse__None                                                  = 0,
	EM1ConsumableItemHowToUse__Instantly                                             = 1,
	EM1ConsumableItemHowToUse__ByInventory                                           = 2,
	EM1ConsumableItemHowToUse__UseImmediately                                        = 3
};

/// Enum /Script/M1Data.EM1ItemAcquireType
/// Size: 0x03
enum class EM1ItemAcquireType : uint8_t
{
	EM1ItemAcquireType__None                                                         = 0,
	EM1ItemAcquireType__InGame                                                       = 1,
	EM1ItemAcquireType__LimitedTime                                                  = 2
};

/// Enum /Script/M1Data.EM1CurrencyType
/// Size: 0x10
enum class EM1CurrencyType : uint8_t
{
	EM1CurrencyType__None                                                            = 0,
	EM1CurrencyType__Gold                                                            = 1,
	EM1CurrencyType__BlueCash                                                        = 2,
	EM1CurrencyType__BlackMana                                                       = 3,
	EM1CurrencyType__Qulipothium                                                     = 4,
	EM1CurrencyType__RedCash                                                         = 5,
	EM1CurrencyType__BattleCoin                                                      = 6,
	EM1CurrencyType__PlatinumCoin                                                    = 7,
	EM1CurrencyType__BonusCoin                                                       = 8,
	EM1CurrencyType__Max                                                             = 9
};

/// Enum /Script/M1Data.EM1RedeemType
/// Size: 0x03
enum class EM1RedeemType : uint8_t
{
	EM1RedeemType__None                                                              = 0,
	EM1RedeemType__Decomposition                                                     = 1,
	EM1RedeemType__Package                                                           = 2
};

/// Enum /Script/M1Data.EM1BuffItemType
/// Size: 0x03
enum class EM1BuffItemType : uint8_t
{
	EM1BuffItemType__None                                                            = 0,
	EM1BuffItemType__Boost                                                           = 1,
	EM1BuffItemType__SlotExpansion                                                   = 2
};

/// Enum /Script/M1Data.EM1CustomizingConditionType
/// Size: 0x04
enum class EM1CustomizingConditionType : uint8_t
{
	EM1CustomizingConditionType__None                                                = 0,
	EM1CustomizingConditionType__Character                                           = 1,
	EM1CustomizingConditionType__Weapon                                              = 2,
	EM1CustomizingConditionType__All                                                 = 3
};

/// Enum /Script/M1Data.EM1CustomizingConditionSubType
/// Size: 0x05
enum class EM1CustomizingConditionSubType : uint8_t
{
	EM1CustomizingConditionSubType__None                                             = 0,
	EM1CustomizingConditionSubType__All                                              = 1,
	EM1CustomizingConditionSubType__All_Male                                         = 2,
	EM1CustomizingConditionSubType__All_Female                                       = 3,
	EM1CustomizingConditionSubType__Group                                            = 4
};

/// Enum /Script/M1Data.EM1CustomizingCharacterSkinType
/// Size: 0x06
enum class EM1CustomizingCharacterSkinType : uint8_t
{
	EM1CustomizingCharacterSkinType__None                                            = 0,
	EM1CustomizingCharacterSkinType__Head                                            = 1,
	EM1CustomizingCharacterSkinType__Body                                            = 2,
	EM1CustomizingCharacterSkinType__BackAttachment                                  = 3,
	EM1CustomizingCharacterSkinType__ChestAttachment                                 = 4,
	EM1CustomizingCharacterSkinType__Makeup                                          = 5
};

/// Enum /Script/M1Data.EM1CustomizingBoundType
/// Size: 0x03
enum class EM1CustomizingBoundType : uint32_t
{
	EM1CustomizingBoundType__None                                                    = 0,
	EM1CustomizingBoundType__Acquire                                                 = 1,
	EM1CustomizingBoundType__Equip                                                   = 2
};

/// Enum /Script/M1Data.EM1CharacterSize
/// Size: 0x05
enum class EM1CharacterSize : uint8_t
{
	EM1CharacterSize__Small                                                          = 0,
	EM1CharacterSize__Medium                                                         = 1,
	EM1CharacterSize__Big                                                            = 2,
	EM1CharacterSize__Special                                                        = 3,
	EM1CharacterSize__Special2                                                       = 4
};

/// Enum /Script/M1Data.EM1ItemOptionType
/// Size: 0x02
enum class EM1ItemOptionType : uint8_t
{
	EM1ItemOptionType__None                                                          = 0,
	EM1ItemOptionType__Random                                                        = 1
};

/// Enum /Script/M1Data.EM1CharacterGender
/// Size: 0x03
enum class EM1CharacterGender : uint8_t
{
	EM1CharacterGender__None                                                         = 0,
	EM1CharacterGender__Female                                                       = 1,
	EM1CharacterGender__Male                                                         = 2
};

/// Enum /Script/M1Data.EM1CharacterGrade
/// Size: 0x02
enum class EM1CharacterGrade : uint8_t
{
	EM1CharacterGrade__Normal                                                        = 0,
	EM1CharacterGrade__Ultimate                                                      = 1
};

/// Enum /Script/M1Data.EM1DropGroupType
/// Size: 0x07
enum class EM1DropGroupType : uint8_t
{
	EM1DropGroupType__None                                                           = 0,
	EM1DropGroupType__Equipment                                                      = 1,
	EM1DropGroupType__Rune                                                           = 2,
	EM1DropGroupType__Consumable                                                     = 3,
	EM1DropGroupType__Gold                                                           = 4,
	EM1DropGroupType__Qulipothium                                                    = 5,
	EM1DropGroupType__Instant                                                        = 6
};

/// Enum /Script/M1Data.EM1WeaponInstanceType
/// Size: 0x03
enum class EM1WeaponInstanceType : uint8_t
{
	EM1WeaponInstanceType__ItemWeapon                                                = 0,
	EM1WeaponInstanceType__AltWeapon                                                 = 1,
	EM1WeaponInstanceType__PickupWeapon                                              = 2
};

/// Enum /Script/M1Data.EM1RoundsType
/// Size: 0x05
enum class EM1RoundsType : uint8_t
{
	EM1RoundsType__None                                                              = 0,
	EM1RoundsType__GeneralRounds                                                     = 1,
	EM1RoundsType__EnhancedRounds                                                    = 2,
	EM1RoundsType__ImpactRounds                                                      = 3,
	EM1RoundsType__HighpowerRounds                                                   = 4
};

/// Enum /Script/M1Data.EM1ReloadType
/// Size: 0x02
enum class EM1ReloadType : uint8_t
{
	EM1ReloadType__Magazine                                                          = 0,
	EM1ReloadType__Rounds                                                            = 1
};

/// Enum /Script/M1Data.EM1SpreadType
/// Size: 0x04
enum class EM1SpreadType : uint8_t
{
	EM1SpreadType__None                                                              = 0,
	EM1SpreadType__Random                                                            = 1,
	EM1SpreadType__Division                                                          = 2,
	EM1SpreadType__CenterAndDivision                                                 = 3
};

/// Enum /Script/M1Data.EM1MonsterCategory
/// Size: 0x06
enum class EM1MonsterCategory : uint8_t
{
	EM1MonsterCategory__Normal                                                       = 0,
	EM1MonsterCategory__Champion                                                     = 1,
	EM1MonsterCategory__Named                                                        = 2,
	EM1MonsterCategory__Boss                                                         = 3,
	EM1MonsterCategory__MissionTarget                                                = 4,
	EM1MonsterCategory__Max                                                          = 5
};

/// Enum /Script/M1Data.EM1MonsterSpecialty
/// Size: 0x07
enum class EM1MonsterSpecialty : uint8_t
{
	EM1MonsterSpecialty__None                                                        = 0,
	EM1MonsterSpecialty__Normal                                                      = 1,
	EM1MonsterSpecialty__Assault                                                     = 2,
	EM1MonsterSpecialty__Cower                                                       = 3,
	EM1MonsterSpecialty__Speeder                                                     = 4,
	EM1MonsterSpecialty__Defender                                                    = 5,
	EM1MonsterSpecialty__Hider                                                       = 6
};

/// Enum /Script/M1Data.EM1LegionCategory
/// Size: 0x05
enum class EM1LegionCategory : uint8_t
{
	EM1LegionCategory__None                                                          = 0,
	EM1LegionCategory__Darkness                                                      = 1,
	EM1LegionCategory__Truth                                                         = 2,
	EM1LegionCategory__Immortal                                                      = 3,
	EM1LegionCategory__Max                                                           = 4
};

/// Enum /Script/M1Data.EM1ItemOptionTierType
/// Size: 0x05
enum class EM1ItemOptionTierType : uint8_t
{
	EM1ItemOptionTierType__None                                                      = 0,
	EM1ItemOptionTierType__Tier1                                                     = 1,
	EM1ItemOptionTierType__Tier2                                                     = 2,
	EM1ItemOptionTierType__Tier3                                                     = 3,
	EM1ItemOptionTierType__Max                                                       = 4
};

/// Enum /Script/M1Data.EM1MonsterSubType
/// Size: 0x03
enum class EM1MonsterSubType : uint8_t
{
	EM1MonsterSubType__Normal                                                        = 0,
	EM1MonsterSubType__Elite                                                         = 1,
	EM1MonsterSubType__Guide                                                         = 2
};

/// Enum /Script/M1Data.EM1FieldObjectType
/// Size: 0x03
enum class EM1FieldObjectType : uint8_t
{
	EM1FieldObjectType__None                                                         = 0,
	EM1FieldObjectType__Interaction                                                  = 1,
	EM1FieldObjectType__Hit                                                          = 2
};

/// Enum /Script/M1Data.EM1FieldObjectActivateType
/// Size: 0x04
enum class EM1FieldObjectActivateType : uint8_t
{
	EM1FieldObjectActivateType__None                                                 = 0,
	EM1FieldObjectActivateType__DropItem                                             = 1,
	EM1FieldObjectActivateType__Explosion                                            = 2,
	EM1FieldObjectActivateType__MiniGame                                             = 3
};

/// Enum /Script/M1Data.EM1EciveActionType
/// Size: 0x04
enum class EM1EciveActionType : uint8_t
{
	EM1EciveActionType__None                                                         = 0,
	EM1EciveActionType__Marker                                                       = 1,
	EM1EciveActionType__Sound                                                        = 2,
	EM1EciveActionType__Monster                                                      = 3
};

/// Enum /Script/M1Data.EM1FieldObjectActivateConditionType
/// Size: 0x02
enum class EM1FieldObjectActivateConditionType : uint8_t
{
	EM1FieldObjectActivateConditionType__None                                        = 0,
	EM1FieldObjectActivateConditionType__Consumable                                  = 1
};

/// Enum /Script/M1Data.EM1DamageAdvantageType
/// Size: 0x04
enum class EM1DamageAdvantageType : uint8_t
{
	EM1DamageAdvantageType__None                                                     = 0,
	EM1DamageAdvantageType__Burst                                                    = 1,
	EM1DamageAdvantageType__Crush                                                    = 2,
	EM1DamageAdvantageType__Piercing                                                 = 3
};

/// Enum /Script/M1Data.EM1ElementalDamageChannel
/// Size: 0x07
enum class EM1ElementalDamageChannel : uint8_t
{
	EM1ElementalDamageChannel__None                                                  = 0,
	EM1ElementalDamageChannel__Plain                                                 = 1,
	EM1ElementalDamageChannel__Blazer                                                = 2,
	EM1ElementalDamageChannel__Glacier                                               = 3,
	EM1ElementalDamageChannel__Electricity                                           = 4,
	EM1ElementalDamageChannel__Demonic                                               = 5,
	EM1ElementalDamageChannel__Max                                                   = 6
};

/// Enum /Script/M1Data.EM1ElementalDegreeType
/// Size: 0x06
enum class EM1ElementalDegreeType : uint8_t
{
	EM1ElementalDegreeType__None                                                     = 0,
	EM1ElementalDegreeType__VeryWeak                                                 = 1,
	EM1ElementalDegreeType__Weak                                                     = 2,
	EM1ElementalDegreeType__Normal                                                   = 3,
	EM1ElementalDegreeType__Strong                                                   = 4,
	EM1ElementalDegreeType__VeryStrong                                               = 5
};

/// Enum /Script/M1Data.EM1MapType
/// Size: 0x06
enum class EM1MapType : uint8_t
{
	EM1MapType__City                                                                 = 0,
	EM1MapType__Field                                                                = 1,
	EM1MapType__Prologue                                                             = 2,
	EM1MapType__VoidBattle                                                           = 3,
	EM1MapType__InstanceDungeon                                                      = 4,
	EM1MapType__Laboratory                                                           = 5
};

/// Enum /Script/M1Data.EM1EntryPointUnlockType
/// Size: 0x03
enum class EM1EntryPointUnlockType : uint8_t
{
	EM1EntryPointUnlockType__None                                                    = 0,
	EM1EntryPointUnlockType__BattleZone                                              = 1,
	EM1EntryPointUnlockType__Overlap                                                 = 2
};

/// Enum /Script/M1Data.EM1MapBattleZoneOpenConditionType
/// Size: 0x04
enum class EM1MapBattleZoneOpenConditionType : uint8_t
{
	EM1MapBattleZoneOpenConditionType__Quest                                         = 0,
	EM1MapBattleZoneOpenConditionType__Mission                                       = 1,
	EM1MapBattleZoneOpenConditionType__FieldOpen                                     = 2,
	EM1MapBattleZoneOpenConditionType__BattleZone                                    = 3
};

/// Enum /Script/M1Data.EM1MapTargetType
/// Size: 0x03
enum class EM1MapTargetType : uint8_t
{
	EM1MapTargetType__Quest                                                          = 0,
	EM1MapTargetType__Mission                                                        = 1,
	EM1MapTargetType__VoidBattle                                                     = 2
};

/// Enum /Script/M1Data.EM1MapGoalType
/// Size: 0x02
enum class EM1MapGoalType : uint8_t
{
	EM1MapGoalType__Battle                                                           = 0,
	EM1MapGoalType__Field                                                            = 1
};

/// Enum /Script/M1Data.EM1ProductType
/// Size: 0x03
enum class EM1ProductType : uint8_t
{
	EM1ProductType__Common                                                           = 0,
	EM1ProductType__Paid                                                             = 1,
	EM1ProductType__Bundle                                                           = 2
};

/// Enum /Script/M1Data.EM1ShopCategoryType
/// Size: 0x15
enum class EM1ShopCategoryType : uint8_t
{
	EM1ShopCategoryType__None                                                        = 0,
	EM1ShopCategoryType__Popular                                                     = 1,
	EM1ShopCategoryType__BattlePass                                                  = 2,
	EM1ShopCategoryType__Character                                                   = 3,
	EM1ShopCategoryType__UltimateCharacter                                           = 4,
	EM1ShopCategoryType__LimitedSkin                                                 = 5,
	EM1ShopCategoryType__PremiumSkin                                                 = 6,
	EM1ShopCategoryType__CharacterSkin                                               = 7,
	EM1ShopCategoryType__CharacterMakeup                                             = 8,
	EM1ShopCategoryType__CommonSkin                                                  = 9,
	EM1ShopCategoryType__Paint                                                       = 10,
	EM1ShopCategoryType__Growth                                                      = 11,
	EM1ShopCategoryType__Boost                                                       = 12,
	EM1ShopCategoryType__Cash                                                        = 13,
	EM1ShopCategoryType__Veiled                                                      = 14
};

/// Enum /Script/M1Data.EM1ShopResetType
/// Size: 0x04
enum class EM1ShopResetType : uint8_t
{
	EM1ShopResetType__None                                                           = 0,
	EM1ShopResetType__Daily                                                          = 1,
	EM1ShopResetType__Weekly                                                         = 2,
	EM1ShopResetType__Monthly                                                        = 3
};

/// Enum /Script/M1Data.EM1ShopType
/// Size: 0x02
enum class EM1ShopType : uint8_t
{
	EM1ShopType__Common                                                              = 0,
	EM1ShopType__Paid                                                                = 1
};

/// Enum /Script/M1Data.EM1ImportanceType
/// Size: 0x04
enum class EM1ImportanceType : uint8_t
{
	EM1ImportanceType__None                                                          = 0,
	EM1ImportanceType__Low                                                           = 1,
	EM1ImportanceType__Medium                                                        = 2,
	EM1ImportanceType__High                                                          = 3
};

/// Enum /Script/M1Data.EM1ResearchType
/// Size: 0x07
enum class EM1ResearchType : uint8_t
{
	EM1ResearchType__None                                                            = 0,
	EM1ResearchType__Character                                                       = 1,
	EM1ResearchType__Equipment                                                       = 2,
	EM1ResearchType__CharacterMaterial                                               = 3,
	EM1ResearchType__EquipmentMaterial                                               = 4,
	EM1ResearchType__UpgradeMaterial                                                 = 5,
	EM1ResearchType__Max                                                             = 6
};

/// Enum /Script/M1Data.EM1PrerequisiteType
/// Size: 0x02
enum class EM1PrerequisiteType : uint8_t
{
	EM1PrerequisiteType__Field                                                       = 0,
	EM1PrerequisiteType__BattleZone                                                  = 1
};

/// Enum /Script/M1Data.EM1MissionRequiredActivateConditionType
/// Size: 0x03
enum class EM1MissionRequiredActivateConditionType : uint8_t
{
	EM1MissionRequiredActivateConditionType__None                                    = 0,
	EM1MissionRequiredActivateConditionType__VoidFragment                            = 1,
	EM1MissionRequiredActivateConditionType__VoidFusion                              = 2
};

/// Enum /Script/M1Data.EM1MissionRewardsEvaluateConditionType
/// Size: 0x04
enum class EM1MissionRewardsEvaluateConditionType : uint8_t
{
	EM1MissionRewardsEvaluateConditionType__None                                     = 0,
	EM1MissionRewardsEvaluateConditionType__VoidFragment                             = 1,
	EM1MissionRewardsEvaluateConditionType__VoidFusion                               = 2,
	EM1MissionRewardsEvaluateConditionType__DestructionVulgusPost                    = 3
};

/// Enum /Script/M1Data.EM1MissionCategory
/// Size: 0x13
enum class EM1MissionCategory : uint8_t
{
	EM1MissionCategory__None                                                         = 0,
	EM1MissionCategory__Prologue                                                     = 1,
	EM1MissionCategory__BaseMission                                                  = 2,
	EM1MissionCategory__DungeonField                                                 = 3,
	EM1MissionCategory__RouteMission                                                 = 4,
	EM1MissionCategory__BlockWorld                                                   = 5,
	EM1MissionCategory__DefenseWorld                                                 = 6,
	EM1MissionCategory__ResearchWorld                                                = 7,
	EM1MissionCategory__VoidFragmentField                                            = 8,
	EM1MissionCategory__VoidFusionField                                              = 9,
	EM1MissionCategory__RepeatMission6                                               = 10,
	EM1MissionCategory__VulgusPostField                                              = 11,
	EM1MissionCategory__Invasion                                                     = 12
};

/// Enum /Script/M1Data.EM1QuestStartPointType
/// Size: 0x03
enum class EM1QuestStartPointType : uint8_t
{
	EM1QuestStartPointType__None                                                     = 0,
	EM1QuestStartPointType__EnterField                                               = 1,
	EM1QuestStartPointType__InteractNpc                                              = 2
};

/// Enum /Script/M1Data.EM1QuestStartConditionType
/// Size: 0x21
enum class EM1QuestStartConditionType : uint8_t
{
	EM1QuestStartConditionType__None                                                 = 0,
	EM1QuestStartConditionType__CompleteQuest                                        = 1,
	EM1QuestStartConditionType__OwnRangedWeapon                                      = 2,
	EM1QuestStartConditionType__OwnAccessory                                         = 3,
	EM1QuestStartConditionType__OwnConsumable                                        = 4,
	EM1QuestStartConditionType__OwnCurrency                                          = 5,
	EM1QuestStartConditionType__OwnRune                                              = 6,
	EM1QuestStartConditionType__EquipRangedWeapon                                    = 7,
	EM1QuestStartConditionType__EquipAccessory                                       = 8,
	EM1QuestStartConditionType__EquipRune                                            = 9,
	EM1QuestStartConditionType__CharacterLevel                                       = 10,
	EM1QuestStartConditionType__MasteryRank                                          = 11,
	EM1QuestStartConditionType__BattleZoneProgressValue                              = 12,
	EM1QuestStartConditionType__OwnReactor                                           = 13,
	EM1QuestStartConditionType__EquipReactor                                         = 14,
	EM1QuestStartConditionType__CanMasteryRankUp                                     = 15,
	EM1QuestStartConditionType__EquipCustomizing                                     = 16,
	EM1QuestStartConditionType__OwnRecord                                            = 17,
	EM1QuestStartConditionType__OwnPlayer                                            = 18,
	EM1QuestStartConditionType__EquipCharacter                                       = 19,
	EM1QuestStartConditionType__InSeason                                             = 20
};

/// Enum /Script/M1Data.EM1CompleteConditionType
/// Size: 0x103
enum class EM1CompleteConditionType : uint8_t
{
	EM1CompleteConditionType__None                                                   = 0,
	EM1CompleteConditionType__CompleteQuest                                          = 1,
	EM1CompleteConditionType__SucceedMission                                         = 2,
	EM1CompleteConditionType__KillMonster                                            = 3,
	EM1CompleteConditionType__InteractNpc                                            = 4,
	EM1CompleteConditionType__EnterField                                             = 5,
	EM1CompleteConditionType__MasteryRank                                            = 6,
	EM1CompleteConditionType__GetRangedWeapon                                        = 7,
	EM1CompleteConditionType__GetAccessory                                           = 8,
	EM1CompleteConditionType__GetConsumable                                          = 9,
	EM1CompleteConditionType__GetCurrency                                            = 10,
	EM1CompleteConditionType__GetRune                                                = 11,
	EM1CompleteConditionType__OwnRangedWeapon                                        = 12,
	EM1CompleteConditionType__OwnAccessory                                           = 13,
	EM1CompleteConditionType__OwnConsumable                                          = 14,
	EM1CompleteConditionType__OwnCurrency                                            = 15,
	EM1CompleteConditionType__OwnRune                                                = 16,
	EM1CompleteConditionType__BuyRangedWeapon                                        = 17,
	EM1CompleteConditionType__BuyAccessory                                           = 18,
	EM1CompleteConditionType__BuyConsumable                                          = 19,
	EM1CompleteConditionType__BuyRune                                                = 20,
	EM1CompleteConditionType__SellRangedWeapon                                       = 21,
	EM1CompleteConditionType__SellAccessory                                          = 22,
	EM1CompleteConditionType__SellConsumable                                         = 23,
	EM1CompleteConditionType__SellRune                                               = 24,
	EM1CompleteConditionType__EquipRangedWeapon                                      = 25,
	EM1CompleteConditionType__EquipAccessory                                         = 26,
	EM1CompleteConditionType__EquipRune                                              = 27,
	EM1CompleteConditionType__UseConsumable                                          = 28,
	EM1CompleteConditionType__UseCurrency                                            = 29,
	EM1CompleteConditionType__EnchantRune                                            = 30,
	EM1CompleteConditionType__EnchantRuneLevel                                       = 31,
	EM1CompleteConditionType__ComposeRune                                            = 32,
	EM1CompleteConditionType__DecomposeRune                                          = 33,
	EM1CompleteConditionType__RuneCapacityIncrease                                   = 34,
	EM1CompleteConditionType__RuneSocketGrant                                        = 35,
	EM1CompleteConditionType__RaidPlay                                               = 36,
	EM1CompleteConditionType__RaidSucceed                                            = 37,
	EM1CompleteConditionType__DoParty                                                = 38,
	EM1CompleteConditionType__PartyMissionSucceed                                    = 39,
	EM1CompleteConditionType__PartyRaidPlay                                          = 40,
	EM1CompleteConditionType__PartyRaidSucceed                                       = 41,
	EM1CompleteConditionType__ResearchComplete                                       = 42,
	EM1CompleteConditionType__ResearchShorten                                        = 43,
	EM1CompleteConditionType__CharacterLevel                                         = 44,
	EM1CompleteConditionType__ChangeCharacter                                        = 45,
	EM1CompleteConditionType__AllClearBattleZone                                     = 46,
	EM1CompleteConditionType__RangedWeaponLevelUpgrade                               = 47,
	EM1CompleteConditionType__RangedWeaponPerkEnchant                                = 48,
	EM1CompleteConditionType__DecomposeRangedWeapon                                  = 49,
	EM1CompleteConditionType__EpicMonsterDeboneSuccess                               = 50,
	EM1CompleteConditionType__OwnPlayer                                              = 51,
	EM1CompleteConditionType__EnchantReactor                                         = 52,
	EM1CompleteConditionType__GetReactor                                             = 53,
	EM1CompleteConditionType__OwnReactor                                             = 54,
	EM1CompleteConditionType__BuyReactor                                             = 55,
	EM1CompleteConditionType__SellReactor                                            = 56,
	EM1CompleteConditionType__EquipReactor                                           = 57,
	EM1CompleteConditionType__DecomposeAccessory                                     = 58,
	EM1CompleteConditionType__DecomposeReactor                                       = 59,
	EM1CompleteConditionType__SucceedMissionWave                                     = 60,
	EM1CompleteConditionType__PartySucceedMissionWave                                = 61,
	EM1CompleteConditionType__BattleZoneProgressValue                                = 62,
	EM1CompleteConditionType__MultiKillMonsterByWeapon                               = 63,
	EM1CompleteConditionType__MultiKillMonsterBySKill                                = 64,
	EM1CompleteConditionType__KillMonsterBySkill                                     = 65,
	EM1CompleteConditionType__NotDamagedSucceedMission                               = 66,
	EM1CompleteConditionType__NotDamagedSucceedRaid                                  = 67,
	EM1CompleteConditionType__TimeLimitRaidSucceed                                   = 68,
	EM1CompleteConditionType__TimeLimitMissionSucceed                                = 69,
	EM1CompleteConditionType__EquipCharacter                                         = 70,
	EM1CompleteConditionType__EquipCustomizing                                       = 71,
	EM1CompleteConditionType__GiveSingleDamage                                       = 72,
	EM1CompleteConditionType__GiveTotalDamage                                        = 73,
	EM1CompleteConditionType__KillMonsterByWeapon                                    = 74,
	EM1CompleteConditionType__KillMonsterByMelee                                     = 75,
	EM1CompleteConditionType__KillMonsterByWeakness                                  = 76,
	EM1CompleteConditionType__HitMonsterWeakness                                     = 77,
	EM1CompleteConditionType__GiveTotalWeaponDamage                                  = 78,
	EM1CompleteConditionType__GiveTotalSkillDamage                                   = 79,
	EM1CompleteConditionType__GiveTotalMeleeDamage                                   = 80,
	EM1CompleteConditionType__GiveTotalWeaknessDamage                                = 81,
	EM1CompleteConditionType__GiveTotalCriticalDamage                                = 82,
	EM1CompleteConditionType__TakeSingleDamage                                       = 83,
	EM1CompleteConditionType__TakeTotalDamage                                        = 84,
	EM1CompleteConditionType__RescuePlayer                                           = 85,
	EM1CompleteConditionType__RescuedByPlayer                                        = 86,
	EM1CompleteConditionType__PlayerDeath                                            = 87,
	EM1CompleteConditionType__DestoryEpicMonsterParts                                = 88,
	EM1CompleteConditionType__GiveStatusEffect                                       = 89,
	EM1CompleteConditionType__TakeStatusEffect                                       = 90,
	EM1CompleteConditionType__GiveTotalHeal                                          = 91,
	EM1CompleteConditionType__TakeTotalHeal                                          = 92,
	EM1CompleteConditionType__CheckRecord                                            = 93,
	EM1CompleteConditionType__RangedWeaponRandomOptionChange                         = 94,
	EM1CompleteConditionType__AttackVoidFragment                                     = 95,
	EM1CompleteConditionType__SucceedMiniGame                                        = 96,
	EM1CompleteConditionType__RangedWeaponPerkEnchantTier                            = 97,
	EM1CompleteConditionType__GainTotalCommonGauge                                   = 98,
	EM1CompleteConditionType__StartDialog                                            = 99,
	EM1CompleteConditionType__EndDialog                                              = 100,
	EM1CompleteConditionType__OwnRecord                                              = 101,
	EM1CompleteConditionType__SeasonLevel                                            = 102
};

/// Enum /Script/M1Data.EM1QuestSubConditionType
/// Size: 0x13
enum class EM1QuestSubConditionType : uint8_t
{
	EM1QuestSubConditionType__None                                                   = 0,
	EM1QuestSubConditionType__EquipRangedWeaponClassType                             = 1,
	EM1QuestSubConditionType__EquipRangedWeaponId                                    = 2,
	EM1QuestSubConditionType__EquipRangedWeaponRoundsType                            = 3,
	EM1QuestSubConditionType__EquipRuneId                                            = 4,
	EM1QuestSubConditionType__EquipPlayerId                                          = 5,
	EM1QuestSubConditionType__ContentType                                            = 6,
	EM1QuestSubConditionType__MapId                                                  = 7,
	EM1QuestSubConditionType__InParty                                                = 8,
	EM1QuestSubConditionType__EquipCustomizingId                                     = 9,
	EM1QuestSubConditionType__EquipCustomizingTierType                               = 10,
	EM1QuestSubConditionType__BattleZoneId                                           = 11,
	EM1QuestSubConditionType__MissionId                                              = 12
};

/// Enum /Script/M1Data.EM1QuestDirectionType
/// Size: 0x04
enum class EM1QuestDirectionType : uint8_t
{
	EM1QuestDirectionType__None                                                      = 0,
	EM1QuestDirectionType__OperatorDialog                                            = 1,
	EM1QuestDirectionType__NpcDialog                                                 = 2,
	EM1QuestDirectionType__Sequence                                                  = 3
};

/// Enum /Script/M1Data.EM1QuestCompleteConditionGroupType
/// Size: 0x03
enum class EM1QuestCompleteConditionGroupType : uint8_t
{
	EM1QuestCompleteConditionGroupType__None                                         = 0,
	EM1QuestCompleteConditionGroupType__Always                                       = 1,
	EM1QuestCompleteConditionGroupType__TrackerOnly                                  = 2
};

/// Enum /Script/M1Data.EM1AbilityParamType
/// Size: 0x11
enum class EM1AbilityParamType : uint8_t
{
	EM1AbilityParamType__Invalid                                                     = 0,
	EM1AbilityParamType__Bool                                                        = 1,
	EM1AbilityParamType__Int                                                         = 2,
	EM1AbilityParamType__Float                                                       = 3,
	EM1AbilityParamType__Name                                                        = 4,
	EM1AbilityParamType__Enum                                                        = 5,
	EM1AbilityParamType__Vector                                                      = 6,
	EM1AbilityParamType__Object                                                      = 7,
	EM1AbilityParamType__Class                                                       = 8,
	EM1AbilityParamType__Tag                                                         = 9,
	EM1AbilityParamType__TraitTags                                                   = 10
};

/// Enum /Script/M1Data.EM1StatModifierOp
/// Size: 0x04
enum class EM1StatModifierOp : uint8_t
{
	EM1StatModifierOp__Add                                                           = 0,
	EM1StatModifierOp__Multiply                                                      = 1,
	EM1StatModifierOp__Override                                                      = 2,
	EM1StatModifierOp__Max                                                           = 3
};

/// Enum /Script/M1Data.EM1RuneClassType
/// Size: 0x08
enum class EM1RuneClassType : uint8_t
{
	EM1RuneClassType__Invalid                                                        = 0,
	EM1RuneClassType__Character                                                      = 1,
	EM1RuneClassType__WeaponRange_01                                                 = 2,
	EM1RuneClassType__WeaponRange_02                                                 = 3,
	EM1RuneClassType__WeaponRange_03                                                 = 4,
	EM1RuneClassType__WeaponRange_04                                                 = 5,
	EM1RuneClassType__WeaponRange_05                                                 = 6,
	EM1RuneClassType__AccountMelee                                                   = 20
};

/// Enum /Script/M1Data.EM1RuneSocketType
/// Size: 0x07
enum class EM1RuneSocketType : uint8_t
{
	EM1RuneSocketType__None                                                          = 0,
	EM1RuneSocketType__Neutral                                                       = 1,
	EM1RuneSocketType__Blue                                                          = 2,
	EM1RuneSocketType__Red                                                           = 3,
	EM1RuneSocketType__Green                                                         = 4,
	EM1RuneSocketType__Yellow                                                        = 5,
	EM1RuneSocketType__Purple                                                        = 6
};

/// Enum /Script/M1Data.EM1PlatformAchievementObjectiveCondition
/// Size: 0x01
enum class EM1PlatformAchievementObjectiveCondition : uint8_t
{
	EM1PlatformAchievementObjectiveCondition__QuestComplete                          = 0
};

/// Enum /Script/M1Data.EM1ReactorOptimizedConditionType
/// Size: 0x05
enum class EM1ReactorOptimizedConditionType : uint8_t
{
	EM1ReactorOptimizedConditionType__EquipWeaponClassCurrentSlot                    = 0,
	EM1ReactorOptimizedConditionType__EquipWeaponClassAnySlot                        = 1,
	EM1ReactorOptimizedConditionType__EquipWeaponCurrentSlot                         = 2,
	EM1ReactorOptimizedConditionType__EquipWeaponAnySlot                             = 3,
	EM1ReactorOptimizedConditionType__EquipCharacter                                 = 4
};

/// Enum /Script/M1Data.EM1VoidBattleDifficulty
/// Size: 0x03
enum class EM1VoidBattleDifficulty : uint8_t
{
	EM1VoidBattleDifficulty__None                                                    = 0,
	EM1VoidBattleDifficulty__Normal                                                  = 1,
	EM1VoidBattleDifficulty__Hard                                                    = 2
};

/// Enum /Script/M1Data.EM1VoidBattleUnlockConditionType
/// Size: 0x03
enum class EM1VoidBattleUnlockConditionType : uint8_t
{
	EM1VoidBattleUnlockConditionType__CompleteQuest                                  = 0,
	EM1VoidBattleUnlockConditionType__SucceedMission                                 = 1,
	EM1VoidBattleUnlockConditionType__AchieveMasteryLevel                            = 2
};

/// Enum /Script/M1Data.EM1VoidBattleStartConditionType
/// Size: 0x01
enum class EM1VoidBattleStartConditionType : uint8_t
{
	EM1VoidBattleStartConditionType__TimeSlot                                        = 0
};

/// Enum /Script/M1Data.EM1InstanceDungeonDifficulty
/// Size: 0x03
enum class EM1InstanceDungeonDifficulty : uint8_t
{
	EM1InstanceDungeonDifficulty__None                                               = 0,
	EM1InstanceDungeonDifficulty__Normal                                             = 1,
	EM1InstanceDungeonDifficulty__Hard                                               = 2
};

/// Enum /Script/M1Data.EM1MotionType
/// Size: 0x02
enum class EM1MotionType : uint8_t
{
	EM1MotionType__Solo                                                              = 0,
	EM1MotionType__Group                                                             = 1
};

/// Enum /Script/M1Data.EM1EventType
/// Size: 0x02
enum class EM1EventType : uint8_t
{
	EM1EventType__Challenge                                                          = 0,
	EM1EventType__Boosting                                                           = 1
};

/// Enum /Script/M1Data.EM1EventResetType
/// Size: 0x04
enum class EM1EventResetType : uint8_t
{
	EM1EventResetType__Permanent                                                     = 0,
	EM1EventResetType__Daily                                                         = 1,
	EM1EventResetType__Weekly                                                        = 2,
	EM1EventResetType__Monthly                                                       = 3
};

/// Enum /Script/M1Data.EM1EventBoostContentType
/// Size: 0x09
enum class EM1EventBoostContentType : uint8_t
{
	EM1EventBoostContentType__None                                                   = 0,
	EM1EventBoostContentType__KillMonster                                            = 1,
	EM1EventBoostContentType__KillBossMonster                                        = 2,
	EM1EventBoostContentType__MissionSucceed                                         = 3,
	EM1EventBoostContentType__RaidSucceed                                            = 4,
	EM1EventBoostContentType__MissionWaveSucceed                                     = 5,
	EM1EventBoostContentType__KillMissionTaskMonster                                 = 6,
	EM1EventBoostContentType__KillMissionWaveMonster                                 = 7,
	EM1EventBoostContentType__FieldObject                                            = 8
};

/// Enum /Script/M1Data.EM1DayOfWeek
/// Size: 0x07
enum class EM1DayOfWeek : uint8_t
{
	EM1DayOfWeek__Sunday                                                             = 0,
	EM1DayOfWeek__Monday                                                             = 1,
	EM1DayOfWeek__Tuesday                                                            = 2,
	EM1DayOfWeek__Wednesday                                                          = 3,
	EM1DayOfWeek__Thursday                                                           = 4,
	EM1DayOfWeek__Friday                                                             = 5,
	EM1DayOfWeek__Saturday                                                           = 6
};

/// Enum /Script/M1Data.EM1DecomposeTargetType
/// Size: 0x09
enum class EM1DecomposeTargetType : uint8_t
{
	EM1DecomposeTargetType__None                                                     = 0,
	EM1DecomposeTargetType__RangedWeapon                                             = 1,
	EM1DecomposeTargetType__Reactor                                                  = 2,
	EM1DecomposeTargetType__Necklace                                                 = 3,
	EM1DecomposeTargetType__Earrings                                                 = 4,
	EM1DecomposeTargetType__Ring                                                     = 5,
	EM1DecomposeTargetType__Bracelet                                                 = 6,
	EM1DecomposeTargetType__Perk                                                     = 7,
	EM1DecomposeTargetType__Rune                                                     = 8
};

/// Enum /Script/M1Data.EM1TitleType
/// Size: 0x02
enum class EM1TitleType : uint8_t
{
	EM1TitleType__Prefix                                                             = 0,
	EM1TitleType__Suffix                                                             = 1
};

/// Enum /Script/M1Data.EM1ChallengeDataType
/// Size: 0x03
enum class EM1ChallengeDataType : uint8_t
{
	EM1ChallengeDataType__None                                                       = 0,
	EM1ChallengeDataType__PassChallengeDaily                                         = 1,
	EM1ChallengeDataType__PassChallengeWeekly                                        = 2
};

/// Enum /Script/M1Data.EM1BattlePassType
/// Size: 0x05
enum class EM1BattlePassType : uint8_t
{
	EM1BattlePassType__None                                                          = 0,
	EM1BattlePassType__General                                                       = 1,
	EM1BattlePassType__Platinum                                                      = 2,
	EM1BattlePassType__Bonus                                                         = 3,
	EM1BattlePassType__Event                                                         = 4
};

/// Enum /Script/M1Data.EM1RecordType
/// Size: 0x03
enum class EM1RecordType : uint8_t
{
	EM1RecordType__None                                                              = 0,
	EM1RecordType__Voice                                                             = 1,
	EM1RecordType__Document                                                          = 2
};

/// Enum /Script/M1Data.EM1StatValueOrder
/// Size: 0x02
enum class EM1StatValueOrder : uint32_t
{
	EM1StatValueOrder__Default                                                       = 0,
	EM1StatValueOrder__Reverse                                                       = 1
};

/// Enum /Script/M1Data.EM1EventBoostType
/// Size: 0x05
enum class EM1EventBoostType : uint8_t
{
	EM1EventBoostType__ItemRateBoost                                                 = 0,
	EM1EventBoostType__ItemAmountBoost                                               = 1,
	EM1EventBoostType__CharExpBoost                                                  = 2,
	EM1EventBoostType__MasterExpBoost                                                = 3,
	EM1EventBoostType__WeaponExpBoost                                                = 4
};

/// Enum /Script/M1Data.EM1MiniGameType
/// Size: 0x02
enum class EM1MiniGameType : uint8_t
{
	EM1MiniGameType__None                                                            = 0,
	EM1MiniGameType__TimingRing                                                      = 1
};

/// Enum /Script/M1Data.EM1SeasonReinforceGroupType
/// Size: 0x06
enum class EM1SeasonReinforceGroupType : uint8_t
{
	EM1SeasonReinforceGroupType__None                                                = 0,
	EM1SeasonReinforceGroupType__Hunting                                             = 1,
	EM1SeasonReinforceGroupType__Elemental                                           = 2,
	EM1SeasonReinforceGroupType__Recovery                                            = 3,
	EM1SeasonReinforceGroupType__Survival                                            = 4,
	EM1SeasonReinforceGroupType__Season                                              = 5
};

/// Enum /Script/M1Data.EM1LoginPlatformTypes
/// Size: 0x06
enum class EM1LoginPlatformTypes : uint8_t
{
	EM1LoginPlatformTypes__Unknown                                                   = 0,
	EM1LoginPlatformTypes__Xbox                                                      = 1,
	EM1LoginPlatformTypes__PS                                                        = 2,
	EM1LoginPlatformTypes__Steam                                                     = 3,
	EM1LoginPlatformTypes__Nexon                                                     = 4,
	EM1LoginPlatformTypes__Dev                                                       = 5
};

/// Enum /Script/M1Data.EM1EquipmentSlotType
/// Size: 0x13
enum class EM1EquipmentSlotType : uint8_t
{
	EM1EquipmentSlotType__Ranged                                                     = 0,
	EM1EquipmentSlotType__Ranged2                                                    = 1,
	EM1EquipmentSlotType__Ranged3                                                    = 2,
	EM1EquipmentSlotType__Reactor                                                    = 9,
	EM1EquipmentSlotType__Necklace                                                   = 10,
	EM1EquipmentSlotType__Earring                                                    = 11,
	EM1EquipmentSlotType__Ring                                                       = 12,
	EM1EquipmentSlotType__Bracelet                                                   = 13,
	EM1EquipmentSlotType__Face                                                       = 20,
	EM1EquipmentSlotType__Hair                                                       = 21,
	EM1EquipmentSlotType__AltWeapon                                                  = 90,
	EM1EquipmentSlotType__PickupWeapon                                               = 91,
	EM1EquipmentSlotType__Max                                                        = 99
};

/// Enum /Script/M1Data.EM1PresetSlotType
/// Size: 0x14
enum class EM1PresetSlotType : uint8_t
{
	EM1PresetSlotType__Ranged                                                        = 0,
	EM1PresetSlotType__Ranged2                                                       = 1,
	EM1PresetSlotType__Ranged3                                                       = 2,
	EM1PresetSlotType__Reactor                                                       = 9,
	EM1PresetSlotType__Necklace                                                      = 10,
	EM1PresetSlotType__Earring                                                       = 11,
	EM1PresetSlotType__Ring                                                          = 12,
	EM1PresetSlotType__Bracelet                                                      = 13,
	EM1PresetSlotType__Face                                                          = 20,
	EM1PresetSlotType__Hair                                                          = 21,
	EM1PresetSlotType__PlayerCharacter                                               = 80,
	EM1PresetSlotType__AltWeapon                                                     = 90,
	EM1PresetSlotType__PickupWeapon                                                  = 91,
	EM1PresetSlotType__Max                                                           = 99
};

/// Enum /Script/M1Data.EM1ItemType
/// Size: 0x13
enum class EM1ItemType : uint8_t
{
	EM1ItemType__None                                                                = 0,
	EM1ItemType__Currency                                                            = 1,
	EM1ItemType__Equipment                                                           = 2,
	EM1ItemType__Consumable                                                          = 3,
	EM1ItemType__Rune                                                                = 4,
	EM1ItemType__Character                                                           = 5,
	EM1ItemType__InstantUse                                                          = 6,
	EM1ItemType__Customizing                                                         = 7,
	EM1ItemType__Title                                                               = 8,
	EM1ItemType__Record                                                              = 9,
	EM1ItemType__CurrencyInternal                                                    = 10,
	EM1ItemType__ItemSelector                                                        = 11,
	EM1ItemType__Max                                                                 = 12
};

/// Enum /Script/M1Data.EM1CustomizingItemCategoryType
/// Size: 0x16
enum class EM1CustomizingItemCategoryType : uint8_t
{
	EM1CustomizingItemCategoryType__None                                             = 0,
	EM1CustomizingItemCategoryType__CharacterHeadSkin                                = 1,
	EM1CustomizingItemCategoryType__CharacterBodySkin                                = 2,
	EM1CustomizingItemCategoryType__CharacterBackAttachment                          = 3,
	EM1CustomizingItemCategoryType__CharacterChestAttachment                         = 4,
	EM1CustomizingItemCategoryType__CharacterMakeupSkin                              = 5,
	EM1CustomizingItemCategoryType__WeaponSkin                                       = 100,
	EM1CustomizingItemCategoryType__Paint                                            = 110,
	EM1CustomizingItemCategoryType__GrapplingHookSkin                                = 200,
	EM1CustomizingItemCategoryType__SpawnSkin                                        = 201,
	EM1CustomizingItemCategoryType__UITheme                                          = 202,
	EM1CustomizingItemCategoryType__UINameCard                                       = 203,
	EM1CustomizingItemCategoryType__LobbyMotion                                      = 204,
	EM1CustomizingItemCategoryType__Ecive                                            = 205,
	EM1CustomizingItemCategoryType__EmotionSocialMotion                              = 206,
	EM1CustomizingItemCategoryType__EmotionSpray                                     = 207
};

/// Enum /Script/M1Data.EM1CurrencyInternalType
/// Size: 0x12
enum class EM1CurrencyInternalType : uint16_t
{
	EM1CurrencyInternalType__None                                                    = 0,
	EM1CurrencyInternalType__Gold                                                    = 1,
	EM1CurrencyInternalType__BlackMana                                               = 3,
	EM1CurrencyInternalType__Qulipothium                                             = 4,
	EM1CurrencyInternalType__BattleCoin                                              = 6,
	EM1CurrencyInternalType__PlatinumCoin                                            = 7,
	EM1CurrencyInternalType__BonusCoin                                               = 8,
	EM1CurrencyInternalType__BlueCash_Paid                                           = 111,
	EM1CurrencyInternalType__BlueCash_Free                                           = 112,
	EM1CurrencyInternalType__RedCash_Paid                                            = 121,
	EM1CurrencyInternalType__RedCash_Free                                            = 122,
	EM1CurrencyInternalType__Max                                                     = 131
};

/// Enum /Script/M1Data.EM1BuffSubItemType
/// Size: 0x11
enum class EM1BuffSubItemType : uint8_t
{
	EM1BuffSubItemType__None                                                         = 0,
	EM1BuffSubItemType__CharacterExpBoost                                            = 1,
	EM1BuffSubItemType__WeaponProficiencyBoost                                       = 2,
	EM1BuffSubItemType__GoldBoost                                                    = 3,
	EM1BuffSubItemType__QulipothiumBoost                                             = 4,
	EM1BuffSubItemType__InventoryExpansion                                           = 5,
	EM1BuffSubItemType__CharcterInvenExpansion                                       = 6,
	EM1BuffSubItemType__ConsumableInvenExpansion                                     = 7,
	EM1BuffSubItemType__WareHouseInvenExpansion                                      = 8,
	EM1BuffSubItemType__PresetSlotExpansion                                          = 9,
	EM1BuffSubItemType__SeasonExpBoost                                               = 10
};

/// Enum /Script/M1Data.EM1StatType
/// Size: 0x229
enum class EM1StatType : uint8_t
{
	EM1StatType__Stat_MaxHp                                                          = 0,
	EM1StatType__Stat_KnockbackSpeed                                                 = 1,
	EM1StatType__Stat_KnockbackTime                                                  = 2,
	EM1StatType__Stat_KnockdownTime                                                  = 3,
	EM1StatType__Stat_RangeMax                                                       = 4,
	EM1StatType__Stat_SpreadSize_Deprecated                                          = 5,
	EM1StatType__Stat_CrosshairSizeMax                                               = 6,
	EM1StatType__Stat_Impulse                                                        = 7,
	EM1StatType__Stat_AimOnDelay                                                     = 8,
	EM1StatType__Stat_AimOffDelay                                                    = 9,
	EM1StatType__Stat_JumpZVelocity                                                  = 10,
	EM1StatType__Stat_CurrentEnergyShield                                            = 11,
	EM1StatType__Stat_InteractionRevive                                              = 12,
	EM1StatType__Stat_RunSpeed                                                       = 13,
	EM1StatType__Stat_SprintSpeed                                                    = 14,
	EM1StatType__Stat_ZoomMoveSpeed                                                  = 15,
	EM1StatType__Stat_RoundsPerMagazine                                              = 16,
	EM1StatType__Stat_ReloadRounds                                                   = 17,
	EM1StatType__Stat_FireInterval                                                   = 18,
	EM1StatType__Stat_MaxMp                                                          = 19,
	EM1StatType__Stat_MaxEnergyShield                                                = 20,
	EM1StatType__Stat_ATK                                                            = 21,
	EM1StatType__Stat_ATKMin                                                         = 22,
	EM1StatType__Stat_ATKMax                                                         = 23,
	EM1StatType__Stat_DEF                                                            = 24,
	EM1StatType__Stat_CriticalChance                                                 = 25,
	EM1StatType__Stat_CriticalATKIncrease                                            = 26,
	EM1StatType__Stat_ShellCount                                                     = 27,
	EM1StatType__Stat_RoundsConsume                                                  = 28,
	EM1StatType__Stat_AimMoveSpeed                                                   = 29,
	EM1StatType__Stat_WeaknessDamageIncrease                                         = 30,
	EM1StatType__Stat_SpreadZoomSize_Deprecated                                      = 31,
	EM1StatType__Stat_CrosshairMoveSizeModifier                                      = 32,
	EM1StatType__Stat_CrosshairFireSizeModifier                                      = 33,
	EM1StatType__Stat_CrosshairZoomFireSizeModifier                                  = 34,
	EM1StatType__Stat_CrosshairRecoverySpeed                                         = 35,
	EM1StatType__Stat_CrosshairChangeSpeed                                           = 36,
	EM1StatType__Stat_ClimbSpeed                                                     = 37,
	EM1StatType__Stat_StressMaxRate_Deprecated                                       = 38,
	EM1StatType__Stat_StressDamageRate                                               = 39,
	EM1StatType__Stat_StressDecreaseRate                                             = 40,
	EM1StatType__Stat_NonCombatEntryTime_Deprecated                                  = 41,
	EM1StatType__Stat_StressDecreaseStartTime                                        = 42,
	EM1StatType__Stat_WalkSpeed                                                      = 43,
	EM1StatType__Stat_MoveDestructivePower                                           = 44,
	EM1StatType__Stat_WeaponProjHitRadiusRate                                        = 45,
	EM1StatType__Stat_EvadeTime                                                      = 46,
	EM1StatType__Stat_EvadeRecoveryTime                                              = 47,
	EM1StatType__Stat_Domination                                                     = 48,
	EM1StatType__Stat_Manipulation                                                   = 49,
	EM1StatType__Stat_Fortitude                                                      = 50,
	EM1StatType__Stat_CrosshairSizeMin                                               = 51,
	EM1StatType__Stat_ReloadSpeed                                                    = 52,
	EM1StatType__Stat_ReloadCompleteDelay                                            = 53,
	EM1StatType__Stat_ReduceRangeStart                                               = 54,
	EM1StatType__Stat_ReduceRangeEnd                                                 = 55,
	EM1StatType__Stat_ATKReductionByRange                                            = 56,
	EM1StatType__Stat_ATKExplosion                                                   = 57,
	EM1StatType__Stat_ATKBlazer                                                      = 58,
	EM1StatType__Stat_ATKGlacier                                                     = 59,
	EM1StatType__Stat_ATKElectricity                                                 = 60,
	EM1StatType__Stat_ATKDemonic                                                     = 61,
	EM1StatType__Stat_DEFBlazer                                                      = 62,
	EM1StatType__Stat_DEFGlacier                                                     = 63,
	EM1StatType__Stat_DEFElectricity                                                 = 64,
	EM1StatType__Stat_DEFDemonic                                                     = 65,
	EM1StatType__Stat_RESCriticalChance                                              = 66,
	EM1StatType__Stat_ReloadTime                                                     = 67,
	EM1StatType__Stat_Burst                                                          = 68,
	EM1StatType__Stat_Crush                                                          = 69,
	EM1StatType__Stat_Piercing                                                       = 70,
	EM1StatType__Stat_FireBurstInterval                                              = 71,
	EM1StatType__Stat_ATKReductionByExplosionRange                                   = 72,
	EM1StatType__Stat_ZoomOutDelay                                                   = 73,
	EM1StatType__Stat_Penetration                                                    = 74,
	EM1StatType__Stat_PenetrationDefence                                             = 75,
	EM1StatType__Stat_WeaponDestructivePower                                         = 76,
	EM1StatType__Stat_SkillDestructivePower                                          = 77,
	EM1StatType__Stat_FireIncreaseSpread_Deprecated                                  = 78,
	EM1StatType__Stat_LifeTime_Deprecated                                            = 79,
	EM1StatType__Stat_BonusLifeTime_Deprecated                                       = 80,
	EM1StatType__Stat_RangeMin_Deprecated                                            = 81,
	EM1StatType__Stat_WireCooltimeCoefficient                                        = 82,
	EM1StatType__Stat_WireChargingTimeCoefficient                                    = 83,
	EM1StatType__Stat_KnockbackAttackRate                                            = 84,
	EM1StatType__Stat_KnockbackDefenceResistance                                     = 85,
	EM1StatType__Stat_KnockbackTimeResistance                                        = 86,
	EM1StatType__Stat_KnockbackSpeedResistance                                       = 87,
	EM1StatType__Stat_KnockdownAttackRate                                            = 88,
	EM1StatType__Stat_KnockdownXSpeed                                                = 89,
	EM1StatType__Stat_KnockdownZSpeed                                                = 90,
	EM1StatType__Stat_KnockdownDefenceResistance                                     = 91,
	EM1StatType__Stat_KnockdownXSpeedResistance                                      = 92,
	EM1StatType__Stat_KnockdownZSpeedResistance                                      = 93,
	EM1StatType__Stat_KnockdownTimeResistance                                        = 94,
	EM1StatType__Stat_MeleeSpecialAttackReduceCoolTime_Deprecated                    = 95,
	EM1StatType__Stat_HitStopAttackPoint                                             = 96,
	EM1StatType__Stat_HitStopDefencePoint                                            = 97,
	EM1StatType__Stat_BerserkMoveSpeed                                               = 98,
	EM1StatType__Stat_BerserkMaxRate                                                 = 99,
	EM1StatType__Stat_BerserkDamageRate                                              = 100,
	EM1StatType__Stat_BerserkDecreaseStartTime                                       = 101,
	EM1StatType__Stat_BerserkDecreaseRate                                            = 102,
	EM1StatType__Stat_BerserkMaintenanceTime                                         = 103,
	EM1StatType__Stat_NaturalRecoveryTickTimeHp                                      = 104,
	EM1StatType__Stat_NaturalRecoveryTickTimeMp                                      = 105,
	EM1StatType__Stat_NaturalRecoveryTickTimeEnergyShield                            = 106,
	EM1StatType__Stat_NaturalRecoveryHp                                              = 107,
	EM1StatType__Stat_NaturalRecoveryMp                                              = 108,
	EM1StatType__Stat_NaturalRecoveryEnergyShield                                    = 109,
	EM1StatType__Stat_InBattleNaturalRecoveryHp                                      = 110,
	EM1StatType__Stat_InBattleNaturalRecoveryMp                                      = 111,
	EM1StatType__Stat_InBattleNaturalRecoveryEnergyShield                            = 112,
	EM1StatType__Stat_CurrentHp                                                      = 113,
	EM1StatType__Stat_CurrentMp                                                      = 114,
	EM1StatType__Stat_MaxCommonGauge                                                 = 115,
	EM1StatType__Stat_CurrentCommonGauge                                             = 116,
	EM1StatType__Stat_DEFInflection_VarX1_Deprecated                                 = 117,
	EM1StatType__Stat_DEFInflection_VarX2_Deprecated                                 = 118,
	EM1StatType__Stat_DEFInflection_VarX3_Deprecated                                 = 119,
	EM1StatType__Stat_WireStackCountIncrease                                         = 120,
	EM1StatType__Stat_RecoilCoefficient                                              = 121,
	EM1StatType__Stat_SkillCooltimeCoefficient                                       = 122,
	EM1StatType__Stat_SkillCostCoefficient                                           = 123,
	EM1StatType__Stat_SkillATKCoefficient                                            = 124,
	EM1StatType__Stat_FinalDamageCoefficient_Deprecated                              = 125,
	EM1StatType__Stat_HpOrbRecoveryCoefficient_Deprecated                            = 126,
	EM1StatType__Stat_MpOrbRecoveryCoefficient_Deprecated                            = 127,
	EM1StatType__Stat_EmptyRoundsReloadTimeSpeed                                     = 128,
	EM1StatType__Stat_SkillDurationIncrease                                          = 129,
	EM1StatType__Stat_SkillDurationDecrease                                          = 130,
	EM1StatType__Stat_SkillScaleCoefficient                                          = 131,
	EM1StatType__Stat_WeaponChangingSpeed                                            = 132,
	EM1StatType__Stat_MaxGeneralRoundsCoefficient                                    = 133,
	EM1StatType__Stat_MaxEnhancedRoundsCoefficient                                   = 134,
	EM1StatType__Stat_MaxImpactRoundsCoefficient                                     = 135,
	EM1StatType__Stat_MaxHighpowerRoundsCoefficient                                  = 136,
	EM1StatType__Stat_NaturalRecoveryTickPR_Deprecated                               = 137,
	EM1StatType__Stat_InBattleNaturalRecoveryPR_Deprecated                           = 138,
	EM1StatType__Stat_NaturalRecoveryPR_Deprecated                                   = 139,
	EM1StatType__Stat_CrosshairJumpSizeModifier                                      = 140,
	EM1StatType__Stat_PhysicalATK                                                    = 141,
	EM1StatType__Stat_NatureATK                                                      = 142,
	EM1StatType__Stat_GiveHpRecoveryCoefficient                                      = 143,
	EM1StatType__Stat_TakeHpRecoveryCoefficient                                      = 144,
	EM1StatType__Stat_GiveMpRecoveryCoefficient                                      = 145,
	EM1StatType__Stat_TakeMpRecoveryCoefficient                                      = 146,
	EM1StatType__Stat_RWATKCoefficient                                               = 147,
	EM1StatType__Stat_GiveFinalDamageCoefficient                                     = 148,
	EM1StatType__Stat_TakeFinalDamageCoefficient                                     = 149,
	EM1StatType__Stat_LevelFactor                                                    = 150,
	EM1StatType__Stat_SkillATKCorrection                                             = 151,
	EM1StatType__Stat_ItemLevelCorrection                                            = 152,
	EM1StatType__Stat_MaxStressGauge                                                 = 153,
	EM1StatType__Stat_CurrentStressGauge                                             = 154,
	EM1StatType__Stat_MaxBerserkGauge                                                = 155,
	EM1StatType__Stat_CurrentBerserkGauge                                            = 156,
	EM1StatType__Stat_SkillATKPower                                                  = 157,
	EM1StatType__Stat_SkillPowerCoefficient                                          = 158,
	EM1StatType__Stat_SkillPlainPowerCoefficient                                     = 159,
	EM1StatType__Stat_SkillBlazerPowerCoefficient                                    = 160,
	EM1StatType__Stat_SkillGlacierPowerCoefficient                                   = 161,
	EM1StatType__Stat_SkillElectricityPowerCoefficient                               = 162,
	EM1StatType__Stat_SkillDemonicPowerCoefficient                                   = 163,
	EM1StatType__Stat_SkillFusionPowerCoefficient                                    = 164,
	EM1StatType__Stat_SkillSingularPowerCoefficient                                  = 165,
	EM1StatType__Stat_SkillDimensionPowerCoefficient                                 = 166,
	EM1StatType__Stat_SkillTechPowerCoefficient                                      = 167,
	EM1StatType__Stat_SkillPlainATKCoefficient                                       = 168,
	EM1StatType__Stat_SkillBlazerATKCoefficient                                      = 169,
	EM1StatType__Stat_SkillGlacierATKCoefficient                                     = 170,
	EM1StatType__Stat_SkillElectricityATKCoefficient                                 = 171,
	EM1StatType__Stat_SkillDemonicATKCoefficient                                     = 172,
	EM1StatType__Stat_SkillFusionATKCoefficient                                      = 173,
	EM1StatType__Stat_SkillSingularATKCoefficient                                    = 174,
	EM1StatType__Stat_SkillDimensionATKCoefficient                                   = 175,
	EM1StatType__Stat_SkillTechATKCoefficient                                        = 176,
	EM1StatType__Stat_SkillCriticalChance                                            = 178,
	EM1StatType__Stat_SkillCriticalATKIncrease                                       = 179,
	EM1StatType__Stat_SkillRESCriticalChance                                         = 180,
	EM1StatType__Stat_DEFSkill                                                       = 181,
	EM1StatType__Stat_DEFPlain                                                       = 182,
	EM1StatType__Stat_Accuracy                                                       = 183,
	EM1StatType__Stat_ZoomAccuracy                                                   = 184,
	EM1StatType__Stat_InvokeChanceElementalSE                                        = 185,
	EM1StatType__Stat_GiveShieldRecoveryCoefficient                                  = 186,
	EM1StatType__Stat_TakeShieldRecoveryCoefficient                                  = 187,
	EM1StatType__Stat_MaxSprintSpeed                                                 = 188,
	EM1StatType__Stat_WeaponProjHitRadius                                            = 189,
	EM1StatType__Stat_DBNORescueTime                                                 = 190,
	EM1StatType__Stat_RuneDropCoefficient                                            = 191,
	EM1StatType__Stat_EquipmentDropCoefficient                                       = 192,
	EM1StatType__Stat_ConsumableDropCoefficient                                      = 193,
	EM1StatType__Stat_GoldDropCoefficient                                            = 194,
	EM1StatType__Stat_QulipothiumDropCoefficient                                     = 195,
	EM1StatType__Stat_CharEXPCoefficient                                             = 196,
	EM1StatType__Stat_ProficiencyCoefficient                                         = 197,
	EM1StatType__Stat_TypeBossATKBonus                                               = 198,
	EM1StatType__Stat_TypeDarknessATKBonus                                           = 199,
	EM1StatType__Stat_TypeTruthATKBonus                                              = 200,
	EM1StatType__Stat_TypeImmortalATKBonus                                           = 201,
	EM1StatType__Stat_DBNODurationCoefficient                                        = 202,
	EM1StatType__Stat_LootDistanceCoefficient                                        = 203,
	EM1StatType__Stat_DoubleJumpZVelocity                                            = 204,
	EM1StatType__Stat_EciveSearchDistanceCoefficient                                 = 205,
	EM1StatType__Stat_EciveSearchRemainTimeCoefficient                               = 206,
	EM1StatType__Stat_SubSkillATKPower                                               = 207,
	EM1StatType__Stat_SubSkillATKCoefficient                                         = 208,
	EM1StatType__Stat_TakeWeaknessDamageCoefficient_Deprecated                       = 209,
	EM1StatType__Stat_RWChargeRateCoefficient                                        = 210,
	EM1StatType__Stat_RWDischargeRateCoefficient                                     = 211,
	EM1StatType__Stat_TypeBossSkillATKBonus                                          = 212,
	EM1StatType__Stat_TypeDarknessSkillATKBonus                                      = 213,
	EM1StatType__Stat_TypeTruthSkillATKBonus                                         = 214,
	EM1StatType__Stat_TypeImmortalSkillATKBonus                                      = 215,
	EM1StatType__Stat_BurstDelay                                                     = 216,
	EM1StatType__Stat_DefaultStressStopDuration                                      = 217,
	EM1StatType__Stat_FieldTimingRing_LimitTimeRatio                                 = 218,
	EM1StatType__Stat_FieldTimingRing_NeedleRotationTimeRatio                        = 219,
	EM1StatType__Stat_FieldTimingRing_ReduceSuccessCount                             = 220,
	EM1StatType__Stat_FieldTimingRing_IncreaseTimingAngleMax                         = 221,
	EM1StatType__Stat_FieldTimingRing_FailTimeRatio                                  = 222,
	EM1StatType__Stat_SkillVelocityAndRangeCoefficient                               = 223,
	EM1StatType__Stat_StressMaxHpRandMinRate                                         = 224,
	EM1StatType__Stat_StressMaxHpRandMaxRate                                         = 225,
	EM1StatType__Stat_StressMaxHpCurrentRate                                         = 226,
	EM1StatType__Stat_ActionSpeedCoeffcient                                          = 227,
	EM1StatType__Stat_ProjectilePenetration                                          = 228,
	EM1StatType__Stat_ProjectilePenetrationDefence                                   = 229
};

/// Enum /Script/M1Data.EM1InventoryType
/// Size: 0x08
enum class EM1InventoryType : uint8_t
{
	EM1InventoryType__None                                                           = 0,
	EM1InventoryType__Equipment                                                      = 1,
	EM1InventoryType__WareHouse                                                      = 2,
	EM1InventoryType__Character                                                      = 3,
	EM1InventoryType__Consumable                                                     = 4,
	EM1InventoryType__Rune                                                           = 5,
	EM1InventoryType__PresetSlot                                                     = 6,
	EM1InventoryType__Max                                                            = 7
};

/// Enum /Script/M1Data.EM1MapSubType
/// Size: 0x05
enum class EM1MapSubType : uint8_t
{
	EM1MapSubType__None                                                              = 0,
	EM1MapSubType__VoidBattle                                                        = 1,
	EM1MapSubType__WorldMission                                                      = 2,
	EM1MapSubType__InstanceDungeon                                                   = 3,
	EM1MapSubType__InvasionDungeon                                                   = 4
};

/// Enum /Script/M1Data.EM1MapDifficulty
/// Size: 0x03
enum class EM1MapDifficulty : uint8_t
{
	EM1MapDifficulty__None                                                           = 0,
	EM1MapDifficulty__Normal                                                         = 1,
	EM1MapDifficulty__Hard                                                           = 2
};

/// Enum /Script/M1Data.EM1QuestType
/// Size: 0x13
enum class EM1QuestType : uint8_t
{
	EM1QuestType__Main                                                               = 0,
	EM1QuestType__Field                                                              = 1,
	EM1QuestType__Event                                                              = 2,
	EM1QuestType__Sub                                                                = 3,
	EM1QuestType__Platform                                                           = 4,
	EM1QuestType__PassChallengeDaily                                                 = 5,
	EM1QuestType__PassChallengeWeekly                                                = 6,
	EM1QuestType__ContentsUnlock                                                     = 7,
	EM1QuestType__Achievement                                                        = 8,
	EM1QuestType__Evolution                                                          = 9,
	EM1QuestType__CharacterStory                                                     = 10,
	EM1QuestType__Season                                                             = 11,
	EM1QuestType__All                                                                = 100
};

/// Enum /Script/M1Data.EM1RuneSubClassType
/// Size: 0x03
enum class EM1RuneSubClassType : uint8_t
{
	EM1RuneSubClassType__Main                                                        = 0,
	EM1RuneSubClassType__CharacterSub                                                = 1,
	EM1RuneSubClassType__SkillRune                                                   = 2
};

/// Enum /Script/M1Data.EM1MailType
/// Size: 0x06
enum class EM1MailType : uint8_t
{
	EM1MailType__All                                                                 = 0,
	EM1MailType__PostMail                                                            = 1,
	EM1MailType__LostMail                                                            = 2,
	EM1MailType__NarrativeMail                                                       = 3,
	EM1MailType__EventMail                                                           = 4,
	EM1MailType__PaidMail                                                            = 5
};

/// Enum /Script/M1Data.EM1ChattingType
/// Size: 0x06
enum class EM1ChattingType : uint8_t
{
	EM1ChattingType__World                                                           = 0,
	EM1ChattingType__DirectMessage                                                   = 1,
	EM1ChattingType__System                                                          = 2,
	EM1ChattingType__Normal                                                          = 3,
	EM1ChattingType__Party                                                           = 4,
	EM1ChattingType__Notice                                                          = 5
};

/// Enum /Script/M1Data.EM1MoveDedicatedServerReason
/// Size: 0x08
enum class EM1MoveDedicatedServerReason : uint32_t
{
	EM1MoveDedicatedServerReason__Cheat                                              = -1,
	EM1MoveDedicatedServerReason__ToThePartyMaster                                   = 0,
	EM1MoveDedicatedServerReason__ToThePartyMember                                   = 1,
	EM1MoveDedicatedServerReason__PartyMove                                          = 2,
	EM1MoveDedicatedServerReason__MaxCity                                            = 3,
	EM1MoveDedicatedServerReason__Matching                                           = 4,
	EM1MoveDedicatedServerReason__Support                                            = 5,
	EM1MoveDedicatedServerReason__Disallow                                           = 6
};

/// Enum /Script/M1Data.EM1MatchingCancelReason
/// Size: 0x07
enum class EM1MatchingCancelReason : uint32_t
{
	EM1MatchingCancelReason__Canceled                                                = 0,
	EM1MatchingCancelReason__TimeOut                                                 = 1,
	EM1MatchingCancelReason__MemberLogout                                            = 2,
	EM1MatchingCancelReason__MatchingSucceeded                                       = 3,
	EM1MatchingCancelReason__ReserveGameFailed                                       = 4,
	EM1MatchingCancelReason__FailAlreadyPrivateMatched                               = 18,
	EM1MatchingCancelReason__FailAlreadyMatchingFound                                = 19
};

/// Enum /Script/M1Data.EM1ExternalLinkerType
/// Size: 0x03
enum class EM1ExternalLinkerType : uint8_t
{
	EM1ExternalLinkerType__Dev                                                       = 0,
	EM1ExternalLinkerType__DevTOY                                                    = 1,
	EM1ExternalLinkerType__TOY                                                       = 2
};

/// Enum /Script/M1Data.EM1Locale
/// Size: 0x14
enum class EM1Locale : uint8_t
{
	EM1Locale__None                                                                  = 0,
	EM1Locale__KO                                                                    = 1,
	EM1Locale__EN                                                                    = 2,
	EM1Locale__DE                                                                    = 3,
	EM1Locale__FR                                                                    = 4,
	EM1Locale__JA                                                                    = 5,
	EM1Locale__ZH_Hans                                                               = 6,
	EM1Locale__ZH_Hant                                                               = 7,
	EM1Locale__IT                                                                    = 8,
	EM1Locale__PL                                                                    = 9,
	EM1Locale__PT                                                                    = 10,
	EM1Locale__RU                                                                    = 11,
	EM1Locale__ES                                                                    = 12,
	EM1Locale__Max                                                                   = 13
};

/// Enum /Script/M1Data.EM1MatchRegion
/// Size: 0x10
enum class EM1MatchRegion : uint8_t
{
	EM1MatchRegion__None                                                             = 0,
	EM1MatchRegion__koreacentral                                                     = 1,
	EM1MatchRegion__eastus                                                           = 2,
	EM1MatchRegion__northcentralus                                                   = 3,
	EM1MatchRegion__brazilsouth                                                      = 4,
	EM1MatchRegion__westus                                                           = 5,
	EM1MatchRegion__germanywestcentral                                               = 6,
	EM1MatchRegion__eastasia                                                         = 7,
	EM1MatchRegion__polandcentral                                                    = 8,
	EM1MatchRegion__southeastasia                                                    = 10
};

/// Enum /Script/M1Data.EM1ForceRebuild
/// Size: 0x02
enum class EM1ForceRebuild : uint8_t
{
	EM1ForceRebuild__None                                                            = 0,
	EM1ForceRebuild__RollingVersion                                                  = 1
};

/// Enum /Script/M1Data.EM1PerkReason
/// Size: 0x08
enum class EM1PerkReason : uint32_t
{
	EM1PerkReason__Unknown                                                           = 0,
	EM1PerkReason__Success                                                           = 1,
	EM1PerkReason__InvalidWeapon                                                     = 2,
	EM1PerkReason__InvalidPerk                                                       = 3,
	EM1PerkReason__AlreadyMaxLevel                                                   = 4,
	EM1PerkReason__ChangeResourceFail                                                = 5,
	EM1PerkReason__DestroyResourceItemFail                                           = 6,
	EM1PerkReason__AccountNotExists                                                  = 7
};

/// Enum /Script/M1Data.EM1ItemTagStatus
/// Size: 0x03
enum class EM1ItemTagStatus : uint8_t
{
	EM1ItemTagStatus__None                                                           = 0,
	EM1ItemTagStatus__Junk                                                           = 1,
	EM1ItemTagStatus__BookMark                                                       = 2
};

/// Enum /Script/M1Data.EM1TitleReason
/// Size: 0x05
enum class EM1TitleReason : uint32_t
{
	EM1TitleReason__Unknown                                                          = 0,
	EM1TitleReason__Success                                                          = 1,
	EM1TitleReason__InvalidData                                                      = 2,
	EM1TitleReason__InvalidValue                                                     = 3,
	EM1TitleReason__AccountNotExists                                                 = 4
};

/// Enum /Script/M1Data.EM1BoostType
/// Size: 0x04
enum class EM1BoostType : uint8_t
{
	EM1BoostType__Event                                                              = 0,
	EM1BoostType__Stat                                                               = 1,
	EM1BoostType__Item                                                               = 2,
	EM1BoostType__Max                                                                = 3
};

/// Enum /Script/M1Data.EM1CommonShopResultType
/// Size: 0x33
enum class EM1CommonShopResultType : uint32_t
{
	EM1CommonShopResultType__Unknown                                                 = 0,
	EM1CommonShopResultType__Success                                                 = 1,
	EM1CommonShopResultType__CantSellCurrency                                        = 2,
	EM1CommonShopResultType__ItemInvalid                                             = 3,
	EM1CommonShopResultType__ItemTypeInvalid                                         = 4,
	EM1CommonShopResultType__itemTemplateIdInvalid                                   = 5,
	EM1CommonShopResultType__CantChangeConsumable                                    = 6,
	EM1CommonShopResultType__CantSellItem                                            = 7,
	EM1CommonShopResultType__CantChangeCurrency                                      = 8,
	EM1CommonShopResultType__CantBuyCurrency                                         = 9,
	EM1CommonShopResultType__InvalidShopId                                           = 10,
	EM1CommonShopResultType__CantBuyItem                                             = 11,
	EM1CommonShopResultType__InvalidAccount                                          = 12,
	EM1CommonShopResultType__NotEnoughResource                                       = 13,
	EM1CommonShopResultType__InvalidCount                                            = 14,
	EM1CommonShopResultType__ProductInvalid                                          = 15,
	EM1CommonShopResultType__CantBuyPaidProduct                                      = 16,
	EM1CommonShopResultType__NoPrice                                                 = 17,
	EM1CommonShopResultType__OverBuyableCount                                        = 18,
	EM1CommonShopResultType__InvalidBattlePassSeason                                 = 19,
	EM1CommonShopResultType__NotEnoughBattlePassLevel                                = 20,
	EM1CommonShopResultType__InvalidData                                             = 21,
	EM1CommonShopResultType__DoesNotBuyRequiredPageItem                              = 22,
	EM1CommonShopResultType__CantBuyMultipleItem                                     = 23,
	EM1CommonShopResultType__CantBuyPremiumBattlePassItem                            = 24,
	EM1CommonShopResultType__DuplicateItem                                           = 25,
	EM1CommonShopResultType__NotInSaleTime                                           = 26,
	EM1CommonShopResultType__CantBuyMultipleNonStackable                             = 27,
	EM1CommonShopResultType__SoldButInMail                                           = 28,
	EM1CommonShopResultType__NotEnoughMasteryLevel                                   = 29,
	EM1CommonShopResultType__CantBuyBattlePassPremiumItem                            = 30,
	EM1CommonShopResultType__CantBuyResearchItem                                     = 31,
	EM1CommonShopResultType__ProductProhibited                                       = 32
};

/// Enum /Script/M1Data.EM1CheatCreateCharacterResultType
/// Size: 0x07
enum class EM1CheatCreateCharacterResultType : uint32_t
{
	EM1CheatCreateCharacterResultType__Unknown                                       = 0,
	EM1CheatCreateCharacterResultType__Success                                       = 1,
	EM1CheatCreateCharacterResultType__CharacterTypeDuplicated                       = 2,
	EM1CheatCreateCharacterResultType__LackOfCharacterSlots                          = 3,
	EM1CheatCreateCharacterResultType__InvalidAccountUid                             = 4,
	EM1CheatCreateCharacterResultType__InvalidTemplateId                             = 5,
	EM1CheatCreateCharacterResultType__CantCreateCharacter                           = 6
};

/// Enum /Script/M1Data.EM1ResearchStatus
/// Size: 0x05
enum class EM1ResearchStatus : uint8_t
{
	EM1ResearchStatus__None                                                          = 0,
	EM1ResearchStatus__Proceed                                                       = 1,
	EM1ResearchStatus__Complete                                                      = 2,
	EM1ResearchStatus__Recipiency                                                    = 3,
	EM1ResearchStatus__Max                                                           = 4
};

/// Enum /Script/M1Data.EM1ResearchReason
/// Size: 0x21
enum class EM1ResearchReason : uint32_t
{
	EM1ResearchReason__Unknown                                                       = 0,
	EM1ResearchReason__Success                                                       = 1,
	EM1ResearchReason__ResearchAlreadyDone                                           = 2,
	EM1ResearchReason__ResearchDataNotExist                                          = 3,
	EM1ResearchReason__ResearchCurrencyNotEnough                                     = 4,
	EM1ResearchReason__ResearchResourceNotEnough                                     = 5,
	EM1ResearchReason__ResearchDidntStart                                            = 6,
	EM1ResearchReason__ResearchAlreadyReceive                                        = 7,
	EM1ResearchReason__ResearchCurrencyFailBack                                      = 8,
	EM1ResearchReason__ResearchResourceFailBack                                      = 9,
	EM1ResearchReason__ResearchBoostCurrencyNotEnough                                = 10,
	EM1ResearchReason__ResearchDidntComplete                                         = 11,
	EM1ResearchReason__ResearchOwnCharacter                                          = 13,
	EM1ResearchReason__ResearchOverMaxCount                                          = 15,
	EM1ResearchReason__ResearchResultCountOver                                       = 16,
	EM1ResearchReason__ResearchMasteryLevelRow                                       = 18,
	EM1ResearchReason__ResearchInvalidAccount                                        = 19,
	EM1ResearchReason__ResearchUnkownReason                                          = 20,
	EM1ResearchReason__ResearchCantSetBookmarkAlreadyStarted                         = 21,
	EM1ResearchReason__ResearchInventoryLimitOver                                    = 22,
	EM1ResearchReason__ResearchBookmarkTargetInvalid                                 = 23
};

/// Enum /Script/M1Data.EM1MissionEndType
/// Size: 0x02
enum class EM1MissionEndType : uint32_t
{
	EM1MissionEndType__Cancel                                                        = 0,
	EM1MissionEndType__Fail                                                          = 1
};

/// Enum /Script/M1Data.EM1RuneReason
/// Size: 0x49
enum class EM1RuneReason : uint32_t
{
	EM1RuneReason__Unknown                                                           = 0,
	EM1RuneReason__Success                                                           = 1,
	EM1RuneReason__RuneAlreadyAttach                                                 = 2,
	EM1RuneReason__RuneSameKindRuneAttach                                            = 3,
	EM1RuneReason__RuneCharacterNotExist                                             = 4,
	EM1RuneReason__RuneItemNotExist                                                  = 5,
	EM1RuneReason__RuneNotAttached                                                   = 6,
	EM1RuneReason__RuneAccountNotExist                                               = 7,
	EM1RuneReason__RuneMasteryLevelInvalid                                           = 8,
	EM1RuneReason__RuneLevelInvalid                                                  = 9,
	EM1RuneReason__RuneCapacityOver                                                  = 10,
	EM1RuneReason__RuneSlotCountOver                                                 = 11,
	EM1RuneReason__RuneInvalid                                                       = 12,
	EM1RuneReason__RuneSlotDataInvalid                                               = 13,
	EM1RuneReason__RuneInvalidData                                                   = 15,
	EM1RuneReason__RuneCapcityIncreaseItemNotEnough                                  = 16,
	EM1RuneReason__RuneCapacityMax                                                   = 17,
	EM1RuneReason__RuneEnchantResouceNotEnough                                       = 18,
	EM1RuneReason__RuneCantDecomposeAttachItem                                       = 19,
	EM1RuneReason__RuneInvalidResource                                               = 20,
	EM1RuneReason__RuneDecomposable                                                  = 21,
	EM1RuneReason__RuneEnchantable                                                   = 22,
	EM1RuneReason__RuneEnchantMasteryLevel                                           = 23,
	EM1RuneReason__RuneSocketTypeAlreadyGrant                                        = 24,
	EM1RuneReason__RuneSocketGrantResourceNotEnough                                  = 25,
	EM1RuneReason__RuneSocketTypeAlreadySelected                                     = 26,
	EM1RuneReason__RuneSocketCantSelect                                              = 27,
	EM1RuneReason__RuneInvalidComposeCount                                           = 28,
	EM1RuneReason__RuneComposeResourceNotEnough                                      = 29,
	EM1RuneReason__RuneUnknownError                                                  = 30,
	EM1RuneReason__RuneInventoryNotEnough                                            = 31,
	EM1RuneReason__RuneSubSocketInvalid                                              = 32,
	EM1RuneReason__RuneItemCantCompose                                               = 33,
	EM1RuneReason__RuneResourceNotEnough                                             = 34,
	EM1RuneReason__RuneCantAttachInvalidClassType                                    = 35,
	EM1RuneReason__RuneCantAttachSameGroup                                           = 36,
	EM1RuneReason__RuneNothingChanged                                                = 37,
	EM1RuneReason__RuneCantAttachInvalidCharacter                                    = 38,
	EM1RuneReason__RuneDuplicatedPosition                                            = 39,
	EM1RuneReason__RuneWeaponResetFail                                               = 40,
	EM1RuneReason__RuneCharacterResetFail                                            = 41,
	EM1RuneReason__RuneInvalidType                                                   = 42,
	EM1RuneReason__RuneLoadoutSlotNotExist                                           = 43,
	EM1RuneReason__RuneLoadoutSlotEquipsNotLoaded                                    = 44,
	EM1RuneReason__RuneLoadoutSlotNameSlang                                          = 45,
	EM1RuneReason__RuneLoadoutSlotNameTooLong                                        = 45,
	EM1RuneReason__RuneLoadoutSlotMaxCount                                           = 46,
	EM1RuneReason__RuneInventoryRevisionMismatch                                     = 47,
	EM1RuneReason__RuneInventoryCountMismatch                                        = 48
};

/// Enum /Script/M1Data.EM1FieldUnlockResults
/// Size: 0x11
enum class EM1FieldUnlockResults : uint8_t
{
	EM1FieldUnlockResults__Unknown                                                   = 0,
	EM1FieldUnlockResults__Success                                                   = 1,
	EM1FieldUnlockResults__AlreadyUnlocked                                           = 2,
	EM1FieldUnlockResults__InvalidMapId                                              = 3,
	EM1FieldUnlockResults__NotFieldMap                                               = 4,
	EM1FieldUnlockResults__InvalidMapSubData                                         = 5,
	EM1FieldUnlockResults__InvalidCampId                                             = 6,
	EM1FieldUnlockResults__FieldNotUnlocked                                          = 7,
	EM1FieldUnlockResults__InvalidAccountUid                                         = 8,
	EM1FieldUnlockResults__InvalidDediOid                                            = 9,
	EM1FieldUnlockResults__InvalidBattleZone                                         = 10
};

/// Enum /Script/M1Data.EM1LastBattleZoneSetReason
/// Size: 0x06
enum class EM1LastBattleZoneSetReason : uint32_t
{
	EM1LastBattleZoneSetReason__Unknown                                              = 0,
	EM1LastBattleZoneSetReason__InvalidMapId                                         = 1,
	EM1LastBattleZoneSetReason__InvalidBattleZoneId                                  = 2,
	EM1LastBattleZoneSetReason__AlreadySet                                           = 3,
	EM1LastBattleZoneSetReason__NotUnlock                                            = 4,
	EM1LastBattleZoneSetReason__Success                                              = 5
};

/// Enum /Script/M1Data.EM1QuestCompleteState
/// Size: 0x03
enum class EM1QuestCompleteState : uint32_t
{
	EM1QuestCompleteState__NotComplete                                               = 0,
	EM1QuestCompleteState__SuccessBeforeReward                                       = 1,
	EM1QuestCompleteState__SuccessComplete                                           = 2
};

/// Enum /Script/M1Data.EM1IncQuestProgressReason
/// Size: 0x07
enum class EM1IncQuestProgressReason : uint32_t
{
	EM1IncQuestProgressReason__Null                                                  = 0,
	EM1IncQuestProgressReason__Success                                               = 1,
	EM1IncQuestProgressReason__Fail_QuestNotFound                                    = 2,
	EM1IncQuestProgressReason__Fail_AlreadyCompleted                                 = 3,
	EM1IncQuestProgressReason__Fail_InvalidQuestId                                   = 4,
	EM1IncQuestProgressReason__Fail_InvalidQuestType                                 = 5,
	EM1IncQuestProgressReason__Fail_QuestExpired                                     = 6
};

/// Enum /Script/M1Data.EM1CharacterResetReason
/// Size: 0x08
enum class EM1CharacterResetReason : uint8_t
{
	EM1CharacterResetReason__UnknownReason                                           = 0,
	EM1CharacterResetReason__Success                                                 = 1,
	EM1CharacterResetReason__InvalidAccountUid                                       = 2,
	EM1CharacterResetReason__CharacterNotMaxLevel                                    = 3,
	EM1CharacterResetReason__InvalidData                                             = 4,
	EM1CharacterResetReason__CharacterResetItemNotEnuough                            = 5,
	EM1CharacterResetReason__ResetRewardTooMuch                                      = 6,
	EM1CharacterResetReason__ResourceNotEnough                                       = 7
};

/// Enum /Script/M1Data.EM1CharacterFavoriteReason
/// Size: 0x05
enum class EM1CharacterFavoriteReason : uint32_t
{
	EM1CharacterFavoriteReason__None                                                 = 0,
	EM1CharacterFavoriteReason__Success                                              = 1,
	EM1CharacterFavoriteReason__InvalidAccountUid                                    = 2,
	EM1CharacterFavoriteReason__InvalidCharacterUid                                  = 3,
	EM1CharacterFavoriteReason__NotChanges                                           = 4
};

/// Enum /Script/M1Data.EM1MasteryLevelCheckBenefit
/// Size: 0x07
enum class EM1MasteryLevelCheckBenefit : uint8_t
{
	EM1MasteryLevelCheckBenefit__Equipment                                           = 0,
	EM1MasteryLevelCheckBenefit__EquipInventorySlot                                  = 1,
	EM1MasteryLevelCheckBenefit__WeaponRune                                          = 2,
	EM1MasteryLevelCheckBenefit__CharacterRune                                       = 3,
	EM1MasteryLevelCheckBenefit__Trade                                               = 4,
	EM1MasteryLevelCheckBenefit__CharacterSubRune                                    = 5,
	EM1MasteryLevelCheckBenefit__CharacterSkillRune                                  = 6
};

/// Enum /Script/M1Data.EM1MasteryUnlockType
/// Size: 0x13
enum class EM1MasteryUnlockType : uint8_t
{
	EM1MasteryUnlockType__RuneWeaponCapacity                                         = 0,
	EM1MasteryUnlockType__RuneCharacterCapacity                                      = 1,
	EM1MasteryUnlockType__RuneAccountSlot                                            = 2,
	EM1MasteryUnlockType__RuneCharacterSlot                                          = 3,
	EM1MasteryUnlockType__EquipInventorySlot                                         = 4,
	EM1MasteryUnlockType__WeaponSlot                                                 = 5,
	EM1MasteryUnlockType__AccessoryReactor                                           = 6,
	EM1MasteryUnlockType__AccessoryNeckSlot                                          = 7,
	EM1MasteryUnlockType__AccessoryEarringsSlot                                      = 8,
	EM1MasteryUnlockType__AccessoryRingSlot                                          = 9,
	EM1MasteryUnlockType__AccessoryBraceletSlot                                      = 10,
	EM1MasteryUnlockType__TradeCount                                                 = 11,
	EM1MasteryUnlockType__None                                                       = 12
};

/// Enum /Script/M1Data.EM1ItemReason
/// Size: 0x20
enum class EM1ItemReason : uint32_t
{
	EM1ItemReason__UnknownError                                                      = 0,
	EM1ItemReason__Success                                                           = 1,
	EM1ItemReason__CurrencyNotEnough                                                 = 2,
	EM1ItemReason__InvalidType                                                       = 3,
	EM1ItemReason__InvalidData                                                       = 4,
	EM1ItemReason__InvalidValue                                                      = 5,
	EM1ItemReason__CantSatisfyMasterLevelCondition                                   = 6,
	EM1ItemReason__InventoryLimitOver                                                = 7,
	EM1ItemReason__ItemNotEnough                                                     = 8,
	EM1ItemReason__CantMoveWareHouseToWareHouse                                      = 9,
	EM1ItemReason__CantMoveWearingItemToWareHouse                                    = 10,
	EM1ItemReason__SlotIncrementLimitOver                                            = 11,
	EM1ItemReason__HowToUseInvalid                                                   = 12,
	EM1ItemReason__SlotCountOver                                                     = 13,
	EM1ItemReason__DuplicateItem                                                     = 14,
	EM1ItemReason__CantSubRealCurrencyDirect                                         = 15,
	EM1ItemReason__AccountNotExists                                                  = 16,
	EM1ItemReason__InvalidRevision                                                   = 17,
	EM1ItemReason__WearingItem                                                       = 18,
	EM1ItemReason__InvalidItemCount                                                  = 19
};

/// Enum /Script/M1Data.EM1MatchingReason
/// Size: 0x29
enum class EM1MatchingReason : uint32_t
{
	EM1MatchingReason__Unknown                                                       = 0,
	EM1MatchingReason__Success                                                       = 1,
	EM1MatchingReason__FailNoEntrance                                                = 2,
	EM1MatchingReason__FailNoTicket                                                  = 3,
	EM1MatchingReason__FailInvalidRequest                                            = 4,
	EM1MatchingReason__FailPartyMemberNoEntrance                                     = 5,
	EM1MatchingReason__FailAlreadyRequested                                          = 6,
	EM1MatchingReason__FailServerNotReady                                            = 7,
	EM1MatchingReason__FailEtc                                                       = 8,
	EM1MatchingReason__FailNotRegistered                                             = 9,
	EM1MatchingReason__FailAlreadyMatched                                            = 10,
	EM1MatchingReason__FailNotStartTime                                              = 11,
	EM1MatchingReason__FailNotMaster                                                 = 12,
	EM1MatchingReason__FailAccountNotFound                                           = 13,
	EM1MatchingReason__FailSystemNotInitialized                                      = 14,
	EM1MatchingReason__FailWaitMember                                                = 15,
	EM1MatchingReason__FailRedisDataNotFound                                         = 16,
	EM1MatchingReason__FailSingleOnly                                                = 17,
	EM1MatchingReason__FailAlreadyPrivateMatched                                     = 18,
	EM1MatchingReason__FailAlreadyMatchingFound                                      = 19,
	EM1MatchingReason__FailMinMembers                                                = 20,
	EM1MatchingReason__MMErrUnavailable                                              = 21,
	EM1MatchingReason__MMErrFailed                                                   = 100,
	EM1MatchingReason__MMErrInvalidParam                                             = 201,
	EM1MatchingReason__MMErrNotFound                                                 = 301,
	EM1MatchingReason__MMErrIncorrectToken                                           = 302,
	EM1MatchingReason__MMErrStateNotApplicable                                       = 303,
	EM1MatchingReason__MMErrPartiallyFailed                                          = 304,
	EM1MatchingReason__MMErrNotImplemented                                           = 901
};

/// Enum /Script/M1Data.EM1InstanceDungeonCompleteReason
/// Size: 0x03
enum class EM1InstanceDungeonCompleteReason : uint32_t
{
	EM1InstanceDungeonCompleteReason__Fail                                           = 0,
	EM1InstanceDungeonCompleteReason__InvalidData                                    = 1,
	EM1InstanceDungeonCompleteReason__Success                                        = 2
};

/// Enum /Script/M1Data.EM1MatchedGameEndType
/// Size: 0x05
enum class EM1MatchedGameEndType : uint32_t
{
	EM1MatchedGameEndType__Unknown                                                   = 0,
	EM1MatchedGameEndType__Success                                                   = 1,
	EM1MatchedGameEndType__Fail_Annihilated                                          = 2,
	EM1MatchedGameEndType__Fail_TimeOut                                              = 3,
	EM1MatchedGameEndType__Fail_Etc                                                  = 4
};

/// Enum /Script/M1Data.EM1MailReason
/// Size: 0x14
enum class EM1MailReason : uint32_t
{
	EM1MailReason__UnknownError                                                      = 0,
	EM1MailReason__Success                                                           = 1,
	EM1MailReason__InvalidMailType                                                   = 2,
	EM1MailReason__AccountNotExists                                                  = 3,
	EM1MailReason__AlreadyRead                                                       = 4,
	EM1MailReason__InvalidData                                                       = 5,
	EM1MailReason__ValueNonExist                                                     = 6,
	EM1MailReason__OutofAttachmentIndex                                              = 7,
	EM1MailReason__InvalidItemType                                                   = 8,
	EM1MailReason__InventoryLimitOver                                                = 9,
	EM1MailReason__CantDeleteItemAttachedMail                                        = 10,
	EM1MailReason__MailDeletePartlySuccess                                           = 11,
	EM1MailReason__MailAttachItemAlreadyReceived                                     = 12,
	EM1MailReason__MailAttachmentCountOver                                           = 13
};

/// Enum /Script/M1Data.EM1CustomizeReason
/// Size: 0x11
enum class EM1CustomizeReason : uint32_t
{
	EM1CustomizeReason__Failed                                                       = 0,
	EM1CustomizeReason__Success                                                      = 1,
	EM1CustomizeReason__InvalidData                                                  = 2,
	EM1CustomizeReason__Duplicate                                                    = 3,
	EM1CustomizeReason__AccountNotExists                                             = 4,
	EM1CustomizeReason__NotFound                                                     = 5,
	EM1CustomizeReason__OverPaintIndex                                               = 6,
	EM1CustomizeReason__NeedEvolution                                                = 7,
	EM1CustomizeReason__NotEnoughCondition                                           = 8,
	EM1CustomizeReason__NotAbleEvolution                                             = 9,
	EM1CustomizeReason__OverEvolution                                                = 10
};

/// Enum /Script/M1Data.EM1PackageItemReason
/// Size: 0x09
enum class EM1PackageItemReason : uint32_t
{
	EM1PackageItemReason__Unknown                                                    = 0,
	EM1PackageItemReason__Success                                                    = 1,
	EM1PackageItemReason__InvalidData                                                = 2,
	EM1PackageItemReason__ConsumeItemFail                                            = 3,
	EM1PackageItemReason__CreateItemFail                                             = 4,
	EM1PackageItemReason__WorkingDBNotFound                                          = 5,
	EM1PackageItemReason__UseKeyFail                                                 = 6,
	EM1PackageItemReason__LinkedKeyNotFound                                          = 7,
	EM1PackageItemReason__SelectItemFail                                             = 8
};

/// Enum /Script/M1Data.EM1EventRewardDateType
/// Size: 0x04
enum class EM1EventRewardDateType : uint8_t
{
	EM1EventRewardDateType__Permanent                                                = 0,
	EM1EventRewardDateType__Daily                                                    = 1,
	EM1EventRewardDateType__Weekly                                                   = 2,
	EM1EventRewardDateType__Monthly                                                  = 3
};

/// Enum /Script/M1Data.EM1ReactorReason
/// Size: 0x11
enum class EM1ReactorReason : uint32_t
{
	EM1ReactorReason__Unknown                                                        = 0,
	EM1ReactorReason__Success                                                        = 1,
	EM1ReactorReason__InvalidData                                                    = 2,
	EM1ReactorReason__MaxEnchantLevel                                                = 3,
	EM1ReactorReason__ResourceFail                                                   = 4,
	EM1ReactorReason__NotEnchantable                                                 = 5,
	EM1ReactorReason__CurrencyNotConditiion                                          = 6,
	EM1ReactorReason__ConsumableNotConditiion                                        = 7,
	EM1ReactorReason__EquipmentNotConditiion                                         = 8,
	EM1ReactorReason__CharacterNotConditiion                                         = 9,
	EM1ReactorReason__AccountNotExists                                               = 10
};

/// Enum /Script/M1Data.EM1BattlePassLevelReason
/// Size: 0x03
enum class EM1BattlePassLevelReason : uint32_t
{
	EM1BattlePassLevelReason__NormalExpUp                                            = 0,
	EM1BattlePassLevelReason__LevelUpBuy                                             = 1,
	EM1BattlePassLevelReason__PremiumExclusiveRepeal                                 = 2
};

/// Enum /Script/M1Data.EM1BattlePassReason
/// Size: 0x15
enum class EM1BattlePassReason : uint32_t
{
	EM1BattlePassReason__Fail                                                        = 0,
	EM1BattlePassReason__Success                                                     = 1,
	EM1BattlePassReason__InvalidSeason                                               = 2,
	EM1BattlePassReason__AlreadyGetPremium                                           = 3,
	EM1BattlePassReason__UnknownError                                                = 4,
	EM1BattlePassReason__InvalidData                                                 = 5,
	EM1BattlePassReason__NotEnoughResource                                           = 6,
	EM1BattlePassReason__InvalidCurrency                                             = 7,
	EM1BattlePassReason__TryLevelUpOver                                              = 8,
	EM1BattlePassReason__AlreadyBuyBundle                                            = 9,
	EM1BattlePassReason__OldSeasonNotCompleted                                       = 10,
	EM1BattlePassReason__CantBuyLevelCauseOver                                       = 11,
	EM1BattlePassReason__AlreadyGetPremiumExlusiveReward                             = 12,
	EM1BattlePassReason__CantGetReward                                               = 13,
	EM1BattlePassReason__AdjustmentPeriod                                            = 14
};

/// Enum /Script/M1Data.EM1CodexTrackingType
/// Size: 0x05
enum class EM1CodexTrackingType : uint8_t
{
	EM1CodexTrackingType__None                                                       = 0,
	EM1CodexTrackingType__Research                                                   = 1,
	EM1CodexTrackingType__Consumable                                                 = 2,
	EM1CodexTrackingType__Rune                                                       = 3,
	EM1CodexTrackingType__Equipment                                                  = 4
};

/// Enum /Script/M1Data.EM1RequestSupportReason
/// Size: 0x08
enum class EM1RequestSupportReason : uint32_t
{
	EM1RequestSupportReason__Unknown                                                 = 0,
	EM1RequestSupportReason__Success                                                 = 1,
	EM1RequestSupportReason__NoDedi                                                  = 2,
	EM1RequestSupportReason__NoUser                                                  = 3,
	EM1RequestSupportReason__Fail_RequesterNotFound                                  = 4,
	EM1RequestSupportReason__Fail_RequesterDediNotFound                              = 5,
	EM1RequestSupportReason__Fail_Exception                                          = 6,
	EM1RequestSupportReason__Fail_InvalidMapType                                     = 7
};

/// Enum /Script/M1Data.EM1PresetReason
/// Size: 0x12
enum class EM1PresetReason : uint32_t
{
	EM1PresetReason__Unknown                                                         = 0,
	EM1PresetReason__Success                                                         = 1,
	EM1PresetReason__NameTooLong                                                     = 2,
	EM1PresetReason__NameSlang                                                       = 3,
	EM1PresetReason__AccountNotExist                                                 = 4,
	EM1PresetReason__PresetSlotInsufficient                                          = 5,
	EM1PresetReason__PresetIndexInvalid                                              = 6,
	EM1PresetReason__PresetNotExist                                                  = 7,
	EM1PresetReason__PlayerDataInvalid                                               = 8,
	EM1PresetReason__PlayerChangeFailed                                              = 9,
	EM1PresetReason__PlayerNotExist                                                  = 10,
	EM1PresetReason__InventoryLimitOver                                              = 11
};

/// Enum /Script/M1Data.EM1LoginResultType
/// Size: 0x20
enum class EM1LoginResultType : uint32_t
{
	EM1LoginResultType__Fail                                                         = 0,
	EM1LoginResultType__Success                                                      = 1,
	EM1LoginResultType__VersionMismatched                                            = 2,
	EM1LoginResultType__UserNameIsInvalid                                            = 3,
	EM1LoginResultType__UserNameIsDuplicated                                         = 4,
	EM1LoginResultType__UserIsAlreadyLoggedIn                                        = 5,
	EM1LoginResultType__InvalidLinkData                                              = 6,
	EM1LoginResultType__InvalidAuthValue                                             = 7,
	EM1LoginResultType__InvalidToken                                                 = 8,
	EM1LoginResultType__ExpiredToken                                                 = 9,
	EM1LoginResultType__HackedUser                                                   = 10,
	EM1LoginResultType__UserBanned                                                   = 11,
	EM1LoginResultType__GameServerCountZero                                          = 12,
	EM1LoginResultType__GameServerNotFound                                           = 13,
	EM1LoginResultType__DuplicateLogin                                               = 14,
	EM1LoginResultType__PSDataShareOff                                               = 15,
	EM1LoginResultType__GameServerChecksumMismatched                                 = 16,
	EM1LoginResultType__WaitInitialize                                               = 17,
	EM1LoginResultType__WaitLoginQueue                                               = 18,
	EM1LoginResultType__NoAvailableShard                                             = 19
};

/// Enum /Script/M1Data.EM1SystemMessageType
/// Size: 0x05
enum class EM1SystemMessageType : uint32_t
{
	EM1SystemMessageType__WillRelocateDedicateServer                                 = 0,
	EM1SystemMessageType__InDeprecateServer                                          = 1,
	EM1SystemMessageType__InDeprecateServerLimitContents                             = 2,
	EM1SystemMessageType__TargetDeprecateServer                                      = 3,
	EM1SystemMessageType__KickAllUer                                                 = 4
};

/// Enum /Script/M1Data.EM1DediPlatformTag
/// Size: 0x03
enum class EM1DediPlatformTag : uint8_t
{
	EM1DediPlatformTag__ALL                                                          = 0,
	EM1DediPlatformTag__PS                                                           = 1,
	EM1DediPlatformTag__XBOX                                                         = 2
};

/// Enum /Script/M1Data.EM1OsTypes
/// Size: 0x09
enum class EM1OsTypes : uint32_t
{
	EM1OsTypes__Unknown                                                              = 0,
	EM1OsTypes__iOS                                                                  = 1,
	EM1OsTypes__Android                                                              = 2,
	EM1OsTypes__Windows                                                              = 3,
	EM1OsTypes__Xbox                                                                 = 4,
	EM1OsTypes__PS                                                                   = 5,
	EM1OsTypes__Switch                                                               = 6,
	EM1OsTypes__Mac                                                                  = 7,
	EM1OsTypes__Linux                                                                = 8
};

/// Enum /Script/M1Data.EM1DedicatedServerType
/// Size: 0x03
enum class EM1DedicatedServerType : uint8_t
{
	EM1DedicatedServerType__None                                                     = 0,
	EM1DedicatedServerType__City                                                     = 1,
	EM1DedicatedServerType__Field                                                    = 2
};

/// Enum /Script/M1Data.EM1JoinDedicatedServerReason
/// Size: 0x17
enum class EM1JoinDedicatedServerReason : uint32_t
{
	EM1JoinDedicatedServerReason__Unknown                                            = 0,
	EM1JoinDedicatedServerReason__Success                                            = 1,
	EM1JoinDedicatedServerReason__DediNotReady                                       = 2,
	EM1JoinDedicatedServerReason__HasParty                                           = 3,
	EM1JoinDedicatedServerReason__InvalidMapData                                     = 4,
	EM1JoinDedicatedServerReason__NotUnlockedMap                                     = 5,
	EM1JoinDedicatedServerReason__InvalidDediOid                                     = 6,
	EM1JoinDedicatedServerReason__ReserveFail                                        = 7,
	EM1JoinDedicatedServerReason__TestReserveFail                                    = 8,
	EM1JoinDedicatedServerReason__InvalidOid                                         = 9,
	EM1JoinDedicatedServerReason__WorkingDbNotFound                                  = 10,
	EM1JoinDedicatedServerReason__CheckUpFieldOptionFail                             = 11,
	EM1JoinDedicatedServerReason__NowMatching                                        = 12,
	EM1JoinDedicatedServerReason__GameServerMove                                     = 13,
	EM1JoinDedicatedServerReason__InstanceDungeonEntranceFail                        = 14,
	EM1JoinDedicatedServerReason__NgsInitialize                                      = 15,
	EM1JoinDedicatedServerReason__RelocateFail                                       = 16
};

/// Enum /Script/M1Data.EM1XBOXInnerOptionType
/// Size: 0x03
enum class EM1XBOXInnerOptionType : uint32_t
{
	EM1XBOXInnerOptionType__Everyone                                                 = 0,
	EM1XBOXInnerOptionType__XboxFriends                                              = 1,
	EM1XBOXInnerOptionType__Blocked                                                  = 2
};

/// Enum /Script/M1Data.EM1XBOXOuterOptionType
/// Size: 0x03
enum class EM1XBOXOuterOptionType : uint32_t
{
	EM1XBOXOuterOptionType__Everyone                                                 = 0,
	EM1XBOXOuterOptionType__InGameFriends                                            = 1,
	EM1XBOXOuterOptionType__Blocked                                                  = 2
};

/// Enum /Script/M1Data.EM1SearchType
/// Size: 0x08
enum class EM1SearchType : uint8_t
{
	EM1SearchType__Base                                                              = 0,
	EM1SearchType__PlatformFriendList                                                = 1,
	EM1SearchType__InviteFriend                                                      = 2,
	EM1SearchType__InviteParty                                                       = 3,
	EM1SearchType__SocialUserList                                                    = 4,
	EM1SearchType__SocialRecentList                                                  = 5,
	EM1SearchType__SocialInGameFriendList                                            = 6,
	EM1SearchType__SocialBlockList                                                   = 7
};

/// Enum /Script/M1Data.EM1SearchErrorCode
/// Size: 0x08
enum class EM1SearchErrorCode : uint8_t
{
	EM1SearchErrorCode__Unknown                                                      = 0,
	EM1SearchErrorCode__Success                                                      = 1,
	EM1SearchErrorCode__EmptyName                                                    = 2,
	EM1SearchErrorCode__SelfSearch                                                   = 3,
	EM1SearchErrorCode__NotFound                                                     = 4,
	EM1SearchErrorCode__Offline                                                      = 5,
	EM1SearchErrorCode__ServerDown                                                   = 6,
	EM1SearchErrorCode__Busy                                                         = 7
};

/// Enum /Script/M1Data.EM1PartyContentsType
/// Size: 0x05
enum class EM1PartyContentsType : uint32_t
{
	EM1PartyContentsType__Request                                                    = 0,
	EM1PartyContentsType__Accept                                                     = 1,
	EM1PartyContentsType__MemberChange                                               = 2,
	EM1PartyContentsType__Join                                                       = 3,
	EM1PartyContentsType__Move                                                       = 4
};

/// Enum /Script/M1Data.EM1PartyErrorCode
/// Size: 0x42
enum class EM1PartyErrorCode : uint32_t
{
	EM1PartyErrorCode__Unknown                                                       = 0,
	EM1PartyErrorCode__ServerDown                                                    = 1,
	EM1PartyErrorCode__NotFound                                                      = 2,
	EM1PartyErrorCode__Success                                                       = 3,
	EM1PartyErrorCode__FullParty                                                     = 4,
	EM1PartyErrorCode__AlreadyParty                                                  = 5,
	EM1PartyErrorCode__RequestFull                                                   = 6,
	EM1PartyErrorCode__RequestAlready                                                = 7,
	EM1PartyErrorCode__RequestAccept                                                 = 8,
	EM1PartyErrorCode__RequestReject                                                 = 9,
	EM1PartyErrorCode__RequestAutoReject                                             = 10,
	EM1PartyErrorCode__RequestTimeOut                                                = 11,
	EM1PartyErrorCode__MasterOnly                                                    = 12,
	EM1PartyErrorCode__CityOnly                                                      = 13,
	EM1PartyErrorCode__NeedUnlock                                                    = 14,
	EM1PartyErrorCode__Join                                                          = 15,
	EM1PartyErrorCode__Leave                                                         = 16,
	EM1PartyErrorCode__Exile                                                         = 17,
	EM1PartyErrorCode__MasterChange                                                  = 18,
	EM1PartyErrorCode__Break                                                         = 19,
	EM1PartyErrorCode__MoveFailed                                                    = 20,
	EM1PartyErrorCode__SameField                                                     = 21,
	EM1PartyErrorCode__WaitPartyMember                                               = 22,
	EM1PartyErrorCode__FieldUnlockPartyMember                                        = 23,
	EM1PartyErrorCode__Matching                                                      = 24,
	EM1PartyErrorCode__Wait                                                          = 25,
	EM1PartyErrorCode__FieldOptionCheckFail                                          = 26,
	EM1PartyErrorCode__Block                                                         = 27,
	EM1PartyErrorCode__TargetBlock                                                   = 28,
	EM1PartyErrorCode__CrossPlayOff                                                  = 29,
	EM1PartyErrorCode__MyCrossPlayOff                                                = 30,
	EM1PartyErrorCode__TargetCrossPlayOff                                            = 31,
	EM1PartyErrorCode__SocialOff                                                     = 32,
	EM1PartyErrorCode__FailEntrantCondition                                          = 33,
	EM1PartyErrorCode__FailEntrantConditionPartyMember                               = 34,
	EM1PartyErrorCode__Laboratory                                                    = 35,
	EM1PartyErrorCode__NotMatchedVersion                                             = 36,
	EM1PartyErrorCode__TargetNotMatchedVersion                                       = 37,
	EM1PartyErrorCode__MustPrologue                                                  = 37,
	EM1PartyErrorCode__LobbyOnly                                                     = 38,
	EM1PartyErrorCode__SelfRequest                                                   = 39,
	EM1PartyErrorCode__FullSession                                                   = 40
};

/// Enum /Script/M1Data.EM1FriendContentsType
/// Size: 0x05
enum class EM1FriendContentsType : uint32_t
{
	EM1FriendContentsType__Request                                                   = 0,
	EM1FriendContentsType__Accept                                                    = 1,
	EM1FriendContentsType__Delete                                                    = 2,
	EM1FriendContentsType__Bookmark                                                  = 3,
	EM1FriendContentsType__Reject                                                    = 4
};

/// Enum /Script/M1Data.EM1FriendErrorCode
/// Size: 0x19
enum class EM1FriendErrorCode : uint32_t
{
	EM1FriendErrorCode__Fail                                                         = 0,
	EM1FriendErrorCode__NotFoundUser                                                 = 1,
	EM1FriendErrorCode__NotFoundFriend                                               = 2,
	EM1FriendErrorCode__NotFoundRequest                                              = 3,
	EM1FriendErrorCode__Self                                                         = 4,
	EM1FriendErrorCode__MyBlock                                                      = 5,
	EM1FriendErrorCode__TargetBlock                                                  = 6,
	EM1FriendErrorCode__AlreadyRequested                                             = 7,
	EM1FriendErrorCode__AlreadyFriend                                                = 8,
	EM1FriendErrorCode__DuplicateBookmark                                            = 9,
	EM1FriendErrorCode__MyFriendFull                                                 = 10,
	EM1FriendErrorCode__TargetFriendFull                                             = 11,
	EM1FriendErrorCode__TargetRequestFull                                            = 12,
	EM1FriendErrorCode__Success                                                      = 13,
	EM1FriendErrorCode__Proxy                                                        = 14,
	EM1FriendErrorCode__CrossPlayOff                                                 = 15,
	EM1FriendErrorCode__MyCrossPlayOff                                               = 16,
	EM1FriendErrorCode__TargetCrossPlayOff                                           = 17,
	EM1FriendErrorCode__SocialOff                                                    = 18
};

/// Enum /Script/M1Data.EM1BlockErrorCode
/// Size: 0x08
enum class EM1BlockErrorCode : uint32_t
{
	EM1BlockErrorCode__Fail                                                          = 0,
	EM1BlockErrorCode__Regist                                                        = 1,
	EM1BlockErrorCode__Unregist                                                      = 2,
	EM1BlockErrorCode__Duplicate                                                     = 3,
	EM1BlockErrorCode__Busy                                                          = 4,
	EM1BlockErrorCode__Full                                                          = 5,
	EM1BlockErrorCode__Self                                                          = 6,
	EM1BlockErrorCode__ServerDown                                                    = 7
};

/// Enum /Script/M1Data.EM1ChattingErrorCode
/// Size: 0x19
enum class EM1ChattingErrorCode : uint32_t
{
	EM1ChattingErrorCode__ServerDown                                                 = -1,
	EM1ChattingErrorCode__Unknown                                                    = 0,
	EM1ChattingErrorCode__Success                                                    = 1,
	EM1ChattingErrorCode__Reject                                                     = 2,
	EM1ChattingErrorCode__NotFound                                                   = 3,
	EM1ChattingErrorCode__Self                                                       = 4,
	EM1ChattingErrorCode__MessageEmpty                                               = 5,
	EM1ChattingErrorCode__Slang                                                      = 6,
	EM1ChattingErrorCode__Busy                                                       = 7,
	EM1ChattingErrorCode__NotParty                                                   = 8,
	EM1ChattingErrorCode__OverLength                                                 = 9,
	EM1ChattingErrorCode__Offline                                                    = 10,
	EM1ChattingErrorCode__Block                                                      = 11,
	EM1ChattingErrorCode__CrossPlayOff                                               = 12,
	EM1ChattingErrorCode__MyCrossPlayOff                                             = 13,
	EM1ChattingErrorCode__TargetCrossPlayOff                                         = 14,
	EM1ChattingErrorCode__SocialOff                                                  = 15,
	EM1ChattingErrorCode__Ban                                                        = 16,
	EM1ChattingErrorCode__Wait                                                       = 17
};

/// Enum /Script/M1Data.EM1SupportReason
/// Size: 0x04
enum class EM1SupportReason : uint32_t
{
	EM1SupportReason__Fail                                                           = 0,
	EM1SupportReason__Success                                                        = 1,
	EM1SupportReason__NotMatchedVersion                                              = 2,
	EM1SupportReason__TargetNotMatchedVersion                                        = 3
};

/// Enum /Script/M1Data.EM1UserState
/// Size: 0x05
enum class EM1UserState : uint8_t
{
	EM1UserState__Reserved                                                           = 0,
	EM1UserState__Moved                                                              = 1,
	EM1UserState__InGame                                                             = 2,
	EM1UserState__Kicked                                                             = 3,
	EM1UserState__ReconnectWait                                                      = 4
};

/// Enum /Script/M1Data.EM1KickType
/// Size: 0x05
enum class EM1KickType : uint32_t
{
	EM1KickType__SystemError                                                         = 0,
	EM1KickType__SystemBan                                                           = 1,
	EM1KickType__DuplicateLogin                                                      = 2,
	EM1KickType__DedicateServerError                                                 = 3,
	EM1KickType__NgsInitialize                                                       = 4
};

/// Enum /Script/M1Data.EM1BanType
/// Size: 0x02
enum class EM1BanType : uint8_t
{
	EM1BanType__Account                                                              = 0,
	EM1BanType__Chat                                                                 = 1
};

/// Enum /Script/M1Data.EM1ReportReasonType
/// Size: 0x09
enum class EM1ReportReasonType : uint32_t
{
	EM1ReportReasonType__Unknown                                                     = 0,
	EM1ReportReasonType__Abuse                                                       = 1,
	EM1ReportReasonType__Advertisement                                               = 2,
	EM1ReportReasonType__NickName                                                    = 3,
	EM1ReportReasonType__BadManner                                                   = 4,
	EM1ReportReasonType__Illegal                                                     = 5,
	EM1ReportReasonType__Bug                                                         = 6,
	EM1ReportReasonType__Etc                                                         = 7,
	EM1ReportReasonType__Afk                                                         = 8
};

/// Enum /Script/M1Data.EM1ReportErrorCode
/// Size: 0x05
enum class EM1ReportErrorCode : uint32_t
{
	EM1ReportErrorCode__Unknown                                                      = 0,
	EM1ReportErrorCode__Success                                                      = 1,
	EM1ReportErrorCode__InvalidAccountId                                             = 2,
	EM1ReportErrorCode__ServerDown                                                   = 3,
	EM1ReportErrorCode__AlreadyReported                                              = 4
};

/// Enum /Script/M1Data.EM1InputMethod
/// Size: 0x03
enum class EM1InputMethod : uint8_t
{
	EM1InputMethod__MouseAndKeyboard                                                 = 0,
	EM1InputMethod__GamepadXBOX                                                      = 1,
	EM1InputMethod__GamepadPS                                                        = 2
};

/// Enum /Script/M1Data.EM1AnnouncementType
/// Size: 0x03
enum class EM1AnnouncementType : uint32_t
{
	EM1AnnouncementType__Chat                                                        = 0,
	EM1AnnouncementType__Information                                                 = 1,
	EM1AnnouncementType__Emergency                                                   = 2
};

