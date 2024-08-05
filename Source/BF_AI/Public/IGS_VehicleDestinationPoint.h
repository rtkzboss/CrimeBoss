#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleDestinationPointFramework.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "CarArrivedDelegate.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_VehicleDestinationInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleDestinationPoint.generated.h"

class AActor;
class AIGS_TrafficSegment;
class AIGS_VehicleBase;
class UIGS_VehicleObject;

UCLASS(Blueprintable)
class BF_AI_API AIGS_VehicleDestinationPoint : public AIGS_VehicleDestinationPointFramework, public IIGS_VehicleDestinationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarArrived OnCarArrived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartupOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedVisuals;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VehicleGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_TrafficSegment* PossiblePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VehicleVisual;
    
public:
    AIGS_VehicleDestinationPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerSpecificPassengersCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, AIGS_VehicleBase*& outSpawnedCar);
    
    UFUNCTION(BlueprintCallable)
    void TriggerSpecificCarArrival(TSubclassOf<UIGS_VehicleObject> inSpecificVehicle, AIGS_VehicleBase*& outSpawnedCar, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPlacedCarArrival(AIGS_VehicleBase* Vehicle, EIGS_VehicleSplineGroup inVehicleGroup);
    
    UFUNCTION(BlueprintCallable)
    void TriggerExistingCarArrival(AIGS_VehicleBase* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void TriggerCarArrival(EIGS_VehicleSpawnGroup inVehicleGroup, AIGS_VehicleBase*& outSpawnedCar, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable)
    void ShowPossibleVehicleLocationsDebug();
    
    UFUNCTION(BlueprintCallable)
    void CleanPossibleVehicleLocationsDebug();
    
    UFUNCTION(BlueprintCallable)
    void CheckRequestedCar(EIGS_VehicleSplineGroup inSplineGroup, EIGS_VehicleSpawnGroup inVehicleGroup, TSoftClassPtr<AIGS_VehicleBase> invehicleToSpawn, FIGS_NoSpawnPointDefinition inCustomPassengersDefinition, AIGS_VehicleBase*& outSpawnedCar, int32 minPassengers, int32 maxPassengers);
    

    // Fix for true pure virtual functions not being implemented
};

