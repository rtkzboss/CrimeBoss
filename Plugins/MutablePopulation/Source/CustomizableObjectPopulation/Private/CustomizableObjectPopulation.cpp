#include "CustomizableObjectPopulation.h"

UCustomizableObjectPopulation::UCustomizableObjectPopulation() {
    this->Generator = NULL;
}

void UCustomizableObjectPopulation::RegeneratePopulation(int32 Seed, TArray<UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate) const {
}

int32 UCustomizableObjectPopulation::GeneratePopulation(TArray<UCustomizableObjectInstance*>& OutInstances, int32 NumInstancesToGenerate) const {
    return 0;
}


