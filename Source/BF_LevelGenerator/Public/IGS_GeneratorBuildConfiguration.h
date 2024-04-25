#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"
#include "IGS_GeneratorBuildConfiguration.generated.h"

class UIGS_BuildConfigurationDataAsset;

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_GeneratorBuildConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_BuildConfigurationDataAsset* BuildConfigurationDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ConnectionPointData> Cooked_ConnectionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_VariantDefinition> Cooked_Variants;
    
    UIGS_GeneratorBuildConfiguration();

};

