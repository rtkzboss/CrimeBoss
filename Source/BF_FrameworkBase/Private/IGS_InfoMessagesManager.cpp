#include "IGS_InfoMessagesManager.h"

UIGS_InfoMessagesManager::UIGS_InfoMessagesManager() {
}

UIGS_InfoMessagesManager* UIGS_InfoMessagesManager::Instance(const UObject* inWorldContextObject) {
    return NULL;
}

void UIGS_InfoMessagesManager::AddItemAddedMessage(UIGS_InventoryObjectFramework* inItem) {
}

void UIGS_InfoMessagesManager::AddInfoMessage(const FText& InText, EIGS_InfoMessageType inMessageType, int32 inHeisterID) {
}


