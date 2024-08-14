#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterDataInterface.h"
#include "ShoutScanData.h"
#include "IGS_GameplayAbilityGrantDataHolder.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "EIGS_Ethnicity.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_HeisterNumberInterface.h"
#include "IGS_DeathCameraEndedSignatureDelegate.h"
#include "IGS_IntelligentGameCharacter.h"
#include "IGS_OnChangeShowPredictionSignatureDelegate.h"
#include "IGS_OnZiptyingEventDelegate.h"
#include "IGS_PlayerStateChangedSignatureDelegate.h"
#include "IGS_ReplicatedLadder.h"
#include "IGS_SuspicionInterface.h"
#include "OnPlayerUseStopDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerCharacter.generated.h"

class AActor;
class AController;
class AIGS_GameCharacterFramework;
class AIGS_PlayerFPVArms;
class AIGS_PlayerStateGame;
class AIGS_RideableVehicleBaseFramework;
class AIGS_SecurityCameraViewer;
class UAkAudioEvent;
class UAkStateValue;
class UAkSwitchValue;
class UCustomizableSkeletalComponent;
class UGameplayAbility;
class UIGS_BasherComponent;
class UIGS_CampThreatMeterComponent;
class UIGS_CarryableInteractiveComponent;
class UIGS_EthnicityVoices;
class UIGS_InteractiveComponent;
class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UIGS_LootBagInteractiveComponent;
class UIGS_MeleeWeaponInventoryObject;
class UIGS_PlayerCameraComponent;
class UIGS_PlayerCharacterMovementComponent;
class UIGS_PlayerCommandComponent;
class UIGS_PlayerEffectsComponent;
class UIGS_PlayerIgnoreCollisionComponent;
class UIGS_PlayerLoadoutComponent;
class UIGS_PlayerMetaTransferComponent;
class UIGS_PlayerPingComponent;
class UIGS_PlayerSuppressionHandlerComponent;
class UIGS_PlayerSuspicionComponent;
class UIGS_PlayerWorldTracingComponent;
class UIGS_PostProcessManagerComponent;
class UIGS_ReviveComponent;
class UIGS_ThrowableInventoryObject;
class UIGS_ThrowableTrajectoryComponent;
class UIGS_UseComponent;
class USpringArmComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PlayerCharacter : public AIGS_IntelligentGameCharacter, public IIGS_HeisterNumberInterface, public IIGS_HeisterDataInterface, public IIGS_SuspicionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerUseStop OnPlayerUseStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DeathCameraEndedSignature OnDeathCameraSkippable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DeathCameraEndedSignature OnDeathCameraEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnZiptyingEvent OnZiptyingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerStateChangedSignature OnPlayerStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnChangeShowPredictionSignature OnChangeShowPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_UseComponent* UseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerPingComponent* PingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ReviveComponent* ReviveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerSuspicionComponent* PlayerSuspicionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerCommandComponent* PlayerCommandComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerWorldTracingComponent* PlayerWorldTracingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BasherComponent* UnarmedMeleeBasherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_EthnicityVoices* EthnicityVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_MeleeWeaponInventoryObject> DefaultUnarmedMeleeItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> DefaultUnarmedMeleeAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAimingChangePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityCrouchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Child3PVCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ListInventory* PlayerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathCamUnskippableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathCamMaximumTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSomeoneSpectating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDeathCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeathCamSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInSpectatingCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 R_Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseUnarmedMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastTeleportableLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPendingCarryable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedLootBagCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_PlayerFPVArms> DefaultArmsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerFPVArms* m_ArmsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PostProcessManagerComponent* PostProcessManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerEffectsComponent* PlayerEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerSuppressionHandlerComponent* SuppressionHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerIgnoreCollisionComponent* PlayerIgnoreCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerLoadoutComponent* PlayerLoadoutComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerMetaTransferComponent* PlayerMetaTransferComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CampThreatMeterComponent* CampThreatMeterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LootBagInteractiveComponent* LootBagInteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CarryableInteractiveComponent* CarryableInteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ThrowableTrajectoryComponent* ThrowableTrajectoryComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_GameplayAbilityGrantDataHolder> DefaultGrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarryableInteractionSocket;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallDeathAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ZiptieMountAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ZiptieDismountAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RappelMountAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RappelDismountAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RappelSlowDownAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* NotOutOfBoundsAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* OutOfBoundsAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* PersonPrespectiveFPPAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* PersonPrespectiveTPPAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharNameForDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> TmpShoutCharacters;
    
