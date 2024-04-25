#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_OnPayloadActiveChangedDelegate.h"
#include "IGS_OnPayloadFinishedDelegate.h"
#include "IGS_PayloadBase.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PayloadBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPayloadActiveChanged OnPayloadStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPayloadActiveChanged OnPayloadEnabledChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPayloadFinished OnPayloadFinishedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEnabled, meta=(AllowPrivateAccess=true))
    bool mR_bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    bool mR_bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsFinished, meta=(AllowPrivateAccess=true))
    bool mR_bIsFinished;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> m_OverlappedActors;
    
public:
    AIGS_PayloadBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPayloadStateChanged(bool inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPayloadFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPayloadEnabledChanged(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPayloadFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPayloadEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPayloadActive();
    
    UFUNCTION(BlueprintCallable)
    void FinishPayload();
    
};

