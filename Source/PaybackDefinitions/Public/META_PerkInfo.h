#pragma once
#include "CoreMinimal.h"
#include "EMETA_PerkOptions.h"
#include "META_Chance.h"
#include "META_PerkInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_PerkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_PerkOptions, FMETA_Chance> ChanceForBetterPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_PerkOptions, FMETA_Chance> ChanceForNoDeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_PerkOptions, FMETA_Chance> ChanceForVendorToAttack;
    
    FMETA_PerkInfo();
};