public:
    AIGS_PlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Use(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSpectatingCam(bool inIsSpectating);
    
    UFUNCTION(BlueprintCallable)
    void UnarmedMeleeAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchToDeathCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwapPlayerWithBotController(AController* inBotController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwapPlayerForBotWhileDead(AController* inBotController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwapPlayer(int32 inBotNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowChatWheelIcon(const FText& inIconText);
    
    UFUNCTION(BlueprintCallable)
    void Shout(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPlayerOutline(bool inShowPlayerOutline);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomVoiceAccordingToEthnicityAndGender();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInInteraction(const bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInElevator(const bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetIgnoreRoomSecurityOffence(bool inIgnore) const;
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRadialMenuInput(bool bNewMenuInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePingInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreMenuInput(bool bNewMenuInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLockpickInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInteractionInput(bool bNewInteractionInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreBotSwapInput(bool bNewBotSwapInput);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceRotation(FRotator NewControlRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetArmsTortillaEffect(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetArmsHidden(bool inHidden);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Shout(FShoutScanData inScanData);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestStopCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestPlayCustomMontage(FGameplayTag inCustomAnimType);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ProxyEnterCameraFeed();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PerformStealthTakedown(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnInteractionEnded(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnInteracting(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnBagCountChanged(int32 inCount);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HandleSpectating();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AbilityUnequip();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreRadialMenuInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreMenuInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreInteractionInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreBotSwapInput();
    
    UFUNCTION(BlueprintCallable)
    void ProxyEnterCameraFeed(AIGS_SecurityCameraViewer* InViewer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostArmsLoadedEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Ping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OwnerUnpossess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OwnerPossess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerStateChanged(AIGS_PlayerStateGame* inPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyDeathCameraSkippable();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDeathCameraEnded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RequestStopCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RequestPlayCustomMontage(FGameplayTag inCustomAnimType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayZiptieMountEvent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayZiptieDismountEvent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayRappelSlowDownEvent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayRappelMountEvent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayRappelDismountEvent();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnInteractionEnded(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnInteracting(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnBagCountChanged(int32 inCount);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_DeathSoundEffect();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CheatChangeSize(float InSize);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void MessageToServer_LadderInput(FIGS_ReplicatedLadder inLadderData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LeaveLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void JumpFromLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingBuzzsaw() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsThirdPersonCamActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlidingOnZipline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRappelling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRadialMenuInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPingInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVentShaft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInElevator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBotSwapInputIgnored() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectating();
    
    UFUNCTION(BlueprintCallable)
    static EIGS_DialogueHeisterCharacter GetVoiceAccordingToEthnicityAndGender(UIGS_EthnicityVoices* inEthnicityVoices, EIGS_Ethnicity inEthnicity, bool inIsFemale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_RideableVehicleBaseFramework* GetUsedVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowPlayerOutline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_PlayerCommandComponent* GetPlayerCommandComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_PlayerCharacterMovementComponent* GetPlayerCharacterMovementComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_PlayerCameraComponent* GetPlayerCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAimingAtFriendly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAimingAtEnemy() const;
    
    UFUNCTION(BlueprintCallable)
    static EIGS_Ethnicity GetEthnicityFromMutable(UCustomizableSkeletalComponent* inCSCBody);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TeamSideEnum GetAimingAtTeamside() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TeamSideEnum GetAimAtTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetAimAtCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAimAtActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbilityRechargeMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbility1ChargeCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceCancelHoldInputs();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceAndUseInteraction(UIGS_InteractiveComponent* inInteraction);
    
    UFUNCTION(BlueprintCallable)
    void ForceAndUseClientInteraction(UIGS_InteractiveComponent* inInteraction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableSpectateCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DoMantle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableSpectateCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableDeathCam();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ForceUseInteraction(UIGS_InteractiveComponent* inInteraction);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_CameraSpy(AIGS_SecurityCameraViewer* inCamera);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddItemsAfterSwitch(const TArray<TSubclassOf<UIGS_InventoryObjectFramework>>& inItems);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddItem(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveOnLadder() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAndRemoveAbility1();
    
    UFUNCTION(BlueprintCallable)
    void CallOnChangeShowPrediction(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inHeisterNumber) override PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeisterNumber() const override PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
};

