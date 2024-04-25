#pragma once
#include "CoreMinimal.h"
#include "IGS_RangeWithDistance.h"
#include "IGS_ListWrapper.generated.h"

USTRUCT(BlueprintType)
struct COVERGENERATOR_API FIGS_ListWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_RangeWithDistance> List;
    
    FIGS_ListWrapper();
};

