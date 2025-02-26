#pragma once

// Dumped with Dumper-7!

namespace SDK
{
	//---------------------------------------------------------------------------------------------------------------------
	// ENUMS
	//---------------------------------------------------------------------------------------------------------------------

	enum class EInterpCurveMode : uint8
	{
		CIM_Linear = 0,
		CIM_CurveAuto = 1,
		CIM_Constant = 2,
		CIM_CurveUser = 3,
		CIM_CurveBreak = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX = 6,
	};

	enum class ERangeBoundTypes : uint8
	{
		Exclusive = 0,
		Inclusive = 1,
		Open = 2,
		ERangeBoundTypes_MAX = 3,
	};

	enum class ELocalizedTextSourceCategory : uint8
	{
		Game = 0,
		Engine = 1,
		Editor = 2,
		ELocalizedTextSourceCategory_MAX = 3,
	};

	enum class EAutomationEventType : uint8
	{
		Info = 0,
		Warning = 1,
		Error = 2,
		EAutomationEventType_MAX = 3,
	};

	enum class ELifetimeCondition : uint8
	{
		COND_None = 0,
		COND_InitialOnly = 1,
		COND_OwnerOnly = 2,
		COND_SkipOwner = 3,
		COND_SimulatedOnly = 4,
		COND_AutonomousOnly = 5,
		COND_SimulatedOrPhysics = 6,
		COND_InitialOrOwner = 7,
		COND_Custom = 8,
		COND_ReplayOrOwner = 9,
		COND_ReplayOnly = 10,
		COND_SimulatedOnlyNoReplay = 11,
		COND_SimulatedOrPhysicsNoReplay = 12,
		COND_SkipReplay = 13,
		COND_Never = 15,
		COND_Max = 16,
	};

	enum class EDataValidationResult : uint8
	{
		Invalid = 0,
		Valid = 1,
		NotValidated = 2,
		EDataValidationResult_MAX = 3,
	};

	enum class EAppMsgType : uint8
	{
		Ok = 0,
		YesNo = 1,
		OkCancel = 2,
		YesNoCancel = 3,
		CancelRetryContinue = 4,
		YesNoYesAllNoAll = 5,
		YesNoYesAllNoAllCancel = 6,
		YesNoYesAll = 7,
		EAppMsgType_MAX = 8,
	};

	enum class EAppReturnType : uint8
	{
		No = 0,
		Yes = 1,
		YesAll = 2,
		NoAll = 3,
		Cancel = 4,
		Ok = 5,
		Retry = 6,
		Continue = 7,
		EAppReturnType_MAX = 8,
	};

	enum class EPropertyAccessChangeNotifyMode : uint8
	{
		Default = 0,
		Never = 1,
		Always = 2,
		EPropertyAccessChangeNotifyMode_MAX = 3,
	};

	enum class EUnit : uint8
	{
		Micrometers = 0,
		Millimeters = 1,
		Centimeters = 2,
		Meters = 3,
		Kilometers = 4,
		Inches = 5,
		Feet = 6,
		Yards = 7,
		Miles = 8,
		Lightyears = 9,
		Degrees = 10,
		Radians = 11,
		MetersPerSecond = 12,
		KilometersPerHour = 13,
		MilesPerHour = 14,
		Celsius = 15,
		Farenheit = 16,
		Kelvin = 17,
		Micrograms = 18,
		Milligrams = 19,
		Grams = 20,
		Kilograms = 21,
		MetricTons = 22,
		Ounces = 23,
		Pounds = 24,
		Stones = 25,
		Newtons = 26,
		PoundsForce = 27,
		KilogramsForce = 28,
		Hertz = 29,
		Kilohertz = 30,
		Megahertz = 31,
		Gigahertz = 32,
		RevolutionsPerMinute = 33,
		Bytes = 34,
		Kilobytes = 35,
		Megabytes = 36,
		Gigabytes = 37,
		Terabytes = 38,
		Lumens = 39,
		Milliseconds = 43,
		Seconds = 44,
		Minutes = 45,
		Hours = 46,
		Days = 47,
		Months = 48,
		Years = 49,
		Multiplier = 52,
		Percentage = 51,
		Unspecified = 53,
		EUnit_MAX = 54,
	};

	enum class EMouseCursor : uint8
	{
		None = 0,
		Default = 1,
		TextEditBeam = 2,
		ResizeLeftRight = 3,
		ResizeUpDown = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross = 7,
		Crosshairs = 8,
		Hand = 9,
		GrabHand = 10,
		GrabHandClosed = 11,
		SlashedCircle = 12,
		EyeDropper = 13,
		EMouseCursor_MAX = 14,
	};

