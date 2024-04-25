#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SquadHeistersComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SquadHeistersComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SquadHeistersComponent(const FObjectInitializer& ObjectInitializer);

};

