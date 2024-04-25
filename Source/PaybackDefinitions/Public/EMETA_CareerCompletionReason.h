#pragma once
#include "CoreMinimal.h"
#include "EMETA_CareerCompletionReason.generated.h"

UENUM(BlueprintType)
enum class EMETA_CareerCompletionReason : uint8 {
    NoTurfTiles,
    NoTurfTilesGang,
    CapturedAllTurfTiles,
    BossDead,
    BossDeadGang,
    BossDeadIntro,
    BossDeadFTUE,
    HQStormKilled,
    HQStorm,
    Bankrupt,
    EliminatedAllRivalBosses,
    CampaignModeSuccess,
    CampaignModeFail,
    PlayerSurrendered,
};

