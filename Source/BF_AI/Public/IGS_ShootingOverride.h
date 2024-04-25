#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "EIGS_ShootingOverrideType.h"
#include "IGS_ShootingOverride.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ShootingOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ShootingOverrideType ShootingType;
    
    BF_AI_API FIGS_ShootingOverride();
};

