#include "META_QuickPlayData.h"

UMETA_QuickPlayData::UMETA_QuickPlayData() {
    (*this).LobbyLonelyWaitingTime = 180;
    (*this).LobbyNewClientJoinedWaitingTime = 120;
    (*this).LobbyFinalWaitingTime = 10;
    (*this).BlackMarketRefreshTimeInMinutes = 60;
    (*this).BlackMarketHeisterRefreshBaseCost = 25000;
    (*this).BlackMarketHeisterRefreshCoefficient = 1.200000048e+00f;
    (*this).BlackmarketHeisterRefreshCooldownTime = 30;
    (*this).BlackMarketWeaponRefreshBaseCost = 45000;
    (*this).BlackMarketWeaponRefreshCoefficient = 1.200000048e+00f;
    (*this).BlackmarketWeaponRefreshCooldownTime = 30;
    (*this).BuybackWeaponPriceMultiplier = 1.500000000e+00f;
    (*this).BuybackWeaponDaysInShop = 3;
    (*this).MoneyToPointsMultiplier = 1.000000000e+00f;
    (*this).OneStarsPointsGainPercentage = 5.000000000e+01f;
    (*this).TwoStarsPointsGainPercentage = 1.000000000e+02f;
    (*this).ThreeStarsPointsGainPercentage = 1.250000000e+02f;
    (*this).SubstractPointsPercentageWhenMissionFailed = 5.000000000e+00f;
    (*this).SubstractPointsPercentageWhenMissionFailedPerDeadHeister = 5.000000000e+00f;
    (*this).SubstractPointsPercentageWhenMissionFailedPerDeadCivilian = 5.000000000e-01f;
    (*this).PlayerInactiveDaysRespectPenalty = 7;
    (*this).SubstractPointsPercentageWhenPlayerInactive = 5.000000000e+00f;
    (*this).QuickplayScoreMultiplier = 1.000000000e+00f;
    (*this).ScoreFor1Star = 50000;
    (*this).ScoreFor2Stars = 100000;
    (*this).ScoreFor3Stars = 200000;
    (*this).ChainMinusScorePerKilledCivilian = 5000;
    (*this).ChainMinusScorePerReviveUsed = 10000;
    (*this).ChainMinusScorePerKilledHeister = 20000;
    auto& gen0 = (*this).TutorialCharacters;
    gen0.Empty();
    gen0.AddDefaulted(4);
}

void UMETA_QuickPlayData::GetSpecialTierChance(const EIGS_UserDifficulty inUserDifficulty, const int32 inStormIntensity, bool& outHasOverride, float& outRatio) {
}


