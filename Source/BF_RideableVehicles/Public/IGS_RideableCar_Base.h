#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "CarExitPointsPair.h"
#include "IGS_RideableVehicle_Base.h"
#include "RideableCarMove.h"
#include "RideableCarState.h"
#include "IGS_RideableCar_Base.generated.h"

class AActor;
class UBoxComponent;
class UParticleSystem;
class UPrimitiveComponent;
class UWheeledVehicleMovementComponent;

UCLASS(Abstract, Blueprintable)
class BF_RIDEABLEVEHICLES_API AIGS_RideableCar_Base : public AIGS_RideableVehicle_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuspensionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EngineAudioPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionSoundMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> SurfaceParticleMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerMoveState, meta=(AllowPrivateAccess=true))
    FRideableCarState ServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> m_ComponentsInContact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* VehicleMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsFL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsRL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TirePhysicsRR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarExitPointsPair> ExitPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitSpeedLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Steering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_SteeringTarget;
    
public:
    AIGS_RideableCar_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SyncSteering_SERVER(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SyncSteering();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSmoothStop();
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetDriverCameraRotState_SERVER(bool inIsLookingAtRight);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendMove_SERVER(FRideableCarMove Move);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerMoveState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHitVehicle(UPrimitiveComponent* inHitComp, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGearChangedCosmetic(int32 InCurrentGear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEntryTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollisionTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrounded();
    
};

