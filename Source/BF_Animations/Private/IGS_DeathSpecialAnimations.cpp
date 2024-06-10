#include "IGS_DeathSpecialAnimations.h"

FIGS_DeathSpecialAnimations::FIGS_DeathSpecialAnimations() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Death.SpecialTypes.Unknown");
    (*this).DeathAnimationMontages.Empty();
    (*this).PhysicalAnimationProfileName = TEXT("FullAnim");
    (*this).UsePhysics = false;
    (*this).OnlyPhysics = false;
}

