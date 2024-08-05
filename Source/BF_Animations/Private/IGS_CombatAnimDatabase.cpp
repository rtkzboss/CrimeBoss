#include "IGS_CombatAnimDatabase.h"

FIGS_CombatAnimDatabase::FIGS_CombatAnimDatabase() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Combat.Unknown");
    (*this).AnimVariations.Empty();
    (*this).isLooped = false;
}

