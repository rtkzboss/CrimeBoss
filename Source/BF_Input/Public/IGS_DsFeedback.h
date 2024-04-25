#pragma once
#include "CoreMinimal.h"
#include "IGS_DsFeedback.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsFeedback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Strength;
    
    BF_INPUT_API FIGS_DsFeedback();
};

