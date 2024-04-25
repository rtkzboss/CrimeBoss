#pragma once
#include "CoreMinimal.h"
#include "IGS_SentryControllerBase.h"
#include "IGS_SentryGunController.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_SentryGunController : public AIGS_SentryControllerBase {
    GENERATED_BODY()
public:
    AIGS_SentryGunController(const FObjectInitializer& ObjectInitializer);

};

