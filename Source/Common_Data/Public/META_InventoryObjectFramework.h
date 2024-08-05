#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "META_InventoryObjectFramework.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UMETA_InventoryObjectFramework : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UMETA_InventoryObjectFramework();

};

