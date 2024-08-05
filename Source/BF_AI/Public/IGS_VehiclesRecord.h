#pragma once
#include "CoreMinimal.h"
#include "IGS_VehiclesRecord.generated.h"

class UPFPathFollowerComponent;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehiclesRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPFPathFollowerComponent>> Vehicles;
    
    FIGS_VehiclesRecord();
};

