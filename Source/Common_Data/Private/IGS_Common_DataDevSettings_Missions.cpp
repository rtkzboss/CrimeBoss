#include "IGS_Common_DataDevSettings_Missions.h"

UIGS_Common_DataDevSettings_Missions::UIGS_Common_DataDevSettings_Missions() {
    (*this).ChainMissionsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/MapDatabase/ChainMissions/DT_SingleChainMissions.DT_SingleChainMissions"), TEXT(""));
    (*this).MissionsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/MapDatabase/Composites/DT_Missions_Composite.DT_Missions_Composite"), TEXT(""));
    (*this).QuickMissionsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/MapDatabase/Quickplay/DT_Quick_AllMissionsDatabase.DT_Quick_AllMissionsDatabase"), TEXT(""));
    (*this).MetaMissionsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/MetaMissions/DT_MetaMissionsDatabase.DT_MetaMissionsDatabase"), TEXT(""));
    (*this).MetaTurfWarMissionsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/MetaMissions/DT_meta_TurfWarMissions.DT_meta_TurfWarMissions"), TEXT(""));
    (*this).MetaGenericAmbushMissionsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/MetaMissions/DT_meta_generic_AmbushMissions.DT_meta_generic_AmbushMissions"), TEXT(""));
}


