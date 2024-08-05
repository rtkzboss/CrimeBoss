#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficLoopSegment.h"
#include "IGS_TrafficLoop.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_TrafficLoop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_TrafficLoopSegment> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lenght;
    
    FIGS_TrafficLoop();
};

