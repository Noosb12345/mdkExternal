
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: M1
/// dependency: Niagara
/// dependency: UMG
/// dependency: WwiseAudio

/// Class /Game/Blueprints/Game/BP_BlueprintClassRepGraphNodeMapping.BP_BlueprintClassRepGraphNodeMapping_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UBP_BlueprintClassRepGraphNodeMapping_C : public UM1BlueprintClassRepGraphNodeMapping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Game/BP_GameInstance.BP_GameInstance_C
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UBP_GameInstance_C : public UM1GameInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskMove.BP_MissionTaskMove_C
/// Size: 0x0010 (0x000658 - 0x000668)
class ABP_MissionTaskMove_C : public AM1MissionTaskActorMoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1640;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x658, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x660, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Mission/BP_MissionTaskMove.BP_MissionTaskMove_C.TaskActorStateChanged
	// void TaskActorStateChanged(EM1EventActorState InState);                                                                  // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskMove.BP_MissionTaskMove_C.ExecuteUbergraph_BP_MissionTaskMove
	// void ExecuteUbergraph_BP_MissionTaskMove(int32_t EntryPoint);                                                            // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/SpawnPoint/BP_RuleBasedMonsterSpawner.BP_RuleBasedMonsterSpawner_C
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ABP_RuleBasedMonsterSpawner_C : public AM1RuleBasedActorSpawner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskAssassination.BP_MissionTaskAssassination_C
/// Size: 0x0008 (0x000660 - 0x000668)
class ABP_MissionTaskAssassination_C : public AM1MissionTaskActorAssassination
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1640;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x660, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskExtermination.BP_MissionTaskExtermination_C
/// Size: 0x0010 (0x000660 - 0x000670)
class ABP_MissionTaskExtermination_C : public AM1MissionTaskActorExtermination
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x660, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x668, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Mission/BP_MissionTaskExtermination.BP_MissionTaskExtermination_C.BP_ShouldBeVisibleOnLocal
	// void BP_ShouldBeVisibleOnLocal(bool InVisible);                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskExtermination.BP_MissionTaskExtermination_C.ExecuteUbergraph_BP_MissionTaskExtermination
	// void ExecuteUbergraph_BP_MissionTaskExtermination(int32_t EntryPoint);                                                   // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskDestruction.BP_MissionTaskDestruction_C
/// Size: 0x0008 (0x0006C8 - 0x0006D0)
class ABP_MissionTaskDestruction_C : public AM1MissionTaskActorDestruction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x6C8, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskExplosion.BP_MissionTaskExplosion_C
/// Size: 0x0008 (0x000698 - 0x0006A0)
class ABP_MissionTaskExplosion_C : public AM1MissionTaskActorExplosion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x698, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskInteraction.BP_MissionTaskInteraction_C
/// Size: 0x0018 (0x000688 - 0x0006A0)
class ABP_MissionTaskInteraction_C : public AM1MissionTaskActorInteraction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x688, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  InteractableAreaFx                                          OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x698, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Mission/BP_MissionTaskInteraction.BP_MissionTaskInteraction_C.BP_GetPushAwayCollsionRadius
	// float BP_GetPushAwayCollsionRadius();                                                                                    // [0x3a334c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Mission/BP_MissionTaskInteraction.BP_MissionTaskInteraction_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskInteraction.BP_MissionTaskInteraction_C.BP_RunResult
	// void BP_RunResult(EM1TaskEventActorRunResult InRunResult);                                                               // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskInteraction.BP_MissionTaskInteraction_C.ExecuteUbergraph_BP_MissionTaskInteraction
	// void ExecuteUbergraph_BP_MissionTaskInteraction(int32_t EntryPoint);                                                     // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskCollection.BP_MissionTaskCollection_C
