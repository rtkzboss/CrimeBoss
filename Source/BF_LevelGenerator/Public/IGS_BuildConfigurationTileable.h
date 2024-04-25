#pragma once
#include "CoreMinimal.h"
#include "IGS_BuildConfigurationTileable.generated.h"

class UIGS_BuildConfigurationDataAsset;

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_BuildConfigurationTileable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_BuildConfigurationDataAsset* BuildConfigurationDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariantIndex;
    
    FIGS_BuildConfigurationTileable();
};

