#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_RecomendedItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RecomendedItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountToBeSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer JobCategoryPool;
    
    CRIMEBOSSMETA_API FIGS_RecomendedItemDefinition();
};

