#include "BTDecorator_CanStrafe.h"

UBTDecorator_CanStrafe::UBTDecorator_CanStrafe() {
    this->NodeName = TEXT("Can Strafe");
    this->UseLongStrafe = true;
    this->UseMediumStrafe = true;
    this->CanEndInDanger = false;
    this->NoDangerNavFilter = NULL;
}


