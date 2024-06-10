#include "IGS_CombatAnimDatabase.h"

FIGS_CombatAnimDatabase::FIGS_CombatAnimDatabase() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Combat.Unknown");
    auto& gen2040 = (*this).AnimVariations;
    gen2040.Empty();
    (*this).isLooped = false;
}

