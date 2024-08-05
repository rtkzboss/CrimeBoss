#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "META_GenericCharactersNames.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_GenericCharactersNames : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MaleFirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FemaleFirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Surnames;
    
public:
    UMETA_GenericCharactersNames();

    UFUNCTION(BlueprintCallable)
    TArray<FText> GetSurnames();
    
    UFUNCTION(BlueprintCallable)
    FText GetRandomSurname();
    
    UFUNCTION(BlueprintCallable)
    FText GetRandomMaleFirstName();
    
    UFUNCTION(BlueprintCallable)
    FText GetRandomFemaleFirstName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetMaleNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetFemaleNames();
    
};

