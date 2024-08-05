#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "IGS_CustomBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CustomBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UIGS_CustomBoxComponent(const FObjectInitializer& ObjectInitializer);

};

