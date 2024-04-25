#include "IGS_GameInstanceFramework.h"
#include "Templates/SubclassOf.h"

UIGS_GameInstanceFramework::UIGS_GameInstanceFramework() {
    this->bComesFromMission = false;
}

void UIGS_GameInstanceFramework::StartMissionInternal_Implementation(const UObject* inWCO, TSubclassOf<UIGS_BaseMissionObject> inMissionID) {
}

void UIGS_GameInstanceFramework::StartMission(const UObject* inWCO, TSubclassOf<UIGS_BaseMissionObject> inMissionID) {
}

void UIGS_GameInstanceFramework::ServerTravel(const UObject* inWCO, const FString& inLevelName, bool inAbsolute) {
}

void UIGS_GameInstanceFramework::QuitToMeta_Implementation(const UObject* inWCO, ECommonMissionResult inMissionResult) {
}

void UIGS_GameInstanceFramework::QuitToLobby_Implementation(const UObject* inWCO, ECommonMissionResult inMissionResult) {
}


bool UIGS_GameInstanceFramework::OnWindowCloseRequested_Implementation() {
    return false;
}






bool UIGS_GameInstanceFramework::IsTextChatAllowed_Implementation() {
    return false;
}

bool UIGS_GameInstanceFramework::IsMissionEndIgnored(const UObject* inWCO) {
    return false;
}

void UIGS_GameInstanceFramework::IgnoreMissionEnd(const UObject* inWCO, bool inIgnoreMissionEnd) {
}

EIGS_PlatformServerConnectionStatus UIGS_GameInstanceFramework::GetPlatformServerConnectionStatus() const {
    return EIGS_PlatformServerConnectionStatus::Unknown;
}

void UIGS_GameInstanceFramework::FinishMissionInternal_Implementation(const UObject* inWCO, ECommonMissionResult inMissionResult) {
}

void UIGS_GameInstanceFramework::FinishMission(const UObject* inWCO, ECommonMissionResult inMissionResult) {
}


void UIGS_GameInstanceFramework::CreateLoadingFader(const UObject* inWCO) {
}


