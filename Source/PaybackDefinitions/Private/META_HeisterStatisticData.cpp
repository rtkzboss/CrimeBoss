#include "META_HeisterStatisticData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"

FMETA_HeisterStatisticData::FMETA_HeisterStatisticData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).HeisterID.TagID, 0)) = NAME_None;
    (*this).HeisterID.ID = EIGS_CharacterID::Char_Unknown;
    (*this).HeisterID.UniqGenericId = -1;
    (*this).HeisterSpecialData.Name = TEXT("");
    (*this).HeisterSpecialData.Surname = FText::FromString(TEXT(""));
    (*this).HeisterSpecialData.HeisterQuality = EMETA_ItemQuality::None;
    (*this).Statuses = 0;
}

