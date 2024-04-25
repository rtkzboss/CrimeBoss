#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_VehicleDestinationInfo.generated.h"

class AIGS_VehicleDestinationArea;
class AIGS_VehicleDestinationPoint;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_VehicleDestinationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_VehicleDestinationPoint* DestinationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_VehicleDestinationArea* DestinationArea;
    
    FIGS_VehicleDestinationInfo();
};

