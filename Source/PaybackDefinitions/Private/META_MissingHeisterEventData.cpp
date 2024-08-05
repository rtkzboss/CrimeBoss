#include "META_MissingHeisterEventData.h"

FMETA_MissingHeisterEventData::FMETA_MissingHeisterEventData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EventID, 0)) = NAME_None;
    (*this).MissionID = nullptr;
    (*this).DaysLeftUntilEvent = 0;
}

