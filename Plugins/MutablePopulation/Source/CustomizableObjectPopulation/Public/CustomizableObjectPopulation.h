#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ClassWeightPair.h"
#include "CustomizableObjectPopulation.generated.h"

class UCustomizableObjectInstance;
class UCustomizableObjectPopulationGenerator;

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECTPOPULATION_API UCustomizableObjectPopulation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClassWeightPair> ClassWeights;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObjectPopulationGenerator* Generator;
    
public:
    UCustomizableObjectPopulation();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void RegeneratePopulation(int32 Seed, TArray<UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GeneratePopulation(TArray<UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate) const;
    
};

