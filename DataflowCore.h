
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Struct /Script/DataflowCore.NodeColors
/// Size: 0x0020 (0x000000 - 0x000020)
class FNodeColors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FLinearColor)                              NodeTitleColor                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              NodeBodyTintColor                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/DataflowCore.DataflowSettings
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class UDataflowSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FLinearColor)                              ArrayPinTypeColor                                           OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FLinearColor)                              ManagedArrayCollectionPinTypeColor                          OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FLinearColor)                              BoxPinTypeColor                                             OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FLinearColor)                              SpherePinTypeColor                                          OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TMap<FName, FNodeColors>)                  NodeColorsMap                                               OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Struct /Script/DataflowCore.DataflowNode
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FDataflowNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bActive                                                     OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/DataflowCore.DataflowConnection
/// Size: 0x0040 (0x000000 - 0x000040)
class FDataflowConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/DataflowCore.DataflowInput
/// Size: 0x0008 (0x000040 - 0x000048)
class FDataflowInput : public FDataflowConnection
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/DataflowCore.DataflowOutput
/// Size: 0x0028 (0x000040 - 0x000068)
class FDataflowOutput : public FDataflowConnection
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/DataflowCore.DataflowSelection
/// Size: 0x0020 (0x000000 - 0x000020)
class FDataflowSelection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.DataflowTransformSelection
/// Size: 0x0000 (0x000020 - 0x000020)
class FDataflowTransformSelection : public FDataflowSelection
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.DataflowVertexSelection
/// Size: 0x0000 (0x000020 - 0x000020)
class FDataflowVertexSelection : public FDataflowSelection
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.DataflowFaceSelection
/// Size: 0x0000 (0x000020 - 0x000020)
class FDataflowFaceSelection : public FDataflowSelection
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.DataflowTerminalNode
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class FDataflowTerminalNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

