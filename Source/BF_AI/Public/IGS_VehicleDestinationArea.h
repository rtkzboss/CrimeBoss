#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleDestinationAreaFramework.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "IGS_VehicleDestinationInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_VehicleDestinationArea.generated.h"

class AActor;
class AIGS_TrafficSegment;
class AIGS_VehicleBase;
class UBoxComponent;
class UIGS_TrafficPathComponent;
class UIGS_VehicleDestinationAreaPointComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_VehicleDestinationArea : public AIGS_VehicleDestinationAreaFramework, public IIGS_VehicleDestinationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIGS_VehicleBase>> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VehicleVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedVisuals;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VehicleGroups;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MaxSpawnsCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowTrespassers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_TrafficSegment> ParkingSegmentTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_TrafficPathComponent*> PossiblePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_VehicleDestinationAreaPointComponent*> DestinationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_TrafficPathComponent*> PassingPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GroupRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
public:
    AIGS_VehicleDestinationArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> TriggerSpecificPassengersCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> TriggerCarArrivalBase(EIGS_VehicleSpawnGroup inVehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_VehicleBase*> TriggerCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, int32 vehicleCount, int32 minPassengers, int32 maxPassengers);
    
    UFUNCTION(BlueprintCallable)
    void OnShowParkingAreasChanged(bool inOn);
    

    // Fix for true pure virtual functions not being implemented
};

