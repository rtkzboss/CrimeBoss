#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_VehicleDatabaseData.h"
#include "IGS_VehicleGroupData.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehicleGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> Colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_VehicleDatabaseData> VehiclesData;
    
    FIGS_VehicleGroupData();
};

