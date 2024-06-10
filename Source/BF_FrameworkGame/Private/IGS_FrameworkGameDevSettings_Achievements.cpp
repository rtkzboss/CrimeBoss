#include "IGS_FrameworkGameDevSettings_Achievements.h"

UIGS_FrameworkGameDevSettings_Achievements::UIGS_FrameworkGameDevSettings_Achievements() {
    (*this).AchievementsSummaryDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Achievements/DT_AchievementsSummary.DT_AchievementsSummary"), TEXT(""));
    (*this).RichPresenceDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Achievements/DT_RichPresence.DT_RichPresence"), TEXT(""));
    (*this).RichPresenceChainsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Achievements/RichPresenceExtras/DT_RichPresenceChainNames.DT_RichPresenceChainNames"), TEXT(""));
    (*this).RichPresenceMissionsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Achievements/RichPresenceExtras/DT_RichPresenceMissionNames.DT_RichPresenceMissionNames"), TEXT(""));
}


