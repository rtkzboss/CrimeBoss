#pragma once
#include "CoreMinimal.h"
#include "IGS_LinkedGraphDefinition.generated.h"

class UIGS_LinkedAnimInstance;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_LinkedGraphDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_LinkedAnimInstance> LinkedAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GraphTag;
    
    FIGS_LinkedGraphDefinition();
};

