#pragma once
#include "CoreMinimal.h"
#include "IGS_DecalContactShadowsSettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DecalContactShadowsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    BF_FRAMEWORKGAME_API FIGS_DecalContactShadowsSettings();
};

