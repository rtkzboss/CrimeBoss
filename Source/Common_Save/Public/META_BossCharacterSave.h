#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "META_HeisterLoadoutSave.h"
#include "META_BossCharacterSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_BossCharacterSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_HeisterLoadoutSave Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkData> Perks;
    
    FMETA_BossCharacterSave();
};

