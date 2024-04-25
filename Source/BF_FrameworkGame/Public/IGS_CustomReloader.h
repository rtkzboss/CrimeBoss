#pragma once
#include "CoreMinimal.h"
#include "IGS_ReloaderBase.h"
#include "IGS_CustomReloader.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CustomReloader : public UIGS_ReloaderBase {
    GENERATED_BODY()
public:
    UIGS_CustomReloader(const FObjectInitializer& ObjectInitializer);

};

