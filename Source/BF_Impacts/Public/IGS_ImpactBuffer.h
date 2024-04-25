#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactBuffer.generated.h"

class AIGS_ImpactBase;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ImpactBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_ImpactBase*> Impacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_ImpactBase> ImpactClass;
    
    FIGS_ImpactBuffer();
};

