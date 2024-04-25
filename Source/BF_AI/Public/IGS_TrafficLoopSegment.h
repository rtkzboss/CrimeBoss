#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficLoopSegment.generated.h"

class UIGS_TrafficPathComponent;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_TrafficLoopSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TrafficPathComponent* Segment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reversed;
    
    FIGS_TrafficLoopSegment();
};

