#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "IGS_AnimNotifyState_CanNotAbortAnim.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BF_AI_API UIGS_AnimNotifyState_CanNotAbortAnim : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UIGS_AnimNotifyState_CanNotAbortAnim();

};

