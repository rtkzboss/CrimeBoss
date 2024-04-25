#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLootCollectionRegisteredDelegate.generated.h"

class AIGS_LootCollectionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnLootCollectionRegistered, AIGS_LootCollectionBase*, inLootCollection);

