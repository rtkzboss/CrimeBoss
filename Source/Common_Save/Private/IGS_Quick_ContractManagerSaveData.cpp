#include "IGS_Quick_ContractManagerSaveData.h"

FIGS_Quick_ContractManagerSaveData::FIGS_Quick_ContractManagerSaveData() {
    auto& gen2369 = (*this).AvailableContracts;
    gen2369.Empty();
    auto& gen2370 = (*this).ActiveContractMissions.MoneyMakingMissions;
    gen2370.Empty();
    auto& gen2371 = (*this).ActiveContractMissions.AmbushMissions;
    gen2371.Empty();
    auto& gen2372 = (*this).ActiveContractMissions.StoryMissions;
    gen2372.Empty();
    auto& gen2373 = (*this).ActiveContractMissions.TradeMissions;
    gen2373.Empty();
    auto& gen2374 = (*this).ActiveContractMissions.TradeDealSellMissions;
    gen2374.Empty();
    auto& gen2375 = (*this).ActiveContractMissions.CinematicMissions;
    gen2375.Empty();
    auto& gen2376 = (*this).ActiveContractMissions.TurfWarMissions;
    gen2376.Empty();
    auto& gen2377 = (*this).ActiveContractMissions.OtherMissions;
    gen2377.Empty();
}

