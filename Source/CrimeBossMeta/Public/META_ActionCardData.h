#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardStrength.h"
#include "EMETA_ActionCardTheme.h"
#include "META_ActionCardStrengthValues.h"
#include "META_ActionCardData.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_ActionCardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ActionCardTheme Theme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActionCardWithDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexOfDurationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ActionCardStrength, FMETA_ActionCardStrengthValues> Strength;
    
    FMETA_ActionCardData();
};

