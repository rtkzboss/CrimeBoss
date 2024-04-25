#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_InteractionStealthKillComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionStealthKillComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_InteractionStealthKillComponent(const FObjectInitializer& ObjectInitializer);

};

