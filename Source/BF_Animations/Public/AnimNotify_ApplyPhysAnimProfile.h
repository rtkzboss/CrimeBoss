#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_ApplyPhysAnimProfile.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BF_ANIMATIONS_API UAnimNotify_ApplyPhysAnimProfile : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysBodyName;
    
    UAnimNotify_ApplyPhysAnimProfile();

};

