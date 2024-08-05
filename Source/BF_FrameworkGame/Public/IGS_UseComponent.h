#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_OnInteractionProgressEventDelegate.h"
#include "InteractiveObjectDelegateDelegate.h"
#include "OnTimerInteractionEventDelegate.h"
#include "IGS_UseComponent.generated.h"

class ACharacter;
class AIGS_IntelligentGameCharacter;
class AIGS_PlayerCharacter;
class AIGS_PlayerControllerFramework;
class UIGS_InteractiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_UseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* PuzzleInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UniversalAnimationGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDotProductThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractiveDeltaThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurrentlyUsingInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurrentlyHoldingInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUseCarryables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractiveObjectsNearPlayerForHUDAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractiveObjectsNearPlayerForHUDAngleDotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* ComponentToInteractWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionLookVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* LastComponentToInteractWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> ObjectsWithVisibleOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> AutoPickupInteractiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> SnoozedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> InteractiveObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> InteractiveObjectsNearPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> InteractiveObjectsNearPlayerForHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InteractiveComponent*> InteractiveObjectsToOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraForwardVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerFramework* OwnerPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* OwnerPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* OwnerPlayerCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimerInteractionEvent OnTimerInteractionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractiveObjectDelegate OnInteractiveObjectIsNear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnInteractionProgressEvent OnInteractionProgressEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNearInteractible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNotifiedAboutInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurrentlyInteracting;
    
    UIGS_UseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Use(UIGS_InteractiveComponent* inInteractiveComponent, bool bIsHolding);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UseReleased(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Use(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLastInteraction(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PuzzleInteractionEnded(bool inResult, bool inStealthEnd);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PostAuthClient(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HoldSuccess(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HoldStarted(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HoldCanceled(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AuthUse(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_Rollback(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_PostServerUseReleased(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_AuthUse(UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void ClearVisualParts();
    
};

