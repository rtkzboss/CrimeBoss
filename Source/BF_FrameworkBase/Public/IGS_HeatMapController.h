#pragma once
#include "CoreMinimal.h"
#include "IGS_HeatMapBasePawnComponent.h"
#include "IGS_HeatMapController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_HeatMapController : public UIGS_HeatMapBasePawnComponent {
    GENERATED_BODY()
public:
    UIGS_HeatMapController(const FObjectInitializer& ObjectInitializer);

};

