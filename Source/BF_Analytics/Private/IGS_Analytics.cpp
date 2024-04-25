#include "IGS_Analytics.h"

UIGS_Analytics::UIGS_Analytics() {
}

void UIGS_Analytics::WeaponBought_v3(const FString& inScreenTag, const FString& inWeaponId, const FString& inQuality, int32 inPrice, bool inBuyBack, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::WeaponBought_v2(const FString& inScreenTag, const FString& inWeaponId, const FString& inQuality, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::WeaponBought(const FString& inScreenTag, const FString& inWeaponId, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::SoldiersHired(int32 inAmount, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::RefreshWeaponsForSale(const FString& inScreenTag, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::RefreshCharactersForHire(const FString& inScreenTag, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::QuickjoinUsed(const FString& resultText, float waitingTime) {
}

void UIGS_Analytics::PlotlineStarted(const FString& plotlineName, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::PlotlineFinished(const FString& plotlineName, const FString& resultText, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes, int32 plotlineOutcomeID, const FString& plotlineOutcomeSummary) {
}

void UIGS_Analytics::PlotlineCheckpointReached(int32 campaignID, const FString& checkpointID) {
}

void UIGS_Analytics::PlatformShopOpened(const FString& inScreenTag, const FString& inAssetID) {
}

void UIGS_Analytics::MoneyEarned(float Money, float totalMoney, const FString& Source, const FString& inScreenTag, bool isMultiplayer) {
}

void UIGS_Analytics::MissionStarted(const FString& MissionName, const FString& missionVariant, bool isMultiplayer, bool isQuickJoin, bool isJIP, int32 numBots, int32 Day, int32 ArmySize, int32 armyAvailable, bool isChain, int32 Investigation, int32 attempt) {
}

void UIGS_Analytics::MissionFinished(const FString& MissionName, const FString& missionVariant, int32 Status, float GameplayTime, const FString& weaponUsed) {
}

void UIGS_Analytics::LootSold(const FString& inLootCategory, int32 inAmount, float inTrend, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::LoanTaken(int32 inAmount, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::InviteSent(const FString& PlayerId) {
}

void UIGS_Analytics::InviteAccepted(const FString& PlayerId) {
}

void UIGS_Analytics::HeisterHired_v2(const FString& inScreenTag, const FString& inCharacterID, const FString& inQuality, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::HeisterHired(const FString& inScreenTag, const FString& inCharacterID, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::GoalStarted(const FString& goalName, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::GoalFinished(const FString& goalName, const FString& resultText, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes, TArray<int32> visitedNodes) {
}

void UIGS_Analytics::EquipmentBought_v2(const FString& inScreenTag, const FString& inEquipmentId, const FString& inQuality, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::EquipmentBought(const FString& inScreenTag, const FString& inEquipmentId, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::DismissCharacter(const FString& inScreenTag, const FString& inCharacterID, const FString& inQuality, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::DayStarted2(int32 upkeep, FIGS_AnalyticsCommonMetaAttributes inMetaAttributes) {
}

void UIGS_Analytics::DayStarted(int32 campaignID, int32 Day, int32 Heat, int32 Respect, int32 Investigation, int32 Cash, int32 upkeep, int32 OwnedTurfs, int32 AvailableHeisters, int32 AvailableArmy) {
}

void UIGS_Analytics::CampaignStarted(const FString& CampaignMode, int32 CampaignNum) {
}

void UIGS_Analytics::CampaignFinished(const FString& CampaignMode, const FString& campaignResult, FIGS_AnalyticsCommonMetaAttributes inMetaAttributes) {
}

void UIGS_Analytics::BossCardPicked(const FString& inCardID, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}

void UIGS_Analytics::AssetBought(const FString& inAssetID, int32 inPrice, const FIGS_AnalyticsCommonMetaAttributes& inMetaAttributes) {
}


