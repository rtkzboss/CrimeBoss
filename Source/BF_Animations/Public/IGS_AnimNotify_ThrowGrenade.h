#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "IGS_AnimNotify_ThrowGrenade.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_ThrowGrenade : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Throw_Low;
    
    UIGS_AnimNotify_ThrowGrenade();

};

