#include "IGS_AICommandHelpers.h"
#include "Templates/SubclassOf.h"

UIGS_AICommandHelpers::UIGS_AICommandHelpers() {
}

UIGS_AICommandUseObject* UIGS_AICommandHelpers::CreateUseObjectCommand(AActor* inUsableObject) {
    return NULL;
}

UIGS_AICommandBreachStackUp* UIGS_AICommandHelpers::CreateStackUpCommand(const FVector& inStackPos, AActor* inBreachable, bool inBreaching, const bool inCrouch) {
    return NULL;
}

UIGS_AICommandSearch* UIGS_AICommandHelpers::CreateSearchCommand(const TArray<UIGS_SearchPointComponent*>& inPointsToSearch) {
    return NULL;
}

UIGS_AICommandRevive* UIGS_AICommandHelpers::CreateReviveCommand(AIGS_GameCharacterFramework* charToRevive) {
    return NULL;
}

UIGS_AICommandPlayAnimation* UIGS_AICommandHelpers::CreatePlaySOAnimationCommandTag(FGameplayTag inAnimationTag, float InTime, FIGS_InterestPointHolder inLookAt) {
    return NULL;
}

UIGS_AICommandPlayAnimation* UIGS_AICommandHelpers::CreatePlaySOAnimationCommand(EIGS_AIMontageSOVariant InAnimation, float InTime, FIGS_InterestPointHolder inLookAt) {
    return NULL;
}

UIGS_AICommandPlayMocapAnimation* UIGS_AICommandHelpers::CreatePlayMocapAnimationCommand(UAnimMontage* inAnimMontage, FName inSectionName, float InPlayRate, float inStartPosition) {
    return NULL;
}

UIGS_AICommandPlayAnimation* UIGS_AICommandHelpers::CreatePlayAnimationCommandGenericTag(FGameplayTag inAnimationTag, float InTime, FIGS_InterestPointHolder inLookAt) {
    return NULL;
}

UIGS_AICommandMoveToWaypoint* UIGS_AICommandHelpers::CreateMoveToWaypointCommand(AIGS_WaypointFramework* inWaypoint, const FVector& inLookAtPos, float inStoppingDistance, EIGS_Speed inMovementSpeed, bool inExactPosition) {
    return NULL;
}

UIGS_AICommandMoveTo* UIGS_AICommandHelpers::CreateMoveToCommand(const FVector& InPosition, const FVector& inLookAtPos, float inStoppingDistance, EIGS_Speed inMovementSpeed) {
    return NULL;
}

UIGS_AICommandFight* UIGS_AICommandHelpers::CreateFightCommand() {
    return NULL;
}

UIGS_AICommandWait* UIGS_AICommandHelpers::CreateCommandWait(float InTime, FIGS_InterestPointHolder inLookAt) {
    return NULL;
}

UIGS_AICommandThrowThrowable* UIGS_AICommandHelpers::CreateCommandThrowThrowable(FVector inTarget, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowable, const float inThrowableCooldown, const float inGlobalCooldown) {
    return NULL;
}

UIGS_AICommandRotateTo* UIGS_AICommandHelpers::CreateCommandRotateTo(float InTime, FIGS_InterestPointHolder inLookAt) {
    return NULL;
}

UIGS_AICommandLayOnGround* UIGS_AICommandHelpers::CreateCommandLayOnGround() {
    return NULL;
}

UIGS_AICommandBreachThrowFlashbang* UIGS_AICommandHelpers::CreateBreachThrowFlashbang(const FVector& InPosition, bool inFromRight) {
    return NULL;
}

UIGS_AICommandBreachTakePosition* UIGS_AICommandHelpers::CreateBreachTakePosition(const FVector& inPositon, const FVector& inMoveLookAtPos, const FVector& inFinalLookAtPos, EIGS_AIMontageBreachVariant inMontageVariant) {
    return NULL;
}

UIGS_AICommandBreachRemoveGate* UIGS_AICommandHelpers::CreateBreachRemoveGate(AActor* inBreachableObject, FVector Location, FVector LookAtPoint) {
    return NULL;
}

UIGS_AICommandBreachRemoveDoors* UIGS_AICommandHelpers::CreateBreachRemoveDoors(AActor* inBreachableObject, bool inFromRight) {
    return NULL;
}

UIGS_AICommandBreachIn* UIGS_AICommandHelpers::CreateBreachIn(const FVector& positon, const FVector& inLookAtPos) {
    return NULL;
}

UIGS_AICommandBreachFight* UIGS_AICommandHelpers::CreateBreachFightCommand(bool inFromRight, const FVector& inToWallPoint) {
    return NULL;
}

UIGS_AICommandBeingRevived* UIGS_AICommandHelpers::CreateBeingRevivedCommand(const AIGS_GameCharacterFramework* revivedByChar) {
    return NULL;
}


