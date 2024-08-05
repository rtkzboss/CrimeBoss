#pragma once
#include "CoreMinimal.h"
#include "EIGS_CrosshairType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CrosshairType : uint8 {
    None,
    Dot,
    LinesTriProng,
    LinesQuadProng,
    Arcs,
    Circle,
};

