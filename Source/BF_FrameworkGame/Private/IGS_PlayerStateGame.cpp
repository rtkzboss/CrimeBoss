#include "IGS_PlayerStateGame.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_PlayerStateGame::AIGS_PlayerStateGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HeisterNumber = -1;
}

bool AIGS_PlayerStateGame::ShouldUsePlayerStateLoadout() {
    return false;
}

void AIGS_PlayerStateGame::SetHordeModeTokens(int32 inTokens) {
}

void AIGS_PlayerStateGame::SetHeisterLoadout(FCommonHeisterLoadout inLoadout) {
}

void AIGS_PlayerStateGame::SetCachedPlayerName(FText InName) {
}

void AIGS_PlayerStateGame::Server_SetIsReady_Implementation() {
}
bool AIGS_PlayerStateGame::Server_SetIsReady_Validate() {
    return true;
}

void AIGS_PlayerStateGame::Server_SetIsLevelLoaded_Implementation() {
}
bool AIGS_PlayerStateGame::Server_SetIsLevelLoaded_Validate() {
    return true;
}

void AIGS_PlayerStateGame::Server_SetIsJustLevelLoaded_Implementation() {
}
bool AIGS_PlayerStateGame::Server_SetIsJustLevelLoaded_Validate() {
    return true;
}

void AIGS_PlayerStateGame::SendTextChatMessageTextOnly_Implementation(const FText& inMessage) {
}
bool AIGS_PlayerStateGame::SendTextChatMessageTextOnly_Validate(const FText& inMessage) {
    return true;
}

void AIGS_PlayerStateGame::SendTextChatMessage_Implementation(const FText& InText, const FString& inUserId, const TArray<FString>& inBlockedUsersList) {
}
bool AIGS_PlayerStateGame::SendTextChatMessage_Validate(const FText& InText, const FString& inUserId, const TArray<FString>& inBlockedUsersList) {
    return true;
}

void AIGS_PlayerStateGame::OnRep_IsLevelLoaded() const {
}

void AIGS_PlayerStateGame::OnRep_IsJustLevelLoaded() const {
}

void AIGS_PlayerStateGame::OnRep_bIsReady() const {
}

void AIGS_PlayerStateGame::Multicast_HandleChatWheelReaction_Implementation(FGameplayTag inTag) {
}

void AIGS_PlayerStateGame::MessageToServer_SendPlayerData_Implementation(FIGS_PlayerStateData inPlayerData) {
}
bool AIGS_PlayerStateGame::MessageToServer_SendPlayerData_Validate(FIGS_PlayerStateData inPlayerData) {
    return true;
}

FUniqueNetIdRepl AIGS_PlayerStateGame::GetUniquePlayerID() {
    return FUniqueNetIdRepl{};
}

void AIGS_PlayerStateGame::GetTeammateStatus(float& outCurrentHP, float& outMaxHP, float& outRelativeHP, float& outRelativeShield, float& outRelativeArmor) const {
}

EIGS_StorePlatform AIGS_PlayerStateGame::GetStorePlatform() const {
    return EIGS_StorePlatform::None;
}

int32 AIGS_PlayerStateGame::GetHordeModeTokens() const {
    return 0;
}

FCommonHeisterData AIGS_PlayerStateGame::GetHeisterData() const {
    return FCommonHeisterData{};
}

void AIGS_PlayerStateGame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_PlayerStateGame, IsJustLevelLoaded);
    DOREPLIFETIME(AIGS_PlayerStateGame, IsLevelLoaded);
    DOREPLIFETIME(AIGS_PlayerStateGame, bIsReady);
    DOREPLIFETIME(AIGS_PlayerStateGame, PlayerStateData);
    DOREPLIFETIME(AIGS_PlayerStateGame, HeisterNumber);
}


