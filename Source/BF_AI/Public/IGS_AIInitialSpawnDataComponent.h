#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AIInitialSpawnDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIInitialSpawnDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AIInitialSpawnDataComponent(const FObjectInitializer& ObjectInitializer);

};

