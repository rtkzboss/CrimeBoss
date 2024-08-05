#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeValues.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HordeModeValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    BF_FRAMEWORKGAME_API FIGS_HordeModeValues();
};

