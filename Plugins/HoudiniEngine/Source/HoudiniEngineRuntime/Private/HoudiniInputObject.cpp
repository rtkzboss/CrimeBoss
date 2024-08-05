#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -2031069140;
    (*this).Guid.B = 1274679867;
    (*this).Guid.C = -946154877;
    (*this).Guid.D = 1939807399;
    (*this).bCanDeleteHoudiniNodes = true;
}


