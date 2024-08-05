#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateFramework.h"
#include "ECommonMissionResult.h"
#include "EIGS_MissionStartupSource.h"
#include "EIGS_CharacterID.h"
#include "IGS_CopsArriveTimerFinishedDelegate.h"
#include "IGS_CopsArriveTimerStartedDelegate.h"
#include "IGS_EveryoneHasLoadedLevelDelegate.h"
#include "IGS_ForceHideEscapeWarningDelegate.h"
#include "IGS_PlayersSpawnedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameStateGame.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_CarryableInventoryObject;
class UIGS_GlobalInventory;
class UIGS_InventoryObjectFramework;
class UIGS_LootManager;
class UIGS_PickupsManager;
class UIGS_PlayerIntelManager;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GameStateGame : public AIGS_GameStateFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CopsArriveTimerFinished OnCopsArriveTimerFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CopsArriveTimerStarted OnCopsArriveTimerStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasEveryoneLoadedLevel, meta=(AllowPrivateAccess=true))
    bool R_HasEveryoneLoadedLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EveryoneHasLoadedLevel OnEveryoneHasLoadedLevelEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartedPlayingMatch, meta=(AllowPrivateAccess=true))
    bool R_StartedPlayingMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayersSpawnedDelegate OnStartedPlayingMatchEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ForceHideEscapeWarning OnForceHideEscapeWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEscapeVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathCamLastDeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailsafeMissionEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FinalPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ObjectiveTile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GlobalInventory* GlobalInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerIntelManager* IntelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PickupsManager* PickupsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CopsArriveTimer, meta=(AllowPrivateAccess=true))
    float CopsArriveTimerEnd;
    
public:
    AIGS_GameStateGame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SwitchStartupSource(EIGS_MissionStartupSource& outBranches);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEndMission(ECommonMissionResult inMissionResult);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveBonusLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddSecuredLootBag();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddLootBag();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddCarryablePocketLoot(TSubclassOf<UIGS_CarryableInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddCarryablePickedUpLoot(TSubclassOf<UIGS_CarryableInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddBonusPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddBonusLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedPlayingMatch();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StartedPlayingMatch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasEveryoneLoadedLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CopsArriveTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBossDied(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllDiedOrDowned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_PickupsManager* GetPickupsManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UIGS_LootManager* GetLootManager() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTurfWar();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_GlobalInventory* GetGlobalInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEndMissionNoResultScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEndMission();
    
};

