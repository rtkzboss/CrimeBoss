#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_CoverZone.generated.h"

UCLASS(Blueprintable)
class COVERGENERATOR_API AIGS_CoverZone : public AVolume {
    GENERATED_BODY()
public:
    AIGS_CoverZone(const FObjectInitializer& ObjectInitializer);

};

