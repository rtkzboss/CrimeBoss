#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_WieldableSlot.generated.h"

class AIGS_WieldableBase;
class UIGS_WieldableInventoryObjectBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_WieldableSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_WieldableBase> WieldableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_WieldableInventoryObjectBase> InventoryObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WieldableSlot SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPendingRemoval;
    
    FIGS_WieldableSlot();
};

