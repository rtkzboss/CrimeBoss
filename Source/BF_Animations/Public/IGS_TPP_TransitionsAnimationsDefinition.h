#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_TransitionsAnimationsDefinition.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_TPP_TransitionsAnimationsDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToWalkL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToWalkCrouchL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToWalkR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToWalkCrouchR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToIdleL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToIdleR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToIdleL_Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* TransitionToIdleR_Crouch;
    
    FIGS_TPP_TransitionsAnimationsDefinition();
};

