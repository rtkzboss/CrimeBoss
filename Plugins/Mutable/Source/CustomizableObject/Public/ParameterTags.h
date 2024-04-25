#pragma once
#include "CoreMinimal.h"
#include "FParameterOptionsTags.h"
#include "ParameterTags.generated.h"

USTRUCT(BlueprintType)
struct FParameterTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFParameterOptionsTags> ParameterOptions;
    
    CUSTOMIZABLEOBJECT_API FParameterTags();
};

