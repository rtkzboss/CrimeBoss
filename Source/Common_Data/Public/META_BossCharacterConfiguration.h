#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_BossCharacterConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BossCharacterConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval LevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionBonusReward;
    
    FMETA_BossCharacterConfiguration();
};

