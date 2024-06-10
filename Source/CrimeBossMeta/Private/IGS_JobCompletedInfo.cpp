#include "IGS_JobCompletedInfo.h"
#include "ECommonMissionResult.h"
#include "EIGS_MPLobbyType.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_LobbyVisibilityType.h"

FIGS_JobCompletedInfo::FIGS_JobCompletedInfo() {
    (*this).MetaMissionID = nullptr;
    (*this).MetaData.MissionResult = ECommonMissionResult::Res_UNKNOWN;
    (*this).MetaData.MoneyCollected = 0;
    (*this).MetaData.CivilCasualties = 0;
    (*this).MetaData.PoliceCasualties = 0;
    (*this).MetaData.SwatCasualties = 0;
    (*this).MetaData.GangsterCasualties = 0;
    (*this).MetaData.EnemiesRemaining = 0;
    (*this).MetaData.BackupHeistersCasualties = 0;
    (*this).MetaData.bAlarmTriggered = false;
    (*this).MetaData.WantedBadges = 0;
    (*this).MetaData.LootBagsCollected = 0;
    (*this).MetaData.GameplayTime = 0.000000000e+00f;
    (*this).MetaData.bIsFilled = false;
    (*this).SharedData.MissionID.A = 0;
    (*this).SharedData.MissionID.B = 0;
    (*this).SharedData.MissionID.C = 0;
    (*this).SharedData.MissionID.D = 0;
    (*this).SharedData.Heisters.Empty();
    (*this).SharedData.Detectives.Empty();
    (*this).SharedData.PlayedPresets.PlayedPresets.Empty();
    (*this).SharedData.UserDifficulty = EIGS_UserDifficulty::UD_Easy;
    (*this).SharedData.LobbyVisibility = EMETA_LobbyVisibilityType::Private;
    (*this).SharedData.MPLobbyType = EIGS_MPLobbyType::Normal;
    (*this).SharedData.bIsFilled = false;
}

