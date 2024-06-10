#include "PCSnapConstraintFloor.h"

FPCSnapConstraintFloor::FPCSnapConstraintFloor() {
    (*this).AttachX = true;
    (*this).AttachXNegative = true;
    (*this).AttachY = true;
    (*this).AttachYNegative = true;
    (*this).AttachZ = true;
    (*this).AttachZNegative = true;
}

