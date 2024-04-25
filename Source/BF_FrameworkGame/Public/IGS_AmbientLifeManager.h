#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AmbientLifeManager.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_WaypointFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AmbientLifeManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AIEnemyGroupSpawner*> m_SpawnGroups;
    
public:
    UIGS_AmbientLifeManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterRemoverSpecialObjective(AIGS_WaypointFramework* inSpecialObjective);
    
    UFUNCTION(BlueprintCallable)
    void SpawnOne();
    
    UFUNCTION(BlueprintCallable)
    void RegisterRemoverSpecialObjective(AIGS_WaypointFramework* inSpecialObjective);
    
};

