#pragma once
#include "CoreMinimal.h"
#include "META_InventoryObjectFramework.h"
#include "META_WeaponInventoryObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UMETA_WeaponInventoryObject : public UMETA_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UMETA_WeaponInventoryObject();

};

