#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "EIGS_PingableType.h"
#include "IGS_OnPingedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerPingComponent.generated.h"

class AActor;
class AIGS_PingableWidgetActor;
class AIGS_PlayerControllerFramework;
class AIGS_SmartPingableWidgetActor;
class UIGS_PingableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerPingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PingableWidgetActor> GenericPingWidgetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_SmartPingableWidgetActor> SmartPingWidgetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenericPingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidSmartPingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvalidSmartPingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmartPingHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmartPingMagnetismDegrees;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPinged OnPingedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerFramework* m_CharacterController;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, TWeakObjectPtr<AIGS_SmartPingableWidgetActor>> m_UsedSmartPingWidgets;
    
public:
    UIGS_PlayerPingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Ping(EIGS_PingableType inType, FVector_NetQuantize InLocation, UIGS_PingableComponent* InComponent, AActor* inActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Ping(UIGS_PingableComponent* InComponent, EIGS_PingableType inType, FVector_NetQuantize InLocation);
    
};

