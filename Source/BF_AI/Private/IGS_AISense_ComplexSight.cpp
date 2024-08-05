#include "IGS_AISense_ComplexSight.h"
#include "Perception/AIPerceptionTypes.h"

UIGS_AISense_ComplexSight::UIGS_AISense_ComplexSight() {
    (*this).MaxTracesPerTick = 10;
    (*this).MinQueriesPerTimeSliceCheck = 40;
    (*this).MaxTimeSlicePerTick = 5.00000000000000010e-03;
    (*this).HighImportanceQueryDistanceThreshold = 3.000000000e+02f;
    (*this).MaxQueryImportance = 6.000000000e+01f;
    (*this).SightLimitQueryImportance = 1.000000000e+01f;
    (*this).bAutoRegisterAllPawnsAsSources = true;
}


