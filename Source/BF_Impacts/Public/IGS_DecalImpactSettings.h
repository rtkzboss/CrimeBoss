#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactSettings.h"
#include "IGS_DecalImpactSettings.generated.h"

class UIGS_DecalImpactDataAsset;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_DecalImpactSettings : public FIGS_ImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_DecalImpactDataAsset> DecalImpactDataPath;
    
    FIGS_DecalImpactSettings();
};

