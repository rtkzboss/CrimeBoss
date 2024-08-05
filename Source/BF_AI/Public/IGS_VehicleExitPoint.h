#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleExitPointFramework.h"
#include "IGS_VehicleExitPoint.generated.h"

class AIGS_TrafficSegment;

UCLASS(Blueprintable)
class BF_AI_API AIGS_VehicleExitPoint : public AIGS_VehicleExitPointFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VehicleGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_TrafficSegment* PossiblePath;
    
public:
    AIGS_VehicleExitPoint(const FObjectInitializer& ObjectInitializer);

};

