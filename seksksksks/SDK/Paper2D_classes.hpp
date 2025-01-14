#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA8 - 0x88)
// Class Paper2D.MaterialExpressionSpriteTextureSampler
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                         bSampleAdditionalTextures;                         // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AdditionalSlotIndex;                               // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SlotDisplayName;                                   // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionSpriteTextureSampler* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class Paper2D.PaperCharacter
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*               Sprite;                                            // 0x4B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperCharacter* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class Paper2D.PaperFlipbook
class UPaperFlipbook : public UObject
{
public:
	float                                        FramesPerSecond;                                   // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPaperFlipbookKeyFrame>        KeyFrames;                                         // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFlipbookCollisionMode            CollisionSource;                                   // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperFlipbook* GetDefaultObj();

	bool IsValidKeyFrameIndex(int32 Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int32 FrameIndex);
	int32 GetNumKeyFrames();
	int32 GetNumFrames();
	int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

// 0x8 (0x230 - 0x228)
// Class Paper2D.PaperFlipbookActor
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*               RenderComponent;                                   // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperFlipbookActor* GetDefaultObj();

};

// 0x48 (0x4D0 - 0x488)
// Class Paper2D.PaperFlipbookComponent
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                        SourceFlipbook;                                    // 0x488(0x8)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    Material;                                          // 0x490(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x498(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x49C(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReversePlayback : 1;                              // Mask: 0x2, PropSize: 0x10x49C(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPlaying : 1;                                      // Mask: 0x4, PropSize: 0x10x49C(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_2F : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AccumulatedTime;                                   // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedFrameIndex;                                  // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SpriteColor;                                       // 0x4A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            CachedBodySetup;                                   // 0x4B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFinishedPlaying;                                 // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPaperFlipbookComponent* GetDefaultObj();

	void Stop();
	void SetSpriteColor(const struct FLinearColor& NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	struct FLinearColor GetSpriteColor();
	float GetPlayRate();
	int32 GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int32 GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};

// 0x8 (0x230 - 0x228)
// Class Paper2D.PaperGroupedSpriteActor
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*          RenderComponent;                                   // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperGroupedSpriteActor* GetDefaultObj();

};

// 0x38 (0x4C0 - 0x488)
// Class Paper2D.PaperGroupedSpriteComponent
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>            InstanceMaterials;                                 // 0x488(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpriteInstanceData>           PerInstanceSpriteData;                             // 0x498(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_5FA[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperGroupedSpriteComponent* GetDefaultObj();

	bool UpdateInstanceTransform(int32 InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int32 InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool RemoveInstance(int32 InstanceIndex);
	bool GetInstanceTransform(int32 InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace);
	int32 GetInstanceCount();
	void ClearInstances();
	int32 AddInstance(struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};

// 0x8 (0x38 - 0x30)
// Class Paper2D.PaperRuntimeSettings
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                         bEnableSpriteAtlasGroups;                          // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTerrainSplineEditing;                       // 0x31(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResizeSpriteDataToMatchTextures;                  // 0x32(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FD[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperRuntimeSettings* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class Paper2D.PaperSprite
class UPaperSprite : public UObject
{
public:
	uint8                                        Pad_5FE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x40(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             BakedSourceUV;                                     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             BakedSourceDimension;                              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BakedSourceTexture;                                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    AlternateMaterial;                                 // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPaperSpriteSocket>            Sockets;                                           // 0x78(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5FF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PixelsPerUnrealUnit;                               // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            BodySetup;                                         // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AlternateMaterialSplitIndex;                       // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_600[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector4>                      BakedRenderData;                                   // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPaperSprite* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class Paper2D.PaperSpriteActor
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                 RenderComponent;                                   // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperSpriteActor* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class Paper2D.PaperSpriteAtlas
class UPaperSpriteAtlas : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPaperSpriteAtlas* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class Paper2D.PaperSpriteBlueprintLibrary
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPaperSpriteBlueprintLibrary* GetDefaultObj();

	struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height);
};

// 0x28 (0x4B0 - 0x488)
// Class Paper2D.PaperSpriteComponent
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                          SourceSprite;                                      // 0x488(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaterialOverride;                                  // 0x490(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SpriteColor;                                       // 0x498(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_60A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperSpriteComponent* GetDefaultObj();

	void SetSpriteColor(const struct FLinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};

// 0x18 (0x240 - 0x228)
// Class Paper2D.PaperTerrainActor
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                       DummyRoot;                                         // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainSplineComponent*          SplineComponent;                                   // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainComponent*                RenderComponent;                                   // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperTerrainActor* GetDefaultObj();

};

