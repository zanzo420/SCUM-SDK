#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Painkillers_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Painkillers_02.Painkillers_02_C
// 0x0000 (0x0790 - 0x0790)
class APainkillers_02_C : public AMedicationItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Painkillers_02.Painkillers_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
