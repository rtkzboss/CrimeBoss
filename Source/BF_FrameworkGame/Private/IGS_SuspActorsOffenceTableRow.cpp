#include "IGS_SuspActorsOffenceTableRow.h"
#include "EIGS_ReactionTypeTags.h"
#include "EIGS_AmbientReaction.h"
#include "EIGS_OffenceType.h"

FIGS_SuspActorsOffenceTableRow::FIGS_SuspActorsOffenceTableRow() {
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).OffenceQuery, 0)) = 0;
    auto& gen3117 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).OffenceQuery, 0));
    gen3117.Empty();
    auto& gen3118 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).OffenceQuery, 0));
    gen3118.Empty();
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    (*this).DetectionSpeedMult = 1.000000000e+00f;
    (*this).AmbientReactionValidOnlyInRestrictedArea = false;
    (*this).RotateToOffenceOwnerPos = false;
    (*this).EventInitialDelay = 8.000000119e-01f;
    (*this).EventLifetime = -1.000000000e+00f;
    (*this).EventNoticedLifetime = -1.000000000e+00f;
    (*this).EternalEvent = false;
    (*this).OffenceType = EIGS_OffenceType::Offence_SuspActors;
    (*this).OffenceNoticedBy = 3;
}

