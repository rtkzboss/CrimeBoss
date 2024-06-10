#include "IGS_ActiveChainData.h"

FIGS_ActiveChainData::FIGS_ActiveChainData() {
    (*this).ChainType = EIGS_ChainType::UrbanLegend;
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ActiveChainInfo.ActiveMissionIndex = 0;
    (*this).ActiveChainInfo.ActiveChainContractID = nullptr;
    auto& gen3462 = (*this).ActiveChainMissionSteps;
    gen3462.Empty();
    auto& gen3463 = (*this).ActiveChainMissions;
    gen3463.Empty();
    (*this).CurrentMission = nullptr;
    (*this).ActiveChainResults.MissionName = FText::FromString(TEXT(""));
    (*this).ActiveChainResults.ChainContractID = nullptr;
    (*this).ActiveChainResults.StarRating = 0;
    (*this).ActiveChainResults.Score = 0;
    (*this).ActiveChainResults.MoneyRewardTotal = 0;
    (*this).ActiveChainResults.RespectRewardAfterLastMission = 0;
    auto& gen3464 = (*this).ActiveChainResults.WeaponsReward;
    gen3464.Empty();
    auto& gen3465 = (*this).ActiveChainResults.WeaponTagsReward;
    gen3465.Empty();
    auto& gen3466 = (*this).ActiveChainResults.QuickMissionResults;
    gen3466.Empty();
    auto& gen3467 = (*this).ActiveChainResults.PlayerHeisters;
    gen3467.Empty();
    auto& gen3468 = (*this).ActiveChainResults.RemainingHeisters;
    gen3468.Empty();
    (*this).ActiveChainResults.Completed = false;
    auto& gen3469 = (*this).ChainCrew;
    gen3469.Empty();
    auto& gen3470 = (*this).ChainCrewInfo;
    gen3470.Empty();
    (*this).ChainMoney = 0;
}

