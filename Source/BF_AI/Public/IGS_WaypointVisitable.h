#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointBase.h"
#include "IGS_WaypointVisitable.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_WaypointVisitable : public AIGS_WaypointBase {
    GENERATED_BODY()
public:
    AIGS_WaypointVisitable(const FObjectInitializer& ObjectInitializer);

};

