#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "IGS_HasObjectStatusInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "DetectorBaseStateChangedEventDelegate.h"
#include "EIGS_DetectorState.h"
#include "EIGS_RotationType.h"
#include "IGS_DetectorTargetChangedDelegate.h"
#include "IGS_DetectorTeamSideChangedDelegate.h"
#include "IGS_DetectorBase.generated.h"

class AActor;
class AIGS_PlayerCharacter;
class AIGS_SentryControllerFramework;
class UDetectorRotation;
class UIGS_DamageHandlerComponentFramework;
class UIGS_ObjectStatus;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_DetectorBase : public APawn, public IGenericTeamAgentInterface, public IAISightTargetInterface, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DetectorTeamSideChanged OnTeamSideChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnEnabledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnDisabledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnDetectorDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnDetectionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnTargetDetectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnDetectionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DetectorTargetChanged OnTargetChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_SentryControllerFramework* DefaultController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllreadyReportedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeReenablingEventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeReenablingSoundTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RotationType RotationType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DetectionConeOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDetectorRotation* DetectorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldMoveWhenNoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldRotateToHiddenTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TimeToLoseTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisabledByEMP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectingPlayers, meta=(AllowPrivateAccess=true))
    TArray<AIGS_PlayerCharacter*> mR_DetectingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DamageHandlerComponentFramework* DamageHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalHorizontalRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalVerticalRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrollingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlledRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectorState, meta=(AllowPrivateAccess=true))
    EIGS_DetectorState DetectorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnDetectionChanged, meta=(AllowPrivateAccess=true))
    float mR_TargetDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WTSatusChanged, meta=(AllowPrivateAccess=true))
    EIGS_WalkieTalkieStatus mR_WalkieTalkieStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnTargetChanged, meta=(AllowPrivateAccess=true))
    AActor* mR_Target;
    
public:
    AIGS_DetectorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TempDisable(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamSideID(EIGS_TeamSideEnum inNewID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WTSatusChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnDetectionChanged(float inOldDetection);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectorState(EIGS_DetectorState inOldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectingPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetectorStateChanged(EIGS_DetectorState inNewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CosmeticDetectorNearlyEnabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CosmeticDetectorEnabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CosmeticDetectorDisabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CosmeticDetectorDestroyed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticDetectorControlled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TeamSideEnum GetTeamSideId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFocusPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze(float InTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableDetectorDelayed(AActor* inInstigator, float inDelay, bool inEnablingAfterEMP);
    
    UFUNCTION(BlueprintCallable)
    void EnableDetector(AActor* inInstigator, bool inEnablingAfterEMP);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableDetection(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableDetector(AActor* inInstigator, bool inDisabledByEMP);
    
public:
    UFUNCTION(BlueprintCallable)
    void Disable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyDetector(AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticStartServoSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorStateChanged(EIGS_DetectorState inNewState, EIGS_DetectorState inOldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorNearlyEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorControlled();
    

    // Fix for true pure virtual functions not being implemented
};

