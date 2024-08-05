#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_NavmeshFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_NavmeshFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_NavmeshFunctionLibrary();

};

