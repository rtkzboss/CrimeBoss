#pragma once
#include "CoreMinimal.h"
#include "IGS_VariantDefinition.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_VariantDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FIGS_VariantDefinition();
};

