#include "IGS_MissionResult.h"

FIGS_MissionResult::FIGS_MissionResult() {
    (*this).MissionName = FText::FromString(TEXT(""));
    (*this).MissionID.A = 0;
    (*this).MissionID.B = 0;
    (*this).MissionID.C = 0;
    (*this).MissionID.D = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionTag, 0)) = NAME_None;
    (*this).MissionResult = ECommonMissionResult::Res_UNKNOWN;
    (*this).bCleanExecution = false;
    (*this).bBonusObjective = false;
    (*this).Rating = 0;
    (*this).Score = 0;
    (*this).TotalQuickplayScore = 0;
    (*this).TotalChainScore = 0;
    (*this).ObjectiveValue = 0;
    (*this).BonusValue = 0;
    (*this).BonusCash = 0;
    (*this).RewardCalculations.Empty();
    (*this).KilledCivilians = 0;
    (*this).KilledPolice = 0;
    (*this).KilledGangsters = 0;
    (*this).KilledSWAT = 0;
    (*this).KilledHeisters = 0;
    (*this).RevivesUsed = 0;
    (*this).BonusObjective = FText::FromString(TEXT(""));
    (*this).MissionObjective = FText::FromString(TEXT(""));
    (*this).Heisters.Empty();
    (*this).Detectives.Empty();
    (*this).bIsChainMission = false;
    (*this).bChainCompleted = false;
    (*this).ChainType = EIGS_ChainType::UrbanLegend;
    (*this).bIsFilled = false;
    (*this).UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
    (*this).LobbyVisibility = EMETA_LobbyVisibilityType::Private;
    (*this).MPLobbyType = EIGS_MPLobbyType::Normal;
    (*this).DebriefType = EMETA_DebriefType::Standard;
    (*this).GameplayTime = 0.000000000e+00f;
}

