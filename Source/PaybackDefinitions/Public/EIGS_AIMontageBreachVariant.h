#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIMontageBreachVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIMontageBreachVariant : uint8 {
    Breach_Unknown = 255,
    Breach_Left_1 = 0,
    Breach_Left_2,
    Breach_Left_3,
    Breach_Right_1,
    Breach_Right_2,
    Breach_Right_3,
    Place_Explosive_Left_01,
    Place_Explosive_Right_01,
    Throw_Grenade_Left_01,
    Throw_Grenade_Right_01,
    Breach_MAX_INDEX,
};

