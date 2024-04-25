#pragma once
#include "CoreMinimal.h"
#include "META_ItemSaveDataBase.h"
#include "META_WeaponSkinSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_WeaponSkinSaveData : public FMETA_ItemSaveDataBase {
    GENERATED_BODY()
public:
    PAYBACKDEFINITIONS_API FMETA_WeaponSkinSaveData();
};

