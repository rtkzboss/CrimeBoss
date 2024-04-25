#include "BTTask_WaitForRotation.h"

UBTTask_WaitForRotation::UBTTask_WaitForRotation() {
    this->NodeName = TEXT("Wait For Rotation");
    this->MinAngle = 45.00f;
    this->Timeout = 1.00f;
}


