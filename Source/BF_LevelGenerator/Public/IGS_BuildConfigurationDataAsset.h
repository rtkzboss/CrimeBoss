#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"
#include "IGS_BuildConfigurationDataAsset.generated.h"

class UWorld;

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_BuildConfigurationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ConnectionPointData> ConnectionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_VariantDefinition> Variants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UIGS_BuildConfigurationDataAsset();

};

