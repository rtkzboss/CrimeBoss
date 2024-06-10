#include "IGS_AISwatHeavyScoutTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AISwatHeavyScoutTierDef::FIGS_AISwatHeavyScoutTierDef() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Scout.Heavy");
}

