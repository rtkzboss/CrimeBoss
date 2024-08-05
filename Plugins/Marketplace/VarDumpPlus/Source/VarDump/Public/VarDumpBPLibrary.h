#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VarDumpBPLibrary.generated.h"

UCLASS(Blueprintable)
class VARDUMP_API UVarDumpBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVarDumpBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void VarDumpFunction(UClass* Input, const FString& CallerName, bool isUpdate);
    
};

