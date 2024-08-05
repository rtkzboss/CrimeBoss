#pragma once
#include "CoreMinimal.h"
#include "META_UIArmyTierCoefficientConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_UIArmyTierCoefficientConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmyTiercoefficientBigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmyTiercoefficientLower;
    
    FMETA_UIArmyTierCoefficientConfig();
};

