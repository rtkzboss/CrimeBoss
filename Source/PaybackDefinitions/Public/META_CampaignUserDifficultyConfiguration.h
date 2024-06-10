#pragma once
#include "CoreMinimal.h"
#include "EIGS_FPSDifficulty.h"
#include "EIGS_ScenarioDifficulty.h"
#include "META_CampaignUserDifficultyConfiguration.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_CampaignUserDifficultyConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_FPSDifficulty FPSDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalScoreBaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ScenarioDifficulty BigHeistDifficultyOverride;
    
    FMETA_CampaignUserDifficultyConfiguration();
};

