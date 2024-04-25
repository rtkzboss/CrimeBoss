#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_UnlockManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_UnlockManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_UnlockManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

