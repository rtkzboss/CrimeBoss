#include "IGS_PlayerStatusWidgetManager.h"

UIGS_PlayerStatusWidgetManager::UIGS_PlayerStatusWidgetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterOwner = NULL;
    this->OwnerOutlineComponent = NULL;
    this->LocalPlayerCharacter = NULL;
}


