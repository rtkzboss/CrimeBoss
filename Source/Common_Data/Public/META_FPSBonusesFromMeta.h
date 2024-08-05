#pragma once
#include "CoreMinimal.h"
#include "META_PerkDataToFPS.h"
#include "META_FPSBonusesFromMeta.generated.h"

USTRUCT(BlueprintType)
struct FMETA_FPSBonusesFromMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkDataToFPS> ArmyPerkData;
    
    COMMON_DATA_API FMETA_FPSBonusesFromMeta();
};

