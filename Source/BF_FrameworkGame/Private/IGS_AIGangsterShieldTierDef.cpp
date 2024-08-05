#include "IGS_AIGangsterShieldTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIGangsterShieldTierDef::FIGS_AIGangsterShieldTierDef() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Shield");
}

