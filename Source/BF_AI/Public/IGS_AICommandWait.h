#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandWait.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandWait : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder LookAt;
    
    UIGS_AICommandWait();

};

