#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_GadgetInventoryObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_GadgetInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UIGS_GadgetInventoryObject();

};

