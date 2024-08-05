#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTierDef.h"
#include "IGS_AIEmployeeBaseDataModifiers.h"
#include "IGS_AIEmployeeTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIEmployeeTierDef : public FIGS_AIBaseTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIEmployeeBaseDataModifiers Stats;
    
    FIGS_AIEmployeeTierDef();
};

