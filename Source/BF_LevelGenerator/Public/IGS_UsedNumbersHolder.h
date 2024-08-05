#pragma once
#include "CoreMinimal.h"
#include "IGS_UsedNumbersHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_UsedNumbersHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> SelectedNumbers;
    
    FIGS_UsedNumbersHolder();
};

