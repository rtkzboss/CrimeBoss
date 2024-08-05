#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "IGS_NavigationHelpersLibrary.generated.h"

class UCapsuleComponent;
class UNavAreaBase;

UCLASS(Blueprintable)
class BF_NAVIGATION_API UIGS_NavigationHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_NavigationHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetNavArea(UCapsuleComponent* capsule, TSubclassOf<UNavAreaBase> navAreaClass);
    
};

