#pragma once
#include "CoreMinimal.h"
#include "IGS_GenericItemsInventoryObject.h"
#include "IGS_LootItemInventoryObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_LootItemInventoryObject : public UIGS_GenericItemsInventoryObject {
    GENERATED_BODY()
public:
    UIGS_LootItemInventoryObject();

};

