#pragma once
#include "CoreMinimal.h"
#include "ClassWeightPair.generated.h"

class UCustomizableObjectPopulationClass;

USTRUCT(BlueprintType)
struct FClassWeightPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObjectPopulationClass* Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClassWeight;
    
    CUSTOMIZABLEOBJECTPOPULATION_API FClassWeightPair();
};

