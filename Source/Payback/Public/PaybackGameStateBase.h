#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateGame.h"
#include "IGS_PlayersSpawnedDelegateDelegate.h"
#include "IGS_EndMissionCountdownCompletedDelegate.h"
#include "IGS_EndMissionCountdownPreCompletedDelegate.h"
#include "IGS_HideEndMissionCountdownDelegate.h"
#include "IGS_MatchHasEndedDelegateDelegate.h"
#include "IGS_PlayersInEndMissionTriggerChangedDelegate.h"
#include "IGS_PrepareRestartDelegateDelegate.h"
#include "IGS_StartEndMissionCountdownDelegate.h"
#include "PaybackGameStateBase.generated.h"

class AActor;
class AController;
class UIGS_AIGrenadeManager;
class UIGS_DissolveManager;
class UIGS_LootBagsManager;
class UIGS_NetworkComponentMusic;
class UIGS_ObjectiveManager;
class UIGS_PlayerJoinManager;
class UIGS_PropsManager;
class UIGS_SubtitleManager;
class UIGS_SuspicionManager;
class UIGS_TextChatManager;
class UIGS_WorldSpaceWidgetManager;
class UObject;
class UPaybackWaveManager;

UCLASS(Blueprintable)
class PAYBACK_API APaybackGameStateBase : public AIGS_GameStateGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersSpawned, meta=(AllowPrivateAccess=true))
    bool R_PlayersSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayersSpawnedDelegate OnPlayersSpawnedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MatchHasEndedDelegate OnMatchHasEndedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayersInEndMissionTriggerChanged OnPlayersInEndMissionTriggerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EndMissionCountdownPreCompleted OnEndMissionCountdownPreCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EndMissionCountdownCompleted OnEndMissionCountdownCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_StartEndMissionCountdown OnStartEndMissionCountdown;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HideEndMissionCountdown OnHideEndMissionCountdown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PrepareRestartDelegate OnPrepareRestartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyGoalThresholdPercentage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchState, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SuspicionManager* SuspicionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DissolveManager* DissolveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectiveManager* ObjectiveManager2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TextChatManager* TextChatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LootBagsManager* LootBagsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WorldSpaceWidgetManager* WorldSpaceWidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaybackWaveManager* WaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerJoinManager* JoinManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SubtitleManager* SubtitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AIGrenadeManager* AIGrenadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PropsManager* PropsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentMusic* MusicComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ElapsedTime, meta=(AllowPrivateAccess=true))
    int32 ElapsedTime;
    
    APaybackGameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 SetHeisterNumberForBotBP(AController* inBot, int32 inHeisterID);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetFinalDialogue(UObject* inWCO, const FText inID, AActor* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServerTravel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ElapsedTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepareRestart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayersSpawned();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchHasEnded();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PrepareRestart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnServerTravel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEndMissionCountdownPreCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEndMissionCountdownCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_TextChatManager* GetTextChatManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_SuspicionManager* GetSuspicionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_SubtitleManager* GetSubtitleManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_PropsManager* GetPropsManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_ObjectiveManager* GetObjectiveManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_LootBagsManager* GetLootBagsManager() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetHeisterNumberFromBotBP(AController* inBot);
    
};

