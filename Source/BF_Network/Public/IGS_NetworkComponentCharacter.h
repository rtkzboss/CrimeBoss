#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_CharacterState.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_Speed.h"
#include "IGS_InterestPointHolder.h"
#include "EIGS_BagType.h"
#include "EIGS_SpecialActionType.h"
#include "IGS_LootBagInfo.h"
#include "IGS_ReplicatedLadder.h"
#include "EIGS_MeleeAttackType.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "IGS_LootBagItemHolder.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_LeanSide.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_PlayVariationData.h"
#include "EIGS_AdvancedMovementEvent.h"
#include "IGS_BagInfo.h"
#include "IGS_BashResultNetwork.h"
#include "IGS_NetProjectileData.h"
#include "IGS_NetProjectileHitData.h"
#include "IGS_NetProjectileHitResult.h"
#include "IGS_NetworkDialogueEventDelegate.h"
#include "IGS_ReplicatedAcceleration.h"
#include "IGS_ReplicationAnimationDataHolder.h"
#include "IGS_ReplicationCharacterAimingDataHolder.h"
#include "IGS_WieldableReplicatedData.h"
#include "Templates/SubclassOf.h"
#include "IGS_NetworkComponentCharacter.generated.h"

class AActor;
class AIGS_PickupActorBase;
class UAkCallbackInfo;
class UAkSwitchValue;
class UIGS_ComponentDialogueDataAsset;
class UIGS_ComponentVoiceExpressionDataAsset;
class UIGS_InventoryObjectFramework;
class UIGS_PickupClassesData;
class UIGS_ThrowableInventoryObject;
class UIGS_WeaponSkinData;
class UIGS_WieldableInventoryObjectBase;
class UMETA_WeaponInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NETWORK_API UIGS_NetworkComponentCharacter : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PickupClassesData* PickupClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AimAtPoint, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder mR_AimAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LookAtPoint, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder mR_LookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterAiming, meta=(AllowPrivateAccess=true))
    FIGS_ReplicationCharacterAimingDataHolder mR_CharacterAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayingAnimations, meta=(AllowPrivateAccess=true))
    FIGS_ReplicationAnimationDataHolder mR_PlayingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LootBagInfo, meta=(AllowPrivateAccess=true))
    FIGS_BagInfo mR_LootBagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LootBagInfo> mR_FullLootBagInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterState, meta=(AllowPrivateAccess=true))
    EIGS_CharacterState mR_CharacterState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementSpeed, meta=(AllowPrivateAccess=true))
    EIGS_Speed mR_MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RequestLeadSide, meta=(AllowPrivateAccess=true))
    EIGS_LeanSide mR_RequestedLeanSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LeaningDirection, meta=(AllowPrivateAccess=true))
    EIGS_CharacterLeaningDirectionEnum mR_LeaningDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
    bool mR_IsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMantling, meta=(AllowPrivateAccess=true))
    bool mR_IsMantling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedAcceleration, meta=(AllowPrivateAccess=true))
    FIGS_ReplicatedAcceleration mR_ReplicatedAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedLadder, meta=(AllowPrivateAccess=true))
    FIGS_ReplicatedLadder mR_ReplicatedLadder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVisibilityModOn, meta=(AllowPrivateAccess=true))
    bool mR_IsVisibilityModOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsRunningAttack, meta=(AllowPrivateAccess=true))
    bool mR_IsRunningAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShooterType, meta=(AllowPrivateAccess=true))
    EIGS_WeaponAttackType mR_ShooterType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AvailableWieldables, meta=(AllowPrivateAccess=true))
    TArray<FIGS_WieldableReplicatedData> mR_AvailableWieldables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InventoryObjectFramework*> m_OwningInventoryObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentSlot, meta=(AllowPrivateAccess=true))
    EIGS_WieldableSlot mR_CurrentSlot;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NetworkDialogueEvent OnVoiceStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NetworkDialogueEvent OnVoiceStopedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* OverrideCharacterAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ComponentDialogueDataAsset* ComponentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ComponentVoiceExpressionDataAsset* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ComponentDialogueDataAsset* DialogueData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VoiceExpressionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearDeathHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SpeakerAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* CharacterAkSwitch;
    
