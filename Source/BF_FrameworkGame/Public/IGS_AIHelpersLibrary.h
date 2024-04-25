#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_AIHelpersLibrary.generated.h"

class AActor;
class AIGS_CarryableItemPickup;
class AIGS_GameCharacterFramework;
class AIGS_IntelligentGameCharacter;
class AIGS_PickupActorBase;
class AIGS_PlayerCharacter;
class AIGS_RoomBase;
class AIGS_WeaponPickupActor;
class UActorComponent;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AIHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AIHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UseNonCombatReload(const AIGS_IntelligentGameCharacter* inPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_WieldableSlot TranslateWeaponTypeToSlot(EIGS_SwitchWeaponTask_WeaponType inWeaponType);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_SwitchWeaponTask_WeaponType TranslateSlotToWeaponType(EIGS_WieldableSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    static bool TargetIsGuardingPos(AIGS_GameCharacterFramework* inCharacter, FVector InPos);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ETeamAttitude::Type> SolveAttitude(FGenericTeamId inTeamId1, FGenericTeamId inTeamId2);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalAggro(AActor* inActor, const float InFloat, const AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void SetFocusPointHelper(AIGS_GameCharacterFramework* inCharacter, FVector inPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetFocusActorHelper(AIGS_GameCharacterFramework* inCharacter, AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static void MarkPlayerNearVan(UObject* inWCO, AIGS_GameCharacterFramework* inPlayer, bool inIsNear);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWeaponPickupValidFor(const AIGS_WeaponPickupActor* inWeaponPickup, const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidStimuliSide(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSideValidWithStimuli(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSideValidNoStimuli(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRotationInTolerance(AIGS_GameCharacterFramework* Instigator, float minAgnle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerSeenByEnemy(AIGS_PlayerCharacter* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPickupValidFor(const AIGS_PickupActorBase* inPickup, const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLootDeliveryValidFor(const UActorComponent* inThrowRequestComponent, const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLootCarryablePickupValidFor(const AIGS_CarryableItemPickup* inCarryablePickup, const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLastPlayerAlive(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLastHeisterAlive(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInLineTrace(const AIGS_GameCharacterFramework* Instigator, const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCarryablePickupValidFor(const AIGS_CarryableItemPickup* inCarryablePickup, const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBossCharacterDowned(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool IsArmed(AActor* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyPlayerWithinDistace(const UObject* inWCO, FVector InPosition, float inDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAimingInTolerance(AIGS_GameCharacterFramework* Instigator, float minAgnle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAimingInCloseProximity(FVector inLocation1, FVector inLocation2);
    
    UFUNCTION(BlueprintCallable)
    static bool InSameArea(AIGS_RoomBase* room1, AIGS_RoomBase* room2, int32 Depth);
    
    UFUNCTION(BlueprintCallable)
    static void HitByCar(AIGS_GameCharacterFramework* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetPotentialTarget(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetPlayerDetectingCharacters(AIGS_GameCharacterFramework* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_GameCharacterFramework* GetNearestCharacterOfTeamSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_GameCharacterFramework* GetNearestBot(const UObject* inWCO, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_GameCharacterFramework* GetLocalPlayerCharacter(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static float GetGlobalAggro(const AActor* inActor, const AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static FGenericTeamId GetGenericTeamId(const AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendsOfSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnemiesOfSideInRange(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, const FVector& InLocation, float InRange, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnemiesOfSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static float GetDestinationDistanceBetweenCharacters(AIGS_GameCharacterFramework* inQuerrier, FVector inPoint1, FVector inPoint2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCountOfAlivePlayers(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCountOfAliveHeisters(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCountOfAliveBots(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharactersOfSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_SwitchWeaponTask_WeaponType GetBestWeaponType(AIGS_IntelligentGameCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngleToDirection2D(AIGS_GameCharacterFramework* Instigator, FVector InDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static void GetAllPlayers(const UObject* inWorldContextObject, TArray<AIGS_GameCharacterFramework*>& outArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllPlayerCharacters(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllHeisterCharacters(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AIGS_GameCharacterFramework*> GetAllCharacterThatCanBeShoutDown(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllCharactersInRange(const UObject* inWCO, const FVector& InLocation, float InRange, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllBotsInRange(const UObject* inWCO, const FVector& InLocation, float InRange, TArray<AIGS_GameCharacterFramework*>& outBots);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllBots(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outBots);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllAliveHeisterCharacters(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outCharacters);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetAIFocusLocationOffsetForActor(const AActor* inActor, const bool inPreferHead);
    
    UFUNCTION(BlueprintCallable)
    static void ClearFocusHelper(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeToBestWeapon(AIGS_IntelligentGameCharacter* Character, EIGS_SwitchWeaponTask_WeaponType& outBestWeaponType);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateAreaOfOperation(AIGS_RoomBase* fromRoom, int32 IterationCount, TArray<AIGS_RoomBase*>& outArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAllHeistersDead(UObject* inWCO);
    
};

