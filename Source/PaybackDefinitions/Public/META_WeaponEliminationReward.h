#pragma once
#include "CoreMinimal.h"
#include "META_WeaponEliminationReward.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_WeaponEliminationReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponQuality;
    
    FMETA_WeaponEliminationReward();
};

