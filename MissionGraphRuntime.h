
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/MissionGraphRuntime.MissionGraph
/// Size: 0x0068 (0x000030 - 0x000098)
class UMissionGraph : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             NodeType                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UClass*)                             EdgeType                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGameplayTagContainer)                     GraphTags                                                   OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(TArray<class UMissionGraphTaskNode*>)      RootNodes                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<class UMissionGraphTaskNode*>)      AllNodes                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bEdgeEnabled                                                OFFSET(get<bool>, {0x90, 1, 0, 0})


	/// Functions
	// Function /Script/MissionGraphRuntime.MissionGraph.Print
	// void Print(bool ToConsole, bool ToScreen);                                                                               // [0x1d10a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MissionGraphRuntime.MissionGraph.GetNodesByLevel
	// void GetNodesByLevel(int32_t Level, TArray<UMissionGraphTaskNode*>& Nodes);                                              // [0x1d10720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MissionGraphRuntime.MissionGraph.GetLevelNum
	// int32_t GetLevelNum();                                                                                                   // [0x1d10a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MissionGraphRuntime.MissionGraphEdge
/// Size: 0x0000 (0x000028 - 0x000028)
class UMissionGraphEdge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MissionGraphRuntime.MissionGraphTaskNode
/// Size: 0x0070 (0x000028 - 0x000098)
class UMissionGraphTaskNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<class UMissionGraphTaskNode*>)      ParentNodes                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UMissionGraphTaskNode*>)      ChildrenNodes                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<class UMissionGraphTaskNode*, class UMissionGraphEdge*>) Edges                                    OFFSET(get<T>, {0x48, 80, 0, 0})


	/// Functions
	// Function /Script/MissionGraphRuntime.MissionGraphTaskNode.IsLeafNode
	// bool IsLeafNode();                                                                                                       // [0x1d11000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MissionGraphRuntime.MissionGraphTaskNode.GetGraph
	// class UMissionGraph* GetGraph();                                                                                         // [0x1d10f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MissionGraphRuntime.MissionGraphTaskNode.GetEdge
	// class UMissionGraphEdge* GetEdge(class UMissionGraphTaskNode* ChildNode);                                                // [0x1d11020] Native|Public|BlueprintCallable 
	// Function /Script/MissionGraphRuntime.MissionGraphTaskNode.GetDescription
	// FText GetDescription();                                                                                                  // [0x1d10ec0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Enum /Script/MissionGraphRuntime.ENodeLimit
/// Size: 0x02
enum class ENodeLimit : uint8_t
{
	ENodeLimit__Unlimited                                                            = 0,
	ENodeLimit__Limited                                                              = 1
};

