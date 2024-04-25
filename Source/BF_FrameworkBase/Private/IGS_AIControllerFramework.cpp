#include "IGS_AIControllerFramework.h"

AIGS_AIControllerFramework::AIGS_AIControllerFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AIGS_AIControllerFramework::RequestGeneralReaction(FGameplayTag inReactionTag, AActor* inActor) {
    return false;
}

void AIGS_AIControllerFramework::EnableAI(bool InValue) {
}


