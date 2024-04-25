#pragma once
#include "CoreMinimal.h"
#include "EMETA_GangStrategy.h"
#include "META_DefenceResultCalculatingConfigForAI.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_DefenceResultCalculatingConfigForAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefenceChancePerMissingTurf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceTweakingPerArmyTierDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceTweakingIfItIsLastTileOfGang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_GangStrategy, int32> InfluenceByDefenderCurrentStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_GangStrategy, int32> InfluenceByAttackerCurrentStrategy;
    
    FMETA_DefenceResultCalculatingConfigForAI();
};