// 0x60 (0x4C0 - 0x460)
// Class Paper2D.PaperTerrainComponent
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                 TerrainMaterial;                                   // 0x460(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosedSpline;                                     // 0x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilledSpline;                                     // 0x469(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_615[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperTerrainSplineComponent*          AssociatedSpline;                                  // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x478(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SegmentOverlapAmount;                              // 0x47C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TerrainColor;                                      // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReparamStepsPerSegment;                            // 0x490(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x494(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_617[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionThickness;                                // 0x498(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_618[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            CachedBodySetup;                                   // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_619[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperTerrainComponent* GetDefaultObj();

	void SetTerrainColor(const struct FLinearColor& NewColor);
};

// 0x18 (0x50 - 0x38)
// Class Paper2D.PaperTerrainMaterial
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>     Rules;                                             // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                          InteriorFill;                                      // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPaperTerrainMaterial* GetDefaultObj();

};

// 0x10 (0x570 - 0x560)
// Class Paper2D.PaperTerrainSplineComponent
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	uint8                                        Pad_61A[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperTerrainSplineComponent* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class Paper2D.PaperTileLayer
class UPaperTileLayer : public UObject
{
public:
	class FText                                  LayerName;                                         // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        LayerWidth;                                        // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LayerHeight;                                       // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHiddenInGame : 1;                                 // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bLayerCollides : 1;                                // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionThickness : 1;                   // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionOffset : 1;                      // Mask: 0x8, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_33 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_61B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionThicknessOverride;                        // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CollisionOffsetOverride;                           // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          LayerColor;                                        // 0x5C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_620[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPaperTileInfo>                AllocatedCells;                                    // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         TileSet;                                           // 0x88(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                AllocatedGrid;                                     // 0x90(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPaperTileLayer* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class Paper2D.PaperTileMap
class UPaperTileMap : public UObject
{
public:
	int32                                        MapWidth;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MapHeight;                                         // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileWidth;                                         // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileHeight;                                        // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelsPerUnrealUnit;                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileX;                                // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileY;                                // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerLayer;                                // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperTileSet>          SelectedTileSet;                                   // 0x50(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x94(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETileMapProjectionMode            ProjectionMode;                                    // 0x95(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_625[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HexSideLength;                                     // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_626[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerNameIndex;                                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_627[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperTileMap* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class Paper2D.PaperTileMapActor
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                RenderComponent;                                   // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperTileMapActor* GetDefaultObj();

};

// 0x58 (0x4E0 - 0x488)
// Class Paper2D.PaperTileMapComponent
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int32                                        MapWidth;                                          // 0x488(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MapHeight;                                         // 0x48C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0x490(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0x494(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         DefaultLayerTileSet;                               // 0x498(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Material;                                          // 0x4A0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x4A8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	struct FLinearColor                          TileMapColor;                                      // 0x4B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        UseSingleLayerIndex;                               // 0x4C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseSingleLayer;                                   // 0x4CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_646[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperTileMap*                         TileMap;                                           // 0x4D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_647[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPaperTileMapComponent* GetDefaultObj();

	void SetTileMapColor(const struct FLinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int32 X, int32 Y, int32 Layer, const struct FPaperTileInfo& NewValue);
	void SetLayerColor(const struct FLinearColor& NewColor, int32 Layer);
	void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int32 TileX, int32 TileY, TArray<struct FVector>* Points, int32 LayerIndex, bool bWorldSpace);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer);
	void GetMapSize(int32* MapWidth, int32* MapHeight, int32* NumLayers);
	struct FLinearColor GetLayerColor(int32 Layer);
	void CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};

// 0x80 (0xB0 - 0x30)
// Class Paper2D.PaperTileSet
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                             TileSize;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            TileSheet;                                         // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x40(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	struct FIntMargin                            BorderMargin;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FIntPoint                             PerTileSpacing;                                    // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                             DrawingOffset;                                     // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WidthInTiles;                                      // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        HeightInTiles;                                     // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileMetadata>            PerTileData;                                       // 0x80(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileSetTerrain>          Terrains;                                          // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0xA0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0xA4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Margin;                                            // 0xA8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Spacing;                                           // 0xAC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPaperTileSet* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class Paper2D.TileMapBlueprintLibrary
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTileMapBlueprintLibrary* GetDefaultObj();

	struct FPaperTileInfo MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	class FName GetTileUserData(const struct FPaperTileInfo& Tile);
	struct FTransform GetTileTransform(const struct FPaperTileInfo& Tile);
	void BreakTile(const struct FPaperTileInfo& Tile, int32* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};

}


