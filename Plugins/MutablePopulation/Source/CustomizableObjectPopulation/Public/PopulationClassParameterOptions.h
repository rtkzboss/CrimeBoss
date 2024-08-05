#pragma once
#include "CoreMinimal.h"
#include "PopulationClassParameterOptions.generated.h"

USTRUCT(BlueprintType)
struct FPopulationClassParameterOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FPopulationClassParameterOptions();
};

