#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_AimAnimationInfo.h"
#include "IGS_ArmsLeaningAnimationOneFrameParams.h"
#include "IGS_GameEventsAnimInstance.h"
#include "TPP_ActionSlotType.h"
#include "IGS_UWeaponAniminstance.generated.h"

class AIGS_IntelligentGameCharacter;
class AIGS_PlayerCharacter;
class AIGS_WeaponBase;
class UIGS_AutomaticShooter;
class UIGS_PlayerAnimInstance;
class UIGS_ReloaderBase;
class UIGS_ShooterBase;
class UIGS_SimpleReloader;

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_UWeaponAniminstance : public UIGS_GameEventsAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAmmoInMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ArmsLeaningAnimationOneFrameParams LeansInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterLeaningDirectionEnum LeaningDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_AutomaticShooter* m_AutomaticShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_WeaponBase* m_WeaponBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_ShooterBase* m_ShooterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ReloaderBase* m_ReloadBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SimpleReloader* m_SimpleReloader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* m_Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* m_PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AimAnimationInfo m_AimAnimationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_PlayerAnimInstance* m_PlayerAnimInstance;
    
public:
    UIGS_UWeaponAniminstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateReload(bool WantReload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAttack(bool WantAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideStarted_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideEnded_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadInterrupt_Event(EIGS_ReloadInterruptReasonEnum inReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMagCheckInterrupt_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectInterrupt_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is_TPP_Animinstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GrenadeThrow_Event(TPP_ActionSlotType InAction, bool inLow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WeaponAttackType GetAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimNotify_OnReloadFromMontage();
    
};

