#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AchievementManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_AchievementManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AchievementManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

