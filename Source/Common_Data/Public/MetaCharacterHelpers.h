#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MetaCharacterHelpers.generated.h"

class UMETA_Character;

UCLASS(Blueprintable)
class COMMON_DATA_API UMetaCharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMetaCharacterHelpers();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> SortPurchasableCharacters(TArray<UMETA_Character*> inCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> SortOwnedCharacters(TArray<UMETA_Character*> inCharacters);
    
};

