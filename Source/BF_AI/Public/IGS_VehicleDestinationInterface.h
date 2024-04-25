#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_VehicleDestinationInterface.generated.h"

class AIGS_VehicleBase;
class UIGS_TrafficPathComponent;

UINTERFACE(Blueprintable)
class BF_AI_API UIGS_VehicleDestinationInterface : public UInterface {
    GENERATED_BODY()
};

class BF_AI_API IIGS_VehicleDestinationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PathToDestinationIntrrupted(AIGS_VehicleBase* forVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UIGS_TrafficPathComponent*> FindLeavePath(UIGS_TrafficPathComponent* currSegment, EIGS_VehicleSplineGroup vehicleGroup);
    
};

