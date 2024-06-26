#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    (*this).InputObject = nullptr;
    (*this).InputNodeId = -1;
    (*this).InputObjectNodeId = -1;
    (*this).Guid.A = 1312777846;
    (*this).Guid.B = 1113940848;
    (*this).Guid.C = -197240949;
    (*this).Guid.D = -1190690536;
    (*this).bCanDeleteHoudiniNodes = true;
}


