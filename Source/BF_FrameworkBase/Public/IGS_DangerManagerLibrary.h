#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "IGS_DangerManagerLibrary.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_DamageTypeBase;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_DangerManagerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_DangerManagerLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnregisterCharacterFromDangerSystem(AIGS_GameCharacterFramework* Character);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterCharacterToDangerSystem(AIGS_GameCharacterFramework* Character, float DangerRadius, const TArray<TSubclassOf<UIGS_DamageTypeBase>>& DamageTypesToFear);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTemporaryDangerArea(UObject* WCO, const FVector& Location, float DangerRadius, const TSubclassOf<UIGS_DamageTypeBase>& DamageType, float Duration);
    
};

