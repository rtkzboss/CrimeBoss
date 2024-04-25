#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_HUBLevelWithTag.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HUBLevelWithTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScenarioTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BuildConfigurationTileable LevelDA;
    
    BF_LEVELGENERATOR_API FIGS_HUBLevelWithTag();
};

