#pragma once
#include "CoreMinimal.h"
#include "EMETA_EconomyGraphVariableMode.h"
#include "META_EconomyGraphVariableModeData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_EconomyGraphVariableModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_EconomyGraphVariableMode VariableMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    FMETA_EconomyGraphVariableModeData();
};

