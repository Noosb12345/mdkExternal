
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: KawaiiPhysics
/// dependency: M1
/// dependency: M1AnimPhys

/// Class /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C
/// Size: 0x2740 (0x000318 - 0x002A58)
class UBP_Sec_PC_001_A0101_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 10840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys                                    OFFSET(getStruct<T>, {0x360, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys1                                   OFFSET(getStruct<T>, {0x730, 976, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xB00, 200, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys2                                   OFFSET(getStruct<T>, {0xBD0, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys3                                   OFFSET(getStruct<T>, {0xFA0, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys4                                   OFFSET(getStruct<T>, {0x1370, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys5                                   OFFSET(getStruct<T>, {0x1740, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys6                                   OFFSET(getStruct<T>, {0x1B10, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys7                                   OFFSET(getStruct<T>, {0x1EE0, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys8                                   OFFSET(getStruct<T>, {0x22B0, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys9                                   OFFSET(getStruct<T>, {0x2680, 976, 0, 0})
	DMember(double)                                    KawaiiAlpha                                                 OFFSET(get<double>, {0x2A50, 8, 0, 0})


	/// Functions
	// Function /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C.BlueprintThreadSafeUpdateAnimation
	// void BlueprintThreadSafeUpdateAnimation(float DeltaTime);                                                                // [0x3a334c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C.ExecuteUbergraph_BP_Sec_PC_001_A0101
	// void ExecuteUbergraph_BP_Sec_PC_001_A0101(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_004_A0101.BP_Sec_PC_004_A0101_C
/// Size: 0x1630 (0x000318 - 0x001948)
class UBP_Sec_PC_004_A0101_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x338, 200, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys                                    OFFSET(getStruct<T>, {0x400, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys1                                   OFFSET(getStruct<T>, {0x7D0, 976, 0, 0})
	SMember(FM1AnimNode_ModifyBone_Expression)         M1AnimGraphNode_ModifyBone_Expression                       OFFSET(getStruct<T>, {0xBA0, 368, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys2                                   OFFSET(getStruct<T>, {0xD10, 976, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x10E0, 32, 0, 0})
	SMember(FM1AnimNode_ApplyFacialAdditive)           M1AnimGraphNode_ApplyFacialAdditive                         OFFSET(getStruct<T>, {0x1100, 152, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys3                                   OFFSET(getStruct<T>, {0x11A0, 976, 0, 0})
	SMember(FM1AnimNode_AnimPhys)                      M1AnimGraphNode_AnimPhys4                                   OFFSET(getStruct<T>, {0x1570, 976, 0, 0})
	DMember(double)                                    KawaiiAlpha                                                 OFFSET(get<double>, {0x1940, 8, 0, 0})


	/// Functions
	// Function /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_004_A0101.BP_Sec_PC_004_A0101_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_004_A0101.BP_Sec_PC_004_A0101_C.BlueprintThreadSafeUpdateAnimation
	// void BlueprintThreadSafeUpdateAnimation(float DeltaTime);                                                                // [0x3a334c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_004_A0101.BP_Sec_PC_004_A0101_C.ExecuteUbergraph_BP_Sec_PC_004_A0101
	// void ExecuteUbergraph_BP_Sec_PC_004_A0101(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/Characters/NPC/042/BP/SEC/NPC_042_A101_AnimBP.NPC_042_A101_AnimBP_C
/// Size: 0x08C8 (0x000318 - 0x000BE0)
class UNPC_042_A101_AnimBP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x358, 200, 0, 0})
	SMember(FAnimNode_KawaiiPhysics)                   AnimGraphNode_KawaiiPhysics                                 OFFSET(getStruct<T>, {0x420, 640, 0, 0})
	SMember(FAnimNode_KawaiiPhysics)                   AnimGraphNode_KawaiiPhysics1                                OFFSET(getStruct<T>, {0x6A0, 640, 0, 0})
	SMember(FAnimNode_KawaiiPhysics)                   AnimGraphNode_KawaiiPhysics2                                OFFSET(getStruct<T>, {0x920, 640, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xBA0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xBC0, 32, 0, 0})


	/// Functions
	// Function /Game/Characters/NPC/042/BP/SEC/NPC_042_A101_AnimBP.NPC_042_A101_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/NPC/042/BP/SEC/NPC_042_A101_AnimBP.NPC_042_A101_AnimBP_C.ExecuteUbergraph_NPC_042_A101_AnimBP
	// void ExecuteUbergraph_NPC_042_A101_AnimBP(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/Characters/NPC/043/BP/SEC/NPC_043_A101_AnimBP.NPC_043_A101_AnimBP_C
/// Size: 0x0648 (0x000318 - 0x000960)
class UNPC_043_A101_AnimBP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x358, 200, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x420, 32, 0, 0})
	SMember(FAnimNode_KawaiiPhysics)                   AnimGraphNode_KawaiiPhysics                                 OFFSET(getStruct<T>, {0x440, 640, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x6C0, 32, 0, 0})
	SMember(FAnimNode_KawaiiPhysics)                   AnimGraphNode_KawaiiPhysics1                                OFFSET(getStruct<T>, {0x6E0, 640, 0, 0})


	/// Functions
	// Function /Game/Characters/NPC/043/BP/SEC/NPC_043_A101_AnimBP.NPC_043_A101_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/NPC/043/BP/SEC/NPC_043_A101_AnimBP.NPC_043_A101_AnimBP_C.ExecuteUbergraph_NPC_043_A101_AnimBP
	// void ExecuteUbergraph_NPC_043_A101_AnimBP(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/Characters/NPC/001/BP/SEC/BP_Sec_NPC_001_A0101.BP_Sec_NPC_001_A0101_C
/// Size: 0x0108 (0x000318 - 0x000420)
class UBP_Sec_NPC_001_A0101_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x358, 200, 0, 0})


	/// Functions
	// Function /Game/Characters/NPC/001/BP/SEC/BP_Sec_NPC_001_A0101.BP_Sec_NPC_001_A0101_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x3a334c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/NPC/001/BP/SEC/BP_Sec_NPC_001_A0101.BP_Sec_NPC_001_A0101_C.ExecuteUbergraph_BP_Sec_NPC_001_A0101
	// void ExecuteUbergraph_BP_Sec_NPC_001_A0101(int32_t EntryPoint);                                                          // [0x3a334c0] Final                
};

/// Struct /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00CF (0x000001 - 0x0000D0)
class FAnimBlueprintGeneratedConstantDatadup_9 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x38, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
};

/// Struct /Game/Characters/PC/AnimBP/Sec/BP_Sec_PC_004_A0101.BP_Sec_PC_004_A0101_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00CF (0x000001 - 0x0000D0)
class FAnimBlueprintGeneratedConstantDatadup_10 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x38, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
};

/// Struct /Game/Characters/NPC/042/BP/SEC/NPC_042_A101_AnimBP.NPC_042_A101_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00CF (0x000001 - 0x0000D0)
class FAnimBlueprintGeneratedConstantDatadup_11 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x38, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
};

/// Struct /Game/Characters/NPC/043/BP/SEC/NPC_043_A101_AnimBP.NPC_043_A101_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00CF (0x000001 - 0x0000D0)
class FAnimBlueprintGeneratedConstantDatadup_12 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x38, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
};

/// Struct /Game/Characters/NPC/001/BP/SEC/BP_Sec_NPC_001_A0101.BP_Sec_NPC_001_A0101_C.AnimBlueprintGeneratedConstantData
/// Size: 0x00CF (0x000001 - 0x0000D0)
class FAnimBlueprintGeneratedConstantDatadup_13 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x38, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
};

