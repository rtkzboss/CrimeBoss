#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_InteractionListener.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionListener : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_InteractionListener(const FObjectInitializer& ObjectInitializer);

};

