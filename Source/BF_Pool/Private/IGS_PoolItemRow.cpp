#include "IGS_PoolItemRow.h"

FIGS_PoolItemRow::FIGS_PoolItemRow() {
    (*this).ID = nullptr;
    (*this).CustomPoolObjectClass = nullptr;
    (*this).PoolNetMode = EIGS_PoolNetMode::Everywhere;
    (*this).bIsDynamic = true;
    (*this).bIsCircular = false;
    (*this).InitialAllocateCount = 10;
    (*this).SoftLimitBonus = 5;
    (*this).SoftLimitAllocateCount = 20;
    (*this).HardLimitAllocateCount = 50;
}

