#pragma once
#include "CoreMinimal.h"
#include "IGS_CoverPointDataHolder.h"
#include "IGS_CoverVariant.generated.h"

USTRUCT(BlueprintType)
struct BF_COVERS_API FIGS_CoverVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_CoverPointDataHolder> CoverPointDataHolders;
    
    FIGS_CoverVariant();
};

