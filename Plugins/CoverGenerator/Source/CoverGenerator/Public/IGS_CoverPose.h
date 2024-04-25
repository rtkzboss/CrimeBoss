#pragma once
#include "CoreMinimal.h"
#include "IGS_ListWrapper.h"
#include "IGS_CoverPose.generated.h"

USTRUCT(BlueprintType)
struct COVERGENERATOR_API FIGS_CoverPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ListWrapper> ShootRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ListWrapper> LeftSideStepShootRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ListWrapper> RightSideStepShootRanges;
    
    FIGS_CoverPose();
};

