#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_FakeDirectionalLight.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_RENDERING_API UIGS_FakeDirectionalLight : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_FakeDirectionalLight(const FObjectInitializer& ObjectInitializer);

};

