#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPSteamWorkshopID.h"
#include "AdvancedSteamWorkshopLibrary.generated.h"

UCLASS(Blueprintable)
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedSteamWorkshopLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32& NumberOfItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetNumSubscribedWorkshopItems(int32& NumberOfItems);
    
};

