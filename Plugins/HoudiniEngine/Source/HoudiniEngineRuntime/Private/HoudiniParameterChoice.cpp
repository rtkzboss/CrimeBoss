#include "HoudiniParameterChoice.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterChoice::UHoudiniParameterChoice() {
    (*this).IntValue = -1;
    (*this).ParmType = EHoudiniParameterType::IntChoice;
}


