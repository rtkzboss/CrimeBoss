#include "IGS_SuspicionDataBase.h"

FIGS_SuspicionDataBase::FIGS_SuspicionDataBase() {
    this->OffenceType = EIGS_OffenceType::Offence_Player;
    this->OffenceNoticedBy = 0;
    this->Strikes = 0;
    this->IsHeavy = false;
    this->AmbientReaction = EIGS_AmbientReaction::None;
    this->AmbientReactionScope = 0;
    this->ReactionType = EIGS_ReactionTypeTags::RT_Actor_Report;
    this->bHasMaxDistance = false;
    this->MaxDetectionDistance = 0.00f;
}

