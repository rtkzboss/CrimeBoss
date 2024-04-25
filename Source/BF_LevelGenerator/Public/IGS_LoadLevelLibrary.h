#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_LoadLevelLibrary.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_LoadLevelLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_LoadLevelLibrary();

};

