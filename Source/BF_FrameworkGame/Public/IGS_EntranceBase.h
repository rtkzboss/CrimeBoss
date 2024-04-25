#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EntranceLockStateChangedSignatureDelegate.h"
#include "EntranceStateChangedSignatureDelegate.h"
#include "IGS_OnBrokenEventDelegate.h"
#include "IGS_EntranceBase.generated.h"

class UBoxComponent;
class UChildActorComponent;
class UIGS_ObjectStatus;
class UIGS_VisbilityComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_EntranceBase : public AActor, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EntranceRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* DoorObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_VisbilityComponent* VisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FrontBreachingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BackBreachingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPortalDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bLocked, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bOpen, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFullyProgressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HitInfo KillHitInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntranceStateChangedSignature OnEntranceStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntranceLockStateChangedSignature OnEntranceLockStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnBrokenEvent OnBrokenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NavigationBlock;
    
    AIGS_EntranceBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOpenState(bool inOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocked(bool inLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetFullyProgressed(bool inFullyProgressed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenStateChanged(bool inOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockStateChanged(bool inLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntranceStateFullyChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBroken();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnOpenStateChanged(bool inOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOpenState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetIsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBroken() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFullyProgressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDoorOrientationFromLocation(FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDoorOrientationFromDirection(FVector InDirection);
    

    // Fix for true pure virtual functions not being implemented
};