	enum class EPixelFormat : uint8
	{
		PF_Unknown = 0,
		PF_A32B32G32R32F = 1,
		PF_B8G8R8A8 = 2,
		PF_G8 = 3,
		PF_G16 = 4,
		PF_DXT1 = 5,
		PF_DXT3 = 6,
		PF_DXT5 = 7,
		PF_UYVY = 8,
		PF_FloatRGB = 9,
		PF_FloatRGBA = 10,
		PF_DepthStencil = 11,
		PF_ShadowDepth = 12,
		PF_R32_FLOAT = 13,
		PF_G16R16 = 14,
		PF_G16R16F = 15,
		PF_G16R16F_FILTER = 16,
		PF_G32R32F = 17,
		PF_A2B10G10R10 = 18,
		PF_A16B16G16R16 = 19,
		PF_D24 = 20,
		PF_R16F = 21,
		PF_R16F_FILTER = 22,
		PF_BC5 = 23,
		PF_V8U8 = 24,
		PF_A1 = 25,
		PF_FloatR11G11B10 = 26,
		PF_A8 = 27,
		PF_R32_UINT = 28,
		PF_R32_SINT = 29,
		PF_PVRTC2 = 30,
		PF_PVRTC4 = 31,
		PF_R16_UINT = 32,
		PF_R16_SINT = 33,
		PF_R16G16B16A16_UINT = 34,
		PF_R16G16B16A16_SINT = 35,
		PF_R5G6B5_UNORM = 36,
		PF_R8G8B8A8 = 37,
		PF_A8R8G8B8 = 38,
		PF_BC4 = 39,
		PF_R8G8 = 40,
		PF_ATC_RGB = 41,
		PF_ATC_RGBA_E = 42,
		PF_ATC_RGBA_I = 43,
		PF_X24_G8 = 44,
		PF_ETC1 = 45,
		PF_ETC2_RGB = 46,
		PF_ETC2_RGBA = 47,
		PF_R32G32B32A32_UINT = 48,
		PF_R16G16_UINT = 49,
		PF_ASTC_4x4 = 50,
		PF_ASTC_6x6 = 51,
		PF_ASTC_8x8 = 52,
		PF_ASTC_10x10 = 53,
		PF_ASTC_12x12 = 54,
		PF_BC6H = 55,
		PF_BC7 = 56,
		PF_R8_UINT = 57,
		PF_L8 = 58,
		PF_XGXR8 = 59,
		PF_R8G8B8A8_UINT = 60,
		PF_R8G8B8A8_SNORM = 61,
		PF_R16G16B16A16_UNORM = 62,
		PF_R16G16B16A16_SNORM = 63,
		PF_PLATFORM_HDR_0 = 64,
		PF_PLATFORM_HDR_1 = 65,
		PF_PLATFORM_HDR_2 = 66,
		PF_NV12 = 67,
		PF_R32G32_UINT = 68,
		PF_ETC2_R11_EAC = 69,
		PF_ETC2_RG11_EAC = 70,
		PF_MAX_ = 72,
	};

