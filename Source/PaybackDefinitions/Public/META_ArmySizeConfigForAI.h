#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_ArmySizeConfigForAI.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ArmySizeConfigForAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AI_ArmySizeForPlayersAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AI_ArmySizeForPlayersDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersAttack_MaxConcurrentlySpawnedAISoldiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersAttack_MaxConcurrentlySpawnedPlayerSoldiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersDefense_MaxConcurrentlySpawnedAISoldiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersDefense_MaxConcurrentlySpawnedPlayerSoldiers;
    
    FMETA_ArmySizeConfigForAI();
};

