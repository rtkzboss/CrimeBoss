#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterState.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/PoseSnapshot.h"
#include "GameplayTagContainer.h"
#include "EIGS_LeanSide.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WieldableSlot.h"
#include "EIGS_FacialEmotionIdles.h"
#include "EIGS_FacialEmotionStates.h"
#include "EIGS_SlideEnumState.h"
#include "IGS_CharacterAnimInstance.h"
#include "IGS_FaceExpressionInfo.h"
#include "IGS_PlayerAnimationReloader.h"
#include "IGS_RappelAnimationsInfo.h"
#include "IGS_TPP_Carryable_Animations.h"
#include "IGS_TPP_ModAnimationDefinition.h"
#include "IGS_TPP_SlideAnimationData.h"
#include "IGS_TPP_TransitionsAnimationsDefinition.h"
#include "IGS_TPVAnimtionDefinition.h"
#include "IGS_ThirdPersonCarryablesAnimDatabase.h"
#include "IGS_ThirdPersonWeaponAnimations.h"
#include "PlayerAnimationsDatabase.h"
#include "TPP_ActionSlotType.h"
#include "IGS_PlayerAnimInstance.generated.h"

class AIGS_WieldableBase;
class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UBlendSpace1D;
class UIGS_InventoryObjectFramework;

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_PlayerAnimInstance : public UIGS_CharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReloadInterruptUseEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TPP_Carryable_Animations CarryableAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeathPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterState CharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AimSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPanicLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetDownKneel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetDownScary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZiptieStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanicPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmployeeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FixFemaleHandsIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LootBagHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRMAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSwatAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NavlinkLeftMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NavlinkRightMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNotMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShieldOnBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CarRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationInCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvoidancePoseEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCoverLeaning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OneHandCalmWeaponPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeanLeftStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeanRightStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeanLeftCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeanRightCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LeanSide RequestedLeanSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FaceExpressionInfo ExpressionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_FacialEmotionStates FacialAnimationStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_FacialEmotionIdles FacialAnimationIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot HeadSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EquipPoseSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipSwitchblend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableFirstEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is_Shooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is_Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeaponGripStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeaponGripCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeaponGripRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeaponGripCalm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeaponGripGunDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* WeaponAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* WeaponAimOffsetCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* WeaponAimOffsetAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* WeaponAimOffsetAimCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* WeaponAimOffsetLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireStandFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireStandFrontInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponReloadStandInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireCrouchLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireCrouchFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireCrouchRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponFireWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleCrouchAIM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* Locomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* LocomotionCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* LocomotionSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TPP_TransitionsAnimationsDefinition Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* TurnBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* TurnBlendSpaceCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StandToCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CrouchToStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* JumpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* JumpLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* JumpEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_PlayerAnimationReloader m_TPPReloader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_ThirdPersonWeaponAnimations m_TPPShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is_Controlled_by_AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdvancedMoveInteractionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RappelRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceMoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SlideEnumState SlideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RappelAnimationsInfo RappelAnimationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeftHandIKEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RightHandIKEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TPVAnimtionDefinition m_AnimationTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TPP_SlideAnimationData SlidingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstEquipAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TPP_ModAnimationDefinition ModAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableHolsterAnimation;
    
    UIGS_PlayerAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZiptieStarted_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZiplineStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZiplineEnded();
    
    UFUNCTION(BlueprintCallable)
    void TriggerAnimationEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ThrowAwayLoot_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StunnedStart_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StunnedEnd_Event();
    
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
    
    UFUNCTION(BlueprintCallable)
    void SetIsInLocomotionState(bool inIsInLocomotion);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestStopCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPlayCustomAnimation(FGameplayTag inAnimationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RappelLeaveStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RappelGrabStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushCargo_Event();
    
    UFUNCTION(BlueprintCallable)
    void PlayHolsterChangeAnimation(bool inIsHolstering, bool inSkipAnimation, float inHolsterTimeInSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PickupInteraction_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnZiptieFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWieldableSlotChange(EIGS_WieldableSlot Type, AIGS_WieldableBase* inWieldable, UIGS_InventoryObjectFramework* inWeaponObject);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponObjectChange(AIGS_WieldableBase* InWeaponBase);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponAimChange(bool IsAiming);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnEquipEnded_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnStoodUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideTransitionEnded_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideStarted_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideEnded_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnReviveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadInterrupt_Event(EIGS_ReloadInterruptReasonEnum inReason);
    
    UFUNCTION(BlueprintCallable)
    void OnReactionAnimFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushPlayerStarted(FVector InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerBotInitialize(bool inIsBot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagCheckInterrupt_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnMagCheckEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnGotToGround();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipEnded_Event();
    
    UFUNCTION(BlueprintCallable)
    void OnDownstateStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnDownStateInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnDownStateInputDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    void OnDownStateDeath();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginReload(bool inIsCombat, bool inIsEmptyMagazine);
    
    UFUNCTION(BlueprintCallable)
    void OnAttack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootCollectionStart_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootCollectionEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootBagPickup_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HasDisabledPropCollisionChanged_Event(bool inHasDisabledPropCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GrenadeThrow_Event(TPP_ActionSlotType InAction, bool inLow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReplicatedRandomInt(int32 inMin, int32 inMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReplicatedRandomFloat(float inMin, float inMax) const;
    
    UFUNCTION(BlueprintCallable)
    FIGS_ThirdPersonCarryablesAnimDatabase GetCarryableDatabse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimationDatabase(FPlayerAnimationsDatabase& AnimDatabase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlashedStart_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlashedEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EmployeeReaction_Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EmployeeReaction_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CarryableThrow_Event(bool inLow);
    
};

