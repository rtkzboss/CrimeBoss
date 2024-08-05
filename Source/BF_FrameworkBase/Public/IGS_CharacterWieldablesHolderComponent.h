#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableClass.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_ActiveWieldableChangeEventSignatureDelegate.h"
#include "IGS_PrimarySlotChangeFailedEventSignatureDelegate.h"
#include "IGS_WieldableAddedEventSignatureDelegate.h"
#include "IGS_WieldableChangedEventSignatureDelegate.h"
#include "IGS_WieldableExchange.h"
#include "IGS_WieldableRemovedEventSignatureDelegate.h"
#include "IGS_WieldableSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterWieldablesHolderComponent.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerFPVArmsFramework;
class AIGS_WieldableBase;
class UGameplayEffect;
class UIGS_WieldableInventoryObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_CharacterWieldablesHolderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHideWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ActiveWieldableChangeEventSignature OnActiveWieldableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PrimarySlotChangeFailedEventSignature OnPrimarySlotChangeFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WieldableAddedEventSignature OnWieldableAddedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WieldableRemovedEventSignature OnWieldableRemovedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WieldableChangedEventSignature OnWieldableChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeUnholstered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WieldableSlot InitialSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WieldableBase* CurrentWieldableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WieldableSlot CurrentSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WieldableSlot LastSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WieldableClass CurrentWieldableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_WieldableSlot> WieldableSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WieldableExchange WieldableExchange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerFPVArmsFramework> OwnerArmsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocallyControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCustomSlotFiltering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReduceWeaponDamageForTeamSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ReducedWeaponDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AllowedWieldables;
    
public:
    UIGS_CharacterWieldablesHolderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool WieldItem(UIGS_WieldableInventoryObjectBase* inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    void UnsetLocalPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool SwapWieldableWithSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType);
    
    UFUNCTION(BlueprintCallable)
    void StartUsingMountedGun(AIGS_WieldableBase* inMountedGun, UIGS_WieldableInventoryObjectBase* inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    void SetForceHideWeapon(bool bInHide);
    
    UFUNCTION(BlueprintCallable)
    void SelectSlot(EIGS_WieldableSlot inSlotType);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousSlot();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextSlot();
    
    UFUNCTION(BlueprintCallable)
    void SelectLastSlot();
    
    UFUNCTION(BlueprintCallable)
    void SelectBestSlot();
    
    UFUNCTION(BlueprintCallable)
    void SelectAnySecondary(bool inFast);
    
    UFUNCTION(BlueprintCallable)
    void SelectAnyMelee(bool inFast);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWieldableFromSlot(EIGS_WieldableSlot inSlotType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetForceHideWeapon(const bool inHide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnarmed() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeLocalPlayer(AIGS_PlayerFPVArmsFramework* inOwnerArmsActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFreeSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnySecondary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMelee();
    
    UFUNCTION(BlueprintCallable)
    FIGS_WieldableSlot GetWieldableForSlot(EIGS_WieldableSlot inSlotType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WieldableSlot GetSlotForWieldableClass(const TSoftClassPtr<AIGS_WieldableBase>& inWieldableClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WieldableSlot GetSlotForItem(UIGS_WieldableInventoryObjectBase* inItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WieldableSlot GetLastSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WieldableSlot GetInitialSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceHideWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_WieldableBase* GetCurrentWieldableActor() const;
    
    UFUNCTION(BlueprintCallable)
    EIGS_WieldableSlot GetBestSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WieldableSlot GetActiveSlot() const;
    
    UFUNCTION(BlueprintCallable)
    void FastUnholster();
    
    UFUNCTION(BlueprintCallable)
    void FastSelectSlot(EIGS_WieldableSlot inNewSlot);
    
    UFUNCTION(BlueprintCallable)
    void FastHolster(bool inNotifySlotChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWield(TSubclassOf<UIGS_WieldableInventoryObjectBase> inClass);
    
    UFUNCTION(BlueprintCallable)
    bool AddWieldableToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType);
    
    UFUNCTION(BlueprintCallable)
    EIGS_WieldableSlot AddWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    bool AddOrSwapWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject, bool inSelect);
    
};

