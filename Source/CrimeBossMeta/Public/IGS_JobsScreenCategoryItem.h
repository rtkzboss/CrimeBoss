#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_JobsScreenCategoryItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_JobsScreenCategoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionScenarios;
    
    CRIMEBOSSMETA_API FIGS_JobsScreenCategoryItem();
};

