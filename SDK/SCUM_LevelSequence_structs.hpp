#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_UMG_classes.hpp"
#include "SCUM_MovieScene_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
struct FLevelSequenceBindingReference
{
	struct FString                                     PackageName;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	struct FSoftObjectPath                             ExternalObjectPath;                                       // 0x0010(0x0018)
	struct FString                                     ObjectPath;                                               // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequenceBindingReference>      References;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x0050
struct FLevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                    // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0008
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrameRate;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x0048
struct FLevelSequencePlayerSnapshot
{
	struct FString                                     MasterName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	float                                              MasterTime;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     CurrentShotName;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	float                                              CurrentShotLocalTime;                                     // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UCameraComponent*                            CameraComponent;                                          // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FLevelSequenceSnapshotSettings              Settings;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FMovieSceneSequenceID                       ShotID;                                                   // 0x0040(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
