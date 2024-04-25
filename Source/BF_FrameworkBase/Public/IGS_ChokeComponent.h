#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "IGS_ChokeComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_ChokeComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UIGS_ChokeComponent(const FObjectInitializer& ObjectInitializer);

};

