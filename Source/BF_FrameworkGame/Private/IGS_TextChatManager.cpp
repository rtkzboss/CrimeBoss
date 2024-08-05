#include "IGS_TextChatManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_TextChatManager::UIGS_TextChatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_TextChatManager::Server_SendTextChatMessageTextOnly_Implementation(const FText& inMessage) {
}
bool UIGS_TextChatManager::Server_SendTextChatMessageTextOnly_Validate(const FText& inMessage) {
    return true;
}

void UIGS_TextChatManager::Server_SendTextChatMessage_Implementation(const FText& inMessage, const FString& inPlayerName, const FString& inUserId, int32 inHeisterNum, const TArray<FString>& inSenderBlockedUsersList) {
}
bool UIGS_TextChatManager::Server_SendTextChatMessage_Validate(const FText& inMessage, const FString& inPlayerName, const FString& inUserId, int32 inHeisterNum, const TArray<FString>& inSenderBlockedUsersList) {
    return true;
}

void UIGS_TextChatManager::SendLocalTextChatMessage(const FText& inMessage) {
}

void UIGS_TextChatManager::OpenChat() {
}

void UIGS_TextChatManager::Multicast_SendTextChatMessageTextOnly_Implementation(const FText& inMessage) {
}

void UIGS_TextChatManager::Multicast_SendTextChatMessage_Implementation(const FText& inMessage, const FString& inPlayerName, const FString& inUserId, int32 inHeisterNum, const TArray<FString>& inSenderBlockedUsersList) {
}

UIGS_TextChatManager* UIGS_TextChatManager::GetTextChatManager(UObject* inWCO) {
    return NULL;
}

void UIGS_TextChatManager::CloseChat() {
}


