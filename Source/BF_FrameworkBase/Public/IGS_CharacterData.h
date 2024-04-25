#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EIGS_AIMontageType.h"
#include "EIGS_AlarmDeviceType.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_CarType.h"
#include "EIGS_CoverAttackSide.h"
#include "EIGS_PushForTarget.h"
#include "EIGS_RoomSecurityType.h"
#include "EIGS_RoomType.h"
#include "EIGS_TargetProximity.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "IGS_BumpIntoSignatureDelegate.h"
#include "IGS_FloatChangedSignatureDelegate.h"
#include "IGS_IsChargingChangedDelegate.h"
#include "IGS_IsTargetChangedSignatureDelegate.h"
#include "IGS_OnNavlinkChangedSignatureDelegate.h"
#include "IGS_PanicChangedSignatureDelegate.h"
#include "IGS_PanicStateChangedSignatureDelegate.h"
#include "IGS_RoomTypeChangedSignatureDelegate.h"
#include "IGS_SecurityTierChangedSignatureDelegate.h"
#include "ShoutScanData.h"
#include "IGS_CharacterData.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_RoomFramework;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_CharacterData : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_IsTargetChangedSignature OnIsTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SecurityTierChangedSignature OnSecurityTierChangedBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RoomTypeChangedSignature OnRoomTypeChangedBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasEverLooting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PanicChangedSignature OnZiptieChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetFirstSeenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* VisibleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AggroTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TraceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToTargetOnNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedHideFromGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TargetProximity TargetProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnteringDistanceProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TargetProximity ProximityForEnteringDistanceProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_RoomFramework* CurrRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecurityLocation, meta=(AllowPrivateAccess=true))
    EIGS_RoomSecurityType CurrentSecurityLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_RoomType CurrentRoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoomIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasValidCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverInvalidateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CurrentCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LastCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInsideValidCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CoverAttackSide CoverAttackSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SniperShouldHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasEverMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMovingWithSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTryingToSurprisePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTriggeredByBumping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnNavlinkChangedSignature OnNavlinkChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnNavlinkChangedSignature OnTraversingNavlinkChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowActorDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PanicChangedSignature OnIsOnGroundChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PanicStateChangedSignature OnPanicChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BumpIntoSignature OnCharacterAboutToBump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BumpIntoSignature OnBumpInto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_HasReactionEnabledByScript;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FloatChangedSignature OnEnemyDetectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_PlayersDetectingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EIGS_AIMontageType InjuryPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* ThrowRequestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 IsDefending: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PanicStateChangedSignature OnHintShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PanicStateChangedSignature OnStealthTakedownChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PanicStateChangedSignature OnStealthKillChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PanicStateChangedSignature OnPlayerCanBreakChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsCharging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_IsChargingChanged OnIsChargingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EIGS_PushForTarget PushForTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> FireLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> NearVanLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ReactionLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ShootingRotationLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> BotSwitchLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EIGS_CarType m_CarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EIGS_CarSeatVariant m_SeatVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LastNavmeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnNavlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTraversingNavlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnZiptieChanged, meta=(AllowPrivateAccess=true))
    bool bR_IsZiptied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAbortAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPanicking, meta=(AllowPrivateAccess=true))
    uint8 bIsPanicking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bWasEverPanicking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsComplaining: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsAlerting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDuty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bGetDownKneel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GoingToGroundChanged, meta=(AllowPrivateAccess=true))
    uint8 bGoingToGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bScared: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOnGroundChanged, meta=(AllowPrivateAccess=true))
    uint8 bIsLayingOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EscapingChanged, meta=(AllowPrivateAccess=true))
    uint8 bIsEscaping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsRunningForAlarmDevice: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EIGS_AlarmDeviceType AlarmDeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DutyAlertingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyUsedAlarmDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StickyChanged, meta=(AllowPrivateAccess=true))
    uint8 bIsSticky: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnedByWaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> InvalidTargetLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WalkieTalkieStatus, meta=(AllowPrivateAccess=true))
    EIGS_WalkieTalkieStatus mR_WalkieTalkieStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnDetectionChanged, meta=(AllowPrivateAccess=true))
    float mR_CurrentDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectionSecondPhase, meta=(AllowPrivateAccess=true))
    bool mR_DetectionSecondPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectingPlayers, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> mR_DetectingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnReportDetectionChanged, meta=(AllowPrivateAccess=true))
    bool mR_ReportDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> ChokeSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoutScanData m_ShoutScanData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* m_StealthTakedownPossibleCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* m_StealthTakedownPossibleCharacterCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 mR_SubdueAllowed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnRevivingChanged, meta=(AllowPrivateAccess=true))
    bool mR_Reviving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnLockPickingChanged, meta=(AllowPrivateAccess=true))
    bool mR_LockPicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnInspectingChanged, meta=(AllowPrivateAccess=true))
    bool mR_Inspecting;
    
public:
    UIGS_CharacterData(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateIsCharging(bool inIsCharging);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WalkieTalkieStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StickyChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SecurityLocation(EIGS_RoomSecurityType inOldTier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnZiptieChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnRevivingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnReportDetectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnLockPickingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnInspectingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnDetectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPanicking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOnGroundChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GoingToGroundChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EscapingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectionSecondPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectingPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentEndOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inOtherComponent, int32 ini);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inOtherComponent, int32 ini, bool inArg, const FHitResult& inHitResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSeatVariant(const EIGS_CarSeatVariant inSeatVariant);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCarType(const EIGS_CarType inCarType);
    
    UFUNCTION(BlueprintCallable)
    bool IsShoutHint();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetStealthTakedownActor();
    
    UFUNCTION(BlueprintCallable)
    bool GetStealthKill();
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerCanBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastNavmeshLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetCharacterOwner() const;
    
};

