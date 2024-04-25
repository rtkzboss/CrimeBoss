#pragma once
#include "CoreMinimal.h"
#include "IGS_MovableVehicleGroupData.generated.h"

class AIGS_VehicleBase;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_MovableVehicleGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_VehicleBase> Vehicle;
    
    FIGS_MovableVehicleGroupData();
};

