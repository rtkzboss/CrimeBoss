#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IGS_LinkedAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_LinkedAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_LinkedAnimInstance();

};

