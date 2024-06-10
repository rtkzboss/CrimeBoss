#include "IGS_Quick_ActiveChainContractData.h"

FIGS_Quick_ActiveChainContractData::FIGS_Quick_ActiveChainContractData() {
    (*this).ActiveChainContract = nullptr;
    auto& gen2357 = (*this).ActiveChainMissionSteps;
    gen2357.Empty();
    auto& gen2358 = (*this).ActiveChainMissions.MoneyMakingMissions;
    gen2358.Empty();
    auto& gen2359 = (*this).ActiveChainMissions.AmbushMissions;
    gen2359.Empty();
    auto& gen2360 = (*this).ActiveChainMissions.StoryMissions;
    gen2360.Empty();
    auto& gen2361 = (*this).ActiveChainMissions.TradeMissions;
    gen2361.Empty();
    auto& gen2362 = (*this).ActiveChainMissions.TradeDealSellMissions;
    gen2362.Empty();
    auto& gen2363 = (*this).ActiveChainMissions.CinematicMissions;
    gen2363.Empty();
    auto& gen2364 = (*this).ActiveChainMissions.TurfWarMissions;
    gen2364.Empty();
    auto& gen2365 = (*this).ActiveChainMissions.OtherMissions;
    gen2365.Empty();
    (*this).ActiveMissionIndex = 0;
    auto& gen2366 = (*this).CurrentChainResults;
    gen2366.Empty();
    auto& gen2367 = (*this).GenericCrewHeisters;
    gen2367.Empty();
    auto& gen2368 = (*this).UniqueCrewHeisters;
    gen2368.Empty();
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ChainMoney = 0;
}

