#include "IGS_ClassTagSettingPair.h"

FIGS_ClassTagSettingPair::FIGS_ClassTagSettingPair() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ClassTag, 0)) = NAME_None;
    (*this).Settings = nullptr;
}

