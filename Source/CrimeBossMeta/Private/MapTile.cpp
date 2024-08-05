#include "MapTile.h"
#include "Templates/SubclassOf.h"

UMapTile::UMapTile() {
}

void UMapTile::ToggleTurfIconSelected(bool inSelected) {
}

void UMapTile::ToggleSelected(bool inSelected) {
}

void UMapTile::ToggleIconSelected(bool inSelected, UMETA_BaseMission* inMissionID) {
}

void UMapTile::ToggleHighlighted(bool inHighlighted) {
}

void UMapTile::SetWeaknessLowerTier(bool inState) {
}

void UMapTile::SetWeaknessExpirationInDays(int32 inDays) {
}

void UMapTile::SetType(EMETA_TileType inType) {
}

void UMapTile::SetTurfWarData(int32 inMinAmountOfSoldiersForAttack, int32 inMinAmountOfSoldiersForDefence) {
}

void UMapTile::SetTileWealth(EMETA_TileWealth InValue) {
}

void UMapTile::SetRawCaptureRewards(TArray<FMETA_TileRewardData> inRewards) {
}

void UMapTile::SetMissions(TArray<UMETA_BaseMission*> inMissions) {
}

void UMapTile::SetIncomeValueMultiplier(float inValueMultiplier) {
}

void UMapTile::SetIncomeLoot(FGameplayTag inLootItem) {
}

void UMapTile::SetGang(EMETA_Gang inGang) {
}

void UMapTile::SetDisplayMode(EMETA_MapDisplayMode inDisplayMode) {
}

void UMapTile::SetDetectives(TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> inDetectives) {
}

void UMapTile::SetData(FMapTileRow inTileRow) {
}

void UMapTile::SetCurrentWeakness(int32 inWeakness) {
}

void UMapTile::SetCurrentStrength(int32 inCurrentStrength) {
}

void UMapTile::SetCountdownAfterLost(int32 inCountdown) {
}

void UMapTile::SetConquestState(EMETA_Gang inGang) {
}

void UMapTile::SetBossEleminationRewards(TArray<FMETA_BossEliminationRewardData> inRewards) {
}

void UMapTile::ResetWeakness() {
}

void UMapTile::RemoveMission(UMETA_BaseMission* inMission) {
}

void UMapTile::IncreaseCounterOfCapturesByPlayer() {
}

EMETA_TileWealth UMapTile::GetWealth() {
    return EMETA_TileWealth::Poor;
}

bool UMapTile::GetWeaknessLowerTier() const {
    return false;
}

int32 UMapTile::GetWeaknessExpirationInDays() const {
    return 0;
}

EMETA_TileType UMapTile::GetType() const {
    return EMETA_TileType::Empty;
}

EMETA_TileSize UMapTile::GetTileSize() const {
    return EMETA_TileSize::Unlimited;
}

TArray<FGameplayTag> UMapTile::GetNeighbours() const {
    return TArray<FGameplayTag>();
}

FText UMapTile::GetName() {
    return FText::GetEmpty();
}

TArray<UMETA_BaseMission*> UMapTile::GetMissions() const {
    return TArray<UMETA_BaseMission*>();
}

TArray<TSubclassOf<UMETA_MissionID>> UMapTile::GetMissionClasses() const {
    return TArray<TSubclassOf<UMETA_MissionID>>();
}

int32 UMapTile::GetMinAmountOfSoldiersForDefence() const {
    return 0;
}

int32 UMapTile::GetMinAmountOfSoldiersForAttack() const {
    return 0;
}

void UMapTile::GetIncome(const UObject* inWCO, int32& OutValue, FGameplayTag& outLootItem) {
}

FGameplayTag UMapTile::GetId() {
    return FGameplayTag{};
}

EMETA_Gang UMapTile::GetGang() const {
    return EMETA_Gang::None;
}

EIGS_HubDistrict UMapTile::GetDistrictType() const {
    return EIGS_HubDistrict::INVALID;
}

EMETA_MapDisplayMode UMapTile::GetDisplayMode() const {
    return EMETA_MapDisplayMode::Missions;
}

TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> UMapTile::GetDetectives() {
    return TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo>();
}

int32 UMapTile::GetCurrentWeakness() const {
    return 0;
}

int32 UMapTile::GetCurrentStrength() const {
    return 0;
}

int32 UMapTile::GetCounterOfCapturesByPlayer() {
    return 0;
}

int32 UMapTile::GetCountdownAfterLost() const {
    return 0;
}

EMETA_Gang UMapTile::GetConquestState() const {
    return EMETA_Gang::None;
}

TArray<FMETA_TileRewardData> UMapTile::GetCalculatedCaptureRewards(const UObject* inWCO) {
    return TArray<FMETA_TileRewardData>();
}

TArray<FMETA_BossEliminationRewardData> UMapTile::GetCalculatedBossEliminationRewards(const UObject* inWCO) {
    return TArray<FMETA_BossEliminationRewardData>();
}

TArray<FMETA_BossEliminationRewardData> UMapTile::GetBossEliminationRewardData() const {
    return TArray<FMETA_BossEliminationRewardData>();
}

EIGS_HubBackdropTypes UMapTile::GetBackdropType() const {
    return EIGS_HubBackdropTypes::AllRandom;
}

void UMapTile::DecreaseExpireWeakness() {
}

void UMapTile::ClearMissions() {
}

void UMapTile::ClearDetectives() {
}

void UMapTile::ClearBossEleminationRewards() {
}

void UMapTile::AddMission(UMETA_BaseMission* inMission) {
}


