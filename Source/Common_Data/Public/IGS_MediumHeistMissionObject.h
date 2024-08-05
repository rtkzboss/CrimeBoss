#pragma once
#include "CoreMinimal.h"
#include "IGS_BaseMissionObject.h"
#include "IGS_MediumHeistMissionObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_MediumHeistMissionObject : public UIGS_BaseMissionObject {
    GENERATED_BODY()
public:
    UIGS_MediumHeistMissionObject();

};

