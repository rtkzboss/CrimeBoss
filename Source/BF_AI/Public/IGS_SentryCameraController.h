#pragma once
#include "CoreMinimal.h"
#include "IGS_SentryControllerBase.h"
#include "IGS_SentryCameraController.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_SentryCameraController : public AIGS_SentryControllerBase {
    GENERATED_BODY()
public:
    AIGS_SentryCameraController(const FObjectInitializer& ObjectInitializer);

};

