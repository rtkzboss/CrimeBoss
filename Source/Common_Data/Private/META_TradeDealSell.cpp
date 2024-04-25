#include "META_TradeDealSell.h"

UMETA_TradeDealSell::UMETA_TradeDealSell() {
}

void UMETA_TradeDealSell::SetPrice(int32 inPrice) {
}

void UMETA_TradeDealSell::SetLootAmount(int32 inLootAmount) {
}

void UMETA_TradeDealSell::SetLoot(FGameplayTag inLootTag) {
}

void UMETA_TradeDealSell::SetDataFromSave(const FMETA_TradeDealSellMissionSave& inTradeMissionSave) {
}

EMETA_TradeVendor UMETA_TradeDealSell::GetVendor() {
    return EMETA_TradeVendor::UNDEFINED;
}

FMETA_TradeDealSellMissionSave UMETA_TradeDealSell::GetSaveData() {
    return FMETA_TradeDealSellMissionSave{};
}

int32 UMETA_TradeDealSell::GetPrice() {
    return 0;
}

int32 UMETA_TradeDealSell::GetLootAmount() {
    return 0;
}

FGameplayTag UMETA_TradeDealSell::GetLoot() {
    return FGameplayTag{};
}

FMETA_TradeDealSellMissionRowInfo UMETA_TradeDealSell::GetInfo() const {
    return FMETA_TradeDealSellMissionRowInfo{};
}


