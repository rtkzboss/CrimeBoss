#include "IGS_BTTask_SearchRotate.h"

UIGS_BTTask_SearchRotate::UIGS_BTTask_SearchRotate() {
    this->NodeName = TEXT("Search Rotate");
    this->bKeepFacingForward = false;
    this->ThreatPointLookAtTime = 1.00f;
    this->ThreatPointLookAtTimeDeviation = 0.50f;
    this->HighPrioThreatPointLookAtTime = 3.00f;
    this->HighPrioThreatPointLookAtTimeDeviation = 1.00f;
    this->ForwardLookAtTime = 1.00f;
    this->ForwardLookAtTimeDeviation = 0.50f;
    this->ThreatPointMaxAngle = 45.00f;
    this->HighPrioThreatPointMaxAngle = 85.00f;
    this->HighPrioThreatPointRotateAngle = 30.00f;
}


