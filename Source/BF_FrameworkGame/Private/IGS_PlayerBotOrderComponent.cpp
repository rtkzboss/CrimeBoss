#include "IGS_PlayerBotOrderComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerBotOrderComponent::UIGS_PlayerBotOrderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}


