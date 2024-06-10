#include "IGS_SuspicionDataBase.h"

FIGS_SuspicionDataBase::FIGS_SuspicionDataBase() {
    (*this).OffenceType = EIGS_OffenceType::Offence_UNKNOWN;
    (*this).OffenceNoticedBy = 0;
    (*this).Strikes = 3;
    (*this).IsHeavy = false;
    (*this).AmbientReaction = EIGS_AmbientReaction::None;
    (*this).AmbientReactionScope = 0;
    auto& gen3113 = (*this).AmbientDialogueOverrideIDs;
    gen3113.Empty();
    gen3113.AddDefaulted(3);
    (*this).BlameText = FText::FromString(TEXT(""));
    (*this).RadioReactionDialogueOverrideID = FText::FromString(TEXT(""));
    auto& gen3114 = (*this).ReactionDialogueIDs;
    gen3114.Empty();
    gen3114.AddDefaulted(3);
    (*this).ReactionType = EIGS_ReactionTypeTags::RT_UNKNOWN;
    (*this).bHasMaxDistance = false;
    (*this).MaxDetectionDistance = -1.000000000e+00f;
}

