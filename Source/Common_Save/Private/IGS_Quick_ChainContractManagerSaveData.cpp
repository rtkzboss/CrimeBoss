#include "IGS_Quick_ChainContractManagerSaveData.h"

FIGS_Quick_ChainContractManagerSaveData::FIGS_Quick_ChainContractManagerSaveData() {
    auto& gen2356 = (*this).ActiveChainsData;
    gen2356.Empty();
    (*this).ActiveChainType = EIGS_ChainType::UrbanLegend;
    (*this).LastUsedGenericID = 0;
    (*this).WasPlayingChainMission = false;
}

