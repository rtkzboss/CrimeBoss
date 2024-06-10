#include "IGS_Quick_ChainResult.h"

FIGS_Quick_ChainResult::FIGS_Quick_ChainResult() {
    (*this).MissionName = FText::FromString(TEXT(""));
    (*this).ChainContractID = nullptr;
    (*this).StarRating = 0;
    (*this).Score = 0;
    (*this).MoneyRewardTotal = 0;
    (*this).RespectRewardAfterLastMission = 0;
    auto& gen2400 = (*this).WeaponsReward;
    gen2400.Empty();
    auto& gen2401 = (*this).WeaponTagsReward;
    gen2401.Empty();
    auto& gen2402 = (*this).QuickMissionResults;
    gen2402.Empty();
    auto& gen2403 = (*this).PlayerHeisters;
    gen2403.Empty();
    auto& gen2404 = (*this).RemainingHeisters;
    gen2404.Empty();
    (*this).Completed = false;
}

