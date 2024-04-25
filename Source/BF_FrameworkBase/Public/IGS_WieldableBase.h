#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "GameplayTagContainer.h"
#include "WieldableAbstract.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_WieldableAction.h"
#include "IGS_WieldableBase.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_DynamicMaterialHandlerComponent;
class UIGS_InventoryObjectFramework;
class UIGS_WieldableInventoryObjectBase;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_WieldableBase : public AWieldableAbstract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> OwnerPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingPrimaryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingSecondaryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHolstering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnholstering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* WieldableMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* WieldableMPCInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DynamicMaterialHandlerComponent* DynamicMaterialHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* WieldableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopInspectingAkEvent;
    
public:
    AIGS_WieldableBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UsesAmmo();
    
    UFUNCTION(BlueprintCallable)
    void ToggleVisibilityMod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ThrowAway(bool inForceSyncLoads);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryAction(EIGS_WieldableAction InAction);
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable)
    void PrimaryAction(EIGS_WieldableAction InAction);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWieldableIsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWieldableIsBeingRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWieldableAim(bool inIsAiming);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerDiedBlueprintEvent();
    
    UFUNCTION(BlueprintCallable)
    void MagCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSecondaryAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPrimaryAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnholstering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTortilla() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHolsteringOrUnholstering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHolstering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inForce);
    
    UFUNCTION(BlueprintCallable)
    void InspectWieldable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMultipleZoomLevels() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasFullAmmo();
    
    UFUNCTION(BlueprintCallable)
    bool HasAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_ItemType GetWieldableType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_WieldableInventoryObjectBase* GetWieldableObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_InventoryObjectFramework* GetInventoryObject() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceStopActions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Drop(bool inForceSyncLoads);
    
    UFUNCTION(BlueprintCallable)
    void Die();
    
    UFUNCTION(BlueprintCallable)
    void ChangeZoomBy(int32 inAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseSecondaryAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUsePrimaryAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanThrowAway(bool inForceSyncLoads);
    
    UFUNCTION(BlueprintCallable)
    bool CanReload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLean() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanInterruptReload();
    
    UFUNCTION(BlueprintCallable)
    bool CanDropOrThrowInternal(bool inForceSyncLoads);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDrop(bool inForceSyncLoads);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAim() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AmmoCount();
    
};

