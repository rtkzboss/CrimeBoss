#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AIPointManager.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_AITransitionObjectBase;
class AIGS_ProgressGadgetBase;
class AIGS_WaypointFramework;
class UActorComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AIPointManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointFramework*> m_SniperPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointFramework*> m_BotLimboIdlePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WaypointFramework*> m_BotLimboJumpPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_ProgressGadgetBase*> m_DisruptibleGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> m_ThrowBagComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AITransitionObjectBase*> m_MonsterClosets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AIEnemyGroupSpawner*> m_WarzoneSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AIEnemyGroupSpawner*> m_WarzoneSpawnersFriendlies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AIEnemyGroupSpawner*> m_WarzoneSpawnersCaptain;
    
public:
    UIGS_AIPointManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterBotLimboJumpPoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterBotLimboIdlePoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBotLimboJumpPoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBotLimboIdlePoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetThrowBagComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_ProgressGadgetBase*> GetDisruptibleGadgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointFramework*> GetBotLimboJumpPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_WaypointFramework*> GetBotLimboIdlePoints() const;
    
};

