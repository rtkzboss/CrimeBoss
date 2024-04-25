#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaybackAICharactersEventsWatcher.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackAICharactersEventsWatcher : public UActorComponent {
    GENERATED_BODY()
public:
    UPaybackAICharactersEventsWatcher(const FObjectInitializer& ObjectInitializer);

};

