#pragma once
#include "CoreMinimal.h"
#include "IGS_AchievementManagerBaseComponent.h"
#include "IGS_Quickplay_AchievementManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_AchievementManagerComponent : public UIGS_AchievementManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_AchievementManagerComponent(const FObjectInitializer& ObjectInitializer);

};

