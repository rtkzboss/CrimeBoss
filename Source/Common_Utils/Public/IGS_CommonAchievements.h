#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_CommonAchievements.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_CommonAchievements : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_CommonAchievements();

};

