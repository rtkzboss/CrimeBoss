#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_CoverHelpers.generated.h"

class UCoverPoint;
class UObject;
class UShapeComponent;

UCLASS(Blueprintable)
class BF_AI_API UIGS_CoverHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_CoverHelpers();

    UFUNCTION(BlueprintCallable)
    static void GetAllCoverInShape(const UObject* inWCO, UShapeComponent* Shape, TArray<UCoverPoint*>& outCovers, bool inOnlyManual);
    
};