public:
    UIGS_NetworkComponentCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopVoice(const FIGS_PlayVariationData& inPlayVariationData);
    
    UFUNCTION(BlueprintCallable)
    void SetUniversalDataByItemID(int32 inID, FIGS_InventoryObjectUniversalData inUniversalData);
    
    UFUNCTION(BlueprintCallable)
    void Set2DModeEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(const FIGS_PlayVariationData& inPlayVariationData);
    
    UFUNCTION(BlueprintCallable)
    void OnWieldableRemoved(EIGS_WieldableSlot inSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnWieldableAddedToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotChanged(EIGS_WieldableSlot inSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShooterType();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RequestLeadSide() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedLadder() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAcceleration() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayingAnimations();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementSpeed() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LootBagInfo(FIGS_BagInfo inOldInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LookAtPoint() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LeaningDirection() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVisibilityModOn() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRunningAttack();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMantling() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSlot();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterState() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterAiming() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailableWieldables();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AimAtPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void OnExpressionVoiceDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentlyFilledBagChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_RequestAnimationTaskTag(FGameplayTag inMontageTag, float inRequestedDuration, int32 inRandomSeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_AnimationTaskCanceledTag(FGameplayTag inMontageTag, EIGS_AnimationTaskFinishedReason inCancelReason, int32 inRandomSeed);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void MessageToServer_WeaponMagCheckInterrupt();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void MessageToServer_WeaponMagCheck();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_UpdateAvailableWieldables(const TArray<FIGS_WieldableReplicatedData>& inWieldables);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_ToggleVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_ThrowThrowable(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inSpawnLocation, const FQuat& inSpawnRotation, bool inThrowLow, float inTimeHeldInHand);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_ThrowAwayItem(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MessageToServer_ThrowAwayBag(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform, bool inThrow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_StopAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_SpawnMovingProjectile(const FTransform& inSpawnTransform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MessageToServer_SpawnBag(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_Shoot(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_SetRequestedLeanSide(EIGS_LeanSide inRequestedLeanSide);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_SetMovementSpeed(EIGS_Speed inMovementSpeed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_SetLeaningDirection(EIGS_CharacterLeaningDirectionEnum inLeaningDirection);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_SetCurrentSlot(EIGS_WieldableSlot inSlot);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_Reload(bool inIsCombat, bool inIsEmptyMagazine);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_PocketLootClear();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_PocketLootAdded(TSubclassOf<UIGS_InventoryObjectFramework> inPocketLoot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_PlantThrowable(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inPlantLocation, const FRotator& inPlantRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_OnThrowStart(bool inThrowLow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_OnThrowFinish(bool inThrowLow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_OnThrowCancel(bool inThrowLow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_OnPlayerSpecialAction(EIGS_SpecialActionType inType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_OnLootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_OnCurrentLootBagChanged(const TArray<FIGS_LootBagInfo>& inBagInfos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_NotifyHitBash(const FIGS_BashResultNetwork& inBashData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_NotifyHit(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_MeleeAttack(EIGS_MeleeAttackType inMeleeAttackType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ItemRemoved(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_ItemAdded(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_InventoryCleared();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_InterruptReload(EIGS_ReloadInterruptReasonEnum inInterruptReason, bool inImmediateInterrupt);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_ExplodedInHand(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_DropDownItem(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_DetonateThrowable(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_CharacterAim(bool inIsAiming, float inAimInSpeedMult, float inAimOutSpeedMult);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_ChangeShooter(EIGS_WeaponAttackType inAttackType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_BeginAttack();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_AdvancedMovementEvent(EIGS_AdvancedMovementEvent inAdvancedMovementEvent);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void MessageToClient_Rollback(AActor* inActor, float inHealth) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_WeaponMagCheckInterrupt();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_WeaponMagCheck();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_StopAttack();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_Shoot(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_Reload(bool inIsCombat, bool inIsEmptyMagazine);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_OnThrowStart(bool inThrowLow);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_OnThrowFinish(bool inThrowLow);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_OnThrowCancel(bool inThrowLow);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_OnPlayerSpecialAction(EIGS_SpecialActionType inType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_MeleeAttack(EIGS_MeleeAttackType inMeleeAttackType);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_IsMoving(bool inIsMoving);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_InterruptReload(EIGS_ReloadInterruptReasonEnum inInterruptReason, const bool inImmediateInterrupt);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_HitSynchronizedBash(const FIGS_BashResultNetwork& inBashData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MessageToAll_HitSynchronized(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_ChangeShooter(EIGS_WeaponAttackType inAttackType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_BeginAttack();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MessageToAll_AdvancedMovementEvent(EIGS_AdvancedMovementEvent inAdvancedMovementEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayingVoice(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter);
    
    UFUNCTION(BlueprintCallable)
    float GetVoiceProgress(int32 inGroupID);
    
    UFUNCTION(BlueprintCallable)
    FIGS_InventoryObjectUniversalData GetUniversalDataByItemID(int32 inID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerBaggedLootWeight();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void All_ResetVoiceSFX(uint16 inGroupID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_OnStopVoice(FIGS_PlayVariationData inPlayVariationData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_OnPlayVoice(FIGS_PlayVariationData inPlayVariationData);
    
};

