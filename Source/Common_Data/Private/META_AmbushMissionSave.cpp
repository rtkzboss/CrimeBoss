#include "META_AmbushMissionSave.h"
#include "EIGS_LightingScenarioType.h"
#include "EMETA_JobResult.h"

FMETA_AmbushMissionSave::FMETA_AmbushMissionSave() {
    (*this).InstigatorMissionID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).InstigatorMissionTileID, 0)) = NAME_None;
    (*this).PreviousFPSMissionData.MissionResult = EMETA_JobResult::Success;
    (*this).PreviousFPSMissionData.Loot.Empty();
    (*this).PreviousFPSMissionData.MoneyCollected = 0;
    (*this).PreviousFPSMissionData.CivilCasualties = 0;
    (*this).PreviousFPSMissionData.PoliceCasualties = 0;
    (*this).PreviousFPSMissionData.SwatCasualties = 0;
    (*this).PreviousFPSMissionData.GangsterCasualties = 0;
    (*this).PreviousFPSMissionData.EnemiesRemaining = 0;
    (*this).PreviousFPSMissionData.BackupHeistersCasualties = 0;
    (*this).PreviousFPSMissionData.AlarmTriggered = false;
    (*this).PreviousFPSMissionData.WantedStarts = 0;
    (*this).PreviousFPSMissionData.BagsCollected = 0;
    (*this).PreviousFPSMissionData.LightingScenarioType = EIGS_LightingScenarioType::Morning;
}

