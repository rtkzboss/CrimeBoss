#include "IGS_AchievementsSummaryTableRow.h"

FIGS_AchievementsSummaryTableRow::FIGS_AchievementsSummaryTableRow() {
    (*this).ID = 0;
    (*this).Table = nullptr;
    (*this).Release = EIGS_AchievementsReleaseType::BaseGame;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UpdateEntitlementTag, 0)) = NAME_None;
}

