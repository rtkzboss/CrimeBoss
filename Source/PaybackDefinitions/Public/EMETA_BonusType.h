#pragma once
#include "CoreMinimal.h"
#include "EMETA_BonusType.generated.h"

UENUM(BlueprintType)
enum class EMETA_BonusType : uint8 {
    PoliceInvestigation,
    BossPointBoost,
    StartMoney,
    MissionRewards,
    AssetCost,
    StartArmy,
    MaxArmySize,
    CaptainDamage,
    CaptainHP,
    TurfWarArmyDamage,
    TurfWarArmyHP,
    BakerDamage,
    BakerHP,
    BakerExtraRevive,
    BakerElitePrimaryWeapon,
    RandomStartingHeisters,
    AdditionalStartingTerritories,
    SendArmyCost,
    CaptainPerks,
    BossPerks,
    CaptainRevives,
    BakerEquipment,
};

