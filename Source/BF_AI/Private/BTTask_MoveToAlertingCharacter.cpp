#include "BTTask_MoveToAlertingCharacter.h"

UBTTask_MoveToAlertingCharacter::UBTTask_MoveToAlertingCharacter() {
    this->NodeName = TEXT("Move To Alerting Character");
    this->LOSStoppingDistance = 350.00f;
    this->QueryTemplate = NULL;
}


