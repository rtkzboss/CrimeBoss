#include "IGS_InteractiveObjectsManager.h"

UIGS_InteractiveObjectsManager::UIGS_InteractiveObjectsManager() {
    this->bAlreadyReset = false;
}

void UIGS_InteractiveObjectsManager::UnregisterInteractiveComponent(UIGS_InteractiveComponent* InComponent) {
}

void UIGS_InteractiveObjectsManager::RegisterInteractiveComponent(UIGS_InteractiveComponent* InComponent) {
}

UIGS_InteractiveObjectsManager* UIGS_InteractiveObjectsManager::Instance(const UObject* inWorldContextObject) {
    return NULL;
}


