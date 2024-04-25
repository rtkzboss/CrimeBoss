#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SafePointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SafePointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SafePointComponent(const FObjectInitializer& ObjectInitializer);

};

