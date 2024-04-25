#include "IGS_AISense_ComplexSight.h"

UIGS_AISense_ComplexSight::UIGS_AISense_ComplexSight() {
    this->bAutoRegisterAllPawnsAsSources = true;
    this->MaxTracesPerTick = 10;
    this->MinQueriesPerTimeSliceCheck = 40;
    this->MaxTimeSlicePerTick = 0.01f;
    this->HighImportanceQueryDistanceThreshold = 300.00f;
    this->MaxQueryImportance = 60.00f;
    this->SightLimitQueryImportance = 10.00f;
}


