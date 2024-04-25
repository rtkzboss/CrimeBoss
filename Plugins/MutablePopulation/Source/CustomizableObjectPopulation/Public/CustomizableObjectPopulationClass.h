#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizableObjectPopulationCharacteristic.h"
#include "CustomizableObjectPopulationClass.generated.h"

class UCustomizableObject;

UCLASS(Blueprintable)
class CUSTOMIZABLEOBJECTPOPULATION_API UCustomizableObjectPopulationClass : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizableObject* CustomizableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WhiteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Blacklist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizableObjectPopulationCharacteristic> Characteristics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    UCustomizableObjectPopulationClass();

};

