#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_UserDifficulty.h"
#include "META_ActiveCampaignConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_ActiveCampaignConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag CampaignMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EIGS_UserDifficulty Difficulty;
    
    FMETA_ActiveCampaignConfiguration();
};

