#pragma once
#include "CoreMinimal.h"
#include "IGS_CommonItemData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_HitEffectHandlerInterface.h"
#include "IGS_OnPickedUpDelegate.h"
#include "IGS_SuspicionActorBase.h"
#include "IGS_PickupActorBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_InteractiveComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PickupActorBase : public AIGS_SuspicionActorBase, public IIGS_HitEffectHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShouldMove, meta=(AllowPrivateAccess=true))
    bool bShouldMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegistersToPickupsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquaredVelocityForInAirNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPickableByAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PickupMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> OwningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> BeingPickedUpByBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> PickupSuggestedFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableInteractionOnThrowTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPickedUp OnPickedUpEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WasThrown, meta=(AllowPrivateAccess=true))
    bool mR_bWasThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultThrownAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultPickupAkEvent;
    
public:
    AIGS_PickupActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WakePhysics(bool inThrownPhysics);
    
    UFUNCTION(BlueprintCallable)
    void SleepPhysics();
    
    UFUNCTION(BlueprintCallable)
    void SetWasThrown(FVector inVelocity, bool bUseCameraPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldMove(bool inShouldMove);
    
    UFUNCTION(BlueprintCallable)
    void ResetPickup();
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayThrowAkEvent(AIGS_GameCharacterFramework* inInstigator, UAkAudioEvent* inThrowEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayPickupAkEvent(AIGS_GameCharacterFramework* inInstigator, UAkAudioEvent* inPickupEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WasThrown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldMove();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupThrow(const FIGS_CommonItemData& inCommonItemData, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupPickedUp(const FIGS_CommonItemData& inCommonItemData, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupHit(const FIGS_CommonItemData& inCommonItemData, UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupFirstHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupBeginOverlap(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, const FHitResult& inHit);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_Pickup(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_AddImpulse(FVector inImpulse);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPlayerOwner(AIGS_GameCharacterFramework* inOwner);
    
    UFUNCTION(BlueprintCallable)
    void InitMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBotPickupOverlap(AActor* inActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasThrown();
    
    UFUNCTION(BlueprintCallable)
    UIGS_InteractiveComponent* GetInteractiveComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    FIGS_CommonItemData GetCommonDataBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void AI_Use(AIGS_GameCharacterFramework* inInstigator);
    

    // Fix for true pure virtual functions not being implemented
};

