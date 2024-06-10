#include "IGS_HUBLevelWithTag.h"

FIGS_HUBLevelWithTag::FIGS_HUBLevelWithTag() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ScenarioTag, 0)) = NAME_None;
    (*this).LevelDA.BuildConfigurationDataAsset = nullptr;
    (*this).LevelDA.VariantIndex = 0;
}

