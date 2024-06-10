#include "IGS_UnlockedRewardHistoryItem.h"

FIGS_UnlockedRewardHistoryItem::FIGS_UnlockedRewardHistoryItem() {
    (*this).Level = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedRewardItem, 0)) = NAME_None;
    (*this).OtherRewardsForLevel.Empty();
}

