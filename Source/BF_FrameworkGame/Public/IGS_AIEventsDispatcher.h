#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIGS_AIEventNotificationType.h"
#include "EIGS_HeistersEventNotificationType.h"
#include "IGS_CharacterEventNotificationData.h"
#include "IGS_AIEventsDispatcher.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_SquadFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AIEventsDispatcher : public UObject {
    GENERATED_BODY()
public:
    UIGS_AIEventsDispatcher();

    UFUNCTION(BlueprintCallable)
    static void SendHeisterEventNotification(const UObject* inWCO, EIGS_HeistersEventNotificationType inType, const FIGS_CharacterEventNotificationData& inNotificationData);
    
    UFUNCTION(BlueprintCallable)
    static void SendAIEventNotificationToWholeSquad(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void SendAIEventNotificationSimple(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void SendAIEventNotificationRandomMember(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_SquadFramework* inSquad, AActor* inObjectOfInterest);
    
    UFUNCTION(BlueprintCallable)
    static void SendAIEventNotificationForSquad(const UObject* inWCO, EIGS_AIEventNotificationType inType, AIGS_GameCharacterFramework* inInstigator, TArray<AIGS_GameCharacterFramework*> inSquadMembers);
    
    UFUNCTION(BlueprintCallable)
    static void SendAIEventNotification(const UObject* inWCO, EIGS_AIEventNotificationType inType, const FIGS_CharacterEventNotificationData& inNotificationData);
    
};

