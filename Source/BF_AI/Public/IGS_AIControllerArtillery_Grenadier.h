#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerArtillery_Base.h"
#include "IGS_AIControllerArtillery_Grenadier.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerArtillery_Grenadier : public AIGS_AIControllerArtillery_Base {
    GENERATED_BODY()
public:
    AIGS_AIControllerArtillery_Grenadier(const FObjectInitializer& ObjectInitializer);

};

