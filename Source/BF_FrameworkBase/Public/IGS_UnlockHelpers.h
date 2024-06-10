#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_UnlockStats.h"
#include "IGS_UnlockHelpers.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_UnlockHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_UnlockHelpers();

    UFUNCTION(BlueprintCallable)
    static void PrintUnlockStats(UObject* inWCO, const FIGS_UnlockStats& inOutUnlockStats, int32 inSimulationsCount);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_UnlockItemInfo> GetAllWeaponSkinsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag, const TArray<FIGS_UnlockItemInfo>& inUnlockItems);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_UnlockItemInfo> GetAllWeaponsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag, const TArray<FIGS_UnlockItemInfo>& inUnlockItems);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllSubItemsFromItemTagID(UObject* inWCO, const FGameplayTag& inTagID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_UnlockItemInfo> GetAllBaseWeaponsOfFamilyFromWeapons(const TArray<FIGS_UnlockItemInfo>& inUnlockItems);
    
    UFUNCTION(BlueprintCallable)
    static void AddUnlockStats(UObject* inWCO, UPARAM(Ref) FIGS_UnlockStats& inOutUnlockStats, const FIGS_UnlockItemInfo& inUnlockItemInfo, int32 inLevel);
    
};

