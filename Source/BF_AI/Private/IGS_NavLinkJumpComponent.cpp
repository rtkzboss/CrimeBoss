#include "IGS_NavLinkJumpComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UIGS_NavLinkJumpComponent::UIGS_NavLinkJumpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BezierControlPoint.Z = 1.100000000e+02f;
}


