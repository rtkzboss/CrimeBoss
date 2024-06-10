#include "IGS_PlayerBotControllerComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerBotControllerComponent::UIGS_PlayerBotControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


