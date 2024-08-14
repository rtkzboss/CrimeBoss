#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 1257449422;
    (*this).Guid.B = 1338500819;
    (*this).Guid.C = 1610789527;
    (*this).Guid.D = 654733167;
    (*this).bCanDeleteHoudiniNodes = true;
}


