#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFoliageScaling : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EFoliageScaling_MAX            = 5,
};

enum class EVertexColorMaskChannel : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	MAX_None                       = 4,
	EVertexColorMaskChannel_MAX    = 5,
};

enum class EFoliageVertexColorMask : uint8
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,
};

enum class ESimulationQuery : uint8
{
	None                           = 0,
	CollisionOverlap               = 1,
	ShadeOverlap                   = 2,
	AnyOverlap                     = 3,
	ESimulationQuery_MAX           = 4,
};

enum class ESimulationOverlap : uint8
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask
{
public:
	uint8                                        UseMask : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_46A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaskThreshold;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InvertMask : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject
{
public:
	class UObject*                               FoliageTypeObject;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFoliageType*                          TypeInstance;                                      // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsAsset;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;                                              // 0x18(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Age;                                               // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFoliageType*                          Type;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_473[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


