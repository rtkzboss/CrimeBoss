#include "MutableBuiltData.h"

FMutableBuiltData::FMutableBuiltData() {
    (*this).CompilationId.A = 0;
    (*this).CompilationId.B = 0;
    (*this).CompilationId.C = 0;
    (*this).CompilationId.D = 0;
    (*this).SupportedVersion = -1;
}

