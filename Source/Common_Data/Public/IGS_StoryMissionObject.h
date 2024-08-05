#pragma once
#include "CoreMinimal.h"
#include "IGS_BaseMissionObject.h"
#include "IGS_StoryMissionObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_StoryMissionObject : public UIGS_BaseMissionObject {
    GENERATED_BODY()
public:
    UIGS_StoryMissionObject();

};

