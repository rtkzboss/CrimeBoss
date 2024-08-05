#pragma once
#include "CoreMinimal.h"
#include "IGS_FirstPersonAdditiveAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonAdditiveAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ShootAdditive;
    
    FIGS_FirstPersonAdditiveAnimations();
};

