#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointFramework.h"
#include "IGS_SnipePoint.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SnipePoint : public AIGS_WaypointFramework {
    GENERATED_BODY()
public:
    AIGS_SnipePoint(const FObjectInitializer& ObjectInitializer);

};

