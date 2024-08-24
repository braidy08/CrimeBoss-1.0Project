#include "IGS_TextChatManager.h"

UIGS_TextChatManager::UIGS_TextChatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bChatOpen = false;
}

void UIGS_TextChatManager::Server_SendTextChatMessage_Implementation(const FText& inMessage, const FString& inPlayerName, int32 inHeisterNum) {
}
bool UIGS_TextChatManager::Server_SendTextChatMessage_Validate(const FText& inMessage, const FString& inPlayerName, int32 inHeisterNum) {
    return true;
}

void UIGS_TextChatManager::OpenChat() {
}

void UIGS_TextChatManager::Multicast_SendTextChatMessage_Implementation(const FText& inMessage, const FString& inPlayerName, int32 inHeisterNum) {
}

UIGS_TextChatManager* UIGS_TextChatManager::GetTextChatManager(UObject* inWCO) {
    return NULL;
}

void UIGS_TextChatManager::CloseChat() {
}


