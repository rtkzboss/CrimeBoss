#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "IGS_HitInfo.h"
#include "IGS_RideableVehicleBaseFramework.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerEnterVehicleDelegateDelegate.h"
#include "PlayerExitVehicleDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_RideableVehicle_Base.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_LootBagPickup;
class APawn;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UBoxComponent;
class UCameraComponent;
class UCurveVector;
class UIGS_InteractiveComponent;
class UIGS_ObjectStatus;
class UParticleSystem;
class USkeletalMeshComponent;
class USpeedometer;

UCLASS(Abstract, Blueprintable)
class BF_RIDEABLEVEHICLES_API AIGS_RideableVehicle_Base : public AIGS_RideableVehicleBaseFramework, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEnterVehicleDelegate OnEnterVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerExitVehicleDelegate OnExitVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerSlots, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> PlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RuntimeBagInfo, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootBagPickup*> RuntimeBagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* NudgeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName NudgeBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpeedometer> SpeedometerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxKilometersPerHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationNormalizationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool CanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationSyncLerpForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSyncLerpForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottleTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EngineDestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineOffOnHealthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EngineDestroed, meta=(AllowPrivateAccess=true))
    bool bIsEngineDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* VehicleTypeAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HornStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HornStopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EntryTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeatSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeatMeshSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BagSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFreeBags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BagWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BagInteractionDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpeedometer* m_Speedometer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepLocation, meta=(AllowPrivateAccess=true))
    FVector mR_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepRotation, meta=(AllowPrivateAccess=true))
    FRotator mR_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepLinearDrag, meta=(AllowPrivateAccess=true))
    FVector mR_linearDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepAngularDrag, meta=(AllowPrivateAccess=true))
    FVector mR_angularDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_AccumulatedLocDif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_AccumulatedRotDif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_Driver;
    
public:
    AIGS_RideableVehicle_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void VehicleDestroy(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleExitedCosmetic();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleEnteredCosmetic();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleDriverExitedCosmetic();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleDriverEnteredCosmetic();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateThrottleTiming();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void OnStopUsing_SERVER(int32 inSeatIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnStopUsing_MULTICAST(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnStartUsing_SERVER(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnStartUsing_MULTICAST(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRepRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRepLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRepLinearDrag();
    
    UFUNCTION(BlueprintCallable)
    void OnRepAngularDrag();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RuntimeBagInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSlots();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_EngineDestroed();
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void OnDetachBag_SERVER(int32 inBagIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnDetachBag_MULTICAST(AIGS_LootBagPickup* inBag, int32 inBagIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnAttachBag_SERVER(AIGS_LootBagPickup* inBag, int32 inBagIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnAttachBag_MULTICAST(AIGS_LootBagPickup* inBag, int32 inBagIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OfferPositionToDismount(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex, FTransform& OutPosition) const;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LootBagDestroyed_SERVER(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LootBagDestroyed(AIGS_LootBagPickup* inBagPickup);
    
private:
    UFUNCTION(BlueprintCallable)
    void InteractClient(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Interact(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Horn_SERVER(bool inStartPlaying);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Horn_MULTICAST(bool inStartPlaying);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetKmPerHAspect();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FakeBoatCrouch();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EngineDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckIsEngineOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterSatInside(AIGS_GameCharacterFramework* inCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPickBag(AIGS_LootBagPickup* inBag, int32 inTargetSlot);
    

    // Fix for true pure virtual functions not being implemented
};

