#include "IGS_AchievementsTableRow.h"

FIGS_AchievementsTableRow::FIGS_AchievementsTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).PlatformID = NAME_None;
    (*this).Type = EIGS_AchievementType::PerAccount;
    (*this).InitialValue = 0;
    (*this).UnlockValue = 1;
    (*this).SetupUnlockValue = 0;
    (*this).ValuesDivisor = 1;
    (*this).Award = EIGS_AchievementAward::Bronze;
    (*this).EpicXPs = 0;
    (*this).XboxGamerscore = 0;
    (*this).PS5Trophies = 0;
    (*this).Hidden = false;
    (*this).LockedName = FText::FromString(TEXT(""));
    (*this).LockedDescription = FText::FromString(TEXT(""));
    (*this).UnlockedName = FText::FromString(TEXT(""));
    (*this).UnlockedDescription = FText::FromString(TEXT(""));
}

