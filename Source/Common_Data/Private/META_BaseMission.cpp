#include "META_BaseMission.h"
#include "Templates/SubclassOf.h"

UMETA_BaseMission::UMETA_BaseMission() {
    this->m_Result = EMETA_JobResult::Ignored;
    this->m_AmbushResult = EMETA_JobResult::Ignored;
    this->m_TotalResult = EMETA_JobResult::Ignored;
    this->bCanExpire = false;
    this->InitTime = 0.00f;
    this->EndTime = 0.00f;
    this->bIsSelected = false;
    this->m_LobbyVisibilityType = EMETA_LobbyVisibilityType::Unknown;
    this->m_UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
}

void UMETA_BaseMission::SetUserDifficulty(EIGS_UserDifficulty inNewDifficulty) {
}

void UMETA_BaseMission::SetTilePlacementIndex(int32 inIndex) {
}

void UMETA_BaseMission::SetOwningTile(FGameplayTag inTileTag) {
}

void UMETA_BaseMission::SetMissionResult(EMETA_JobResult inNewMissionResult) {
}

void UMETA_BaseMission::SetLobbyVisibilityType(EMETA_LobbyVisibilityType inNewVisibilityType) {
}

void UMETA_BaseMission::SetIsSelected(bool inSelected) {
}

void UMETA_BaseMission::SetExpireDuration(float inDurationInSeconds) {
}

void UMETA_BaseMission::SetAmbushResult(EMETA_JobResult inNewAmbushResult) {
}

void UMETA_BaseMission::RemoveParameter(const FGameplayTag inParameterTag) {
}

bool UMETA_BaseMission::IsTurfWar() {
    return false;
}

EIGS_UserDifficulty UMETA_BaseMission::GetUserDifficulty() const {
    return EIGS_UserDifficulty::UD_Unknown;
}

EMETA_JobType UMETA_BaseMission::GetType() const {
    return EMETA_JobType::TerritoryNeutralAttack;
}

int32 UMETA_BaseMission::GetTilePlacementIndex() {
    return 0;
}

FGameplayTagContainer UMETA_BaseMission::GetRestrictedTiles() const {
    return FGameplayTagContainer{};
}

TSoftObjectPtr<UTexture2D> UMETA_BaseMission::GetPicture() {
    return NULL;
}

void UMETA_BaseMission::GetParameters(TMap<FGameplayTag, int32>& Parameters) {
}

void UMETA_BaseMission::GetParameter(const FGameplayTag inParameterTag, int32& inParameterValue) {
}

FGameplayTag UMETA_BaseMission::GetOwningTile() {
    return FGameplayTag{};
}

EMETA_JobResult UMETA_BaseMission::GetMissionResult() {
    return EMETA_JobResult::Success;
}

FText UMETA_BaseMission::GetMissionName() {
    return FText::GetEmpty();
}

FText UMETA_BaseMission::GetMissionDescription() {
    return FText::GetEmpty();
}

int32 UMETA_BaseMission::GetMaxCrewSize() {
    return 0;
}

void UMETA_BaseMission::GetMapSettings(EIGS_HubBackdropTypes& outHubBackdropType) {
}

EMETA_LobbyVisibilityType UMETA_BaseMission::GetLobbyVisibilityType() const {
    return EMETA_LobbyVisibilityType::Unknown;
}

bool UMETA_BaseMission::GetIsSelected() const {
    return false;
}

int32 UMETA_BaseMission::GetIntelLevelValue() {
    return 0;
}

TArray<EMETA_IntelUnlockLevel> UMETA_BaseMission::GetIntelLevels() {
    return TArray<EMETA_IntelUnlockLevel>();
}

float UMETA_BaseMission::GetInitTime() const {
    return 0.0f;
}

TSubclassOf<UMETA_MissionID> UMETA_BaseMission::GetId() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UMETA_BaseMission::GetIcon() {
    return NULL;
}

FMETA_MissionDatabase UMETA_BaseMission::GetFullInfo() {
    return FMETA_MissionDatabase{};
}

float UMETA_BaseMission::GetExpireTime() const {
    return 0.0f;
}

FGameplayTag UMETA_BaseMission::GetEntitlementTag() const {
    return FGameplayTag{};
}

EMETA_DebriefType UMETA_BaseMission::GetDebriefType() {
    return EMETA_DebriefType::Standard;
}

int32 UMETA_BaseMission::GetDaysOnMap() {
    return 0;
}

bool UMETA_BaseMission::GetCanExpire() const {
    return false;
}

EMETA_JobResult UMETA_BaseMission::GetAmbushResult() {
    return EMETA_JobResult::Success;
}

FGameplayTagContainer UMETA_BaseMission::GetAllowedTiles() const {
    return FGameplayTagContainer{};
}

void UMETA_BaseMission::ExpireMission() {
}

bool UMETA_BaseMission::DoesSupportIntel() const {
    return false;
}

void UMETA_BaseMission::AddParameters(const TMap<FGameplayTag, int32>& inParameters) {
}

void UMETA_BaseMission::AddParameter(const FGameplayTag inParameterTag, int32 inParameterValue) {
}


