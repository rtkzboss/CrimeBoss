#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_AmmoBoxItem.h"
#include "IGS_AmmoPickupManager.generated.h"

class AIGS_GameCharacterFramework;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AmmoPickupManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_AmmoPickupManager();

    UFUNCTION(BlueprintCallable)
    static void SpawnSpecificAmmoBox(UObject* inWCO, EIGS_AmmoBoxItem inBoxID, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnAmmoBox(AIGS_GameCharacterFramework* inInstigator, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SetWeaponPickupsEnabled(UObject* inWCO, bool inState);
    
    UFUNCTION(BlueprintCallable)
    static void SetAmmoBoxesEnabled(UObject* inWCO, bool inState);
    
};

