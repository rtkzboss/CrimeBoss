#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ChallengesSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_ChallengesSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ChallengesInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CompletedChallenges;
    
    FIGS_ChallengesSaveData();
};

