#pragma once
#include "CoreMinimal.h"
#include "IGS_GameModeFramework.h"
#include "EIGS_CharacterID.h"
#include "IGS_AllDiedSignatureDelegate.h"
#include "IGS_BossDiedSignatureDelegate.h"
#include "IGS_PlayerLogActionSignatureDelegate.h"
#include "IGS_PlayerSwapActionsSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "PaybackGameModeBase.generated.h"

class AAIController;
class AController;
class AIGS_GameCharacterBase;
class AIGS_PlayerControllerRoot;
class APlayerState;
class UGameMetaTransferComponent;
class UObject;
class UPaybackPlayerSwapper;

UCLASS(Blueprintable, NonTransient)
class PAYBACK_API APaybackGameModeBase : public AIGS_GameModeFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AllDiedSignature OnAllDiedOrDowned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BossDiedSignature OnBossDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuardsCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDelayedStart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpectators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIController> BotControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_GameCharacterBase> BotPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuickPlayBotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnUniqueBotIDsInQuickPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTravelingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> ConnectedPlayerStates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerLogActionSignature OnPlayerLoggedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AController*> BotControllers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePlayerStateLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInactivePlayers;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerSwapActionsSignature OnPlayerSwapBeginEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerSwapActionsSignature OnPlayerSwapEndEventDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaybackPlayerSwapper* m_PlayerSwapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameMetaTransferComponent* MetaTransferComponent;
    
public:
    APaybackGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchToPlayerSpectating(AIGS_PlayerControllerRoot* inSpectatingController);
    
    UFUNCTION(BlueprintCallable)
    void SwapToNextPlayer(AController* inInstigatorController);
    
    UFUNCTION(BlueprintCallable)
    void SwapPlayerFromDeadPlayer(AController* inInstigatorController, int32 inBotHeisterNum);
    
    UFUNCTION(BlueprintCallable)
    void SwapHeisters(int32 inPlayerHeisterNum, int32 inBotHeisterNum);
    
    UFUNCTION(BlueprintCallable)
    void StartPlayingMatch();
    
    UFUNCTION(BlueprintCallable)
    bool StartMatchInPreparation();
    
    UFUNCTION(BlueprintCallable)
    bool StartMatchInAction();
    
    UFUNCTION(BlueprintCallable)
    void SpectateNextPlayer(AIGS_PlayerControllerRoot* inSpectatingController);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReadyToStartMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReadyToEndMatch();
    
    UFUNCTION(BlueprintCallable)
    void OnRoomPolysGathered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSwapEndEvent(AIGS_GameCharacterBase* inPlayer, AIGS_GameCharacterBase* inBot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSwapBeginEvent(AIGS_GameCharacterBase* inPlayer, AIGS_GameCharacterBase* inBot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelGenerated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerWantsPlayerStart(AController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBossDiedEvent(const EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllDiedOrDownedEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSetMatchState(FName inNewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapGenerationFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMatchState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static int32 GetJoinedHeistersCount(UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* GetDefaultPawnClassForControllerAndCharacterDataOverride(AController* InController, EIGS_CharacterID inCharacterID, bool bIsMaxLeveled, int32 inGenericID);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetBotIndex(AController* inBotController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBotCount();
    
    UFUNCTION(BlueprintCallable)
    AController* GetBotByIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndMatch();
    
protected:
    UFUNCTION(BlueprintCallable)
    static void DespawnAndSpectate(AIGS_PlayerControllerRoot* InController);
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugSetMatchAction(bool inIsAction);
    
    UFUNCTION(BlueprintCallable)
    void AbortMatch();
    
};

