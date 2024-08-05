#include "IGS_DialogueLevelName.h"
#include "EIGS_DialogueGroup.h"

FIGS_DialogueLevelName::FIGS_DialogueLevelName() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LevelTag, 0)) = NAME_None;
    (*this).LevelNames.Empty();
    (*this).LevelCharacters.Empty();
    (*this).BlacklistOption = EIGS_DialogueBlacklistOption::NoBlacklist;
    (*this).BlacklistLevelNames.Empty();
    (*this).BlacklistAlwaysEnabled = false;
    (*this).BlacklistDefaultLevelsPreload = false;
    (*this).UseDefaultLevelsPreload = true;
    (*this).UseDefaultCharactersPreload = true;
    (*this).DefaultPlanner.DialogueGroup = EIGS_DialogueGroup::Heister;
    (*this).DefaultPlanner.DialogueCharacter = 2;
    (*this).SecondPlanner.DialogueGroup = EIGS_DialogueGroup::Heister;
    (*this).SecondPlanner.DialogueCharacter = 1;
}

