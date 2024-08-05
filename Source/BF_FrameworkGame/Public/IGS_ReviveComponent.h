#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_ReviveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ReviveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_ReviveComponent(const FObjectInitializer& ObjectInitializer);

};

