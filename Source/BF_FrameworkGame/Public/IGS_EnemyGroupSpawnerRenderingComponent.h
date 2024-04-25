#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "IGS_EnemyGroupSpawnerRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_EnemyGroupSpawnerRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UIGS_EnemyGroupSpawnerRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

