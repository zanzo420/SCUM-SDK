#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Lemon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lemon.Lemon_C
// 0x0000 (0x0870 - 0x0870)
class ALemon_C : public AFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Lemon.Lemon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
