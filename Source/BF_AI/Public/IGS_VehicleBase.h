#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "IGS_PoolableInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "EIGS_VehicleSplineGroup.h"
#include "VehicleOnDespawnDelegate.h"
#include "VehicleOnSpawnGroupUpdatedDelegate.h"
#include "VehiclePassengersSpawnedDelegate.h"
#include "VehicleStateChangedDelegate.h"
#include "IGS_VehicleBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_VehicleDestinationPoint;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UIGS_InteractiveComponent;
class UIGS_TrafficPathComponent;
class UIGS_VehiclePathFollowerComponent;
class UPFPathFollowerComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_VehicleBase : public AActor, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool isEscaping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEscapeVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehiclePassengersSpawned OnPassengersSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleOnDespawn OnVehicleDespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleStateChanged OnDriveStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleStateChanged OnRabbitFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleStateChanged OnDriveFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleStateChanged OnLeavedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleOnSpawnGroupUpdated OnSpawnGroupUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassengersGetOutAfterDriveFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnCustomPassengers;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartIdleOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DriveAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BrakeAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* IdleAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* VehicleTypeAkSwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* VehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_VehiclePathFollowerComponent* FollowerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Color, meta=(AllowPrivateAccess=true))
    FColor mR_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_VehicleSplineGroup m_VehilceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsDriving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsLeaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpawnPassengers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PassengerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_TrafficPathComponent*> m_Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NoSpawnPointDefinition CustomPassengersDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> endMissionInteractiveComponents;
    
public:
    AIGS_VehicleBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateEscapeInteractions(bool inIsObjectiveCompleted, float inHoldTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartEscapeSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartDrive(TArray<UIGS_TrafficPathComponent*> InPath);
    
    UFUNCTION(BlueprintCallable)
    void SetPassengerCount(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPassengersDefinition(const FIGS_NoSpawnPointDefinition& inCustomPassengersDefinition, bool bInForceFilled);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeAutoPinged(const bool InValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetColor(FColor InColor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FinishDrive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterEndMissionInteractions(TArray<UIGS_InteractiveComponent*> inInteractiveComponents);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHealthStateChanged(EIGS_HealthState inState);
    
    UFUNCTION(BlueprintCallable)
    void OnSegmentFinished(UPFPathFollowerComponent* inFollower);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Color() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDriveStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDriveFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCharactersSpawned(const TArray<AIGS_GameCharacterFramework*>& inCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePingedStatusEvent(const bool inPinged);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetAudio(UAkAudioEvent* inNewAudio);
    
    UFUNCTION(BlueprintCallable)
    void Leave();
    
    UFUNCTION(BlueprintCallable)
    void GoToDestination(AIGS_VehicleDestinationPoint* inDestinationPoint, bool& outPathFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_VehicleSpawnGroup GetVehicleSpawnGroup() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtDistanceAlongSpline(float inDistance) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetIsDriving();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EvaluatePingStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void Despawn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindHeistersHealthState();
    

    // Fix for true pure virtual functions not being implemented
};

