#include "IGS_Quick_ChainResult.h"

FIGS_Quick_ChainResult::FIGS_Quick_ChainResult() {
    (*this).MissionName = FText::FromString(TEXT(""));
    (*this).ChainContractID = nullptr;
    (*this).StarRating = 0;
    (*this).Score = 0;
    (*this).MoneyRewardTotal = 0;
    (*this).RespectRewardAfterLastMission = 0;
    (*this).WeaponsReward.Empty();
    (*this).WeaponTagsReward.Empty();
    (*this).QuickMissionResults.Empty();
    (*this).PlayerHeisters.Empty();
    (*this).RemainingHeisters.Empty();
    (*this).Completed = false;
}

