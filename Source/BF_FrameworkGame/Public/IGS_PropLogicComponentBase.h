#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_PropLogicComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PropLogicComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_PropLogicComponentBase(const FObjectInitializer& ObjectInitializer);

};

