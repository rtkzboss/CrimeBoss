#include "META_StashManagerSaveData.h"

FMETA_StashManagerSaveData::FMETA_StashManagerSaveData() {
    (*this).Equipment.Empty();
    (*this).PlayerRespect = EMETA_RespectLvl::Low;
    (*this).Army = 0;
    (*this).AvailableArmy = 0;
    (*this).ArmyTier = EMETA_ArmyTier::Low;
    (*this).CurrentLootValueWasSoldToPawnShop = 0;
    (*this).LastDayWhenWarehouseAttackStarted = -1;
    (*this).ChanceWarehouseAttack = 0;
    (*this).WarehouseAttackMissionID = nullptr;
    (*this).MoneyForWarehouseAttack = 0;
}

