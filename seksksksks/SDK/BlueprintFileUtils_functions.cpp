#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BlueprintFileUtils.BlueprintFileUtilsBPLibrary
// (None)

class UClass* UBlueprintFileUtilsBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintFileUtilsBPLibrary");

	return Clss;
}


// BlueprintFileUtilsBPLibrary BlueprintFileUtils.Default__BlueprintFileUtilsBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintFileUtilsBPLibrary* UBlueprintFileUtilsBPLibrary::GetDefaultObj()
{
	static class UBlueprintFileUtilsBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintFileUtilsBPLibrary*>(UBlueprintFileUtilsBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MoveFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DestFilename                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SrcFilename                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplace                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEvenIfReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::MoveFile(const class FString& DestFilename, const class FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "MoveFile");

	Params::UBlueprintFileUtilsBPLibrary_MoveFile_Params Parms{};

	Parms.DestFilename = DestFilename;
	Parms.SrcFilename = SrcFilename;
	Parms.bReplace = bReplace;
	Parms.bEvenIfReadOnly = bEvenIfReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateTree                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::MakeDirectory(const class FString& Path, bool bCreateTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "MakeDirectory");

	Params::UBlueprintFileUtilsBPLibrary_MakeDirectory_Params Parms{};

	Parms.Path = Path;
	Parms.bCreateTree = bCreateTree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBlueprintFileUtilsBPLibrary::GetUserDirectory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "GetUserDirectory");

	Params::UBlueprintFileUtilsBPLibrary_GetUserDirectory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      StartDirectory                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              FoundPaths                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Wildcard                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFindFiles                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFindDirectories                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::FindRecursive(const class FString& StartDirectory, TArray<class FString>* FoundPaths, const class FString& Wildcard, bool bFindFiles, bool bFindDirectories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "FindRecursive");

	Params::UBlueprintFileUtilsBPLibrary_FindRecursive_Params Parms{};

	Parms.StartDirectory = StartDirectory;
	Parms.Wildcard = Wildcard;
	Parms.bFindFiles = bFindFiles;
	Parms.bFindDirectories = bFindDirectories;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FoundPaths != nullptr)
		*FoundPaths = std::move(Parms.FoundPaths);

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Directory                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              FoundFiles                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      FileExtension                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::FindFiles(const class FString& Directory, TArray<class FString>* FoundFiles, const class FString& FileExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "FindFiles");

	Params::UBlueprintFileUtilsBPLibrary_FindFiles_Params Parms{};

	Parms.Directory = Directory;
	Parms.FileExtension = FileExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FoundFiles != nullptr)
		*FoundFiles = std::move(Parms.FoundFiles);

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FileExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::FileExists(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "FileExists");

	Params::UBlueprintFileUtilsBPLibrary_FileExists_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DirectoryExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Directory                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::DirectoryExists(const class FString& Directory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "DirectoryExists");

	Params::UBlueprintFileUtilsBPLibrary_DirectoryExists_Params Parms{};

	Parms.Directory = Directory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMustExist                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEvenIfReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::DeleteFile(const class FString& Filename, bool bMustExist, bool bEvenIfReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "DeleteFile");

	Params::UBlueprintFileUtilsBPLibrary_DeleteFile_Params Parms{};

	Parms.Filename = Filename;
	Parms.bMustExist = bMustExist;
	Parms.bEvenIfReadOnly = bEvenIfReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Directory                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMustExist                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteRecursively                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::DeleteDirectory(const class FString& Directory, bool bMustExist, bool bDeleteRecursively)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "DeleteDirectory");

	Params::UBlueprintFileUtilsBPLibrary_DeleteDirectory_Params Parms{};

	Parms.Directory = Directory;
	Parms.bMustExist = bMustExist;
	Parms.bDeleteRecursively = bDeleteRecursively;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DestFilename                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SrcFilename                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplace                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEvenIfReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintFileUtilsBPLibrary::CopyFile(const class FString& DestFilename, const class FString& SrcFilename, bool bReplace, bool bEvenIfReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintFileUtilsBPLibrary", "CopyFile");

	Params::UBlueprintFileUtilsBPLibrary_CopyFile_Params Parms{};

	Parms.DestFilename = DestFilename;
	Parms.SrcFilename = SrcFilename;
	Parms.bReplace = bReplace;
	Parms.bEvenIfReadOnly = bEvenIfReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


