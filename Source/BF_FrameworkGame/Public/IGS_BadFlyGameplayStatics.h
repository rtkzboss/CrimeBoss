#pragma once
#include "CoreMinimal.h"
#include "IGS_BadFlyGameplayStaticsFramework.h"
#include "IGS_InterestPointHolder.h"
#include "EIGS_ItemType.h"
#include "IGS_LootBagSingleItem.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_AIMontageType.h"
#include "EIGS_AITiers.h"
#include "EIGS_CharacterID.h"
#include "EIGS_PlatformName.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "EIGS_AlarmReason.h"
#include "EIGS_BagType.h"
#include "EIGS_DamageLimiterType.h"
#include "EIGS_SpawnAnimType.h"
#include "IGS_LootBagInfo.h"
#include "IGS_SpawnerEventDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_BadFlyGameplayStatics.generated.h"

class AActor;
class AController;
class AIGS_AISpawnPoint;
class AIGS_GameCharacterFramework;
class AIGS_LootBagPickup;
class AIGS_ObjectiveScenarioBase;
class AIGS_PlayerCharacter;
class AIGS_PlayerStateGame;
class AIGS_ScriptManagerBase;
class AIGS_SuspicionEventActor;
class APlayerState;
class UDamageType;
class UIGS_DamageTypeBase;
class UIGS_ImpactTypeObject;
class UIGS_InventoryObjectFramework;
class UIGS_ObjectStatus;
class UIGS_OutlineComponent;
class UIGS_WaveManagerData;
class UMETA_Character;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_BadFlyGameplayStatics : public UIGS_BadFlyGameplayStaticsFramework {
    GENERATED_BODY()
public:
    UIGS_BadFlyGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static void TriggerBotLimbo(const UObject* inWCO, bool inPlayVioceovers);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerAlarmDelayed(const UObject* inWCO, EIGS_AlarmReason inReason, float inDelay);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerAlarm(const UObject* inWCO, EIGS_AlarmReason inReason);
    
