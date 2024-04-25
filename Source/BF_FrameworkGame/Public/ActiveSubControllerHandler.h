#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveSubControllerHandler.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UActiveSubControllerHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UActiveSubControllerHandler(const FObjectInitializer& ObjectInitializer);

};

