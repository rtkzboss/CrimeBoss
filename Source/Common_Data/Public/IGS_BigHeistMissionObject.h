#pragma once
#include "CoreMinimal.h"
#include "IGS_BaseMissionObject.h"
#include "IGS_BigHeistMissionObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_BigHeistMissionObject : public UIGS_BaseMissionObject {
    GENERATED_BODY()
public:
    UIGS_BigHeistMissionObject();

};

