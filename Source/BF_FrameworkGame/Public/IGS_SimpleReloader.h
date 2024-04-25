#pragma once
#include "CoreMinimal.h"
#include "IGS_ReloaderBase.h"
#include "IGS_SimpleReloader.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SimpleReloader : public UIGS_ReloaderBase {
    GENERATED_BODY()
public:
    UIGS_SimpleReloader(const FObjectInitializer& ObjectInitializer);

};

