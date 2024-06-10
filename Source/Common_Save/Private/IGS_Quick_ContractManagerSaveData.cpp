#include "IGS_Quick_ContractManagerSaveData.h"

FIGS_Quick_ContractManagerSaveData::FIGS_Quick_ContractManagerSaveData() {
    (*this).AvailableContracts.Empty();
    (*this).ActiveContractMissions.MoneyMakingMissions.Empty();
    (*this).ActiveContractMissions.AmbushMissions.Empty();
    (*this).ActiveContractMissions.StoryMissions.Empty();
    (*this).ActiveContractMissions.TradeMissions.Empty();
    (*this).ActiveContractMissions.TradeDealSellMissions.Empty();
    (*this).ActiveContractMissions.CinematicMissions.Empty();
    (*this).ActiveContractMissions.TurfWarMissions.Empty();
    (*this).ActiveContractMissions.OtherMissions.Empty();
}

