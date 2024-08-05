#pragma once
#include "CoreMinimal.h"
#include "IGS_LootSpawnedSignatureDelegate.generated.h"

class AIGS_LootCollectionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootSpawnedSignature, AIGS_LootCollectionBase*, inLootCollection);

