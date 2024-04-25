#include "IGS_PlayerBotOrderComponent.h"

UIGS_PlayerBotOrderComponent::UIGS_PlayerBotOrderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentBot = NULL;
    this->bBotOrderInProgress = false;
}


