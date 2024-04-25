#pragma once
#include "CoreMinimal.h"
#include "META_PlotlineAssetMaterialSlots.h"
#include "META_PlotlineAssetMaterialStructure.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlotlineAssetMaterialStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMeshComponent*, FMETA_PlotlineAssetMaterialSlots> MaterialStructure;
    
    FMETA_PlotlineAssetMaterialStructure();
};

