
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: M1
/// dependency: M1Actor

/// Class /Game/Cinematic/CIN_BP/ApplyPC_BP/CinematicSkelMeshInLobby_AnimBP.CinematicSkelMeshInLobby_AnimBP_C
/// Size: 0x0268 (0x000350 - 0x0005B8)
class UCinematicSkelMeshInLobby_AnimBP_C : public UM1CinematicPlayerInLobbyAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x358, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x368, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x388, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x3D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x3F8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x420, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x468, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x488, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x4D0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x4F0, 200, 0, 0})


	/// Functions
	// Function /Game/Cinematic/CIN_BP/ApplyPC_BP/CinematicSkelMeshInLobby_AnimBP.CinematicSkelMeshInLobby_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Cinematic/CIN_BP/ApplyPC_BP/CinematicSkelMeshInLobby_AnimBP.CinematicSkelMeshInLobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CinematicSkelMeshInLobby_AnimBP_AnimGraphNode_TransitionResult_DAE0BA8B4BCDC26D8D728E8FED20174A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_CinematicSkelMeshInLobby_AnimBP_AnimGraphNode_TransitionResult_DAE0BA8B4BCDC26D8D728E8FED20174A(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Cinematic/CIN_BP/ApplyPC_BP/CinematicSkelMeshInLobby_AnimBP.CinematicSkelMeshInLobby_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CinematicSkelMeshInLobby_AnimBP_AnimGraphNode_TransitionResult_BE0D71CC45103860BA7016B4FC9E0D7A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_CinematicSkelMeshInLobby_AnimBP_AnimGraphNode_TransitionResult_BE0D71CC45103860BA7016B4FC9E0D7A(); // [0x3a334c0] BlueprintEvent       
	// Function /Game/Cinematic/CIN_BP/ApplyPC_BP/CinematicSkelMeshInLobby_AnimBP.CinematicSkelMeshInLobby_AnimBP_C.AnimNotify_GetRandomAnim
	// void AnimNotify_GetRandomAnim();                                                                                         // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Cinematic/CIN_BP/ApplyPC_BP/CinematicSkelMeshInLobby_AnimBP.CinematicSkelMeshInLobby_AnimBP_C.ExecuteUbergraph_CinematicSkelMeshInLobby_AnimBP
	// void ExecuteUbergraph_CinematicSkelMeshInLobby_AnimBP(int32_t EntryPoint);                                               // [0x3a334c0] Final                
};

/// Class /Game/Cinematic/Lobby/Lobby_LoginEnd.Lobby_LoginEnd_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class ALobby_LoginEnd_C : public AM1LevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Game/Cinematic/Lobby/Lobby_LoginLoop.Lobby_LoginLoop_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class ALobby_LoginLoop_C : public AM1LevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Game/Cinematic/CIN_BP/ApplyPC_BP/BP_CinematicSkelMesh_Lobby.BP_CinematicSkelMesh_Lobby_C
/// Size: 0x0000 (0x000498 - 0x000498)
class ABP_CinematicSkelMesh_Lobby_C : public AM1CinematicPlayerSkelMeshInLobby
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
};

/// Class /Game/Cinematic/Lobby/Lobby_ChrSelectLoop.Lobby_ChrSelectLoop_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class ALobby_ChrSelectLoop_C : public AM1LevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Game/Cinematic/Lobby/Lobby_LoginStart.Lobby_LoginStart_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class ALobby_LoginStart_C : public AM1LevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Game/Cinematic/Lobby/LobbyLevelSequencePlayer.LobbyLevelSequencePlayer_C
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class ALobbyLevelSequencePlayer_C : public AM1SequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Struct /Game/Cinematic/CIN_BP/ApplyPC_BP/CinematicSkelMeshInLobby_AnimBP.CinematicSkelMeshInLobby_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
class FAnimBlueprintGeneratedConstantDatadup_14 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
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

