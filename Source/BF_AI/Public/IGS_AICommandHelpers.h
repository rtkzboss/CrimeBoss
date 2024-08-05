#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_InterestPointHolder.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EIGS_AIMontageBreachVariant.h"
#include "EIGS_AIMontageSOVariant.h"
#include "Templates/SubclassOf.h"
#include "IGS_AICommandHelpers.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_WaypointFramework;
class UAnimMontage;
class UIGS_AICommandBeingRevived;
class UIGS_AICommandBreachFight;
class UIGS_AICommandBreachIn;
class UIGS_AICommandBreachRemoveDoors;
class UIGS_AICommandBreachRemoveGate;
class UIGS_AICommandBreachStackUp;
class UIGS_AICommandBreachTakePosition;
class UIGS_AICommandBreachThrowFlashbang;
class UIGS_AICommandFight;
class UIGS_AICommandLayOnGround;
class UIGS_AICommandMoveTo;
class UIGS_AICommandMoveToWaypoint;
class UIGS_AICommandPlayAnimation;
class UIGS_AICommandPlayMocapAnimation;
class UIGS_AICommandRevive;
class UIGS_AICommandRotateTo;
class UIGS_AICommandSearch;
class UIGS_AICommandThrowThrowable;
class UIGS_AICommandUseObject;
class UIGS_AICommandWait;
class UIGS_SearchPointComponent;
class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AICommandHelpers();

    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandUseObject* CreateUseObjectCommand(AActor* inUsableObject);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBreachStackUp* CreateStackUpCommand(const FVector& inStackPos, AActor* inBreachable, bool inBreaching, const bool inCrouch);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandSearch* CreateSearchCommand(const TArray<UIGS_SearchPointComponent*>& inPointsToSearch);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandRevive* CreateReviveCommand(AIGS_GameCharacterFramework* charToRevive);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandPlayAnimation* CreatePlaySOAnimationCommandTag(FGameplayTag inAnimationTag, float InTime, FIGS_InterestPointHolder inLookAt);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandPlayAnimation* CreatePlaySOAnimationCommand(EIGS_AIMontageSOVariant InAnimation, float InTime, FIGS_InterestPointHolder inLookAt);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandPlayMocapAnimation* CreatePlayMocapAnimationCommand(UAnimMontage* inAnimMontage, FName inSectionName, float InPlayRate, float inStartPosition);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandPlayAnimation* CreatePlayAnimationCommandGenericTag(FGameplayTag inAnimationTag, float InTime, FIGS_InterestPointHolder inLookAt);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandMoveToWaypoint* CreateMoveToWaypointCommand(AIGS_WaypointFramework* inWaypoint, const FVector& inLookAtPos, float inStoppingDistance, EIGS_Speed inMovementSpeed, bool inExactPosition);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandMoveTo* CreateMoveToCommand(const FVector& InPosition, const FVector& inLookAtPos, float inStoppingDistance, EIGS_Speed inMovementSpeed);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandFight* CreateFightCommand();
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandWait* CreateCommandWait(float InTime, FIGS_InterestPointHolder inLookAt);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandThrowThrowable* CreateCommandThrowThrowable(FVector inTarget, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowable, const float inThrowableCooldown, const float inGlobalCooldown);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandRotateTo* CreateCommandRotateTo(float InTime, FIGS_InterestPointHolder inLookAt);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandLayOnGround* CreateCommandLayOnGround();
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBreachThrowFlashbang* CreateBreachThrowFlashbang(const FVector& InPosition, bool inFromRight);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBreachTakePosition* CreateBreachTakePosition(const FVector& inPositon, const FVector& inMoveLookAtPos, const FVector& inFinalLookAtPos, EIGS_AIMontageBreachVariant inMontageVariant);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBreachRemoveGate* CreateBreachRemoveGate(AActor* inBreachableObject, FVector Location, FVector LookAtPoint);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBreachRemoveDoors* CreateBreachRemoveDoors(AActor* inBreachableObject, bool inFromRight);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBreachIn* CreateBreachIn(const FVector& positon, const FVector& inLookAtPos);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBreachFight* CreateBreachFightCommand(bool inFromRight, const FVector& inToWallPoint);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandBeingRevived* CreateBeingRevivedCommand(const AIGS_GameCharacterFramework* revivedByChar);
    
};

