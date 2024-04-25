#include "IGS_AIUnitDef.h"

FIGS_AIUnitDef::FIGS_AIUnitDef() {
    this->StatsMultiplierGE = NULL;
    this->Tier = EIGS_AITiers::AT_Tier1;
    this->TeamSide = EIGS_TeamSideEnum::TS_Heisters;
    this->Variation = 0;
    this->Specialization = EIGS_UnitSpecialization::US_None;
    this->IsMeleeOnly = false;
    this->Source = EIGS_AIUnitDBSource::US_Unknown;
}

