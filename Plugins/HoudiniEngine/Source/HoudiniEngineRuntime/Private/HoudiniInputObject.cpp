#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -60725392;
    (*this).Guid.B = 1076601529;
    (*this).Guid.C = 87999163;
    (*this).Guid.D = -4690844;
    (*this).bCanDeleteHoudiniNodes = true;
}


