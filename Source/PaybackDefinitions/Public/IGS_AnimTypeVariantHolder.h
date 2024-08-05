#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIMontageType.h"
#include "IGS_AnimTypeVariantHolder.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_AnimTypeVariantHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AIMontageType MontageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MontageVariant;
    
    FIGS_AnimTypeVariantHolder();
};

