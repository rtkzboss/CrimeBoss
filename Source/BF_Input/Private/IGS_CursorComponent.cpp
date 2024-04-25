#include "IGS_CursorComponent.h"

UIGS_CursorComponent::UIGS_CursorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VirtualSoftwareCursorWidget = NULL;
    this->NativeSoftwareCursorWidget = NULL;
    this->bUsingVirtualCursor = false;
}

void UIGS_CursorComponent::UseVirtualCursor() {
}

void UIGS_CursorComponent::UseNativeCursor() {
}

bool UIGS_CursorComponent::IsHovering() const {
    return false;
}


