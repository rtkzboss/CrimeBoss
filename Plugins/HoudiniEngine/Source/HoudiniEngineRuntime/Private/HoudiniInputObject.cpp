#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = -1159366061;
    (*this).Guid.B = 1286182893;
    (*this).Guid.C = -87112518;
    (*this).Guid.D = -67990471;
    (*this).bCanDeleteHoudiniNodes = true;
}


