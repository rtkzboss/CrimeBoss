#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_DialogueGroup.h"
#include "EIGS_LevelRangeBit.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_CharacterIDInterface.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "IGS_BodyInfo.h"
#include "IGS_CharacterAimEventSignatureDelegate.h"
#include "IGS_CharacterHitEventSignatureDelegate.h"
#include "IGS_CrouchChangedEventSignatureDelegate.h"
#include "IGS_DialogueInterface.h"
#include "IGS_GameplayTagsChangedOnCharacterDynamicSignatureDelegate.h"
#include "IGS_HasObjectStatusInterface.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_PossessedByDynamicSignatureDelegate.h"
#include "IGS_WieldAnyItemInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameCharacterFramework.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_SquadFramework;
class UAbilitySystemComponent;
class UAkComponent;
class UAkStateValue;
class UAkSwitchValue;
class UIGS_CharacterData;
class UIGS_CharacterMaskBase;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_DamageHandlerComponentFramework;
class UIGS_DealtDamageEventsWatcher;
class UIGS_DownStateHandlerComponentFramework;
class UIGS_GASAttributeSetBase;
class UIGS_GASComponentBase;
class UIGS_GameCharacterMovementComponent;
class UIGS_ObjectStatus;
class UIGS_OutlineComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
class USkinnedDecalSampler;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_GameCharacterFramework : public ACharacter, public IGenericTeamAgentInterface, public IIGS_GameplayTagAssetInterfaceCustom, public IIGS_DialogueInterface, public IVisualLoggerDebugSnapshotInterface, public IIGS_HasObjectStatusInterface, public IAbilitySystemInterface, public IIGS_CharacterIDInterface, public IIGS_WieldAnyItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AkEnviroSwitchIndoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AkEnviroSwitchOutdoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AkEnviroStateIndoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AkEnviroStateOutdoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueGroupCharacterHolder DialogueHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnedForFirstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BodyInfo BodyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MutableRootGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InitSpawnTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LeftHandAttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RightHandAttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> PhysicalMaterialToPreloadImpacts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PossessedByDynamicSignature OwnerOnPossessedByEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PossessedByDynamicSignature ServerOnlyOnPossessedByEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CrouchChangedEventSignature OnCrouchingChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CharacterHitEventSignature OnCharacterHitEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CharacterAimEventSignature OnCharacterAimEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameplayTagsChangedOnCharacterDynamicSignature OnGameplayTagsChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder DesiredLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder DesiredAimAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CharacterData* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DamageHandlerComponentFramework* DamageHandlerComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DealtDamageEventsWatcher* DealtDamageEventsWatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DownStateHandlerComponentFramework* DownStateHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_OutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GASComponentBase* GASComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedDecalSampler* SkinnedDecalSampler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GASAttributeSetBase* GASAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartsWithCombatStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMovementDisabled, meta=(AllowPrivateAccess=true))
    bool mR_IsMovementDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID CharacterIDEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 GenericCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMaxLeveled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterSkinID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GameCharacterMovementComponent* GameCMC;
    
public:
    AIGS_GameCharacterFramework(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsAim() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateBodyInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerFallDeath();
    
    UFUNCTION(BlueprintCallable)
    void SubdueBy(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Stun(const float inDuration) const;
    
    UFUNCTION(BlueprintCallable)
    void SetSquad(AIGS_SquadFramework* inSquad);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtPoint(FIGS_InterestPointHolder inInterestPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenPlayerIncludingWeapon(bool inHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetFacePoint(FIGS_InterestPointHolder inInterestPoint, bool inForcePoint);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableVoice(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterHidden(bool inHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCanAttack(bool inAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCanSelectPrimaryWeaponSlots(bool inEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCanBeUnholstered(bool inEnabled) const;
    
    UFUNCTION(BlueprintCallable)
    void SetAimAtPoint(FIGS_InterestPointHolder inInterestPoint);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(BlueprintCallable)
    void ReportDamageDealt(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTagsCounted(FGameplayTagContainer inTagsToRemove, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer inTagsToRemove, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTagCounted(FGameplayTag inTagToRemove, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag inTagToRemove, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void PerformStealthTakedown(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnMontageStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnMontageFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMovementDisabled();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ReportDamageDealt(const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRobot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeleeOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlledPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingAim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombatStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAliveInNormalHealthState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_UnitSpecialization GetUnitSpecialization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TeamSideEnum GetTeamSideId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_SquadFramework* GetSquad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkinnedDecalSampler* GetSkinnedDecalSampler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBagCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UIGS_CharacterMaskBase> GetMaskID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_InterestPointHolder GetLookAtPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCarryingLootBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCarrying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadBoneLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_GameCharacterMovementComponent* GetGameCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFeetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_InterestPointHolder GetFacePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEyesLocation(float inHeightRelativeMult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDialogueGroupID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_DialogueGroup GetDialogueGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_LevelRangeBit GetDialogueCharacterLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_DialogueGroupCharacterHolder GetDialogueCharacterHolder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDialogueCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBagCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetChestOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetChestBoneLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_CharacterWieldablesHolderComponent* GetCharacterWieldableHolder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterWieldableFPVModelScaleMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterWieldable3PVModelScaleMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterCanAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanSelectPrimaryWeaponSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeUnholstered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBagsPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetAkAudioComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimAtPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_InterestPointHolder GetAimAtPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GameplayTagsMatchesQuery(const FGameplayTagQuery& inQuery) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableMovementAndCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesBagExist() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableMovementAndCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CancelCurrentAnimationTask(EIGS_AnimationTaskFinishedReason inReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeUnarmed() const;
    
    UFUNCTION(BlueprintCallable)
    void CanBeStealthTakedownedBy(AIGS_GameCharacterFramework* inCharacter, bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAim() const;
    
    UFUNCTION(BlueprintCallable)
    void Aim(bool inOn, bool inForceStop);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedGameplayTags(FGameplayTagContainer inTagsToAdd, float inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddTimedGameplayTag(FGameplayTag inTagToAdd, float inDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTagsCounted(FGameplayTagContainer inTagsToAdd, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(FGameplayTagContainer inTagsToAdd, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTagCounted(FGameplayTag inTagToAdd, int32 inCount, bool inRemoveTimed);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag inTagToAdd, bool inRemoveTimed);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const PURE_VIRTUAL(GetAbilitySystemComponent,return nullptr;);
    UFUNCTION(BlueprintCallable)
    void SetIsMaxLeveled(bool inIsMaxLeveled) override PURE_VIRTUAL(SetIsMaxLeveled,);
    
    UFUNCTION(BlueprintCallable)
    void SetGenericVariant(int32 inGenericVariant) override PURE_VIRTUAL(SetGenericVariant,);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSkinID(FGameplayTag inTagID) override PURE_VIRTUAL(SetCharacterSkinID,);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(EIGS_CharacterID inCharacterID) override PURE_VIRTUAL(SetCharacterID,);
    
    UFUNCTION(BlueprintCallable)
    bool IsMaxLeveled() const override PURE_VIRTUAL(IsMaxLeveled, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGenericVariant() const override PURE_VIRTUAL(GetGenericVariant, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetCharacterSkinID() const override PURE_VIRTUAL(GetCharacterSkinID, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    EIGS_CharacterID GetCharacterID() const override PURE_VIRTUAL(GetCharacterID, return EIGS_CharacterID::Char_Unknown;);
    
};

