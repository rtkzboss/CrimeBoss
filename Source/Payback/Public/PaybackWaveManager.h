#pragma once
#include "CoreMinimal.h"
#include "IGS_WaveManager.h"
#include "PaybackWaveManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackWaveManager : public UIGS_WaveManager {
    GENERATED_BODY()
public:
    UPaybackWaveManager(const FObjectInitializer& ObjectInitializer);

};

