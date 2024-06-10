#include "IGS_SuspicionDataBase.h"

FIGS_SuspicionDataBase::FIGS_SuspicionDataBase() {
    (*this).OffenceType = EIGS_OffenceType::Offence_UNKNOWN;
    (*this).OffenceNoticedBy = 0;
    (*this).Strikes = 3;
    (*this).IsHeavy = false;
    (*this).AmbientReaction = EIGS_AmbientReaction::None;
    (*this).AmbientReactionScope = 0;
    auto& gen0 = (*this).AmbientDialogueOverrideIDs;
    gen0.Empty();
    gen0.AddDefaulted(3);
    (*this).BlameText = FText::FromString(TEXT(""));
    (*this).RadioReactionDialogueOverrideID = FText::FromString(TEXT(""));
    auto& gen1 = (*this).ReactionDialogueIDs;
    gen1.Empty();
    gen1.AddDefaulted(3);
    (*this).ReactionType = EIGS_ReactionTypeTags::RT_UNKNOWN;
    (*this).bHasMaxDistance = false;
    (*this).MaxDetectionDistance = -1.000000000e+00f;
}

