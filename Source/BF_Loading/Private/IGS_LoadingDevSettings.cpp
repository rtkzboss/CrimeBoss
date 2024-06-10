#include "IGS_LoadingDevSettings.h"

UIGS_LoadingDevSettings::UIGS_LoadingDevSettings() {
    (*this).LoadingSetupDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/LoadingScreen/DT_LoadingScreenSetupDatabase.DT_LoadingScreenSetupDatabase"), TEXT(""));
    (*this).LoadingScreenTipsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/LoadingScreen/DT_LoadingScreenTipsDatabase.DT_LoadingScreenTipsDatabase"), TEXT(""));
    (*this).LevelTransitionDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/LoadingScreen/DA_LevelTransitionManager.DA_LevelTransitionManager"), TEXT(""));
    (*this).LoadingScreenDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/LoadingScreen/DA_LoadingScreenManager.DA_LoadingScreenManager"), TEXT(""));
}