	enum class EAxis : uint8
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		EAxis_MAX = 4,
	};

	enum class ELogTimes : uint8
	{
		None = 0,
		UTC = 1,
		SinceGStartTime = 2,
		Local = 3,
		ELogTimes_MAX = 4,
	};

	enum class ESearchDir : uint8
	{
		FromStart = 0,
		FromEnd = 1,
		ESearchDir_MAX = 2,
	};

	enum class ESearchCase : uint8
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		ESearchCase_MAX = 2,
	};

	//---------------------------------------------------------------------------------------------------------------------
	// STRUCTS
	//---------------------------------------------------------------------------------------------------------------------

	// 0x14 (0x14 - 0x0)
	// ScriptStruct CoreUObject.JoinabilitySettings
	struct FJoinabilitySettings
	{
	public:
		class FName                                  SessionName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bPublicSearchable;                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bAllowInvites;                                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bJoinViaPresence;                                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bJoinViaPresenceFriendsOnly;                       // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        MaxPlayers;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        MaxPartySize;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x1 (0x1 - 0x0)
	// ScriptStruct CoreUObject.UniqueNetIdWrapper
	struct FUniqueNetIdWrapper
	{
	public:
		uint8                                        Pad_73[0x1];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.Guid
	struct FGuid
	{
	public:
		int32                                        A;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        B;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        C;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        D;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		inline bool operator==(const FGuid& Other) const
		{
			return A == Other.A && B == Other.B && C == Other.C && D == Other.D;
		}

		inline bool operator!=(const FGuid& Other) const
		{
			return A != Other.A || B != Other.B || C != Other.C || D != Other.D;
		}
	};

	// 0xC (0xC - 0x0)
	// ScriptStruct CoreUObject.Vector
	struct FVector
	{
	public:
		float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		inline FVector()
			: X(0.0), Y(0.0), Z(0.0)
		{
		}

		inline FVector(decltype(X) Value)
			: X(Value), Y(Value), Z(Value)
		{
		}

		inline FVector(decltype(X) x, decltype(Y) y, decltype(Z) z)
			: X(x), Y(y), Z(z)
		{
		}

		FVector& operator=(const FVector& Other);

		inline bool operator==(const FVector& Other) const
		{
			return X == Other.X && Y == Other.Y && Z == Other.Z;
		}

		inline bool operator!=(const FVector& Other) const
		{
			return X != Other.X || Y != Other.Y || Z != Other.Z;
		}

		FVector operator+(const FVector& Other) const;

		FVector operator-(const FVector& Other) const;

		FVector operator/(const FVector& Other) const;

		FVector operator*(decltype(X) Scalar) const;

		FVector operator*(const FVector& Other) const;

		FVector operator/(decltype(X) Scalar) const;

		FVector& operator+=(const FVector& Other);

		FVector& operator-=(const FVector& Other);

		FVector& operator*=(const decltype(X) Scalar);

		inline bool IsZero() const
		{
			return X == 0.0f && Y == 0.0f && Z == 0.0f;
		}

		void Clamp360();

		float Dot(const FVector& Other) const;

		float MagnitudeSqr() const;

		float Magnitude() const;

		FVector GetNormalized() const;
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.Vector4
	struct FVector4
	{
	public:
		float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        W;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		inline FVector4()
			: X(0.0), Y(0.0), Z(0.0), W(0.0)
		{
		}

		inline FVector4(decltype(X) Value)
			: X(Value), Y(Value), Z(Value), W(Value)
		{
		}

		inline FVector4(decltype(X) x, decltype(Y) y, decltype(Z) z, decltype(W) w)
			: X(x), Y(y), Z(z), W(w)
		{
		}

		inline bool operator==(const FVector4& Other) const
		{
			return X == Other.X && Y == Other.Y && Z == Other.Z && W == Other.W;
		}

		inline bool operator!=(const FVector4& Other) const
		{
			return X != Other.X || Y != Other.Y || Z != Other.Z || W != Other.W;
		}

		FVector4 operator+(const FVector4& Other) const;

		FVector4 operator-(const FVector4& Other) const;

		FVector4 operator*(decltype(X) Scalar) const;

		FVector4 operator/(decltype(X) Scalar) const;
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.Vector2D
	struct FVector2D
	{
	public:
		float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		inline FVector2D()
			: X(0.0), Y(0.0)
		{
		}

		inline FVector2D(decltype(X) Value)
			: X(Value), Y(Value)
		{
		}

		inline FVector2D(decltype(X) x, decltype(Y) y)
			: X(x), Y(y)
		{
		}

		inline bool operator==(const FVector2D& Other) const
		{
			return X == Other.X && Y == Other.Y;
		}

		inline bool operator!=(const FVector2D& Other) const
		{
			return X != Other.X || Y != Other.Y;
		}

		FVector2D operator+(const FVector2D& Other) const;

		FVector2D operator-(const FVector2D& Other) const;

		FVector2D operator*(decltype(X) Scalar) const;

		FVector2D operator/(decltype(X) Scalar) const;
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.TwoVectors
	struct FTwoVectors
	{
	public:
		struct FVector                               V1;                                                // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               V2;                                                // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x4 (0x10 - 0xC)
	// ScriptStruct CoreUObject.Plane
	struct FPlane : public FVector
	{
	public:
		float                                        W;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0xC (0xC - 0x0)
	// ScriptStruct CoreUObject.Rotator
	struct FRotator
	{
	public:
		float                                        Pitch;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Yaw;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Roll;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		inline FRotator()
			: Pitch(0.0), Yaw(0.0), Roll(0.0)
		{
		}

		inline FRotator(decltype(Pitch) Value)
			: Pitch(Value), Yaw(Value), Roll(Value)
		{
		}

		inline FRotator(decltype(Pitch) pitch, decltype(Yaw) yaw, decltype(Roll) roll)
			: Pitch(pitch), Yaw(yaw), Roll(roll)
		{
		}

		inline bool operator==(const FRotator& Other) const
		{
			return Pitch == Other.Pitch && Yaw == Other.Yaw && Roll == Other.Roll;
		}

		inline bool operator!=(const FRotator& Other) const
		{
			return Pitch != Other.Pitch || Yaw != Other.Yaw || Roll != Other.Roll;
		}

		FRotator operator+(const FRotator& Other) const;

		FRotator operator-(const FRotator& Other) const;

		FRotator operator*(decltype(Pitch) Scalar) const;

		FRotator operator/(decltype(Pitch) Scalar) const;
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.Quat
	struct FQuat
	{
	public:
		float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        W;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		inline FQuat()
			: X(0.0), Y(0.0), Z(0.0), W(0.0)
		{
		}

		inline FQuat(decltype(X) Value)
			: X(Value), Y(Value), Z(Value), W(Value)
		{
		}

		inline FQuat(decltype(X) x, decltype(Y) y, decltype(Z) z, decltype(W) w)
			: X(x), Y(y), Z(z), W(w)
		{
		}

		inline bool operator==(const FQuat& Other) const
		{
			return X == Other.X && Y == Other.Y && Z == Other.Z && W == Other.W;
		}

		inline bool operator!=(const FQuat& Other) const
		{
			return X != Other.X || Y != Other.Y || Z != Other.Z || W != Other.W;
		}

		FQuat operator+(const FQuat& Other) const;

		FQuat operator-(const FQuat& Other) const;

		FQuat operator*(decltype(X) Scalar) const;

		FQuat operator/(decltype(X) Scalar) const;

		FRotator ToRotator() const;

		float Distance(const FVector& v) const;

		float DistanceMeter(FVector& v) const;
	};

	// 0x4 (0x4 - 0x0)
	// ScriptStruct CoreUObject.PackedNormal
	struct FPackedNormal
	{
	public:
		uint8                                        X;                                                 // 0x0(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Y;                                                 // 0x1(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Z;                                                 // 0x2(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        W;                                                 // 0x3(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x4 (0x4 - 0x0)
	// ScriptStruct CoreUObject.PackedRGB10A2N
	struct FPackedRGB10A2N
	{
	public:
		int32                                        Packed;                                            // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.PackedRGBA16N
	struct FPackedRGBA16N
	{
	public:
		int32                                        XY;                                                // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        ZW;                                                // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.IntPoint
	struct FIntPoint
	{
	public:
		int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0xC (0xC - 0x0)
	// ScriptStruct CoreUObject.IntVector
	struct FIntVector
	{
	public:
		int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x4 (0x4 - 0x0)
	// ScriptStruct CoreUObject.Color
	struct FColor
	{
	public:
		uint8                                        B;                                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        G;                                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        R;                                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        A;                                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.LinearColor
	struct FLinearColor
	{
	public:
		float                                        R;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        G;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        B;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        A;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x1C (0x1C - 0x0)
	// ScriptStruct CoreUObject.Box
	struct FBox
	{
	public:
		struct FVector                               Min;                                               // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               Max;                                               // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        IsValid;                                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_7B[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x14 (0x14 - 0x0)
	// ScriptStruct CoreUObject.Box2D
	struct FBox2D
	{
	public:
		struct FVector2D                             Min;                                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                             Max;                                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        bIsValid;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_7C[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x1C (0x1C - 0x0)
	// ScriptStruct CoreUObject.BoxSphereBounds
	struct FBoxSphereBounds
	{
	public:
		struct FVector                               Origin;                                            // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               BoxExtent;                                         // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        SphereRadius;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x3C (0x3C - 0x0)
	// ScriptStruct CoreUObject.OrientedBox
	struct FOrientedBox
	{
	public:
		struct FVector                               Center;                                            // 0x0(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               AxisX;                                             // 0xC(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               AxisY;                                             // 0x18(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               AxisZ;                                             // 0x24(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        ExtentX;                                           // 0x30(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        ExtentY;                                           // 0x34(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        ExtentZ;                                           // 0x38(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x40 (0x40 - 0x0)
	// ScriptStruct CoreUObject.Matrix
	struct FMatrix
	{
	public:
		struct FPlane                                XPlane;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlane                                YPlane;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlane                                ZPlane;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlane                                WPlane;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x14 (0x14 - 0x0)
	// ScriptStruct CoreUObject.InterpCurvePointFloat
	struct FInterpCurvePointFloat
	{
	public:
		float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        OutVal;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        ArriveTangent;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        LeaveTangent;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class EInterpCurveMode                  InterpMode;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_81[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.InterpCurveFloat
	struct FInterpCurveFloat
	{
	public:
		TArray<struct FInterpCurvePointFloat>        Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_82[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x20 (0x20 - 0x0)
	// ScriptStruct CoreUObject.InterpCurvePointVector2D
	struct FInterpCurvePointVector2D
	{
	public:
		float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                             OutVal;                                            // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                             ArriveTangent;                                     // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                             LeaveTangent;                                      // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class EInterpCurveMode                  InterpMode;                                        // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_83[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.InterpCurveVector2D
	struct FInterpCurveVector2D
	{
	public:
		TArray<struct FInterpCurvePointVector2D>     Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_85[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x2C (0x2C - 0x0)
	// ScriptStruct CoreUObject.InterpCurvePointVector
	struct FInterpCurvePointVector
	{
	public:
		float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               OutVal;                                            // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               ArriveTangent;                                     // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               LeaveTangent;                                      // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class EInterpCurveMode                  InterpMode;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_87[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.InterpCurveVector
	struct FInterpCurveVector
	{
	public:
		TArray<struct FInterpCurvePointVector>       Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_88[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x50 (0x50 - 0x0)
	// ScriptStruct CoreUObject.InterpCurvePointQuat
	struct FInterpCurvePointQuat
	{
	public:
		float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_89[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		struct FQuat                                 OutVal;                                            // 0x10(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FQuat                                 ArriveTangent;                                     // 0x20(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FQuat                                 LeaveTangent;                                      // 0x30(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		enum class EInterpCurveMode                  InterpMode;                                        // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_8C[0xF];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.InterpCurveQuat
	struct FInterpCurveQuat
	{
	public:
		TArray<struct FInterpCurvePointQuat>         Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_8D[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x50 (0x50 - 0x0)
	// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	struct FInterpCurvePointTwoVectors
	{
	public:
		float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTwoVectors                           OutVal;                                            // 0x4(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTwoVectors                           ArriveTangent;                                     // 0x1C(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTwoVectors                           LeaveTangent;                                      // 0x34(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		enum class EInterpCurveMode                  InterpMode;                                        // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_91[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.InterpCurveTwoVectors
	struct FInterpCurveTwoVectors
	{
	public:
		TArray<struct FInterpCurvePointTwoVectors>   Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_94[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x38 (0x38 - 0x0)
	// ScriptStruct CoreUObject.InterpCurvePointLinearColor
	struct FInterpCurvePointLinearColor
	{
	public:
		float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                          OutVal;                                            // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                          ArriveTangent;                                     // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                          LeaveTangent;                                      // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class EInterpCurveMode                  InterpMode;                                        // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_9A[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.InterpCurveLinearColor
	struct FInterpCurveLinearColor
	{
	public:
		TArray<struct FInterpCurvePointLinearColor>  Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_9C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x30 (0x30 - 0x0)
	// ScriptStruct CoreUObject.Transform
	struct FTransform
	{
	public:
		struct FQuat                                 Rotation;                                          // 0x0(0x10)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                               Translation;                                       // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_A0[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               Scale3D;                                           // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_A1[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.RandomStream
	struct FRandomStream
	{
	public:
		int32                                        InitialSeed;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Seed;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.DateTime
	struct FDateTime
	{
	public:
		uint8                                        Pad_A2[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x4 (0x4 - 0x0)
	// ScriptStruct CoreUObject.FrameNumber
	struct FFrameNumber
	{
	public:
		int32                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.FrameRate
	struct FFrameRate
	{
	public:
		int32                                        Numerator;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Denominator;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.FrameTime
	struct FFrameTime
	{
	public:
		struct FFrameNumber                          FrameNumber;                                       // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        SubFrame;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.QualifiedFrameTime
	struct FQualifiedFrameTime
	{
	public:
		struct FFrameTime                            Time;                                              // 0x0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                            Rate;                                              // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x14 (0x14 - 0x0)
	// ScriptStruct CoreUObject.Timecode
	struct FTimecode
	{
	public:
		int32                                        Hours;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Minutes;                                           // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Seconds;                                           // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Frames;                                            // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bDropFrameFormat;                                  // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_AB[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.Timespan
	struct FTimespan
	{
	public:
		uint8                                        Pad_AC[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.SoftObjectPath
	struct FSoftObjectPath
	{
	public:
		class FName                                  AssetPathName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                SubPathString;                                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x0 (0x18 - 0x18)
	// ScriptStruct CoreUObject.SoftClassPath
	struct FSoftClassPath : public FSoftObjectPath
	{
	public:
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.PrimaryAssetType
	struct FPrimaryAssetType
	{
	public:
		class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.PrimaryAssetId
	struct FPrimaryAssetId
	{
	public:
		struct FPrimaryAssetType                     PrimaryAssetType;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  PrimaryAssetName;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x1 (0x1 - 0x0)
	// ScriptStruct CoreUObject.FallbackStruct
	struct FFallbackStruct
	{
	public:
		uint8                                        Pad_AF[0x1];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.FloatRangeBound
	struct FFloatRangeBound
	{
	public:
		enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                        Pad_B0[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.FloatRange
	struct FFloatRange
	{
	public:
		struct FFloatRangeBound                      LowerBound;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		struct FFloatRangeBound                      UpperBound;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.Int32RangeBound
	struct FInt32RangeBound
	{
	public:
		enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                        Pad_B4[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.Int32Range
	struct FInt32Range
	{
	public:
		struct FInt32RangeBound                      LowerBound;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		struct FInt32RangeBound                      UpperBound;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.FrameNumberRangeBound
	struct FFrameNumberRangeBound
	{
	public:
		enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                        Pad_B5[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		struct FFrameNumber                          Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.FrameNumberRange
	struct FFrameNumberRange
	{
	public:
		struct FFrameNumberRangeBound                LowerBound;                                        // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		struct FFrameNumberRangeBound                UpperBound;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.FloatInterval
	struct FFloatInterval
	{
	public:
		float                                        Min;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Max;                                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct CoreUObject.Int32Interval
	struct FInt32Interval
	{
	public:
		int32                                        Min;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Max;                                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0xB8 (0xB8 - 0x0)
	// ScriptStruct CoreUObject.PolyglotTextData
	struct FPolyglotTextData
	{
	public:
		enum class ELocalizedTextSourceCategory      Category;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_B6[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                NativeCulture;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Namespace;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Key;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                NativeString;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>           LocalizedStrings;                                  // 0x48(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		bool                                         bIsMinimalPatch;                                   // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_B8[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		class FText                                  CachedText;                                        // 0xA0(0x18)(Transient, NativeAccessSpecifierPublic)
	};

	// 0x38 (0x38 - 0x0)
	// ScriptStruct CoreUObject.AutomationEvent
	struct FAutomationEvent
	{
	public:
		enum class EAutomationEventType              Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_B9[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Context;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                 Artifact;                                          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x58 (0x58 - 0x0)
	// ScriptStruct CoreUObject.AutomationExecutionEntry
	struct FAutomationExecutionEntry
	{
	public:
		struct FAutomationEvent                      Event;                                             // 0x0(0x38)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Filename;                                          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        LineNumber;                                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_BA[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
		struct FDateTime                             Timestamp;                                         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0xF0 (0xF0 - 0x0)
	// ScriptStruct CoreUObject.ARFilter
	struct FARFilter
	{
	public:
		TArray<class FName>                          PackageNames;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		TArray<class FName>                          PackagePaths;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		TArray<class FName>                          ObjectPaths;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		TArray<class FName>                          ClassNames;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		uint8                                        Pad_BB[0x50];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TSet<class FName>                            RecursiveClassesExclusionSet;                      // 0x90(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
		bool                                         bRecursivePaths;                                   // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bRecursiveClasses;                                 // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIncludeOnlyOnDiskAssets;                          // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_BC[0xD];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.AssetBundleEntry
	struct FAssetBundleEntry
	{
	public:
		class FName                                  BundleName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoftObjectPath>               BundleAssets;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct CoreUObject.AssetBundleData
	struct FAssetBundleData
	{
	public:
		TArray<struct FAssetBundleEntry>             Bundles;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	};

	// 0x60 (0x60 - 0x0)
	// ScriptStruct CoreUObject.AssetData
	struct FAssetData
	{
	public:
		class FName                                  ObjectPath;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  PackageName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  PackagePath;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  AssetName;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  AssetClass;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_BF[0x38];                                      // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
	struct FTestUninitializedScriptStructMembersTest
	{
	public:
		class UObject* UninitializedObjectReference;                      // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject* InitializedObjectReference;                        // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        UnusedValue;                                       // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_C0[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
	};
}