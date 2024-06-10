#include "IGS_HubGeneratorPresetRow.h"

FIGS_HubGeneratorPresetRow::FIGS_HubGeneratorPresetRow() {
    (*this).ScenarioType = EIGS_HubScenarioType::Empty;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).ScenarioTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).ScenarioTags, 0)).Empty();
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).CompatibleEnvironmentTiles = 0;
    (*this).PresetData = nullptr;
    (*this).bEnabled = false;
    (*this).bDebug = false;
    (*this).WaveDirection = 0;
    (*this).BackdropDirection = 0;
}

