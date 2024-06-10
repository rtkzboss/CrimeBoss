#include "META_CharacterClassConfig.h"

FMETA_CharacterClassConfig::FMETA_CharacterClassConfig() {
    (*this).CharacterClass = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ClassPerk, 0)) = NAME_None;
}

