#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_BaseMissionObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_BaseMissionObject : public UObject {
    GENERATED_BODY()
public:
    UIGS_BaseMissionObject();

};

