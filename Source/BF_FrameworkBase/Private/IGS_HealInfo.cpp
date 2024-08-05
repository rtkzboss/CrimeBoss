#include "IGS_HealInfo.h"

FIGS_HealInfo::FIGS_HealInfo() {
    (*this).Instigator = nullptr;
    (*this).InstigatorPawn = nullptr;
    (*this).SourceActor = nullptr;
    (*this).TargetActor = nullptr;
    (*this).DamageEventType = EIGS_DamageEventType::Any;
}

