#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizableObjectPopulationGenerator.generated.h"

class UCustomizableObject;

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECTPOPULATION_API UCustomizableObjectPopulationGenerator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomizableObject*> PopulationObjects;
    
public:
    UCustomizableObjectPopulationGenerator();

};

