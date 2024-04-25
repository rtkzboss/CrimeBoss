#include "IGS_ActiveChainData.h"

FIGS_ActiveChainData::FIGS_ActiveChainData() {
    this->ChainType = EIGS_ChainType::UrbanLegend;
    this->Difficulty = EIGS_ChainDifficulty::Unknown;
    this->CurrentMission = NULL;
    this->ChainMoney = 0;
}

