#include "IGS_MenuWidgetManager.h"

UIGS_MenuWidgetManager::UIGS_MenuWidgetManager() {
    this->bAlreadyReset = false;
}

void UIGS_MenuWidgetManager::UnregisterWidget(UIGS_MenuScreenWidget* InWidget) {
}

void UIGS_MenuWidgetManager::RegisterWidget(UIGS_MenuScreenWidget* InWidget) {
}

UIGS_MenuWidgetManager* UIGS_MenuWidgetManager::Instance(const UObject* inWorldContextObject) {
    return NULL;
}

UIGS_MenuScreenWidget* UIGS_MenuWidgetManager::GetWidgetByTag(FGameplayTag inTag) {
    return NULL;
}


