#pragma once
#include "CoreMinimal.h"
#include "IGS_FIK_Crouching_Properties.generated.h"

USTRUCT(BlueprintType)
struct FIGS_FIK_Crouching_Properties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftFoot_MaxRootBoneDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftFoot_RootBoneOffsetAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightFoot_MaxRootBoneDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightFoot_RootBoneOffsetAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRootBoneOffsetWhileMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRootBoneOffsetWhileNotMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRootDistanceRange;
    
    BF_ANIMATIONS_API FIGS_FIK_Crouching_Properties();
};

