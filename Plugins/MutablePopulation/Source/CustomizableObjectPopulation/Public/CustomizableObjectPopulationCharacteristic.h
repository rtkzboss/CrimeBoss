#pragma once
#include "CoreMinimal.h"
#include "CustomizableObjectPopulationConstraint.h"
#include "CustomizableObjectPopulationCharacteristic.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectPopulationCharacteristic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectPopulationConstraint> Constraints;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FCustomizableObjectPopulationCharacteristic();
};

