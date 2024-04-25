#pragma once
#include "CoreMinimal.h"
#include "PopulationClassParameterOptions.h"
#include "PopulationClassParameter.generated.h"

USTRUCT(BlueprintType)
struct FPopulationClassParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPopulationClassParameterOptions> ParameterOptions;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FPopulationClassParameter();
};

