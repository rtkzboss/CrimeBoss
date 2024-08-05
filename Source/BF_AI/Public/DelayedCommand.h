#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DelayedCommand.generated.h"

class UIGS_AICommand;

USTRUCT(BlueprintType)
struct FDelayedCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* AICommand;
    
    BF_AI_API FDelayedCommand();
};

