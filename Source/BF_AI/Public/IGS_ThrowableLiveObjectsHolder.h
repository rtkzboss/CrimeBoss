#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableLiveObjectsHolder.generated.h"

class UIGS_ThrowableInventoryObject;

USTRUCT(BlueprintType)
struct FIGS_ThrowableLiveObjectsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ThrowableInventoryObject* InventoryObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Projectile;
    
    BF_AI_API FIGS_ThrowableLiveObjectsHolder();
};

