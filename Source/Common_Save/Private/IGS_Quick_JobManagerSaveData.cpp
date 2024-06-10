#include "IGS_Quick_JobManagerSaveData.h"

FIGS_Quick_JobManagerSaveData::FIGS_Quick_JobManagerSaveData() {
    (*this).CurrentJob = nullptr;
    auto& gen2339 = (*this).Opportunities.MoneyMakingMissions;
    gen2339.Empty();
    auto& gen2340 = (*this).Opportunities.AmbushMissions;
    gen2340.Empty();
    auto& gen2341 = (*this).Opportunities.StoryMissions;
    gen2341.Empty();
    auto& gen2342 = (*this).Opportunities.TradeMissions;
    gen2342.Empty();
    auto& gen2343 = (*this).Opportunities.TradeDealSellMissions;
    gen2343.Empty();
    auto& gen2344 = (*this).Opportunities.CinematicMissions;
    gen2344.Empty();
    auto& gen2345 = (*this).Opportunities.TurfWarMissions;
    gen2345.Empty();
    auto& gen2346 = (*this).Opportunities.OtherMissions;
    gen2346.Empty();
    auto& gen2347 = (*this).LastPlayedMission.MoneyMakingMissions;
    gen2347.Empty();
    auto& gen2348 = (*this).LastPlayedMission.AmbushMissions;
    gen2348.Empty();
    auto& gen2349 = (*this).LastPlayedMission.StoryMissions;
    gen2349.Empty();
    auto& gen2350 = (*this).LastPlayedMission.TradeMissions;
    gen2350.Empty();
    auto& gen2351 = (*this).LastPlayedMission.TradeDealSellMissions;
    gen2351.Empty();
    auto& gen2352 = (*this).LastPlayedMission.CinematicMissions;
    gen2352.Empty();
    auto& gen2353 = (*this).LastPlayedMission.TurfWarMissions;
    gen2353.Empty();
    auto& gen2354 = (*this).LastPlayedMission.OtherMissions;
    gen2354.Empty();
    auto& gen2355 = (*this).FinishedMissionsIDs;
    gen2355.Empty();
    (*this).bLastPlayedWasChain = false;
}

