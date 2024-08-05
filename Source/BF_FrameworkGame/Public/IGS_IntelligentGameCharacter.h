#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_SignificanceValue.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "GameplayTagContainer.h"
#include "IGS_CharacterThrowAwayCarryableDelegate.h"
#include "IGS_GameCharacterBase.h"
#include "IGS_RagdollCollisionHitDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_IntelligentGameCharacter.generated.h"

class AIGS_WieldableBase;
class UActorComponent;
class UAkAudioEvent;
class UArrowComponent;
class UGameplayAbility;
class UIGS_AimAssistTargetComponent;
class UIGS_AnimBudgetAllocatorComponent;
class UIGS_BleedingHandlerComponent;
class UIGS_CharacterPressureWatcherComponent;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_DecalContactShadowComponent;
class UIGS_FallDamageComponent;
class UIGS_FootstepsEventBasedComponent;
class UIGS_LootBagComponent;
class UIGS_ShootablePartsHandlerComponent;
class UIGS_SignificanceComponent;
class UIGS_ZiptieComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_IntelligentGameCharacter : public AIGS_GameCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WieldableBase* CurrentWieldable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot HeadSnapshot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CharacterThrowAwayCarryable OnCharacterThrowAwayCarryable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RagdollCollisionHit OnRagdollCollisionHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TakeWeaponGameplayTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SignificanceComponent* SignificanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> GunDownAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CharacterWieldablesHolderComponent* CharacterWieldablesHolderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidForAimAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplorationZoomMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplorationZoomInSpeedMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplorationZoomOutSpeedMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtMaxAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DoNotReduceWeaponPickupDamageForTeamSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimationForVisionCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChestBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimDummySocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_FootstepsEventBasedComponent* FootstepEventBaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LootBagComponent* LootBagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_FallDamageComponent* FallDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ShootablePartsHandlerComponent* ShootablePartsHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ZiptieComponent* ZiptieComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* SniperAimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AimAtArrowComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LookAtArrowComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PawnDirArrowComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AnimBudgetAllocatorComponent* AnimBudgetAllocatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DecalContactShadowComponent* DecalContactShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CharacterPressureWatcherComponent* PressureWatcherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AimAssistTargetComponent* AimAssistTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference HeadComponentReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AnimationSeed, meta=(AllowPrivateAccess=true))
    int32 mR_NextRandomAnimationSeed;
    
public:
    AIGS_IntelligentGameCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ThrowAwayBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnPocketBag(FTransform InTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnBag(FTransform InTransform) const;
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOrNextWeaponSlot(bool inPrevious);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOrNextWeaponInActiveSlot(bool inPrevious);
    
    UFUNCTION(BlueprintCallable)
    void SaveHeadSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void OverrideHeadComponent(USkeletalMeshComponent* InComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimationSeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostSignificance(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MagCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingMountedWeaponAndCanLeave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingMountedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagChecking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInspecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inIsForce) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InterruptMagCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InterruptInspecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InspectWieldable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HolsterWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_LootBagComponent* GetLootBagComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetHeadComp();
    
    UFUNCTION(BlueprintCallable)
    UIGS_BleedingHandlerComponent* GetBleedingComponent();
    
    UFUNCTION(BlueprintCallable)
    void ForceDestroyZiptieComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DropBag() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugTick(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInterruptReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInterruptMagCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInterruptInspecting() const;
    
};

