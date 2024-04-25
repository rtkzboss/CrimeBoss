#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_CoverVariant.h"
#include "IGS_CoverPointsDataAsset.generated.h"

UCLASS(Blueprintable)
class BF_COVERS_API UIGS_CoverPointsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_CoverVariant> CoverVariants;
    
    UIGS_CoverPointsDataAsset();

};

