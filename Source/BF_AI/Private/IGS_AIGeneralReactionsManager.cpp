#include "IGS_AIGeneralReactionsManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIGeneralReactionsManager::UIGS_AIGeneralReactionsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_AIGeneralReactionsManager::RequestReaction(FGameplayTag inReactionTag, AActor* inActor) {
    return false;
}


