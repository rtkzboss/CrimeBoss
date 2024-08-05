#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_VisbilityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_VisbilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_VisbilityComponent(const FObjectInitializer& ObjectInitializer);

};

