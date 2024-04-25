#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "IGS_LootpointRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_LootpointRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UIGS_LootpointRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

