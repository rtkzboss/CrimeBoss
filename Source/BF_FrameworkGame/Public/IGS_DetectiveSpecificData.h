#pragma once
#include "CoreMinimal.h"
#include "IGS_AIUnitBaseDataModifiers.h"
#include "IGS_DetectiveSpecificData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_DetectiveSpecificData : public FIGS_AIUnitBaseDataModifiers {
    GENERATED_BODY()
public:
    FIGS_DetectiveSpecificData();
};

