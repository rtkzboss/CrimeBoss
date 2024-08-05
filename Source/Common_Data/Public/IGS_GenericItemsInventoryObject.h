#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_GenericItemsInventoryObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_GenericItemsInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemWeight LootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniversalID;
    
    UIGS_GenericItemsInventoryObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemWeightValue(EIGS_ItemWeight inWeight);
    
};

