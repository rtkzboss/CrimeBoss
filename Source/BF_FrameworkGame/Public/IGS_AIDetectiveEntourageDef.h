#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "IGS_AIDetectiveEntourageDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIDetectiveEntourageDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UnitSpecialization Specialization;
    
    FIGS_AIDetectiveEntourageDef();
};

