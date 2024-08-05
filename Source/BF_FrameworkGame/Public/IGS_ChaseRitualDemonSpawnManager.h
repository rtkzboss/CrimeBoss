#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChaseRitualDemonSpawnManager.generated.h"

class AIGS_AISpawnPointVIP;
class AIGS_GameCharacterFramework;
class UBillboardComponent;
class UEnvQuery;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ChaseRitualDemonSpawnManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AIGS_GameCharacterFramework>> DemonSpawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_AISpawnPointVIP* DemonSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_AISpawnPointVIP> SpawnPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTolarance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDemonInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerInputCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAllowedSpawnedDemons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnedDemons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* SpawnQueryTemplate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CorrectRunesForActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunesActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CorrectRunesActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_SpawningAlreadyStarted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* PlayerCharacter;
    
public:
    AIGS_ChaseRitualDemonSpawnManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryToSpawnDemon();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetPlayerInputDetection();
    
    UFUNCTION(BlueprintCallable)
    void OnSquadSpawnedEvent(TArray<AIGS_GameCharacterFramework*> inSquadMembers);
    
    UFUNCTION(BlueprintCallable)
    void DemonVanished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DemonVanish(AIGS_GameCharacterFramework* VanishingDemon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DemonSpawned(AIGS_GameCharacterFramework* SpawnedDemon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DemonLogicStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DemonLogicFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DemonDied();
    
};

