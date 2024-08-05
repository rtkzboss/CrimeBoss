#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "IGS_NavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NAVIGATION_API UIGS_NavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UIGS_NavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

