#include "META_JobManagerSaveData.h"

FMETA_JobManagerSaveData::FMETA_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CurrentJobTileID, 0)) = NAME_None;
    (*this).JobsOnMap.MoneyMakingMissions.Empty();
    (*this).JobsOnMap.AmbushMissions.Empty();
    (*this).JobsOnMap.StoryMissions.Empty();
    (*this).JobsOnMap.TradeMissions.Empty();
    (*this).JobsOnMap.TradeDealSellMissions.Empty();
    (*this).JobsOnMap.CinematicMissions.Empty();
    (*this).JobsOnMap.TurfWarMissions.Empty();
    (*this).JobsOnMap.OtherMissions.Empty();
    (*this).JobsCompletedAmount = 0;
    (*this).bWasPlayerTransferredToFPSSide = false;
    (*this).bUsingTemporaryCrewAfterFPS = EMETA_UsingCrewInGraph::TemporaryCrew;
}

