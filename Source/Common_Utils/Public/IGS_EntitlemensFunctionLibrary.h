#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "IGS_EntitlemensFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_EntitlemensFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_EntitlemensFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsUserEntitledTo(const UObject* inWCO, FGameplayTag inGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static void GetEntitlementOwnedSavedDiff(const UObject* inWCO, const TArray<FGameplayTag> inOwnedEntitlements, const TArray<FGameplayTag> inSavedEntitlements, bool& outAnyMissingInSave, bool& outAnyMissingCurrent);
    
};

