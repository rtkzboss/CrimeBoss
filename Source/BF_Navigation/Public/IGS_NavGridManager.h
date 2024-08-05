#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_NavGridManager.generated.h"

UCLASS(Blueprintable)
class BF_NAVIGATION_API UIGS_NavGridManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_NavGridManager();

};

