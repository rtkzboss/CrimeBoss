#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "IGS_AISpawnGroupChooserRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AISpawnGroupChooserRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UIGS_AISpawnGroupChooserRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

