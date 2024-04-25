#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "IGS_WaypointRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_WaypointRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UIGS_WaypointRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

