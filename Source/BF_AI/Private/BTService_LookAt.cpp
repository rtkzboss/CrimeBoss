#include "BTService_LookAt.h"

UBTService_LookAt::UBTService_LookAt() {
    this->NodeName = TEXT("Look At Service");
    this->bRotateIfBehind = false;
    this->LookAtStartMaxAngle = 60.00f;
    this->LookAtStopMaxAngle = 90.00f;
}


