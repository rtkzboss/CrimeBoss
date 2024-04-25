#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ChainManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ChainManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ChainManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

