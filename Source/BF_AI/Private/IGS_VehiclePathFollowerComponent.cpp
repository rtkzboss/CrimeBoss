#include "IGS_VehiclePathFollowerComponent.h"
#include "ComponentInstanceDataCache.h"
#include "EEasingType.h"
#include "EPFFactorOperation.h"
#include "EPFLoopType.h"
#include "EPFRollInterpType.h"

UIGS_VehiclePathFollowerComponent::UIGS_VehiclePathFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AvoidanceDistanceRange.Min = 9.000000000e+02f;
    (*this).AvoidanceDistanceRange.Max = 1.100000000e+03f;
    (*this).AvoidanceStopCooldown.Min = 3.000000119e-01f;
    (*this).AvoidanceStopCooldown.Max = 5.000000000e-01f;
    (*this).bStartAtPlay = false;
}


