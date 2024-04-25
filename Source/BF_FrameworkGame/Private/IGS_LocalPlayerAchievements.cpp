#include "IGS_LocalPlayerAchievements.h"

UIGS_LocalPlayerAchievements::UIGS_LocalPlayerAchievements() {
    this->m_CommonAchievements = NULL;
}

bool UIGS_LocalPlayerAchievements::IsInitialized() const {
    return false;
}

void UIGS_LocalPlayerAchievements::GetAchievementData(const FGameplayTag& AchievementID, bool& outFound, FIGS_Achievement& outAchievementData) {
}


