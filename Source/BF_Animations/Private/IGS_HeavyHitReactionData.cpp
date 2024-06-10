#include "IGS_HeavyHitReactionData.h"

FIGS_HeavyHitReactionData::FIGS_HeavyHitReactionData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.HitReaction.Unknown");
    auto& gen2049 = (*this).AnimVariations;
    gen2049.Empty();
}

