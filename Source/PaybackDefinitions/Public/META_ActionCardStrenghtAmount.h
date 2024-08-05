#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardStrength.h"
#include "META_ActionCardStrenghtAmount.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ActionCardStrenghtAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ActionCardStrength, int32> Amount;
    
    FMETA_ActionCardStrenghtAmount();
};

