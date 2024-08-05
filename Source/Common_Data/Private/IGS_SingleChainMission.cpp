#include "IGS_SingleChainMission.h"

FIGS_SingleChainMission::FIGS_SingleChainMission() {
    (*this).ID = nullptr;
    (*this).FPSMissionID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Scenario, 0)) = NAME_None;
    (*this).LightingScenario = EIGS_LightingScenarioType::Morning;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).TileEnviroment = EIGS_TileEnviroment::None;
    (*this).PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    (*this).SWATVariation = EIGS_SWATVariationType::US_None;
    (*this).AllyVariation = EIGS_HeistersBackupVariationType::US_None;
}

