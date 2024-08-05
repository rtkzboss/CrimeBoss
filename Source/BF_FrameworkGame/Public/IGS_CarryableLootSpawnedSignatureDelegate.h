#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableLootSpawnedSignatureDelegate.generated.h"

class AIGS_StaticMeshInventoryItemPickup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CarryableLootSpawnedSignature, AIGS_StaticMeshInventoryItemPickup*, inLootCollection);

