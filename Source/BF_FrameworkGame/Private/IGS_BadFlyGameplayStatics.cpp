#include "IGS_BadFlyGameplayStatics.h"
#include "Templates/SubclassOf.h"

UIGS_BadFlyGameplayStatics::UIGS_BadFlyGameplayStatics() {
}

void UIGS_BadFlyGameplayStatics::TriggerBotLimbo(const UObject* inWCO, bool inPlayVioceovers) {
}

void UIGS_BadFlyGameplayStatics::TriggerAlarmDelayed(const UObject* inWCO, EIGS_AlarmReason inReason, float inDelay) {
}

void UIGS_BadFlyGameplayStatics::TriggerAlarm(const UObject* inWCO, EIGS_AlarmReason inReason) {
}

void UIGS_BadFlyGameplayStatics::StopWaveManager(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::StopCopsArriveTimer(UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::StartWaveManager(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::StartStorm(const UObject* inWCO, bool inIsInstant, bool inIsEndless) {
}

void UIGS_BadFlyGameplayStatics::StartRetreat(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::StartPursue(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::StartHunt(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::StartCopsArriveTimer(UObject* inWCO, float InTime) {
}

void UIGS_BadFlyGameplayStatics::StartBreak(const UObject* inWCO) {
}

AIGS_SuspicionEventActor* UIGS_BadFlyGameplayStatics::SpawnSuspicionEventActorAttachedToComp(const UObject* inWCO, USceneComponent* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy, FName InBoneName) {
    return NULL;
}

AIGS_SuspicionEventActor* UIGS_BadFlyGameplayStatics::SpawnSuspicionEventActorAttached(const UObject* inWCO, AActor* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy) {
    return NULL;
}

AIGS_SuspicionEventActor* UIGS_BadFlyGameplayStatics::SpawnSuspicionEventActorAdvanced(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy) {
    return NULL;
}

AIGS_SuspicionEventActor* UIGS_BadFlyGameplayStatics::SpawnSuspicionEventActor(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy) {
    return NULL;
}

void UIGS_BadFlyGameplayStatics::SpawnSquadAroundActorWithoutDelegate(AActor* inActor, EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpecialization, int32 inEnemyCount) {
}

void UIGS_BadFlyGameplayStatics::SpawnSquadAroundActor(AActor* inActor, EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpecialization, int32 inEnemyCount, FIGS_SpawnerEventDelegate inSpawnerDelegate) {
}

AIGS_LootBagPickup* UIGS_BadFlyGameplayStatics::SpawnLootBagWithData(const UObject* inWCO, TArray<FIGS_LootBagSingleItem> inItems, FTransform InTransform) {
    return NULL;
}

AIGS_LootBagPickup* UIGS_BadFlyGameplayStatics::SpawnLootBag(const UObject* inWCO, TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inItemClasses, FTransform InTransform, bool bRegisterToLootManager) {
    return NULL;
}

AIGS_LootBagPickup* UIGS_BadFlyGameplayStatics::SpawnGadgetBag(const UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClas, FTransform InTransform) {
    return NULL;
}

TArray<FVector> UIGS_BadFlyGameplayStatics::SortLocationsByDistance(TArray<FVector> inLocations, FVector inOriginPoint) {
    return TArray<FVector>();
}

void UIGS_BadFlyGameplayStatics::SetWaveManagerData(const UObject* inWCO, UIGS_WaveManagerData* inWaveManagerData) {
}

void UIGS_BadFlyGameplayStatics::SetUseTempWaveManager(const UObject* inWCO, bool InValue) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerWavesDirections(const UObject* inWCO, int32 inWavesDirections) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerVehicleTargetPoint(const UObject* inWCO, FIGS_InterestPointHolder inInterestPointHolder) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerUseVehicles(const UObject* inWCO, bool inUseVehicles) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerSegment(const UObject* inWCO, int32 inStormTypes, const TArray<FGameplayTagContainer>& inPointsGameplayTags, const TMap<EIGS_UnitSpecialization, int32>& inSpecialTypesMaxCount, int32 inMaxEnemyCount, float inStormLength, float inBreakLength) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerMaxHeliDistance(const UObject* inWCO, float inMaxDistance) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerMaxCarInPhaseCount(const UObject* inWCO, int32 inMaxCarCountInPhase) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerMaxCarDistance(const UObject* inWCO, float inMaxDistance) {
}

void UIGS_BadFlyGameplayStatics::SetUpWaveManagerMaxCarCount(const UObject* inWCO, int32 inMaxCarCount) {
}

void UIGS_BadFlyGameplayStatics::SetTortillaBlendEffectValue(AIGS_PlayerCharacter* inPlayer, float InValue) {
}

void UIGS_BadFlyGameplayStatics::SetTeamSidesVariations(const UObject* inWCO, TMap<EIGS_TeamSideEnum, uint8> inTeamSidesVariations) {
}

void UIGS_BadFlyGameplayStatics::SetSpawnGroupsActive(const UObject* inWCO, bool Inactive, const TArray<FGameplayTagContainer>& inPointsGameplayTags) {
}

void UIGS_BadFlyGameplayStatics::SetMissionRequiredBagsInWeight(UObject* inWCO, int32 inRequiredWeight) {
}

void UIGS_BadFlyGameplayStatics::SetMissionLootValues(UObject* inWCO, int32 inObjectiveValue, int32 inTotalMissionValue) {
}

void UIGS_BadFlyGameplayStatics::SetLowHealthEffectThreshold(AIGS_PlayerCharacter* inPlayer, float inLowHealthEffectThreshold) {
}

void UIGS_BadFlyGameplayStatics::SetIsTurfWar(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::SetGameCultureBasedOnConsoleSystemLocale() {
}

void UIGS_BadFlyGameplayStatics::SetDamageLimiterTypeEnabled(AIGS_PlayerCharacter* inPlayer, EIGS_DamageLimiterType inType, bool inEnabled) {
}

void UIGS_BadFlyGameplayStatics::SetAITeamTier(const UObject* inWCO, const EIGS_TeamSideEnum inTeamSide, const EIGS_AITiers inTier) {
}

void UIGS_BadFlyGameplayStatics::RequestStopSession() {
}

void UIGS_BadFlyGameplayStatics::RequestSimulate() {
}

void UIGS_BadFlyGameplayStatics::RequestPlaySession(bool bNewWindow) {
}

void UIGS_BadFlyGameplayStatics::RemoveTerritoryRestrictionTag(const UObject* inWCO, const FName& inTag) {
}

int32 UIGS_BadFlyGameplayStatics::PlayerOffencesToIndex(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
    return 0;
}

void UIGS_BadFlyGameplayStatics::OverrideSpecialTierRatio(const UObject* inWCO, const float inNewRatio) {
}

bool UIGS_BadFlyGameplayStatics::MatchesTagDepth(FGameplayTag inTagLeft, FGameplayTag inTagRight, int32 InDepth) {
    return false;
}

bool UIGS_BadFlyGameplayStatics::IsTearingDown(const UObject* inCaller) {
    return false;
}

bool UIGS_BadFlyGameplayStatics::IsLastStrike(const UObject* inWCO) {
    return false;
}

bool UIGS_BadFlyGameplayStatics::IsInLimbo(const UObject* inWCO) {
    return false;
}

bool UIGS_BadFlyGameplayStatics::IsEveryCharacterOfTeamsideDeadOrDown(UObject* inWCO, EIGS_TeamSideEnum inTeamSide) {
    return false;
}

bool UIGS_BadFlyGameplayStatics::IsEveryCharacterOfTeamsideDead(UObject* inWCO, EIGS_TeamSideEnum inTeamSide) {
    return false;
}

bool UIGS_BadFlyGameplayStatics::IsDamageLimiterTypeEnabled(AIGS_PlayerCharacter* inPlayer, EIGS_DamageLimiterType inType) {
    return false;
}

bool UIGS_BadFlyGameplayStatics::IsAlarmed(const UObject* inWCO) {
    return false;
}

float UIGS_BadFlyGameplayStatics::GetTotalWeightSpawned(UObject* inWCO) {
    return 0.0f;
}

float UIGS_BadFlyGameplayStatics::GetSuspicionAmountForOffence(const UObject* inWCO, AIGS_PlayerCharacter* inPlayer, FGameplayTagContainer inOffences) {
    return 0.0f;
}

void UIGS_BadFlyGameplayStatics::GetSubTagOnDepth(FGameplayTag inTag, int32 InDepth, FGameplayTag& outTag) {
}

int32 UIGS_BadFlyGameplayStatics::GetStrikeCountForOffender(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
    return 0;
}

AIGS_ScriptManagerBase* UIGS_BadFlyGameplayStatics::GetScriptManager(UObject* inWCO) {
    return NULL;
}

float UIGS_BadFlyGameplayStatics::GetPingForLocalPlayer(APlayerState* inPlayerState) {
    return 0.0f;
}

FString UIGS_BadFlyGameplayStatics::GetPersistentLevelName(UObject* inWCO) {
    return TEXT("");
}

AIGS_ObjectiveScenarioBase* UIGS_BadFlyGameplayStatics::GetObjectiveScenario(UObject* inWCO) {
    return NULL;
}

UTexture2D* UIGS_BadFlyGameplayStatics::GetMetaCharacterPicture(UObject* inWCO, UMETA_Character* inCharacter) {
    return NULL;
}

int32 UIGS_BadFlyGameplayStatics::GetMaximumStrikes() {
    return 0;
}

FGameplayTag UIGS_BadFlyGameplayStatics::GetMainCategoryTagFromMetaHierarchy(FGameplayTag inTag) {
    return FGameplayTag{};
}

int32 UIGS_BadFlyGameplayStatics::GetLatencyForPlayerState(APlayerState* inPlayerState) {
    return 0;
}

EIGS_ItemType UIGS_BadFlyGameplayStatics::GetItemType(UObject* inWCO, FIGS_LootBagInfo inBagInfo) {
    return EIGS_ItemType::Item_Weapon;
}

bool UIGS_BadFlyGameplayStatics::GetIsPS5() {
    return false;
}

FGameplayTagContainer UIGS_BadFlyGameplayStatics::GetGameplayTagHierarchy(FGameplayTag inTag) {
    return FGameplayTagContainer{};
}

FString UIGS_BadFlyGameplayStatics::GetCurrentTextPlatformName() {
    return TEXT("");
}

int32 UIGS_BadFlyGameplayStatics::GetCurrentStrikes(const UObject* inWCO) {
    return 0;
}

EIGS_PlatformName UIGS_BadFlyGameplayStatics::GetCurrentPlatform() {
    return EIGS_PlatformName::PN_Unknown;
}

UTexture2D* UIGS_BadFlyGameplayStatics::GetCharacterPicture(UObject* inWCO, EIGS_CharacterID inCharacterID, bool bIsMaxLeveled, int32 inGenericID, FGameplayTag inCharacterSkinID) {
    return NULL;
}

FText UIGS_BadFlyGameplayStatics::GetCharacterNameFromPlayerState(AIGS_PlayerStateGame* inPS) {
    return FText::GetEmpty();
}

FText UIGS_BadFlyGameplayStatics::GetCharacterNameFromPawn(AIGS_GameCharacterFramework* inCharacter) {
    return FText::GetEmpty();
}

FText UIGS_BadFlyGameplayStatics::GetCharacterName(UObject* inWCO, EIGS_CharacterID inCharacterID) {
    return FText::GetEmpty();
}

float UIGS_BadFlyGameplayStatics::GetBagValue(UObject* inWCO, FIGS_LootBagInfo inBagInfo) {
    return 0.0f;
}

EIGS_BagType UIGS_BadFlyGameplayStatics::GetBagTypeForInfo(UObject* inWCO, FIGS_LootBagInfo inBagInfo) {
    return EIGS_BagType::Bag_Unknown;
}

EIGS_BagType UIGS_BadFlyGameplayStatics::GetBagType(UObject* inWCO, EIGS_ItemType inBagType, float inBagValue) {
    return EIGS_BagType::Bag_Unknown;
}

UIGS_OutlineComponent* UIGS_BadFlyGameplayStatics::GetActorOutlineComponent(const AActor* inActor, const bool inWarnFindComponentByClass) {
    return NULL;
}

UIGS_ObjectStatus* UIGS_BadFlyGameplayStatics::GetActorObjectStatus(const AActor* inActor) {
    return NULL;
}

void UIGS_BadFlyGameplayStatics::ForceSWATSpawn(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::ForceSpawnWaveWithTags(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, int32 inEnemyCount, const TArray<FGameplayTagContainer>& inPointsGameplayTags) {
}

void UIGS_BadFlyGameplayStatics::ForceSpawnWave(const UObject* inWCO, int32 inEnemyCount) {
}

void UIGS_BadFlyGameplayStatics::ForceSpawnSquadOnSpawnPoints(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations, const TArray<AIGS_AISpawnPoint*>& inSpawnPoints, EIGS_SpawnAnimType inSpawnAnim) {
}

void UIGS_BadFlyGameplayStatics::ForceSetMissionRequiredBagsInWeight(UObject* inWCO, int32 inRequiredWeight) {
}

void UIGS_BadFlyGameplayStatics::ForceHideEscapeWarning(UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::DebugTestRequestAnimation(AIGS_GameCharacterFramework* inCharacter, EIGS_AIMontageType inMontageType, uint8 inMontageVariation) {
}

void UIGS_BadFlyGameplayStatics::CreateExplosiontWithFalloff(UObject* inWCO, float inBaseDamage, float inMinDamage, FVector inOrigin, float inDamageInnerRadius, float inDamageOuterRadius, float inDamageFalloff, float inEffectRadius, TSubclassOf<UDamageType> inDamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
}

void UIGS_BadFlyGameplayStatics::CreateExplosionEffectOnly(UObject* inWCO, FVector inOrigin, float inEffectRadius, AActor* inCausingActor) {
}

void UIGS_BadFlyGameplayStatics::CreateExplosion(UObject* inWCO, float inBaseDamage, FVector inOrigin, float inDamageRadius, float inEffectRadius, TSubclassOf<UDamageType> inDamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
}

void UIGS_BadFlyGameplayStatics::CreateDestroyEffect(UPrimitiveComponent* inSourceComponent, TSubclassOf<UIGS_DamageTypeBase> inDamageType, TSubclassOf<UIGS_ImpactTypeObject> inImpactType, const FHitResult& inHitResult, const AIGS_GameCharacterFramework* inOwnerCharacter) {
}

TArray<FString> UIGS_BadFlyGameplayStatics::CompareStrings(TArray<FString> inStringArray) {
    return TArray<FString>();
}

bool UIGS_BadFlyGameplayStatics::CheckIsRunningCommandlet() {
    return false;
}

float UIGS_BadFlyGameplayStatics::ApplyDamage(const FHitResult& inHitResult, AIGS_GameCharacterFramework* inOwner, float inDamage, const TSubclassOf<UDamageType> inDamageType) {
    return 0.0f;
}

void UIGS_BadFlyGameplayStatics::AddWaveManagerWavesRandomDirection(const UObject* inWCO) {
}

void UIGS_BadFlyGameplayStatics::AddTerritoryRestrictionTag(const UObject* inWCO, const FName& inTag) {
}

void UIGS_BadFlyGameplayStatics::AddSuspicionOverrideAmount(const UObject* inWCO, FGameplayTagContainer inOffences, float inAmount, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddSuspicionGeneral(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddSuspicionForPlayer(const UObject* inWCO, AIGS_PlayerCharacter* inPlayer, FGameplayTagContainer inOffences, AActor* inDetector) {
}

void UIGS_BadFlyGameplayStatics::AddSuspicion(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddStrikesForSuspActors(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddStrikesForSpecialOffence(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddStrikesForPlayer(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddStrikesForOffender(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddStrikesForNoise(const UObject* inWCO, FName inNoiseTag, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddStrikesCustom(const UObject* inWCO, int32 inCount, const FText& inBlameText, AActor* inDetector, AActor* inOffender) {
}

void UIGS_BadFlyGameplayStatics::AddInfoMessageClientOnly(const UObject* inWCO, FText inInfoText) {
}

void UIGS_BadFlyGameplayStatics::AddErrorMessage(const UObject* inWCO, FText inErrorText) {
}


