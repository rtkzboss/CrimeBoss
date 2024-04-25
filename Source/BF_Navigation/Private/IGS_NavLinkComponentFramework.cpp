#include "IGS_NavLinkComponentFramework.h"

UIGS_NavLinkComponentFramework::UIGS_NavLinkComponentFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_NavLinkComponentFramework::SetEnabled(bool inEnabled) {
}

bool UIGS_NavLinkComponentFramework::IsEnabled() const {
    return false;
}

bool UIGS_NavLinkComponentFramework::HasMovingAgents() const {
    return false;
}


