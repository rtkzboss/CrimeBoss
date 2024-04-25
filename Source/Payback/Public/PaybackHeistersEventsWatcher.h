#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaybackHeistersEventsWatcher.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackHeistersEventsWatcher : public UActorComponent {
    GENERATED_BODY()
public:
    UPaybackHeistersEventsWatcher(const FObjectInitializer& ObjectInitializer);

};

