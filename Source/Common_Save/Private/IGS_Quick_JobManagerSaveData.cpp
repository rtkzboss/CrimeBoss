#include "IGS_Quick_JobManagerSaveData.h"

FIGS_Quick_JobManagerSaveData::FIGS_Quick_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    (*this).Opportunities.MoneyMakingMissions.Empty();
    (*this).Opportunities.AmbushMissions.Empty();
    (*this).Opportunities.StoryMissions.Empty();
    (*this).Opportunities.TradeMissions.Empty();
    (*this).Opportunities.TradeDealSellMissions.Empty();
    (*this).Opportunities.CinematicMissions.Empty();
    (*this).Opportunities.TurfWarMissions.Empty();
    (*this).Opportunities.OtherMissions.Empty();
    (*this).LastPlayedMission.MoneyMakingMissions.Empty();
    (*this).LastPlayedMission.AmbushMissions.Empty();
    (*this).LastPlayedMission.StoryMissions.Empty();
    (*this).LastPlayedMission.TradeMissions.Empty();
    (*this).LastPlayedMission.TradeDealSellMissions.Empty();
    (*this).LastPlayedMission.CinematicMissions.Empty();
    (*this).LastPlayedMission.TurfWarMissions.Empty();
    (*this).LastPlayedMission.OtherMissions.Empty();
    (*this).FinishedMissionsIDs.Empty();
    (*this).bLastPlayedWasChain = false;
}

