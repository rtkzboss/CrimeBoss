#pragma once
#include "CoreMinimal.h"
#include "IGS_LocalizationParam.generated.h"

USTRUCT(BlueprintType)
struct COMMON_UTILS_API FIGS_LocalizationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    FIGS_LocalizationParam();
};

