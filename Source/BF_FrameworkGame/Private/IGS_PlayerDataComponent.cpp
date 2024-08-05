#include "IGS_PlayerDataComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerDataComponent::UIGS_PlayerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LastEnemyHitTime = -3.402823466e+38f;
    (*this).LastShootTime = -3.402823466e+38f;
    (*this).LastInjuredTime = -3.402823466e+38f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).PrimaryComponentTick.TickInterval = 2.000000030e-01f;
}


