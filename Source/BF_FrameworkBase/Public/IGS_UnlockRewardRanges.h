#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockCategory.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockRewardForcedPool.h"
#include "IGS_UnlockRewardMaxAmount.h"
#include "IGS_UnlockRewardRanges.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UnlockRewardRanges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range LevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnlockCategory, FIGS_UnlockRewardMaxAmount> RewardCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AvailableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_UnlockRewardForcedPool> ForcedPool;
    
    BF_FRAMEWORKBASE_API FIGS_UnlockRewardRanges();
};

