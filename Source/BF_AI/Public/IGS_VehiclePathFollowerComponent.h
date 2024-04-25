#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFPathFollowerComponent.h"
#include "IGS_VehiclePathFollowerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_VehiclePathFollowerComponent : public UPFPathFollowerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AvoidanceDistanceRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AvoidanceStopCooldown;
    
public:
    UIGS_VehiclePathFollowerComponent(const FObjectInitializer& ObjectInitializer);

};

