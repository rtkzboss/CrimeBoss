#pragma once
#include "CoreMinimal.h"
#include "FParameterOptionsTags.generated.h"

USTRUCT(BlueprintType)
struct FFParameterOptionsTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    CUSTOMIZABLEOBJECT_API FFParameterOptionsTags();
};

