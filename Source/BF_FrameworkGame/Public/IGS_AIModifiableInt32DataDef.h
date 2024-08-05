#pragma once
#include "CoreMinimal.h"
#include "IGS_AIModifiableDataDef.h"
#include "IGS_AIModifiableInt32DataDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIModifiableInt32DataDef : public FIGS_AIModifiableDataDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Overload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FIGS_AIModifiableInt32DataDef();
};

