#include "IGS_AnimNotifyState_SpecialDeath.h"

UIGS_AnimNotifyState_SpecialDeath::UIGS_AnimNotifyState_SpecialDeath() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Death.SpecialTypes.Unknown");
}


