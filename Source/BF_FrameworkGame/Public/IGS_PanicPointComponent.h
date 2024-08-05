#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PanicPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PanicPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PanicPointComponent(const FObjectInitializer& ObjectInitializer);

};

