#pragma once
#include "CoreMinimal.h"
#include "IGS_AIModifiableDataDef.h"
#include "IGS_AIModifiableFloatDataDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIModifiableFloatDataDef : public FIGS_AIModifiableDataDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Overload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FIGS_AIModifiableFloatDataDef();
};

