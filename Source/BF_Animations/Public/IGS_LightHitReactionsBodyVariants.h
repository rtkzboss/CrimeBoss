#pragma once
#include "CoreMinimal.h"
#include "IGS_LightHitReactionsBodyVariants.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_LightHitReactionsBodyVariants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> UpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> head;
    
    BF_ANIMATIONS_API FIGS_LightHitReactionsBodyVariants();
};

