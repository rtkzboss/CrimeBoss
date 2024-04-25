#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleDatabaseData.generated.h"

class AIGS_StaticVehicleBase;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehicleDatabaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_StaticVehicleBase> VehicleBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickProbability;
    
    FIGS_VehicleDatabaseData();
};