    UFUNCTION(BlueprintCallable)
    static void StopWaveManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void StopCopsArriveTimer(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void StartWaveManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void StartStorm(const UObject* inWCO, bool inIsInstant, bool inIsEndless);
    
    UFUNCTION(BlueprintCallable)
    static void StartRetreat(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void StartPursue(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void StartHunt(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void StartCopsArriveTimer(UObject* inWCO, float InTime);
    
    UFUNCTION(BlueprintCallable)
    static void StartBreak(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAttachedToComp(const UObject* inWCO, USceneComponent* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAttached(const UObject* inWCO, AActor* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAdvanced(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActor(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, TArray<AIGS_GameCharacterFramework*> inIgnoredBy);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSquadAroundActorWithoutDelegate(AActor* inActor, EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpecialization, int32 inEnemyCount);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSquadAroundActor(AActor* inActor, EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpecialization, int32 inEnemyCount, FIGS_SpawnerEventDelegate inSpawnerDelegate);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_LootBagPickup* SpawnLootBagWithData(const UObject* inWCO, TArray<FIGS_LootBagSingleItem> inItems, FTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_LootBagPickup* SpawnLootBag(const UObject* inWCO, TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inItemClasses, FTransform InTransform, bool bRegisterToLootManager);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_LootBagPickup* SpawnGadgetBag(const UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClas, FTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> SortLocationsByDistance(TArray<FVector> inLocations, FVector inOriginPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetWaveManagerData(const UObject* inWCO, UIGS_WaveManagerData* inWaveManagerData);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseTempWaveManager(const UObject* inWCO, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerWavesDirections(const UObject* inWCO, int32 inWavesDirections);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerVehicleTargetPoint(const UObject* inWCO, FIGS_InterestPointHolder inInterestPointHolder);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerUseVehicles(const UObject* inWCO, bool inUseVehicles);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerSegment(const UObject* inWCO, int32 inStormTypes, const TArray<FGameplayTagContainer>& inPointsGameplayTags, const TMap<EIGS_UnitSpecialization, int32>& inSpecialTypesMaxCount, int32 inMaxEnemyCount, float inStormLength, float inBreakLength);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerMaxHeliDistance(const UObject* inWCO, float inMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerMaxCarInPhaseCount(const UObject* inWCO, int32 inMaxCarCountInPhase);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerMaxCarDistance(const UObject* inWCO, float inMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpWaveManagerMaxCarCount(const UObject* inWCO, int32 inMaxCarCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetTortillaBlendEffectValue(AIGS_PlayerCharacter* inPlayer, float InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetTeamSidesVariations(const UObject* inWCO, TMap<EIGS_TeamSideEnum, uint8> inTeamSidesVariations);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpawnGroupsActive(const UObject* inWCO, bool Inactive, const TArray<FGameplayTagContainer>& inPointsGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionRequiredBagsInWeight(UObject* inWCO, int32 inRequiredWeight);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionLootValues(UObject* inWCO, int32 inObjectiveValue, int32 inTotalMissionValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetLowHealthEffectThreshold(AIGS_PlayerCharacter* inPlayer, float inLowHealthEffectThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsTurfWar(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameCultureBasedOnConsoleSystemLocale();
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageLimiterTypeEnabled(AIGS_PlayerCharacter* inPlayer, EIGS_DamageLimiterType inType, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetAITeamTier(const UObject* inWCO, const EIGS_TeamSideEnum inTeamSide, const EIGS_AITiers inTier);
    
    UFUNCTION(BlueprintCallable)
    static void RequestStopSession();
    
    UFUNCTION(BlueprintCallable)
    static void RequestSimulate();
    
    UFUNCTION(BlueprintCallable)
    static void RequestPlaySession(bool bNewWindow);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTerritoryRestrictionTag(const UObject* inWCO, const FName& inTag);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayerOffencesToIndex(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSpecialTierRatio(const UObject* inWCO, const float inNewRatio);
    
    UFUNCTION(BlueprintCallable)
    static bool MatchesTagDepth(FGameplayTag inTagLeft, FGameplayTag inTagRight, int32 InDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTearingDown(const UObject* inCaller);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLastStrike(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInLimbo(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEveryCharacterOfTeamsideDeadOrDown(UObject* inWCO, EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEveryCharacterOfTeamsideDead(UObject* inWCO, EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageLimiterTypeEnabled(AIGS_PlayerCharacter* inPlayer, EIGS_DamageLimiterType inType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAlarmed(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static float GetTotalWeightSpawned(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static float GetSuspicionAmountForOffence(const UObject* inWCO, AIGS_PlayerCharacter* inPlayer, FGameplayTagContainer inOffences);
    
    UFUNCTION(BlueprintCallable)
    static void GetSubTagOnDepth(FGameplayTag inTag, int32 InDepth, FGameplayTag& outTag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStrikeCountForOffender(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ScriptManagerBase* GetScriptManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPingForLocalPlayer(APlayerState* inPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPersistentLevelName(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ObjectiveScenarioBase* GetObjectiveScenario(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetMetaCharacterPicture(UObject* inWCO, UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaximumStrikes();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetMainCategoryTagFromMetaHierarchy(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLatencyForPlayerState(APlayerState* inPlayerState);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_ItemType GetItemType(UObject* inWCO, FIGS_LootBagInfo inBagInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsPS5();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetGameplayTagHierarchy(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentTextPlatformName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentStrikes(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_PlatformName GetCurrentPlatform();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetCharacterPicture(UObject* inWCO, EIGS_CharacterID inCharacterID, bool bIsMaxLeveled, int32 inGenericID, FGameplayTag inCharacterSkinID);
    
    UFUNCTION(BlueprintCallable)
    static FText GetCharacterNameFromPlayerState(AIGS_PlayerStateGame* inPS);
    
    UFUNCTION(BlueprintCallable)
    static FText GetCharacterNameFromPawn(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static FText GetCharacterName(UObject* inWCO, EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static float GetBagValue(UObject* inWCO, FIGS_LootBagInfo inBagInfo);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_BagType GetBagTypeForInfo(UObject* inWCO, FIGS_LootBagInfo inBagInfo);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_BagType GetBagType(UObject* inWCO, EIGS_ItemType inBagType, float inBagValue);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_OutlineComponent* GetActorOutlineComponent(const AActor* inActor, const bool inWarnFindComponentByClass);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_ObjectStatus* GetActorObjectStatus(const AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static void ForceSWATSpawn(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ForceSpawnWaveWithTags(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, int32 inEnemyCount, const TArray<FGameplayTagContainer>& inPointsGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static void ForceSpawnWave(const UObject* inWCO, int32 inEnemyCount);
    
    UFUNCTION(BlueprintCallable)
    static void ForceSpawnSquadOnSpawnPoints(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations, const TArray<AIGS_AISpawnPoint*>& inSpawnPoints, EIGS_SpawnAnimType inSpawnAnim);
    
    UFUNCTION(BlueprintCallable)
    static void ForceSetMissionRequiredBagsInWeight(UObject* inWCO, int32 inRequiredWeight);
    
    UFUNCTION(BlueprintCallable)
    static void ForceHideEscapeWarning(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void DebugTestRequestAnimation(AIGS_GameCharacterFramework* inCharacter, EIGS_AIMontageType inMontageType, uint8 inMontageVariation);
    
    UFUNCTION(BlueprintCallable)
    static void CreateExplosiontWithFalloff(UObject* inWCO, float inBaseDamage, float inMinDamage, FVector inOrigin, float inDamageInnerRadius, float inDamageOuterRadius, float inDamageFalloff, float inEffectRadius, TSubclassOf<UDamageType> inDamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintCallable)
    static void CreateExplosionEffectOnly(UObject* inWCO, FVector inOrigin, float inEffectRadius, AActor* inCausingActor);
    
    UFUNCTION(BlueprintCallable)
    static void CreateExplosion(UObject* inWCO, float inBaseDamage, FVector inOrigin, float inDamageRadius, float inEffectRadius, TSubclassOf<UDamageType> inDamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintCallable)
    static void CreateDestroyEffect(UPrimitiveComponent* inSourceComponent, TSubclassOf<UIGS_DamageTypeBase> inDamageType, TSubclassOf<UIGS_ImpactTypeObject> inImpactType, const FHitResult& inHitResult, const AIGS_GameCharacterFramework* inOwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> CompareStrings(TArray<FString> inStringArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIsRunningCommandlet();
    
    UFUNCTION(BlueprintCallable)
    static float ApplyDamage(const FHitResult& inHitResult, AIGS_GameCharacterFramework* inOwner, float inDamage, const TSubclassOf<UDamageType> inDamageType);
    
    UFUNCTION(BlueprintCallable)
    static void AddWaveManagerWavesRandomDirection(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void AddTerritoryRestrictionTag(const UObject* inWCO, const FName& inTag);
    
    UFUNCTION(BlueprintCallable)
    static void AddSuspicionOverrideAmount(const UObject* inWCO, FGameplayTagContainer inOffences, float inAmount, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddSuspicionGeneral(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddSuspicionForPlayer(const UObject* inWCO, AIGS_PlayerCharacter* inPlayer, FGameplayTagContainer inOffences, AActor* inDetector);
    
    UFUNCTION(BlueprintCallable)
    static void AddSuspicion(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddStrikesForSuspActors(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddStrikesForSpecialOffence(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddStrikesForPlayer(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddStrikesForOffender(const UObject* inWCO, FGameplayTagContainer inOffences, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddStrikesForNoise(const UObject* inWCO, FName inNoiseTag, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddStrikesCustom(const UObject* inWCO, int32 inCount, const FText& inBlameText, AActor* inDetector, AActor* inOffender);
    
    UFUNCTION(BlueprintCallable)
    static void AddInfoMessageClientOnly(const UObject* inWCO, FText inInfoText);
    
    UFUNCTION(BlueprintCallable)
    static void AddErrorMessage(const UObject* inWCO, FText inErrorText);
    
};

