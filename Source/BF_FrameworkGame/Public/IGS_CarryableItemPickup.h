#pragma once
#include "CoreMinimal.h"
#include "IGS_StaticMeshInventoryItemPickup.h"
#include "IGS_CarryableItemPickup.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_CarryableItemPickup : public AIGS_StaticMeshInventoryItemPickup {
    GENERATED_BODY()
public:
    AIGS_CarryableItemPickup(const FObjectInitializer& ObjectInitializer);

};

