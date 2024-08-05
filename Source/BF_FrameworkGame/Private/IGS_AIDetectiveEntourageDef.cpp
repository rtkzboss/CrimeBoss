#include "IGS_AIDetectiveEntourageDef.h"
#include "EIGS_TeamSideEnum.h"

FIGS_AIDetectiveEntourageDef::FIGS_AIDetectiveEntourageDef() {
    (*this).TeamUnitVariationHolder.TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).TeamUnitVariationHolder.UnitVariation = 0;
    (*this).Specialization = EIGS_UnitSpecialization::US_None;
}

