#include "IGS_BTTask_ComplexRotateToFaceBBEntry.h"

UIGS_BTTask_ComplexRotateToFaceBBEntry::UIGS_BTTask_ComplexRotateToFaceBBEntry() {
    this->NodeName = TEXT("Complex Rotate to face BB entry");
    this->RandomAngle = 0.00f;
    this->ForceRotationByAngle = 0.00f;
    this->PredictActorLocation = false;
    this->PredictionTimePerMeter = 0.15f;
}


