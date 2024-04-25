#include "IGS_CampThreatMeterComponent.h"

UIGS_CampThreatMeterComponent::UIGS_CampThreatMeterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickInterval = 1.00f;
    this->TimeProtected = 15.00f;
    this->DistanceThreshold = 250.00f;
    this->CampZoneDistance = 600.00f;
    this->TimeToMarkAsCamp = 4.00f;
    this->MaxCampDecrease = 30.00f;
    this->NearHardCampZoneMultip = 4.00f;
    this->HardCampPosUpdateDelay = 5.00f;
    this->DamageToThreatMultip = 1.00f;
    this->ShieldToThreatMultip = 0.00f;
    this->ThreatOnKill = 0.00f;
    this->ThreatOnHeadshot = 0.00f;
}

bool UIGS_CampThreatMeterComponent::IsCamping() const {
    return false;
}

float UIGS_CampThreatMeterComponent::GetCampLevel() const {
    return 0.0f;
}


