#include "META_QuickPlayData.h"

UMETA_QuickPlayData::UMETA_QuickPlayData() {
    this->QuickjoinBonusPercentage = 0.00f;
    this->LobbyLonelyWaitingTime = 180;
    this->LobbyNewClientJoinedWaitingTime = 120;
    this->LobbyFinalWaitingTime = 10;
    this->BlackMarketRefreshTimeInMinutes = 60;
    this->BlackMarketHeisterRefreshBaseCost = 25000;
    this->BlackMarketHeisterRefreshCoefficient = 1.20f;
    this->BlackmarketHeisterRefreshCooldownTime = 30;
    this->BlackMarketWeaponRefreshBaseCost = 45000;
    this->BlackMarketWeaponRefreshCoefficient = 1.20f;
    this->BlackmarketWeaponRefreshCooldownTime = 30;
    this->BuybackWeaponPriceMultiplier = 1.50f;
    this->BuybackWeaponDaysInShop = 3;
    this->MoneyToPointsMultiplier = 1.00f;
    this->OneStarsPointsGainPercentage = 50.00f;
    this->TwoStarsPointsGainPercentage = 100.00f;
    this->ThreeStarsPointsGainPercentage = 125.00f;
    this->SubstractPointsPercentageWhenMissionFailed = 5.00f;
    this->SubstractPointsPercentageWhenMissionFailedPerDeadHeister = 5.00f;
    this->SubstractPointsPercentageWhenMissionFailedPerDeadCivilian = 0.50f;
    this->PlayerInactiveDaysRespectPenalty = 7;
    this->SubstractPointsPercentageWhenPlayerInactive = 5.00f;
    this->QuickplayScoreMultiplier = 1.00f;
    this->ScoreFor1Star = 50000;
    this->ScoreFor2Stars = 100000;
    this->ScoreFor3Stars = 200000;
    this->ChainMinusScorePerKilledCivilian = 5000;
    this->ChainMinusScorePerReviveUsed = 10000;
    this->ChainMinusScorePerKilledHeister = 20000;
    this->TutorialCharacters.AddDefaulted(4);
}