/// Size: 0x0008 (0x000660 - 0x000668)
class ABP_MissionTaskCollection_C : public AM1MissionTaskActorCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1640;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x660, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskDefense.BP_MissionTaskDefense_C
/// Size: 0x0008 (0x000698 - 0x0006A0)
class ABP_MissionTaskDefense_C : public AM1MissionTaskActorDefense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x698, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskDestructionVulgusPost.BP_MissionTaskDestructionVulgusPost_C
/// Size: 0x0008 (0x0006C0 - 0x0006C8)
class ABP_MissionTaskDestructionVulgusPost_C : public AM1MissionTaskActorDestructionVulgusPost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
	CMember(class UM1CoolTimeComponent*)               M1CoolTime                                                  OFFSET(get<T>, {0x6C0, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskResearchBlock.BP_MissionTaskResearchBlock_C
/// Size: 0x0000 (0x0006E0 - 0x0006E0)
class ABP_MissionTaskResearchBlock_C : public AM1MissionTaskActorResearchBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskEscort.BP_MissionTaskEscort_C
/// Size: 0x0008 (0x000678 - 0x000680)
class ABP_MissionTaskEscort_C : public AM1MissionTaskActorEscort
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x678, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskHacking.BP_MissionTaskHacking_C
/// Size: 0x0008 (0x000688 - 0x000690)
class ABP_MissionTaskHacking_C : public AM1MissionTaskActorHacking
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x688, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskSupply.BP_MissionTaskSupply_C
/// Size: 0x0008 (0x000660 - 0x000668)
class ABP_MissionTaskSupply_C : public AM1MissionTaskActorSupply
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1640;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x660, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskOccupation.BP_MissionTaskOccupation_C
/// Size: 0x0018 (0x000660 - 0x000678)
class ABP_MissionTaskOccupation_C : public AM1MissionTaskActorOccupation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1656;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x660, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  Niagara                                                     OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x670, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Mission/BP_MissionTaskOccupation.BP_MissionTaskOccupation_C.BP_ShouldBeVisibleOnLocal
	// void BP_ShouldBeVisibleOnLocal(bool InVisible);                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskOccupation.BP_MissionTaskOccupation_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskOccupation.BP_MissionTaskOccupation_C.ExecuteUbergraph_BP_MissionTaskOccupation
	// void ExecuteUbergraph_BP_MissionTaskOccupation(int32_t EntryPoint);                                                      // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskSteal.BP_MissionTaskSteal_C
/// Size: 0x0008 (0x0006E8 - 0x0006F0)
class ABP_MissionTaskSteal_C : public AM1MissionTaskActorSteal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x6E8, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/SubTaskActor/BP_MissionSubTaskOccuaption.BP_MissionSubTaskOccuaption_C
/// Size: 0x0028 (0x000630 - 0x000658)
class ABP_MissionSubTaskOccuaption_C : public AM1MissionSubTaskActorOccupation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x630, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  InteractableArea                                            OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow                                                       OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  NiagaraComponent                                            OFFSET(get<T>, {0x650, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Mission/SubTaskActor/BP_MissionSubTaskOccuaption.BP_MissionSubTaskOccuaption_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/SubTaskActor/BP_MissionSubTaskOccuaption.BP_MissionSubTaskOccuaption_C.ExecuteUbergraph_BP_MissionSubTaskOccuaption
	// void ExecuteUbergraph_BP_MissionSubTaskOccuaption(int32_t EntryPoint);                                                   // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Mission/SubTaskActor/BP_MissionSubTaskSteal.BP_MissionSubTaskSteal_C
/// Size: 0x0018 (0x000630 - 0x000648)
class ABP_MissionSubTaskSteal_C : public AM1MissionSubTaskActorSteal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1608;

public:
	CMember(class UNiagaraComponent*)                  InteractionAreaFx                                           OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  Niagara                                                     OFFSET(get<T>, {0x640, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/SubTaskActor/BP_MissionSubTaskDestruction.BP_MissionSubTaskDestruction_C
/// Size: 0x0008 (0x000648 - 0x000650)
class ABP_MissionSubTaskDestruction_C : public AM1MissionSubTaskActorDestruction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x648, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/SubTaskActor/BP_MissionSubTaskCollectionReturn.BP_MissionSubTaskCollectionReturn_C
/// Size: 0x0000 (0x0006B0 - 0x0006B0)
class ABP_MissionSubTaskCollectionReturn_C : public AM1MissionSubTaskActorCollectionReturn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskWaveDefense.BP_MissionTaskWaveDefense_C
/// Size: 0x0008 (0x000728 - 0x000730)
class ABP_MissionTaskWaveDefense_C : public AM1MissionTaskActorWaveDefense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x728, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/SubTaskActor/BP_MissionSubTaskAssassination.BP_MissionSubTaskAssassination_C
/// Size: 0x0008 (0x000630 - 0x000638)
class ABP_MissionSubTaskAssassination_C : public AM1MissionSubTaskActorAssassination
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1592;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x630, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskCompetitiveOccupation.BP_MissionTaskCompetitiveOccupation_C
/// Size: 0x0000 (0x000700 - 0x000700)
class ABP_MissionTaskCompetitiveOccupation_C : public AM1MissionTaskActorCompetitiveOccupation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskMultiAssassination.BP_MissionTaskMultiAssassination_C
/// Size: 0x0008 (0x000690 - 0x000698)
class ABP_MissionTaskMultiAssassination_C : public AM1MissionTaskActorMultiAssassination
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1688;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x690, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskMultiCollection.BP_MissionTaskMultiCollection_C
/// Size: 0x0008 (0x000660 - 0x000668)
class ABP_MissionTaskMultiCollection_C : public AM1MissionTaskActorMultiCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1640;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x660, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskDataCollection.BP_MissionTaskDataCollection_C
/// Size: 0x0008 (0x000670 - 0x000678)
class ABP_MissionTaskDataCollection_C : public AM1MissionTaskActorDataCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1656;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x670, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskContinuousSurvival.BP_MissionTaskContinuousSurvival_C
/// Size: 0x0010 (0x0006E0 - 0x0006F0)
class ABP_MissionTaskContinuousSurvival_C : public AM1MissionTaskActorWaveSurvival
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x6E0, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x6E8, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Mission/BP_MissionTaskContinuousSurvival.BP_MissionTaskContinuousSurvival_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x3a334c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskContinuousSurvival.BP_MissionTaskContinuousSurvival_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskContinuousSurvival.BP_MissionTaskContinuousSurvival_C.ExecuteUbergraph_BP_MissionTaskContinuousSurvival
	// void ExecuteUbergraph_BP_MissionTaskContinuousSurvival(int32_t EntryPoint);                                              // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskDestructionIronHeart.BP_MissionTaskDestructionIronHeart_C
/// Size: 0x0008 (0x000718 - 0x000720)
class ABP_MissionTaskDestructionIronHeart_C : public AM1MissionTaskActorDestructionIronHeart
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x718, 8, 0, 0})
};

/// Class /Game/Blueprints/Mission/TaskSelector/BP_TaskSelector_VoidSkipShpereSeq.BP_TaskSelector_VoidSkipShpereSeq_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBP_TaskSelector_VoidSkipShpereSeq_C : public UM1TaskSelector_VoidSkipSphereSeq
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Blueprints/Mission/TaskSelector/BP_TaskSelector_VoidSkipShpereSeq.BP_TaskSelector_VoidSkipShpereSeq_C.BP_GetNextTaskLinkName
	// FName BP_GetNextTaskLinkName(class AM1MissionTaskActor* InMissionTaskActor);                                             // [0x3a334c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Blueprints/Mission/BP_MissionTaskVoidBattleBoss.BP_MissionTaskVoidBattleBoss_C
/// Size: 0x0010 (0x000690 - 0x0006A0)
class ABP_MissionTaskVoidBattleBoss_C : public AM1MissionTaskActorVoidBattleEpicMonster
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x690, 8, 0, 0})
	CMember(class UBillboardComponent*)                Billboard                                                   OFFSET(get<T>, {0x698, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Mission/BP_MissionTaskVoidBattleBoss.BP_MissionTaskVoidBattleBoss_C.BP_ShouldBeVisibleOnLocal
	// void BP_ShouldBeVisibleOnLocal(bool InVisible);                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Mission/BP_MissionTaskVoidBattleBoss.BP_MissionTaskVoidBattleBoss_C.ExecuteUbergraph_BP_MissionTaskVoidBattleBoss
	// void ExecuteUbergraph_BP_MissionTaskVoidBattleBoss(int32_t EntryPoint);                                                  // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/BP_NpcBase.BP_NpcBase_C
/// Size: 0x0040 (0x000758 - 0x000798)
class ABP_NpcBase_C : public AM1Npc
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x760, 8, 0, 0})
	CMember(class UAK_Dialog_Component_C*)             AK_Dialog_Component                                         OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UM1IndicatorComponent*)              M1Indicator                                                 OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UM1InteractionInvokerComponent*)     M1InteractionInvoker                                        OFFSET(get<T>, {0x778, 8, 0, 0})
	SMember(FVector)                                   Origin_position                                             OFFSET(getStruct<T>, {0x780, 12, 0, 0})
	SMember(FVector)                                   Sub_position                                                OFFSET(getStruct<T>, {0x78C, 12, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/BP_NpcBase.BP_NpcBase_C.BP_GetWidgetComponent
	// class UWidgetComponent* BP_GetWidgetComponent();                                                                         // [0x3a334c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Character/NPC/BP_NpcBase.BP_NpcBase_C.BP_GetInteractionComponent
	// class UM1InteractionInvokerComponent* BP_GetInteractionComponent();                                                      // [0x3a334c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/Character/NPC/BP_NpcBase.BP_NpcBase_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/BP_NpcBase.BP_NpcBase_C.ExecuteUbergraph_BP_NpcBase
	// void ExecuteUbergraph_BP_NpcBase(int32_t EntryPoint);                                                                    // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Facial.AnimBP_NPC_Facial_C
/// Size: 0x04B1 (0x000318 - 0x0007C9)
class UAnimBP_NPC_Facial_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1993;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	DMember(unsigned char)                             __AnimBlueprintMutables_unkBecDupClass_FAnimBlueprintGeneratedMutableData OFFSET(get<unsigned char>, {0x328, 2, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x340, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x360, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x428, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x450, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x478, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x498, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x4E0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x500, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x5C8, 224, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x6A8, 128, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x728, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x750, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x778, 72, 0, 0})
	CMember(class UAnimSequence*)                      FacialAnim                                                  OFFSET(get<T>, {0x7C0, 8, 0, 0})
	DMember(bool)                                      bEnableFacialAnim                                           OFFSET(get<bool>, {0x7C8, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Facial.AnimBP_NPC_Facial_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Facial.AnimBP_NPC_Facial_C.ExecuteUbergraph_AnimBP_NPC_Facial
	// void ExecuteUbergraph_AnimBP_NPC_Facial(int32_t EntryPoint);                                                             // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Dialog.AnimBP_NPC_Dialog_C
/// Size: 0x0211 (0x000318 - 0x000529)
class UAnimBP_NPC_Dialog_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1321;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x358, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x380, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x3C8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x3E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x430, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x450, 200, 0, 0})
	CMember(class UAnimSequence*)                      StartAnim                                                   OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UAnimSequence*)                      LoopAnim                                                    OFFSET(get<T>, {0x520, 8, 0, 0})
	DMember(bool)                                      bShouldSkipToLoop                                           OFFSET(get<bool>, {0x528, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Dialog.AnimBP_NPC_Dialog_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Dialog.AnimBP_NPC_Dialog_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Dialog_AnimGraphNode_TransitionResult_6FA706E94C9DF2EF1384FF868CBAEB10
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_Dialog_AnimGraphNode_TransitionResult_6FA706E94C9DF2EF1384FF868CBAEB10(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Dialog.AnimBP_NPC_Dialog_C.ExecuteUbergraph_AnimBP_NPC_Dialog
	// void ExecuteUbergraph_AnimBP_NPC_Dialog(int32_t EntryPoint);                                                             // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_LookAt.AnimBP_NPC_LookAt_C
/// Size: 0x0362 (0x000318 - 0x00067A)
class UAnimBP_NPC_LookAt_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1658;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	DMember(unsigned char)                             __AnimBlueprintMutables_unkBecDupClass_FAnimBlueprintGeneratedMutableData OFFSET(get<unsigned char>, {0x328, 16, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x340, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x348, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x368, 200, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0x430, 280, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x548, 128, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x5C8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x5F0, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x638, 40, 0, 0})
	CMember(class UAimOffsetBlendSpace*)               LookAtAimOffset                                             OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(double)                                    LookAtYaw                                                   OFFSET(get<double>, {0x668, 8, 0, 0})
	DMember(double)                                    LookAtPitch                                                 OFFSET(get<double>, {0x670, 8, 0, 0})
	DMember(bool)                                      IsLookAtEnabled                                             OFFSET(get<bool>, {0x678, 1, 0, 0})
	DMember(bool)                                      IsInInteraction                                             OFFSET(get<bool>, {0x679, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_LookAt.AnimBP_NPC_LookAt_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_LookAt.AnimBP_NPC_LookAt_C.ShouldEnableLookAt
	// void ShouldEnableLookAt(bool& bEnable);                                                                                  // [0x3a334c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_LookAt.AnimBP_NPC_LookAt_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_LookAt_AnimGraphNode_RotationOffsetBlendSpace_FAFD5FC843C43694FEEACCA85784D844
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_LookAt_AnimGraphNode_RotationOffsetBlendSpace_FAFD5FC843C43694FEEACCA85784D844(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_LookAt.AnimBP_NPC_LookAt_C.ExecuteUbergraph_AnimBP_NPC_LookAt
	// void ExecuteUbergraph_AnimBP_NPC_LookAt(int32_t EntryPoint);                                                             // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C
/// Size: 0x076C (0x000318 - 0x000A84)
class UAnimBP_NPC_FullBody_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2692;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	DMember(unsigned char)                             __AnimBlueprintMutables_unkBecDupClass_FAnimBlueprintGeneratedMutableData OFFSET(get<unsigned char>, {0x328, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x340, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x360, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x388, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x3B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x3D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x400, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x428, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x450, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x478, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x4A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x4C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0x4F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0x518, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0x540, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0x568, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0x590, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x5B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x5E0, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x608, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x628, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x670, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x690, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0x6D8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x6F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x740, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0x760, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x7A8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0x7C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x810, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0x830, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x878, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x898, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x8E0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x900, 200, 0, 0})
	DMember(float)                                     K2Node_PropertyAccess                                       OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     K2Node_PropertyAccess1                                      OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     K2Node_PropertyAccess2                                      OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     K2Node_PropertyAccess3                                      OFFSET(get<float>, {0x9D4, 4, 0, 0})
	CMember(class UAnimSequence*)                      IdleOne                                                     OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(class UAnimSequence*)                      IdleTwo                                                     OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(class UAnimSequence*)                      MovingIdleOne                                               OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(class UAnimSequence*)                      MovingIdleTwo                                               OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(class UAnimSequence*)                      InteractionBegin                                            OFFSET(get<T>, {0x9F8, 8, 0, 0})
	CMember(class UAnimSequence*)                      InteractionLoop                                             OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(class UAnimSequence*)                      InteractionEnd                                              OFFSET(get<T>, {0xA08, 8, 0, 0})
	DMember(bool)                                      bIsInInteraction                                            OFFSET(get<bool>, {0xA10, 1, 0, 0})
	SMember(FM1NpcIdleAnimSettings)                    IdleAnimSettings                                            OFFSET(getStruct<T>, {0xA18, 88, 0, 0})
	DMember(double)                                    IdlaStartPosition                                           OFFSET(get<double>, {0xA70, 8, 0, 0})
	DMember(int32_t)                                   CurrentIdleRepeatCount                                      OFFSET(get<int32_t>, {0xA78, 4, 0, 0})
	CMember(EM1NpcAnimState)                           CurrentAnimState                                            OFFSET(get<T>, {0xA7C, 1, 0, 0})
	DMember(int32_t)                                   TargetIdleRepeatCount                                       OFFSET(get<int32_t>, {0xA80, 4, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.UpdateTargetRepeatCount
	// void UpdateTargetRepeatCount(EM1NpcAnimState AnimState);                                                                 // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.HasRepeatedEnough
	// void HasRepeatedEnough(bool& NewParam);                                                                                  // [0x3a334c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.ResetRepeatCount
	// void ResetRepeatCount();                                                                                                 // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_D2390C7C4A932D8EE83722B176E4300B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_D2390C7C4A932D8EE83722B176E4300B(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_C6250843418910B018FC46A20797F5A5
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_C6250843418910B018FC46A20797F5A5(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_0FAFAFB14E9A32BFE087EEB90BE25817
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_0FAFAFB14E9A32BFE087EEB90BE25817(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_7653EB62453949D9D9D10DAC6A71930A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_7653EB62453949D9D9D10DAC6A71930A(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_9E470B6C437DA0138013F0956836D41E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_9E470B6C437DA0138013F0956836D41E(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_91C73DD449C62C37A8DD52BC4F4549C4
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_91C73DD449C62C37A8DD52BC4F4549C4(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_A4BBFE9C47496681D0E98592CCD86288
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_A4BBFE9C47496681D0E98592CCD86288(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_8FA1637947CCEF185EC09BAB996CE896
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_8FA1637947CCEF185EC09BAB996CE896(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_8C63693141217C69A0F011928FD9001A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_8C63693141217C69A0F011928FD9001A(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_DE17CFA6472ECCDFF6A37AAAA703853B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_DE17CFA6472ECCDFF6A37AAAA703853B(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_DB3D83C64F58CE03389901AC142CD336
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_DB3D83C64F58CE03389901AC142CD336(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_59331B454AC55487362D25AB9D278192
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_59331B454AC55487362D25AB9D278192(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_9CBCE9B44E30B03130ADF4A1144EC5FB
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_9CBCE9B44E30B03130ADF4A1144EC5FB(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_E729C1854456B72F5D87C78ABE74C55D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_E729C1854456B72F5D87C78ABE74C55D(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimNotify_EnterRepeat
	// void AnimNotify_EnterRepeat();                                                                                           // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimNotify_EnterIdleOne
	// void AnimNotify_EnterIdleOne();                                                                                          // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimNotify_EnterIdleTwo
	// void AnimNotify_EnterIdleTwo();                                                                                          // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimNotify_EnterMovingIdleOne
	// void AnimNotify_EnterMovingIdleOne();                                                                                    // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimNotify_EnterMovingIdleTwo
	// void AnimNotify_EnterMovingIdleTwo();                                                                                    // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimNotify_StartTransition
	// void AnimNotify_StartTransition();                                                                                       // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.ExecuteUbergraph_AnimBP_NPC_FullBody
	// void ExecuteUbergraph_AnimBP_NPC_FullBody(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/AnimBP/AnimBP_NpcBase.AnimBP_NpcBase_C
/// Size: 0x04B8 (0x0004B0 - 0x000968)
class UAnimBP_NpcBase_C : public UM1NpcAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4B0, 8, 0, 0})
	DMember(unsigned char)                             __AnimBlueprintMutables_unkBecDupClass_FAnimBlueprintGeneratedMutableData OFFSET(get<unsigned char>, {0x4B8, 2, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x4C0, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x4C8, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x4D0, 32, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph                               OFFSET(getStruct<T>, {0x4F0, 184, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph1                              OFFSET(getStruct<T>, {0x5A8, 184, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x660, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph2                              OFFSET(getStruct<T>, {0x6A8, 184, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x760, 72, 0, 0})
	SMember(FAnimNode_LinkedAnimGraph)                 AnimGraphNode_LinkedAnimGraph3                              OFFSET(getStruct<T>, {0x7A8, 184, 0, 0})
	DMember(bool)                                      __CustomProperty_bEnableFacialAnim_2725090A4D082E9B61C3C7A84C5308BE OFFSET(get<bool>, {0x860, 1, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_FacialAnim_2725090A4D082E9B61C3C7A84C5308BE OFFSET(get<T>, {0x868, 8, 0, 0})
	DMember(bool)                                      __CustomProperty_bShouldSkipToLoop_BCF3B01F44341F9549B478B12DEA3A06 OFFSET(get<bool>, {0x870, 1, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_LoopAnim_BCF3B01F44341F9549B478B12DEA3A06  OFFSET(get<T>, {0x878, 8, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_StartAnim_BCF3B01F44341F9549B478B12DEA3A06 OFFSET(get<T>, {0x880, 8, 0, 0})
	DMember(bool)                                      __CustomProperty_IsInInteraction_CCC3709A431F2709F8C96CB2D6D56704 OFFSET(get<bool>, {0x888, 1, 0, 0})
	DMember(bool)                                      __CustomProperty_IsLookAtEnabled_CCC3709A431F2709F8C96CB2D6D56704 OFFSET(get<bool>, {0x889, 1, 0, 0})
	DMember(double)                                    __CustomProperty_LookAtPitch_CCC3709A431F2709F8C96CB2D6D56704 OFFSET(get<double>, {0x890, 8, 0, 0})
	DMember(double)                                    __CustomProperty_LookAtYaw_CCC3709A431F2709F8C96CB2D6D56704 OFFSET(get<double>, {0x898, 8, 0, 0})
	CMember(class UAimOffsetBlendSpace*)               __CustomProperty_LookAtAimOffset_CCC3709A431F2709F8C96CB2D6D56704 OFFSET(get<T>, {0x8A0, 8, 0, 0})
	SMember(FM1NpcIdleAnimSettings)                    __CustomProperty_IdleAnimSettings_E43C758140F0B50D10A2169B1CDF8046 OFFSET(getStruct<T>, {0x8A8, 88, 0, 0})
	DMember(bool)                                      __CustomProperty_bIsInInteraction_E43C758140F0B50D10A2169B1CDF8046 OFFSET(get<bool>, {0x900, 1, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_InteractionEnd_E43C758140F0B50D10A2169B1CDF8046 OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_InteractionLoop_E43C758140F0B50D10A2169B1CDF8046 OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_InteractionBegin_E43C758140F0B50D10A2169B1CDF8046 OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_MovingIdleTwo_E43C758140F0B50D10A2169B1CDF8046 OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_MovingIdleOne_E43C758140F0B50D10A2169B1CDF8046 OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_IdleTwo_E43C758140F0B50D10A2169B1CDF8046   OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(class UAnimSequence*)                      __CustomProperty_IdleOne_E43C758140F0B50D10A2169B1CDF8046   OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(class UAnimSequence*)                      Idle_One                                                    OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(class UAnimSequence*)                      Idle_Two                                                    OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(class UAnimSequence*)                      Moving_Idle_One                                             OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(class UAnimSequence*)                      Moving_Idle_Two                                             OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(class UAimOffsetBlendSpace*)               Look_At_Aim_Offset                                          OFFSET(get<T>, {0x960, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/AnimBP/AnimBP_NpcBase.AnimBP_NpcBase_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/AnimBP/AnimBP_NpcBase.AnimBP_NpcBase_C.ExecuteUbergraph_AnimBP_NpcBase
	// void ExecuteUbergraph_AnimBP_NpcBase(int32_t EntryPoint);                                                                // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Lobby/BP_LobbyHUD.BP_LobbyHUD_C
/// Size: 0x0010 (0x000448 - 0x000458)
class ABP_LobbyHUD_C : public AM1HUD
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x448, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x450, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Lobby/BP_LobbyHUD.BP_LobbyHUD_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Lobby/BP_LobbyHUD.BP_LobbyHUD_C.ExecuteUbergraph_BP_LobbyHUD
	// void ExecuteUbergraph_BP_LobbyHUD(int32_t EntryPoint);                                                                   // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Lobby/BP_LobbyPlayerController.BP_LobbyPlayerController_C
/// Size: 0x0008 (0x000900 - 0x000908)
class ABP_LobbyPlayerController_C : public AM1PlayerControllerLobby
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2312;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x900, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Lobby/BP_LobbyPlayerController.BP_LobbyPlayerController_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Lobby/BP_LobbyPlayerController.BP_LobbyPlayerController_C.ExecuteUbergraph_BP_LobbyPlayerController
	// void ExecuteUbergraph_BP_LobbyPlayerController(int32_t EntryPoint);                                                      // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Lobby/BP_LobbyGameMode.BP_LobbyGameMode_C
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class ABP_LobbyGameMode_C : public AGameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2E8, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Lobby/BP_LobbyGameMode.BP_LobbyGameMode_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Lobby/BP_LobbyGameMode.BP_LobbyGameMode_C.ExecuteUbergraph_BP_LobbyGameMode
	// void ExecuteUbergraph_BP_LobbyGameMode(int32_t EntryPoint);                                                              // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/AnimBP_NPC_042_AlbionOperator_A.AnimBP_NPC_042_AlbionOperator_A_C
/// Size: 0x0000 (0x000968 - 0x000968)
class UAnimBP_NPC_042_AlbionOperator_A_C : public UAnimBP_NpcBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2408;

public:
};

/// Class /Game/Blueprints/Character/NPC/AnimBP_NPC_043_AlbionOperator_B.AnimBP_NPC_043_AlbionOperator_B_C
/// Size: 0x0000 (0x000968 - 0x000968)
class UAnimBP_NPC_043_AlbionOperator_B_C : public UAnimBP_NpcBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2408;

public:
};

/// Class /Game/Blueprints/Character/NPC/NPC_043_AlbionOperator_B.NPC_043_AlbionOperator_B_C
/// Size: 0x0008 (0x000798 - 0x0007A0)
class ANPC_043_AlbionOperator_B_C : public ABP_NpcBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x798, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/NPC_043_AlbionOperator_B.NPC_043_AlbionOperator_B_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/NPC_043_AlbionOperator_B.NPC_043_AlbionOperator_B_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/NPC_043_AlbionOperator_B.NPC_043_AlbionOperator_B_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/NPC_043_AlbionOperator_B.NPC_043_AlbionOperator_B_C.ExecuteUbergraph_NPC_043_AlbionOperator_B
	// void ExecuteUbergraph_NPC_043_AlbionOperator_B(int32_t EntryPoint);                                                      // [0x3a334c0] Final                
};

/// Class /Game/Blueprints/Character/NPC/NPC_042_AlbionOperator_A.NPC_042_AlbionOperator_A_C
/// Size: 0x0008 (0x000798 - 0x0007A0)
class ANPC_042_AlbionOperator_A_C : public ABP_NpcBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x798, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Character/NPC/NPC_042_AlbionOperator_A.NPC_042_AlbionOperator_A_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/NPC_042_AlbionOperator_A.NPC_042_AlbionOperator_A_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/NPC_042_AlbionOperator_A.NPC_042_AlbionOperator_A_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Character/NPC/NPC_042_AlbionOperator_A.NPC_042_AlbionOperator_A_C.ExecuteUbergraph_NPC_042_AlbionOperator_A
	// void ExecuteUbergraph_NPC_042_AlbionOperator_A(int32_t EntryPoint);                                                      // [0x3a334c0] Final                
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Facial.AnimBP_NPC_Facial_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0147 (0x000001 - 0x000148)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0x1C, 44, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              OFFSET(get<T>, {0x4D, 1, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty1                                              OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty1                                             OFFSET(get<T>, {0x99, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty2                                             OFFSET(get<T>, {0x9A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0xB0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x130, 24, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Facial.AnimBP_NPC_Facial_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_Dialog.AnimBP_NPC_Dialog_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
class FAnimBlueprintGeneratedConstantDatadup_0 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0x20, 44, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              OFFSET(get<T>, {0x52, 1, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty1                                              OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x88, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x108, 24, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_LookAt.AnimBP_NPC_LookAt_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0107 (0x000001 - 0x000108)
class FAnimBlueprintGeneratedConstantDatadup_1 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              OFFSET(get<T>, {0x19, 1, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty1                                             OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty2                                             OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_LookAt.AnimBP_NPC_LookAt_C.AnimBlueprintGeneratedMutableData
/// Size: 0x000C (0x000001 - 0x00000D)
class FAnimBlueprintGeneratedMutableDatadup_2 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 13;

public:
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0167 (0x000001 - 0x000168)
class FAnimBlueprintGeneratedConstantDatadup_3 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty1                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty2                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FName)                                     __NameProperty4                                             OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty3                                              OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty5                                             OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty4                                              OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FName)                                     __NameProperty6                                             OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty5                                              OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty7                                             OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty6                                              OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0x68, 44, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              OFFSET(get<T>, {0x99, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              OFFSET(get<T>, {0x9A, 1, 0, 0})
	SMember(FName)                                     __NameProperty8                                             OFFSET(getStruct<T>, {0x9C, 8, 0, 0})
	SMember(FName)                                     __NameProperty9                                             OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty7                                              OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0xD0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x150, 24, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/Template/AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0007 (0x000001 - 0x000008)
class FAnimBlueprintGeneratedMutableDatadup_4 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/AnimBP_NpcBase.AnimBP_NpcBase_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00F7 (0x000001 - 0x0000F8)
class FAnimBlueprintGeneratedConstantDatadup_5 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty1                                             OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x60, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP/AnimBP_NpcBase.AnimBP_NpcBase_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
class FAnimBlueprintGeneratedMutableDatadup_6 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP_NPC_042_AlbionOperator_A.AnimBP_NPC_042_AlbionOperator_A_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0000 (0x000148 - 0x000148)
class FAnimBlueprintGeneratedConstantDatadup_7 : public FAnimBlueprintGeneratedConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Struct /Game/Blueprints/Character/NPC/AnimBP_NPC_043_AlbionOperator_B.AnimBP_NPC_043_AlbionOperator_B_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0000 (0x000148 - 0x000148)
class FAnimBlueprintGeneratedConstantDatadup_8 : public FAnimBlueprintGeneratedConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

