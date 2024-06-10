#include "IGS_Quick_ActiveChainContractData.h"

FIGS_Quick_ActiveChainContractData::FIGS_Quick_ActiveChainContractData() {
    (*this).ActiveChainContract = nullptr;
    (*this).ActiveChainMissionSteps.Empty();
    (*this).ActiveChainMissions.MoneyMakingMissions.Empty();
    (*this).ActiveChainMissions.AmbushMissions.Empty();
    (*this).ActiveChainMissions.StoryMissions.Empty();
    (*this).ActiveChainMissions.TradeMissions.Empty();
    (*this).ActiveChainMissions.TradeDealSellMissions.Empty();
    (*this).ActiveChainMissions.CinematicMissions.Empty();
    (*this).ActiveChainMissions.TurfWarMissions.Empty();
    (*this).ActiveChainMissions.OtherMissions.Empty();
    (*this).ActiveMissionIndex = 0;
    (*this).CurrentChainResults.Empty();
    (*this).GenericCrewHeisters.Empty();
    (*this).UniqueCrewHeisters.Empty();
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).ChainMoney = 0;
}

