#include "IGS_SpecialOffenceTableRow.h"
#include "EIGS_ReactionTypeTags.h"
#include "EIGS_AmbientReaction.h"
#include "EIGS_OffenceType.h"

FIGS_SpecialOffenceTableRow::FIGS_SpecialOffenceTableRow() {
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).OffenceQuery, 0)) = 0;
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).OffenceQuery, 0)).Empty();
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).OffenceQuery, 0)).Empty();
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    (*this).OffenceType = EIGS_OffenceType::Offence_Special;
    (*this).OffenceNoticedBy = 3;
}

