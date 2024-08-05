#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RMAFoliageToolsFunctionLibrary.generated.h"

class AInstancedFoliageActor;

UCLASS(Blueprintable)
class RMAFOLIAGETOOLS_API URMAFoliageToolsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URMAFoliageToolsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInstancedFoliageActor* GetInstancedFoliageActor();
    
};

