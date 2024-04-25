#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HeatMapBasePawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HEATMAPSRUNTIME_API UIGS_HeatMapBasePawnComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_HeatMapBasePawnComponent(const FObjectInitializer& ObjectInitializer);

};

