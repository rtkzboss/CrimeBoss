#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockCategory.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockStatsLevels.h"
#include "IGS_UnlockStatsQualities.h"
#include "IGS_UnlockStats.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UnlockStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIGS_UnlockStatsLevels> ItemStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnlockCategory, FIGS_UnlockStatsQualities> CategoryStats;
    
    BF_FRAMEWORKBASE_API FIGS_UnlockStats();
};

