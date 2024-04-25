#include "IGS_ThrowBagDefinitionComponent.h"

UIGS_ThrowBagDefinitionComponent::UIGS_ThrowBagDefinitionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_IsThrowingAllowed = true;
}

void UIGS_ThrowBagDefinitionComponent::RequestThrowStart(AIGS_GameCharacterFramework* inCharacter, bool inPlayerThrown) {
}

void UIGS_ThrowBagDefinitionComponent::RequestThrowEnd(AIGS_GameCharacterFramework* inCharacter) {
}

void UIGS_ThrowBagDefinitionComponent::AllowThrowingBags(bool InValue) {
}

UIGS_ThrowBagSlot* UIGS_ThrowBagDefinitionComponent::AddSlotFromSocket(USkeletalMeshComponent* inSkeletalMeshComponent, FName InSocketName) {
    return NULL;
}

UIGS_ThrowBagSlot* UIGS_ThrowBagDefinitionComponent::AddSlotFromSceneComponent(USceneComponent* inSceneComponent) {
    return NULL;
}


