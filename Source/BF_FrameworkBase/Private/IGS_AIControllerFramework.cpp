#include "IGS_AIControllerFramework.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_AIControllerFramework::AIGS_AIControllerFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AIGS_AIControllerFramework::RequestGeneralReaction(FGameplayTag inReactionTag, AActor* inActor) {
    return false;
}

void AIGS_AIControllerFramework::EnableAI(bool InValue) {
}


