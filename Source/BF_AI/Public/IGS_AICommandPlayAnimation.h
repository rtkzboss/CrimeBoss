#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "GameplayTagContainer.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandPlayAnimation.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandPlayAnimation : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder LookAt;
    
    UIGS_AICommandPlayAnimation();

};

