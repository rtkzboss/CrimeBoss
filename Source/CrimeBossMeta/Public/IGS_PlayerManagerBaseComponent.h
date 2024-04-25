#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_PlayerManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

