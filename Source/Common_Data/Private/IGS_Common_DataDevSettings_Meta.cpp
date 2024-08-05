#include "IGS_Common_DataDevSettings_Meta.h"

UIGS_Common_DataDevSettings_Meta::UIGS_Common_DataDevSettings_Meta() {
    (*this).MetaActionCardsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/ActionCards/DT_ActionCards.DT_ActionCards"), TEXT(""));
    (*this).MetaGoalsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_GoalsDatabase.DT_GoalsDatabase"), TEXT(""));
    (*this).MissionObjectivesDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_MissionBonusObjectives.DT_MissionBonusObjectives"), TEXT(""));
    (*this).MissionObjectivePresetsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_MissionBonusObjectivePresets.DT_MissionBonusObjectivePresets"), TEXT(""));
    (*this).MetaDetectiveDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_MetaDetectiveDatabase.DT_MetaDetectiveDatabase"), TEXT(""));
    (*this).MetaNotificationsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/MetaGame/MetaMenu/Notifications/CDT_MetaNotifications.CDT_MetaNotifications"), TEXT(""));
    (*this).PartnerDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_PartnerDatabase.DT_PartnerDatabase"), TEXT(""));
    (*this).GangDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_GangDatabase.DT_GangDatabase"), TEXT(""));
    (*this).PlanningBoardsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/PlanningBoards/DT_PlanningBoardsDatabase.DT_PlanningBoardsDatabase"), TEXT(""));
    (*this).MusicPacksDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_MusicPacksCollection.DT_MusicPacksCollection"), TEXT(""));
    (*this).MusicScenarioDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_MusicScenarioPacks.DT_MusicScenarioPacks"), TEXT(""));
    (*this).StashLootDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/Loot/DT_StashLootAll.DT_StashLootAll"), TEXT(""));
    (*this).TradeVendorDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_TradeVendorDatabase.DT_TradeVendorDatabase"), TEXT(""));
    (*this).TutorialTextDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/MetaGame/MetaMenu/TutorialStuff/DT_TutorialTextDatabase.DT_TutorialTextDatabase"), TEXT(""));
    (*this).MetaEconomyDataAsset = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DA_MetaEconomyData.DA_MetaEconomyData"), TEXT(""));
    (*this).MenuBackgroundDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/Menu/MenuBackgrounds/DT_MenuBackgrounds.DT_MenuBackgrounds"), TEXT(""));
    (*this).TutorialsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/Tutorials/CDT_TutorialsDatabase.CDT_TutorialsDatabase"), TEXT(""));
    (*this).MultiplayerJobsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/Multiplayer/Jobs/DT_MultiplayerJobsDatabase.DT_MultiplayerJobsDatabase"), TEXT(""));
    (*this).MenuBGAkStatesDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Maps/Menu/MenuBackgrounds/DA_MenuBackgroundAkStates.DA_MenuBackgroundAkStates"), TEXT(""));
    (*this).ChallengesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_ChallengesDatabase.DT_ChallengesDatabase"), TEXT(""));
}


