#pragma once
#include "CoreMinimal.h"
#include "EscapeVanDoorStatusChangedDelegate.h"
#include "IGS_EscapeVehicle.h"
#include "IGS_EscapeVanVehicle.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UAnimMontage;
class UIGS_InteractiveComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_EscapeVanVehicle : public AIGS_EscapeVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEscapeVanDoorStatusChanged OnDoorStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> RearDoorsOpeningAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MiddleDoorOpeningAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PassengerDoorOpeningAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* MiddleRightDoorInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* RearRightDoorInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* RearLeftDoorInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RearLeftDoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RearRightDoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MiddleDoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsRearDoorsOpened, meta=(AllowPrivateAccess=true))
    bool mR_bIsRearDoorsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMiddleDoorOpened, meta=(AllowPrivateAccess=true))
    bool mR_bIsMiddleDoorOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPassDoorOpened, meta=(AllowPrivateAccess=true))
    bool mR_bIsPassDoorOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mR_bDisableAutoDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RearDoorOpenAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RearDoorCloseAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SlidingDoorOpenAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SlidingDoorCloseAudio;
    
public:
    AIGS_EscapeVanVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRearDoorsOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPassDoorOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMiddleDoorOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRearDoorInteraction(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerDoorInteraction(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnMiddleDoorInteraction(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnRearDoorInteraction(bool inIsOpened);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnPassengerDoorInteraction(bool inIsOpened);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnMiddleDoorInteraction(bool inIsOpened);
    
    UFUNCTION(BlueprintCallable)
    void CloseDoors();
    
};

