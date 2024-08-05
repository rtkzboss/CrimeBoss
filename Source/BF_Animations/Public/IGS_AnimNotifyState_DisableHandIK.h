#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "IGS_AnimNotifyState_DisableHandIK.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BF_ANIMATIONS_API UIGS_AnimNotifyState_DisableHandIK : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeftHandIKdisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RightHandIKdisabled;
    
    UIGS_AnimNotifyState_DisableHandIK();

};

