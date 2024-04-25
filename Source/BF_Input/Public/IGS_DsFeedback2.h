#pragma once
#include "CoreMinimal.h"
#include "IGS_DsFeedback2.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsFeedback2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Strengths;
    
    BF_INPUT_API FIGS_DsFeedback2();
};

