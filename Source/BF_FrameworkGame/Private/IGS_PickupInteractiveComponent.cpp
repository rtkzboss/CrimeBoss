#include "IGS_PickupInteractiveComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Templates/SubclassOf.h"

UIGS_PickupInteractiveComponent::UIGS_PickupInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).GlobalItemCount = 1;
}


void UIGS_PickupInteractiveComponent::Setup(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, int32 inGlobalItemCount) {
}





