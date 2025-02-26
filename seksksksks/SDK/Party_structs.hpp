#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EApprovalAction : uint8
{
	Approve                        = 0,
	Enqueue                        = 1,
	EnqueueAndStartBeacon          = 2,
	Deny                           = 3,
	EApprovalAction_MAX            = 4,
};

enum class EPartyJoinDenialReason : uint8
{
	NoReason                       = 0,
	JoinAttemptAborted             = 1,
	Busy                           = 2,
	OssUnavailable                 = 3,
	PartyFull                      = 4,
	GameFull                       = 5,
	NotPartyLeader                 = 6,
	PartyPrivate                   = 7,
	JoinerCrossplayRestricted      = 8,
	MemberCrossplayRestricted      = 9,
	GameModeRestricted             = 10,
	Banned                         = 11,
	NotLoggedIn                    = 12,
	CheckingForRejoin              = 13,
	TargetUserMissingPresence      = 14,
	TargetUserUnjoinable           = 15,
	TargetUserAway                 = 16,
	AlreadyLeaderInPlatformSession = 17,
	TargetUserPlayingDifferentGame = 18,
	TargetUserMissingPlatformSession = 19,
	PlatformSessionMissingJoinInfo = 20,
	FailedToStartFindConsoleSession = 21,
	MissingPartyClassForTypeId     = 22,
	TargetUserBlocked              = 23,
	CustomReason0                  = 24,
	CustomReason1                  = 25,
	CustomReason2                  = 26,
	CustomReason3                  = 27,
	CustomReason4                  = 28,
	CustomReason5                  = 29,
	CustomReason6                  = 30,
	CustomReason7                  = 31,
	CustomReason8                  = 32,
	CustomReason9                  = 33,
	CustomReason10                 = 34,
	CustomReason11                 = 35,
	CustomReason12                 = 36,
	CustomReason13                 = 37,
	CustomReason14                 = 38,
	CustomReason15                 = 39,
	CustomReason16                 = 40,
	CustomReason17                 = 41,
	CustomReason18                 = 42,
	CustomReason19                 = 43,
	CustomReason20                 = 44,
	CustomReason21                 = 45,
	CustomReason22                 = 46,
	CustomReason23                 = 47,
	CustomReason24                 = 48,
	CustomReason25                 = 49,
	CustomReason26                 = 50,
	CustomReason27                 = 51,
	CustomReason28                 = 52,
	CustomReason29                 = 53,
	CustomReason30                 = 54,
	CustomReason31                 = 55,
	CustomReason32                 = 56,
	CustomReason33                 = 57,
	CustomReason34                 = 58,
	CustomReason35                 = 59,
	CustomReason36                 = 60,
	CustomReason37                 = 61,
	CustomReason38                 = 62,
	CustomReason39                 = 63,
	MAX                            = 64,
};

enum class EPartyInviteRestriction : uint8
{
	AnyMember                      = 0,
	LeaderOnly                     = 1,
	NoInvites                      = 2,
	EPartyInviteRestriction_MAX    = 3,
};

enum class EPartyType : uint8
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	EPartyType_MAX                 = 3,
};

enum class ESocialChannelType : uint8
{
	General                        = 0,
	Founder                        = 1,
	Party                          = 2,
	Team                           = 3,
	System                         = 4,
	Private                        = 5,
	ESocialChannelType_MAX         = 6,
};

enum class EPlatformIconDisplayRule : uint8
{
	Always                         = 0,
	AlwaysIfDifferent              = 1,
	AlwaysWhenInCrossplayParty     = 2,
	AlwaysIfDifferentWhenInCrossplayParty = 3,
	Never                          = 4,
	EPlatformIconDisplayRule_MAX   = 5,
};

enum class ECrossplayPreference : uint8
{
	NoSelection                    = 0,
	OptedIn                        = 1,
	OptedOut                       = 2,
	OptedOutRestricted             = 3,
	ECrossplayPreference_MAX       = 4,
};

enum class ESocialRelationship : uint8
{
	Any                            = 0,
	FriendInviteReceived           = 1,
	FriendInviteSent               = 2,
	PartyInvite                    = 3,
	Friend                         = 4,
	BlockedPlayer                  = 5,
	SuggestedFriend                = 6,
	RecentPlayer                   = 7,
	ESocialRelationship_MAX        = 8,
};

enum class ESocialSubsystem : uint8
{
	Primary                        = 0,
	Platform                       = 1,
	MAX                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct Party.OnlinePartyRepDataBase
struct FOnlinePartyRepDataBase
{
public:
	uint8                                        Pad_208[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Party.SocialPlatformDescription
struct FSocialPlatformDescription
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformType;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnlineSubsystem;                                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionType;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExternalAccountType;                               // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CrossplayPool;                                     // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Party.UserPlatform
struct FUserPlatform
{
public:
	struct FSocialPlatformDescription            PlatformDescription;                               // 0x0(0x58)(NativeAccessSpecifierPrivate)
};

// 0x160 (0x178 - 0x18)
// ScriptStruct Party.PartyMemberRepData
struct FPartyMemberRepData : public FOnlinePartyRepDataBase
{
public:
	uint8                                        Pad_20A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserPlatform                         Platform;                                          // 0x20(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20B[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlatformUniqueId;                                  // 0xA8(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20C[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlatformSessionId;                                 // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20D[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECrossplayPreference              CrossplayPreference;                               // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20E[0x37];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Party.PartyPrivacySettings
struct FPartyPrivacySettings
{
public:
	enum class EPartyType                        PartyType;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPartyInviteRestriction           PartyInviteRestriction;                            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyLeaderFriendsCanJoin;                         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Party.PartyPlatformSessionInfo
struct FPartyPlatformSessionInfo
{
public:
	class FString                                SessionType;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      OwnerPrimaryId;                                    // 0x20(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Party.SocialChatChannelConfig
struct FSocialChatChannelConfig
{
public:
	class USocialUser*                           SocialUser;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USocialChatChannel*>            ListenChannels;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_212[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Party.PartyRepData
struct FPartyRepData : public FOnlinePartyRepDataBase
{
public:
	uint8                                        Pad_213[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyPrivacySettings                 PrivacySettings;                                   // 0x20(0x3)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_214[0x35];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPartyPlatformSessionInfo>     PlatformSessions;                                  // 0x58(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_215[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


