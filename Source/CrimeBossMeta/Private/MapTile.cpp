#include "MapTile.h"
#include "Templates/SubclassOf.h"

UMapTile::UMapTile() {
    this->TurfWarObject = NULL;
    this->isHighlighted = false;
    this->isSelected = false;
    this->isIconSelected = false;
    this->isBossEliminationRewardsExist = false;
    this->m_Gang = EMETA_Gang::None;
    this->m_ConquestState = EMETA_Gang::None;
    this->m_Type = EMETA_TileType::Empty;
    this->m_DistrictType = EIGS_HubDistrict::Downtown;
    this->m_BackdropType = EIGS_HubBackdropTypes::AllRandom;
    this->m_GangSpawnArea = EMETA_GangSpawnArea::None;
    this->m_MinAmountOfSoldiersForAttack = 0;
    this->m_MinAmountOfSoldiersForDefence = 0;
    this->m_CurrentStrength = 0;
    this->m_WeaknessLowerTier = false;
    this->m_CurrentWeakness = 0;
    this->m_WeaknessExpireDays = 0;
    this->m_CounterOfCapturesByPlayer = 0;
    this->m_Wealth = EMETA_TileWealth::Poor;
    this->m_IncomeMultiplier = 0.00f;
    this->m_CountdownForAttackAfterLost = 0;
    this->m_IncomeValue = 0;
    this->m_OutIncomeValue = 0;
    this->m_DisplayMode = EMETA_MapDisplayMode::Missions;
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

EMETA_TileType UMapTile::GetType() const {
    return EMETA_TileType::Empty;
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

int32 UMapTile::GetMinAmountOfSoldiersForDefence() {
    return 0;
}

int32 UMapTile::GetMinAmountOfSoldiersForAttack() {
    return 0;
}

void UMapTile::GetIncome(const UObject* inWCO, int32& OutValue, FGameplayTag& outLootItem) {
}

FGameplayTag UMapTile::GetId() {
    return FGameplayTag{};
}

EMETA_GangSpawnArea UMapTile::GetGangSpawnArea() const {
    return EMETA_GangSpawnArea::None;
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


