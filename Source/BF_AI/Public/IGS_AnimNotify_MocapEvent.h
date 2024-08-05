#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "IGS_AnimNotify_MocapEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BF_AI_API UIGS_AnimNotify_MocapEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UIGS_AnimNotify_MocapEvent();

};

