#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableInventoryObjectBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_MeleeWeaponInventoryObject.generated.h"

class UMETA_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_MeleeWeaponInventoryObject : public UIGS_WieldableInventoryObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> WeaponDefinitionObject;
    
    UIGS_MeleeWeaponInventoryObject();

};

