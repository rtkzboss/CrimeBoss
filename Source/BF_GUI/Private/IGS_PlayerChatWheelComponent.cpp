#include "IGS_PlayerChatWheelComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerChatWheelComponent::UIGS_PlayerChatWheelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_PlayerChatWheelComponent::ShowSpamPreventionMessage() {
}

void UIGS_PlayerChatWheelComponent::Server_HandleChatWheelReaction_Implementation(FGameplayTag inTag) {
}
bool UIGS_PlayerChatWheelComponent::Server_HandleChatWheelReaction_Validate(FGameplayTag inTag) {
    return true;
}

void UIGS_PlayerChatWheelComponent::HandleChatWheelReaction(FGameplayTag inTag) {
}


