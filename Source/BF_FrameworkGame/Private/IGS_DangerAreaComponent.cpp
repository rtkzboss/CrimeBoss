#include "IGS_DangerAreaComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_DangerAreaComponent::UIGS_DangerAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DangerRadius = 4.000000000e+02f;
    (*this).IsDangerous = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 5.000000075e-02f;
}


