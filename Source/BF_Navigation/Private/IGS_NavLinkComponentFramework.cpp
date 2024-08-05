#include "IGS_NavLinkComponentFramework.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

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


