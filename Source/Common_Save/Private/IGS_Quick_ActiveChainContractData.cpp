#include "IGS_Quick_ActiveChainContractData.h"

FIGS_Quick_ActiveChainContractData::FIGS_Quick_ActiveChainContractData() {
    this->ActiveChainContract = NULL;
    this->ActiveMissionIndex = 0;
    this->Difficulty = EIGS_ChainDifficulty::Unknown;
    this->ChainMoney = 0;
}

