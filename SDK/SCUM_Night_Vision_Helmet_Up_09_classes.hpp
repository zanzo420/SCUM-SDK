#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Night_Vision_Helmet_Up_09_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Night_Vision_Helmet_Up_09.Night_Vision_Helmet_Up_09_C
// 0x0000 (0x0800 - 0x0800)
class ANight_Vision_Helmet_Up_09_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Night_Vision_Helmet_Up_09.Night_Vision_Helmet_Up_09_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
