#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "GameplayTagContainer.h"
#include "EIGS_CarSeatVariant.h"
#include "EIGS_CarType.h"
#include "IGS_NetTransform.h"
#include "IGS_ReplicationAnimationDataHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReplicationAnimationDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MontageVariationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NetTransform EventTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AnimationTaskFinishedReason FinishReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CarType CarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CarSeatVariant SeatVariant;
    
    BF_NETWORK_API FIGS_ReplicationAnimationDataHolder();
};

