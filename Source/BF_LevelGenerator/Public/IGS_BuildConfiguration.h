#pragma once
#include "CoreMinimal.h"
#include "IGS_CachedBuildConfiguration.h"
#include "IGS_BuildConfiguration.generated.h"

class UIGS_BuildConfigurationDataAsset;

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_BuildConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_BuildConfigurationDataAsset> BuildConfigurationDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_BuildConfigurationDataAsset* BuildConfigurationDataAsset_Holder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CachedBuildConfiguration CachedBuildConfiguration;
    
    FIGS_BuildConfiguration();
};

