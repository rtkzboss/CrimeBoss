#include "IGS_InjuryComponentAI.h"
#include "ComponentInstanceDataCache.h"

UIGS_InjuryComponentAI::UIGS_InjuryComponentAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HeavyReactionTresholdMin = 6.999999881e-01f;
    (*this).HeavyReactionTresholdMax = 6.999999881e-01f;
    (*this).HeavyReactionTresholdInterval = 2.000000030e-01f;
    (*this).HeavyReactionMinSingleDamage = 1.800000000e+02f;
    (*this).HeavyReactionChance = 1.000000015e-01f;
    (*this).MediumReactionTresholdMin = 3.499999940e-01f;
    (*this).MediumReactionTresholdMax = 7.500000000e-01f;
    (*this).MediumReactionTresholdInterval = 1.000000000e+00f;
    (*this).MediumReactionMinSingleDamage = 2.500000000e+01f;
    (*this).MediumReactionChance = 1.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_InjuryComponentAI::RequestReaction(bool inIsHeavy, FVector inHitDirection) {
}


