#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// Class AndroidPermission.AndroidPermissionCallbackProxy
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnPermissionsGrantedDynamicDelegate;               // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_624[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAndroidPermissionCallbackProxy* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AndroidPermission.AndroidPermissionFunctionLibrary
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAndroidPermissionFunctionLibrary* GetDefaultObj();

	bool CheckPermission(const class FString& Permission);
	class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<class FString>& Permissions);
};

}


