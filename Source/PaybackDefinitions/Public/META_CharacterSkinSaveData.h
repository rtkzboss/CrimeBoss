#pragma once
#include "CoreMinimal.h"
#include "META_ItemSaveDataBase.h"
#include "META_CharacterSkinSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_CharacterSkinSaveData : public FMETA_ItemSaveDataBase {
    GENERATED_BODY()
public:
    PAYBACKDEFINITIONS_API FMETA_CharacterSkinSaveData();
};

