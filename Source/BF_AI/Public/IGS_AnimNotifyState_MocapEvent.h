#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "IGS_AnimNotifyState_MocapEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BF_AI_API UIGS_AnimNotifyState_MocapEvent : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UIGS_AnimNotifyState_MocapEvent();

};

