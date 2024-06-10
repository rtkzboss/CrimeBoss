#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockMagazineType.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnlockMagazineType : uint8 {
    None,
    Weapons,
    WeaponSkins,
    Equipment,
    Characters,
    CharacterSkins,
    Perks,
    PostCampaign,
};

