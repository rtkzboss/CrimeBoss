#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "IGS_AINavigationHelpersLibrary.generated.h"

class AIGS_RoomBase;
class UActorComponent;
class UNavigationQueryFilter;
class UObject;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AINavigationHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AINavigationHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateNavigationData(UActorComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectPointToNavigation(const UObject* inWCO, const FVector& inPoint, FVector& OutLocation, const FVector inQueryExtent, const bool inFilterFromWco, TSubclassOf<UNavigationQueryFilter> inFilterClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInDangerArea(const UObject* inWCO, const FVector InLocation, const float InRadius, const bool inAddCapsuleRadiusIfCharacterWco);
    
    UFUNCTION(BlueprintCallable)
    static void ForceEnableForNavigation(UStaticMeshComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    static void AffectNavigation(UStaticMeshComponent* comp, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddRoomConnection(AIGS_RoomBase* roomOne, AIGS_RoomBase* roomTwo);
    
};

