#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IGS_GameAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BF_FRAMEWORKGAME_API UIGS_GameAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_GameAnimInstance();

};

