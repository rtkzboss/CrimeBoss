#include "IGS_PoolItemRow.h"

FIGS_PoolItemRow::FIGS_PoolItemRow() {
    this->ID = NULL;
    this->PoolNetMode = EIGS_PoolNetMode::Everywhere;
    this->bIsDynamic = false;
    this->bIsCircular = false;
    this->InitialAllocateCount = 0;
    this->SoftLimitBonus = 0;
    this->SoftLimitAllocateCount = 0;
    this->HardLimitAllocateCount = 0;
}

