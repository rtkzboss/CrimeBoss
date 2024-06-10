#include "IGS_DeathSpecialAnimations.h"

FIGS_DeathSpecialAnimations::FIGS_DeathSpecialAnimations() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Death.SpecialTypes.Unknown");
    auto& gen2061 = (*this).DeathAnimationMontages;
    gen2061.Empty();
    (*this).PhysicalAnimationProfileName = TEXT("FullAnim");
    (*this).UsePhysics = false;
    (*this).OnlyPhysics = false;
}

