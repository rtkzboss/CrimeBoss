#include "IGS_HitInfo.h"

FIGS_HitInfo::FIGS_HitInfo() {
    this->DamageTypeClass = NULL;
    this->Radius = 0.00f;
    this->DamageEventType = EIGS_DamageEventType::Any;
    this->InstigatorTeamSide = EIGS_TeamSideEnum::TS_Heisters;
    this->bIsHeadshot = false;
}

