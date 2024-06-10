#include "IGS_BTTask_WaitForOffenceReaction.h"

UIGS_BTTask_WaitForOffenceReaction::UIGS_BTTask_WaitForOffenceReaction() {
    (*this).Type = EIGS_OffenceReactionType::Offence_UNKNOWN;
    (*this).NodeName = TEXT("Wait for Offence Reaction");
}


