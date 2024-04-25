#pragma once
#include "CoreMinimal.h"
#include "IGS_AIUnitBaseDataModifiers.h"
#include "IGS_AICopBaseDataModifiers.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICopBaseDataModifiers : public FIGS_AIUnitBaseDataModifiers {
    GENERATED_BODY()
public:
    FIGS_AICopBaseDataModifiers();
};

