#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_WeaponBullet_9mmParabellumFMJ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponBullet_9mmParabellumFMJ.BP_WeaponBullet_9mmParabellumFMJ_C
// 0x0000 (0x04C0 - 0x04C0)
class ABP_WeaponBullet_9mmParabellumFMJ_C : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WeaponBullet_9mmParabellumFMJ.BP_WeaponBullet_9mmParabellumFMJ_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
