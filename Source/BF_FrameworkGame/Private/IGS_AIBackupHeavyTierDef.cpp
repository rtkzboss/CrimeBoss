#include "IGS_AIBackupHeavyTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIBackupHeavyTierDef::FIGS_AIBackupHeavyTierDef() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
}

