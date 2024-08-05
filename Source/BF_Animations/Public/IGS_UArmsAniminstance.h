#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_HealthState.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_WeaponAttackType.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_LeanSide.h"
#include "EIGS_CombatStatus.h"
#include "EIGS_SlideEnumState.h"
#include "EIGS_VentShaftAnimationStates.h"
#include "IGS_ActiveMontageHolder.h"
#include "IGS_AimAnimationInfo.h"
#include "IGS_ArmsLeaningAnimationOneFrameParams.h"
#include "IGS_ArmsLocomotion.h"
#include "IGS_AttackAnimtionDefinition.h"
#include "IGS_CameraEffectsAnimations.h"
#include "IGS_FPP_AnimationAdditive.h"
#include "IGS_FPP_HandIKSettings.h"
#include "IGS_FirstPersonAdditiveAnimations.h"
#include "IGS_FirstPersonAnimationDatabase.h"
#include "IGS_FirstPersonMeleeAnimDatabase.h"
#include "IGS_FirstPersonSpecialAnimations.h"
#include "IGS_FirstPersonThrowablesAnimDatabase.h"
#include "IGS_GameEventsAnimInstance.h"
#include "IGS_HolsterAnimationInfo.h"
#include "IGS_ModAnimationDefinition.h"
#include "IGS_MontageInstanceHolder.h"
#include "IGS_RappelAnimationsInfo.h"
#include "IGS_UArmsAniminstance.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerFPVArms;
class AIGS_WeaponBase;
class AIGS_WieldableBase;
class UIGS_ReloaderBase;
class UIGS_UWeaponAniminstance;

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_UArmsAniminstance : public UIGS_GameEventsAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SlideEnumState SlideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ArmsLocomotion LocomotionAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FirstPersonAdditiveAnimations AdditiveAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FPP_AnimationAdditive FPP_AnimationAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FPP_HandIKSettings HandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ModAnimationDefinition ModAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationSetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableFirstEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstEquipAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterIsShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterIsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SemiAutoShootingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleSwayIntensityAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrenadePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LootBagHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReloadInterruptUseEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RootOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterLeaningDirectionEnum LeaningDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LeanSide RequestedLeanSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ArmsLeaningAnimationOneFrameParams LeansInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CombatStatus CombatStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CameraEffectsAnimations CameraEffectsAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchingAdsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpingCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnequipBlendedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OneHandCalmWeaponPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpecialActionMontageActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_VentShaftAnimationStates VentShaftStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FirstPersonSpecialAnimations SpecialAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RappelAnimationsInfo RappelAnimationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobIntensity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_PlayerFPVArms* m_PlayerArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* m_PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_WeaponBase* m_WeaponBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_WieldableBase* m_WieldabelBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_ReloaderBase* m_ReloadBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MontageInstanceHolder m_MontageInstanceHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ActiveMontageHolder m_ActiveMontageHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AttackAnimtionDefinition m_AnimationTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_UWeaponAniminstance* m_TPV_AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_UWeaponAniminstance* m_Weapon_AnimInstance;
    
public:
    UIGS_UArmsAniminstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleLadder_Leave(bool InUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleLadder_JumpDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleLadder_InputUp(float inSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleLadder_InputDown(float inSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleLadder_Grab_Start(bool InUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleLadder_Grab_Finish(bool InUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestStopCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestStopCameraShake(FGameplayTag inCameraShakeTag, float inIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayCameraShake(FGameplayTag inCameraShakeTag, float inIntensity);
    
    UFUNCTION(BlueprintCallable)
    void PlayHolsterChangeAnimation(bool inIsHolstering, bool inSkipAnimation, float inHolsterTimeInSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZiplineStart_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZiplineEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponShooterChange_Event(EIGS_WeaponAttackType InWeaponAttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnEquipEnded_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideStarted_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideEnded_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnReloadMontageNotifyAddAmmoToWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadInterrupt_Event(EIGS_ReloadInterruptReasonEnum inReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushPlayerAwayStarted(FVector InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagCheckInterrupt_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnMagCheckEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectInterrupt_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnInspectEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipEnded_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void OnDownstateChanged(EIGS_HealthState& outDownState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterFell(float inFallHeight);
    
    UFUNCTION(BlueprintCallable)
    FIGS_FirstPersonAnimationDatabase GetWeaponAnimations();
    
    UFUNCTION(BlueprintCallable)
    FIGS_FirstPersonThrowablesAnimDatabase GetThrowablesAnimationsDatabase();
    
    UFUNCTION(BlueprintCallable)
    FIGS_FirstPersonMeleeAnimDatabase GetMeleeAnimationsDatabase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHolsterAnimationData(FIGS_HolsterAnimationInfo& outHolsterAnimationInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WeaponAttackType GetAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAimAnimationData(FIGS_AimAnimationInfo& outAimAnimationInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ArmsInit_Event();
    
};

