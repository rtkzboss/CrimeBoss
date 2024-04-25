#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_PlotlineSelectionStarItem.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_PlotlineSelectionStarItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockCriteriaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FIGS_PlotlineSelectionStarItem();
};

