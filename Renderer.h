
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0028 (0x000478 - 0x0004A0)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(class USparseVolumeTexture*)               SparseVolumeTexturePreview                                  OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(bool)                                      bAnimate                                                    OFFSET(get<bool>, {0x480, 1, 1, 0})
	DMember(float)                                     AnimationFrame                                              OFFSET(get<float>, {0x484, 4, 0, 0})
	DMember(float)                                     FrameRate                                                   OFFSET(get<float>, {0x488, 4, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0x48C, 4, 0, 0})
	DMember(int32_t)                                   ComponentToVisualize                                        OFFSET(get<int32_t>, {0x490, 4, 0, 0})
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0008 (0x000248 - 0x000250)
class ASparseVolumeTextureViewer : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class USparseVolumeTextureViewerComponent*) SparseVolumeTextureViewerComponent                         OFFSET(get<T>, {0x248, 8, 0, 0})
};

