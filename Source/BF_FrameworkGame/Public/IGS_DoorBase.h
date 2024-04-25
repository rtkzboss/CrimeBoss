#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortalState.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_DoorTier.h"
#include "IGS_DoorBreachInterface.h"
#include "IGS_DoorOpenedEventDelegate.h"
#include "IGS_EntranceBase.h"
#include "IGS_DoorBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentFramework;
class UShapeComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_DoorBase : public AIGS_EntranceBase, public IIGS_DoorBreachInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkAcousticPortalState AcousticPortalInitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAcousticPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDoorDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipStartingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenableFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartHardLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontBreachOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionEndRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NavLinkComponentFramework* DoorLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DoorTier DoorTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRammable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakesExplosiveDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakesPointDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShootableLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPenetrable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnemiesOpenWhenLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnlockMethods;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DoorOpenedEvent OnDoorOpenedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HardLock, meta=(AllowPrivateAccess=true))
    bool m_bHardLock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPreBreach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionFinalRotation;
    
public:
    AIGS_DoorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateDoorOrientation(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnlockEvent();
    
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchPortalComponent(bool inOpened);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHardLocked(bool inHardLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RelockEvent();
    
    UFUNCTION(BlueprintCallable)
    void Relock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsBP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenPortalComponent(bool inState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor_Internal(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HardLock();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreBreach();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LockEvent();
    
    UFUNCTION(BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HardLockedEvent(bool inHardLocked);
    
    UFUNCTION(BlueprintCallable)
    void ForceChangeDoorOpenState(FVector inInstigatorLocation, bool inOpen);
    
    UFUNCTION(BlueprintCallable)
    static void EnableNavigationBlockingOnCollision(UShapeComponent* InComponent, bool inEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConvertToStaticDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor_Internal();
    
    UFUNCTION(BlueprintCallable)
    void CloseDoor();
    
    UFUNCTION(BlueprintCallable)
    void CallDoorOpened(AIGS_GameCharacterFramework* inInstigator);
    

    // Fix for true pure virtual functions not being implemented
};

