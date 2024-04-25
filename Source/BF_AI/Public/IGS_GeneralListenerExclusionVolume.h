#pragma once
#include "CoreMinimal.h"
#include "IGS_BoxSphere.h"
#include "IGS_GeneralListenerExclusionVolume.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_GeneralListenerExclusionVolume : public AIGS_BoxSphere {
    GENERATED_BODY()
public:
    AIGS_GeneralListenerExclusionVolume(const FObjectInitializer& ObjectInitializer);

};

