#pragma once
#include "CoreMinimal.h"
#include "IGS_LightHitReactionsBodyVariants.h"
#include "IGS_LightHitReactionsVariant.generated.h"

USTRUCT(BlueprintType)
struct FIGS_LightHitReactionsVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsBodyVariants Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsBodyVariants Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsBodyVariants Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsBodyVariants Left;
    
    BF_ANIMATIONS_API FIGS_LightHitReactionsVariant();
};

