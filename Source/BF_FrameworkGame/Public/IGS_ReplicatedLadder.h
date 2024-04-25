#pragma once
#include "CoreMinimal.h"
#include "IGS_ReplicatedLadder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReplicatedLadder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LadderInputAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LadderInputIsUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderPosition;
    
    BF_FRAMEWORKGAME_API FIGS_ReplicatedLadder();
};

