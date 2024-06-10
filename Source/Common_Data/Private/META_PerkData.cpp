#include "META_PerkData.h"

FMETA_PerkData::FMETA_PerkData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Perk = nullptr;
    (*this).Level = 1;
}

