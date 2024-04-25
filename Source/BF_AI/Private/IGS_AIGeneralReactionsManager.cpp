#include "IGS_AIGeneralReactionsManager.h"

UIGS_AIGeneralReactionsManager::UIGS_AIGeneralReactionsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CurrentDataObject = NULL;
}

bool UIGS_AIGeneralReactionsManager::RequestReaction(FGameplayTag inReactionTag, AActor* inActor) {
    return false;
}


