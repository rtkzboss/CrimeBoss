#pragma once
#include "CoreMinimal.h"
#include "IGS_SentryControllerPlayerBase.h"
#include "IGS_SentryCameraPlayerController.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_SentryCameraPlayerController : public AIGS_SentryControllerPlayerBase {
    GENERATED_BODY()
public:
    AIGS_SentryCameraPlayerController(const FObjectInitializer& ObjectInitializer);

};

