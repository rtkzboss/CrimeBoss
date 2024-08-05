#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveComponentType.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupSpawn.generated.h"

class AIGS_PickupActorInventoryItem;
class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PickupSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PickupActorInventoryItem> PickupBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> ItemPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ObjectiveComponentType ObjectiveType;
    
    FIGS_PickupSpawn();
};

