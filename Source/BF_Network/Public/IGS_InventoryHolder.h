#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryHolder.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct FIGS_InventoryHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_InventoryObjectFramework> InventoryObjectFramework;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    BF_NETWORK_API FIGS_InventoryHolder();
};

