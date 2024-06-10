#include "IGS_ActiveChainData.h"

FIGS_ActiveChainData::FIGS_ActiveChainData() {
    (*this).ChainType = EIGS_ChainType::UrbanLegend;
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ActiveChainInfo.ActiveMissionIndex = 0;
    (*this).ActiveChainInfo.ActiveChainContractID = nullptr;
    (*this).ActiveChainMissionSteps.Empty();
    (*this).ActiveChainMissions.Empty();
    (*this).CurrentMission = nullptr;
    (*this).ActiveChainResults.MissionName = FText::FromString(TEXT(""));
    (*this).ActiveChainResults.ChainContractID = nullptr;
    (*this).ActiveChainResults.StarRating = 0;
    (*this).ActiveChainResults.Score = 0;
    (*this).ActiveChainResults.MoneyRewardTotal = 0;
    (*this).ActiveChainResults.RespectRewardAfterLastMission = 0;
    (*this).ActiveChainResults.WeaponsReward.Empty();
    (*this).ActiveChainResults.WeaponTagsReward.Empty();
    (*this).ActiveChainResults.QuickMissionResults.Empty();
    (*this).ActiveChainResults.PlayerHeisters.Empty();
    (*this).ActiveChainResults.RemainingHeisters.Empty();
    (*this).ActiveChainResults.Completed = false;
    (*this).ChainCrew.Empty();
    (*this).ChainCrewInfo.Empty();
    (*this).ChainMoney = 0;
}

