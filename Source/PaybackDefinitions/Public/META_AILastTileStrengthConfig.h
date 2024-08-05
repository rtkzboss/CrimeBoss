#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_AILastTileStrengthConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AILastTileStrengthConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AI_ArmySizeForPlayersAttackOnLastTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile;
    
    FMETA_AILastTileStrengthConfig();
};

