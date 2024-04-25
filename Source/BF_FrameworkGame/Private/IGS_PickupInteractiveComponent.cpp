#include "IGS_PickupInteractiveComponent.h"
#include "Templates/SubclassOf.h"

UIGS_PickupInteractiveComponent::UIGS_PickupInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLocallyAlreadyUsed = false;
    this->ItemClassToAdd = NULL;
    this->ItemWeaponDefinition = NULL;
    this->WeaponSkin = NULL;
    this->WeaponSpecificSkin = NULL;
    this->GlobalItemCount = 1;
    this->bHandleInteractionName = false;
    this->DefaultPickupAkEvent = NULL;
}


void UIGS_PickupInteractiveComponent::Setup(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, int32 inGlobalItemCount) {
}





