#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.generated.h"

UENUM(BlueprintType)
enum class EIGS_ItemType : uint8 {
    Item_Weapon,
    Item_Ammo,
    Item_Armor,
    Item_Mod,
    Item_Material,
    Item_Blueprint,
    Item_GenericItems,
    Item_Trash,
    Item_Gadget,
    Item_Throwable,
    Item_Key,
    Item_MeleeWeapon,
    Item_Loot,
    Item_Global,
    Item_Carryable,
    Item_Equipment,
    Item_WeaponDefinition,
    Item_MAX UMETA(Hidden),
    Item_UNKNOWN = 255,
};

