#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_EveryoneHasLoadedLevelDelegate.h"
#include "IGS_HealthChangedDelegate.h"
#include "IGS_PlayerJoinInfo.h"
#include "IGS_PlayerJoinedDelegate.h"
#include "IGS_PlayerListChangedDelegate.h"
#include "IGS_PlayerSlotChangedDelegate.h"
#include "IGS_PlayerJoinManager.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_PlayerJoinManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerJoinManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerSlotChanged OnPlayerSlotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerListChanged OnPlayerListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerJoined OnPlayerJoinedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerJoined OnPlayerDisconectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EveryoneHasLoadedLevel OnEveryoneHasLoadedLevelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HealthChanged OnHealthChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JoinedPlayers, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PlayerJoinInfo> R_JoinedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasEveryoneLoadedLevel, meta=(AllowPrivateAccess=true))
    bool HasEveryoneLoadedLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* m_OldPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* m_OldBot;
    
public:
    UIGS_PlayerJoinManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_JoinedPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasEveryoneLoadedLevel();
    
    UFUNCTION(BlueprintCallable)
    FIGS_PlayerJoinInfo GetSlotByHeisterNumberBP(int32 inHeisterNumber);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PlayerJoinManager* GetPlayerJoinManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfFreeSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJoinedHeistersCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetHeisterNumberFromBot(AIGS_GameCharacterFramework* inBot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> GetCurrentPlayers();
    
};

