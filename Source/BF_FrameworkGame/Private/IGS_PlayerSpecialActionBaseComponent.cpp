#include "IGS_PlayerSpecialActionBaseComponent.h"

UIGS_PlayerSpecialActionBaseComponent::UIGS_PlayerSpecialActionBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachmentClassHard = NULL;
    this->m_SpecialObjectActor = NULL;
}


