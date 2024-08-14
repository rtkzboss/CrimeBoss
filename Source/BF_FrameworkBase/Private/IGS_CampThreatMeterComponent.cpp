#include "IGS_CampThreatMeterComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_CampThreatMeterComponent::UIGS_CampThreatMeterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TickInterval = 1.000000000e+00f;
    (*this).DistanceThreshold = 2.500000000e+02f;
    (*this).CampZoneDistance = 6.000000000e+02f;
    (*this).TimeToMarkAsCamp = 4.000000000e+00f;
    (*this).MaxCampDecrease = 3.000000000e+01f;
    (*this).NearHardCampZoneMultip = 4.000000000e+00f;
    (*this).HardCampPosUpdateDelay = 5.000000000e+00f;
    (*this).DamageToThreatMultip = 1.000000000e+00f;
    (*this).ThreatThresholds.Min = 7.000000000e+02f;
    (*this).ThreatThresholds.Max = 1.300000000e+03f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 1.000000000e+00f;
}

bool UIGS_CampThreatMeterComponent::IsCamping() const {
    return false;
}

float UIGS_CampThreatMeterComponent::GetCampLevel() const {
    return 0.0f;
}


