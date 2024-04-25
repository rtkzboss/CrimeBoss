#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AIReactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AIReactionComponent(const FObjectInitializer& ObjectInitializer);

};

