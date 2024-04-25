#include "IGS_OffenceData.h"

UIGS_OffenceData::UIGS_OffenceData() {
    this->OffenceReactionType = EIGS_OffenceReactionType::Offence_Player;
    this->ReactionBehavior = EIGS_CivOffenceReactionBehavior::None;
    this->OffenceObject = NULL;
    this->IsReactionForced = false;
    this->Strikes = 0;
}


