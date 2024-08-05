#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_OnChargeCountChangedEventDelegate.h"
#include "IGS_OnKillCountChangedNativeDelegate.h"
#include "IGS_EquipmentInventoryObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_EquipmentInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnChargeCountChangedEvent OnChargeCountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnKillCountChangedNative OnKillCountChangedNative;
    
    UIGS_EquipmentInventoryObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastChargeTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastChargeKillCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHasInfiniteCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeCount() const;
    
};

