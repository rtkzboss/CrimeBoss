#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "IGS_CharacterAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_CharacterAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FIGS_CharacterAnimInstanceProxy();
};

