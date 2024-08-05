#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitReactionAnimationsBodyParts.generated.h"

UENUM(BlueprintType)
enum class EIGS_HitReactionAnimationsBodyParts : uint8 {
    Ch_Front_UpperBody,
    Ch_Front_LowerBody,
    Ch_Front_Head,
    Ch_Right_UpperBody,
    Ch_Right_LowerBody,
    Ch_Right_Head,
    Ch_Back_UpperBody,
    Ch_Back_LowerBody,
    Ch_Back_Head,
    Ch_Left_UpperBody,
    Ch_Left_LowerBody,
    Ch_Left_Head,
    Ch_None,
};

