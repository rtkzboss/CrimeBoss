#include "BTDecorator_IsMovementSpeed.h"

UBTDecorator_IsMovementSpeed::UBTDecorator_IsMovementSpeed() {
    (*this).Speed = EIGS_Speed::MS_Sprint;
    (*this).NodeName = TEXT("Is Movement Speed");
}


