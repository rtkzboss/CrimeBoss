#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_AIMontageSOVariant.h"
#include "IGS_AICommandFinishedDelegateDelegate.h"
#include "IGS_WaypointHelpers.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_WaypointBase;
class UIGS_AICommandMoveTo;
class UIGS_AICommandMoveToWaypoint;
class UIGS_AICommandPlayAnimation;
class UIGS_AICommandUseObject;
class UIGS_AICommandWait;

UCLASS(Blueprintable)
class BF_AI_API UIGS_WaypointHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_WaypointHelpers();

    UFUNCTION(BlueprintCallable)
    static void GoToWaypoint(AIGS_GameCharacterFramework* inAICharacter, AIGS_WaypointBase* inWaypoint, bool allowedInLimbo, bool allowedInAlarm);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_WaypointBase* GetRememberedWaypoint(AIGS_GameCharacterFramework* inAICharacter);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_WaypointBase* GetRandomVisitableWaypoint(AIGS_GameCharacterFramework* inCharacter, TArray<AIGS_WaypointBase*> inWaypoints);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AIGS_WaypointBase*> GetAllVisitableWaypoints(AIGS_GameCharacterFramework* inCharacter, TArray<AIGS_WaypointBase*> inWaypoints);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandWait* CommandWaitForTime(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, float InTime, bool allowedInLimbo, bool allowedInAlarm);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandUseObject* CommandUseObject(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, AActor* inUsableObject, bool allowedInLimbo, bool allowedInAlarm);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandPlayAnimation* CommandPlayAnimation(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, EIGS_AIMontageSOVariant InAnimation, float InTime, bool allowedInLimbo, bool allowedInAlarm);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandMoveToWaypoint* CommandMoveToWaypoint(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, AIGS_WaypointBase* inWaypoint, bool allowedInLimbo, bool allowedInAlarm);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommandMoveTo* CommandMoveTo(AIGS_GameCharacterFramework* inAICharacter, FIGS_AICommandFinishedDelegate inFinishDelegate, FVector inPositon, FVector inLookAtPos, bool inUseLookAtPos, EIGS_Speed inMovementSpeed, float inStoppingDistance, bool allowedInLimbo, bool allowedInAlarm);
    
};

