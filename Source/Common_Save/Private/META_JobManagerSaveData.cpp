#include "META_JobManagerSaveData.h"

FMETA_JobManagerSaveData::FMETA_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CurrentJobTileID, 0)) = NAME_None;
    auto& gen2190 = (*this).JobsOnMap.MoneyMakingMissions;
    gen2190.Empty();
    auto& gen2191 = (*this).JobsOnMap.AmbushMissions;
    gen2191.Empty();
    auto& gen2192 = (*this).JobsOnMap.StoryMissions;
    gen2192.Empty();
    auto& gen2193 = (*this).JobsOnMap.TradeMissions;
    gen2193.Empty();
    auto& gen2194 = (*this).JobsOnMap.TradeDealSellMissions;
    gen2194.Empty();
    auto& gen2195 = (*this).JobsOnMap.CinematicMissions;
    gen2195.Empty();
    auto& gen2196 = (*this).JobsOnMap.TurfWarMissions;
    gen2196.Empty();
    auto& gen2197 = (*this).JobsOnMap.OtherMissions;
    gen2197.Empty();
    (*this).JobsCompletedAmount = 0;
    (*this).bWasPlayerTransferredToFPSSide = false;
    (*this).bUsingTemporaryCrewAfterFPS = EMETA_UsingCrewInGraph::TemporaryCrew;
}

