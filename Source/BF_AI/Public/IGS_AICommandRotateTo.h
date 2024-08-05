#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandRotateTo.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandRotateTo : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder LookAt;
    
    UIGS_AICommandRotateTo();

};

