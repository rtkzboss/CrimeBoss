#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_TrafficDirectionLocks.h"
#include "IGS_TrespassersInfo.h"
#include "IGS_TrafficManager.generated.h"

class AIGS_VehicleDestinationAreaFramework;
class AIGS_VehicleDestinationPointFramework;
class AIGS_VehicleExitPointFramework;
class AIGS_VehicleSpawnerFramework;
class UIGS_TrafficPathComponentFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_TrafficManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_VehicleSpawnerFramework*> m_Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_VehicleDestinationPointFramework*> m_DestinationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_VehicleDestinationAreaFramework*> m_DestinationAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_VehicleExitPointFramework*> m_ExitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_TrafficPathComponentFramework*> m_TrafficPathComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UIGS_TrafficPathComponentFramework*, FIGS_TrespassersInfo> m_Trespassers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UIGS_TrafficPathComponentFramework*, FIGS_TrafficDirectionLocks> m_DirectionLocks;
    
public:
    UIGS_TrafficManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterTrafficPathComponent(UIGS_TrafficPathComponentFramework* inTrafficPathComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTrafficPathComponent(UIGS_TrafficPathComponentFramework* inTrafficPathComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawner(AIGS_VehicleSpawnerFramework* inSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterExit(AIGS_VehicleExitPointFramework* inExitPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDestinationArea(AIGS_VehicleDestinationAreaFramework* DestinationArea);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDestination(AIGS_VehicleDestinationPointFramework* DestinationPoint);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleDestinationPointFramework*> GetAllDestinationPointsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleDestinationAreaFramework*> GetAllDestinationAreasInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent);
    
};

