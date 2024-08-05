#include "IGS_CursorComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_CursorComponent::UIGS_CursorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bTickEvenWhenPaused = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_CursorComponent::UseVirtualCursor() {
}

void UIGS_CursorComponent::UseNativeCursor() {
}

bool UIGS_CursorComponent::IsHovering() const {
    return false;
}


