#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class GameplayTags.BlueprintGameplayTagLibrary
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlueprintGameplayTagLibrary* GetDefaultObj();

	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);
	bool NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B);
	bool NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B);
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B);
	bool NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	bool MatchesAnyTags(const struct FGameplayTag& TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	struct FGameplayTagQuery MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag>& GameplayTags);
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery);
	bool IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	bool HasTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer);
	class FName GetTagName(struct FGameplayTag& GameplayTag);
	int32 GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer);
	class FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer);
	class FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B);
	bool EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTag& Tag);
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery);
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer);
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);
};

// 0x0 (0x30 - 0x30)
// Class GameplayTags.GameplayTagAssetInterface
class IGameplayTagAssetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTagAssetInterface* GetDefaultObj();

	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// 0x70 (0xA0 - 0x30)
// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                UserDescription;                                   // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditableGameplayTagQueryExpression*   RootExpression;                                    // 0x50(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TagQueryExportText_Helper;                         // 0x58(0x48)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQuery* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GameplayTags.EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj();

};

// 0x218 (0x248 - 0x30)
// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public UObject
{
public:
	uint8                                        Pad_7D0[0x138];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FGameplayTagSource> TagSources;                                        // 0x168(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D1[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDataTable*>                    GameplayTagTables;                                 // 0x238(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayTagsManager* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagTableRow>          GameplayTagList;                                   // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTagsList* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URestrictedGameplayTagsList* GetDefaultObj();

};

// 0x70 (0xC0 - 0x50)
// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                         ImportTagsFromConfig;                              // 0x50(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnOnInvalidTags;                                 // 0x51(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearInvalidTags;                                  // 0x52(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FastReplication;                                   // 0x53(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InvalidTagCharacters;                              // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagCategoryRemap>     CategoryRemapping;                                 // 0x68(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               GameplayTagTableList;                              // 0x78(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagRedirect>          GameplayTagRedirects;                              // 0x88(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          CommonlyReplicatedTags;                            // 0x98(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        NumBitsForContainerSize;                           // 0xA8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NetIndexFirstBitSegment;                           // 0xAC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedConfigInfo>         RestrictedConfigFiles;                             // 0xB0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTagsSettings* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                DeveloperConfigName;                               // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FavoriteTagSource;                                 // 0x50(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTagsDeveloperSettings* GetDefaultObj();

};

}


