#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleSpawnerFramework.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "DriveFinishedDelegate.h"
#include "SpawnerEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleSpawner.generated.h"

class AIGS_TrafficSegment;
class AIGS_VehicleBase;
class UIGS_TrafficPathComponent;
class UIGS_VehicleObject;

UCLASS(Blueprintable)
class BF_AI_API AIGS_VehicleSpawner : public AIGS_VehicleSpawnerFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerEvent OnAllDriveFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveFinished OnDriveFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartupOnly;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_VehicleBase> ForceVehicleSpawn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VehicleGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_TrafficSegment* Path;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MaxSpawnsCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    AIGS_VehicleSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AIGS_VehicleBase* SpawnVehicleOnPath(TSoftClassPtr<AIGS_VehicleBase> invehicleToSpawn, TArray<UIGS_TrafficPathComponent*> InPath);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> SpawnSpecific(TSubclassOf<UIGS_VehicleObject> inSpecificVehicle, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> Spawn(EIGS_VehicleSpawnGroup inVehicleGroup, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_VehicleBase*> GetSpawnedVehicles() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPTick(float DeltaSeconds);
    
};

