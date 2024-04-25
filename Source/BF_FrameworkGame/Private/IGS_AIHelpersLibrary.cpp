#include "IGS_AIHelpersLibrary.h"

UIGS_AIHelpersLibrary::UIGS_AIHelpersLibrary() {
}

bool UIGS_AIHelpersLibrary::UseNonCombatReload(const AIGS_IntelligentGameCharacter* inPlayerCharacter) {
    return false;
}

EIGS_WieldableSlot UIGS_AIHelpersLibrary::TranslateWeaponTypeToSlot(EIGS_SwitchWeaponTask_WeaponType inWeaponType) {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_SwitchWeaponTask_WeaponType UIGS_AIHelpersLibrary::TranslateSlotToWeaponType(EIGS_WieldableSlot Slot) {
    return EIGS_SwitchWeaponTask_WeaponType::WT_Unknown;
}

bool UIGS_AIHelpersLibrary::TargetIsGuardingPos(AIGS_GameCharacterFramework* inCharacter, FVector InPos) {
    return false;
}

TEnumAsByte<ETeamAttitude::Type> UIGS_AIHelpersLibrary::SolveAttitude(FGenericTeamId inTeamId1, FGenericTeamId inTeamId2) {
    return ETeamAttitude::Friendly;
}

void UIGS_AIHelpersLibrary::SetGlobalAggro(AActor* inActor, const float InFloat, const AActor* inInstigator) {
}

void UIGS_AIHelpersLibrary::SetFocusPointHelper(AIGS_GameCharacterFramework* inCharacter, FVector inPoint) {
}

void UIGS_AIHelpersLibrary::SetFocusActorHelper(AIGS_GameCharacterFramework* inCharacter, AActor* inActor) {
}

void UIGS_AIHelpersLibrary::MarkPlayerNearVan(UObject* inWCO, AIGS_GameCharacterFramework* inPlayer, bool inIsNear) {
}

bool UIGS_AIHelpersLibrary::IsWeaponPickupValidFor(const AIGS_WeaponPickupActor* inWeaponPickup, const AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsValidStimuliSide(EIGS_TeamSideEnum inTeamSide) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsSideValidWithStimuli(EIGS_TeamSideEnum inTeamSide) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsSideValidNoStimuli(EIGS_TeamSideEnum inTeamSide) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsRotationInTolerance(AIGS_GameCharacterFramework* Instigator, float minAgnle) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsPlayerSeenByEnemy(AIGS_PlayerCharacter* inPlayer) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsPickupValidFor(const AIGS_PickupActorBase* inPickup, const AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsLootDeliveryValidFor(const UActorComponent* inThrowRequestComponent, const AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsLootCarryablePickupValidFor(const AIGS_CarryableItemPickup* inCarryablePickup, const AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsLastPlayerAlive(UObject* inWCO) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsLastHeisterAlive(UObject* inWCO) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsInLineTrace(const AIGS_GameCharacterFramework* Instigator, const AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsCarryablePickupValidFor(const AIGS_CarryableItemPickup* inCarryablePickup, const AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsBossCharacterDowned(UObject* inWCO) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsArmed(AActor* inCharacter) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsAnyPlayerWithinDistace(const UObject* inWCO, FVector InPosition, float inDistance) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsAimingInTolerance(AIGS_GameCharacterFramework* Instigator, float minAgnle) {
    return false;
}

bool UIGS_AIHelpersLibrary::IsAimingInCloseProximity(FVector inLocation1, FVector inLocation2) {
    return false;
}

bool UIGS_AIHelpersLibrary::InSameArea(AIGS_RoomBase* room1, AIGS_RoomBase* room2, int32 Depth) {
    return false;
}

void UIGS_AIHelpersLibrary::HitByCar(AIGS_GameCharacterFramework* Instigator) {
}

AActor* UIGS_AIHelpersLibrary::GetPotentialTarget(AIGS_GameCharacterFramework* inCharacter) {
    return NULL;
}

TArray<AActor*> UIGS_AIHelpersLibrary::GetPlayerDetectingCharacters(AIGS_GameCharacterFramework* inPlayer) {
    return TArray<AActor*>();
}

AIGS_GameCharacterFramework* UIGS_AIHelpersLibrary::GetNearestCharacterOfTeamSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, const FVector& InLocation) {
    return NULL;
}

AIGS_GameCharacterFramework* UIGS_AIHelpersLibrary::GetNearestBot(const UObject* inWCO, const FVector& InLocation) {
    return NULL;
}

AIGS_GameCharacterFramework* UIGS_AIHelpersLibrary::GetLocalPlayerCharacter(const UObject* inWCO) {
    return NULL;
}

float UIGS_AIHelpersLibrary::GetGlobalAggro(const AActor* inActor, const AActor* inInstigator) {
    return 0.0f;
}

FGenericTeamId UIGS_AIHelpersLibrary::GetGenericTeamId(const AActor* inActor) {
    return FGenericTeamId{};
}

bool UIGS_AIHelpersLibrary::GetFriendsOfSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

bool UIGS_AIHelpersLibrary::GetEnemiesOfSideInRange(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, const FVector& InLocation, float InRange, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

bool UIGS_AIHelpersLibrary::GetEnemiesOfSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

float UIGS_AIHelpersLibrary::GetDestinationDistanceBetweenCharacters(AIGS_GameCharacterFramework* inQuerrier, FVector inPoint1, FVector inPoint2) {
    return 0.0f;
}

int32 UIGS_AIHelpersLibrary::GetCountOfAlivePlayers(UObject* inWCO) {
    return 0;
}

int32 UIGS_AIHelpersLibrary::GetCountOfAliveHeisters(UObject* inWCO) {
    return 0;
}

int32 UIGS_AIHelpersLibrary::GetCountOfAliveBots(UObject* inWCO) {
    return 0;
}

bool UIGS_AIHelpersLibrary::GetCharactersOfSide(const UObject* inWCO, EIGS_TeamSideEnum inTeamSide, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

EIGS_SwitchWeaponTask_WeaponType UIGS_AIHelpersLibrary::GetBestWeaponType(AIGS_IntelligentGameCharacter* Character) {
    return EIGS_SwitchWeaponTask_WeaponType::WT_Unknown;
}

float UIGS_AIHelpersLibrary::GetAngleToDirection2D(AIGS_GameCharacterFramework* Instigator, FVector InDirection) {
    return 0.0f;
}

void UIGS_AIHelpersLibrary::GetAllPlayers(const UObject* inWorldContextObject, TArray<AIGS_GameCharacterFramework*>& outArray) {
}

bool UIGS_AIHelpersLibrary::GetAllPlayerCharacters(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

bool UIGS_AIHelpersLibrary::GetAllHeisterCharacters(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

TArray<AIGS_GameCharacterFramework*> UIGS_AIHelpersLibrary::GetAllCharacterThatCanBeShoutDown(UObject* inWCO) {
    return TArray<AIGS_GameCharacterFramework*>();
}

bool UIGS_AIHelpersLibrary::GetAllCharactersInRange(const UObject* inWCO, const FVector& InLocation, float InRange, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

bool UIGS_AIHelpersLibrary::GetAllBotsInRange(const UObject* inWCO, const FVector& InLocation, float InRange, TArray<AIGS_GameCharacterFramework*>& outBots) {
    return false;
}

bool UIGS_AIHelpersLibrary::GetAllBots(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outBots) {
    return false;
}

bool UIGS_AIHelpersLibrary::GetAllAliveHeisterCharacters(const UObject* inWCO, TArray<AIGS_GameCharacterFramework*>& outCharacters) {
    return false;
}

FVector UIGS_AIHelpersLibrary::GetAIFocusLocationOffsetForActor(const AActor* inActor, const bool inPreferHead) {
    return FVector{};
}

void UIGS_AIHelpersLibrary::ClearFocusHelper(AIGS_GameCharacterFramework* inCharacter) {
}

bool UIGS_AIHelpersLibrary::ChangeToBestWeapon(AIGS_IntelligentGameCharacter* Character, EIGS_SwitchWeaponTask_WeaponType& outBestWeaponType) {
    return false;
}

void UIGS_AIHelpersLibrary::CalculateAreaOfOperation(AIGS_RoomBase* fromRoom, int32 IterationCount, TArray<AIGS_RoomBase*>& outArea) {
}

bool UIGS_AIHelpersLibrary::AreAllHeistersDead(UObject* inWCO) {
    return false;
}


