#pragma once
#include "CoreMinimal.h"
#include "IGS_NoSpawnPointDefinition.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_TrafficPathfinding.generated.h"

class AActor;
class AIGS_VehicleBase;
class AIGS_VehicleDestinationArea;
class AIGS_VehicleDestinationPoint;
class UIGS_TrafficPathComponent;
class UObject;
class UTrafficPathfindingFilterBase;
class UTrafficPathfindingNode;

UCLASS(Blueprintable)
class BF_AI_API UIGS_TrafficPathfinding : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrafficPathfindingNode*> m_Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, UTrafficPathfindingFilterBase*> m_FiltersCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UIGS_TrafficPathComponent*, UTrafficPathfindingNode*> m_TrafficSegmentToNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrafficPathfindingNode*> m_TmpPath;
    
public:
    UIGS_TrafficPathfinding();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPopulationFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    static void GetClosestDestinationPointOrArea(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AActor*& outDestination);
    
    UFUNCTION(BlueprintCallable)
    static void GetClosestDestinationPoint(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AIGS_VehicleDestinationPoint*& outDestinationPoint);
    
    UFUNCTION(BlueprintCallable)
    static void GetClosestDestinationArea(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AIGS_VehicleDestinationArea*& outDestinationArea);
    
    UFUNCTION(BlueprintCallable)
    static void ForceSetVehicleGroup(UObject* inDestination, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AIGS_VehicleBase*> CallCarsWithPassengersToPosition(const UObject* inWCO, FIGS_NoSpawnPointDefinition inCustomPassengers, FVector InPosition, EIGS_VehicleSpawnGroup inVehicleGroup, int32 inAmount, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AIGS_VehicleBase*> CallCarsToPosition(const UObject* inWCO, FVector InPosition, EIGS_VehicleSpawnGroup inVehicleGroup, int32 inAmount, int32 inMinPassengers, int32 inMaxPassengers);
    
};

