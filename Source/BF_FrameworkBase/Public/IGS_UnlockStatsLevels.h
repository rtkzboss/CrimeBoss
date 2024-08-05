#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockStatsLevels.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UnlockStatsLevels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Levels;
    
    BF_FRAMEWORKBASE_API FIGS_UnlockStatsLevels();
};

