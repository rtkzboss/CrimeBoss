#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_MenuBackgroundBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_MenuBackgroundBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_MenuBackgroundBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTodayBetweenDates(int32 dayFrom, int32 monthFrom, int32 yearFrom, int32 dayTo, int32 monthTo, int32 yearTo);
    
};

