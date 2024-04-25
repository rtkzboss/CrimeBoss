#include "IGS_PlayerCommandComponent.h"

UIGS_PlayerCommandComponent::UIGS_PlayerCommandComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_PlayerCommandComponent::Server_HandleResponseDialogue_Implementation(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerCommandType inType, const FString& inPlayerName) {
}

void UIGS_PlayerCommandComponent::OnCommand(const EIGS_PlayerCommandType inType) const {
}

void UIGS_PlayerCommandComponent::HandleResponseDialogue(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerCommandType inType) {
}

void UIGS_PlayerCommandComponent::HandleHoldPosition(const AIGS_GameCharacterFramework* inOrderedCharacter) const {
}

void UIGS_PlayerCommandComponent::HandleFollow(const AIGS_GameCharacterFramework* inOrderedCharacter) const {
}


