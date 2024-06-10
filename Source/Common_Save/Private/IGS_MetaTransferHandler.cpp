#include "IGS_MetaTransferHandler.h"

UIGS_MetaTransferHandler::UIGS_MetaTransferHandler() {
    this->bCollectOnlySecuredLoot = true;
}

void UIGS_MetaTransferHandler::SetMissionScenarioOverride(const UObject* inWCO, FGameplayTag inMissionScenario) {
}

void UIGS_MetaTransferHandler::SetMissionData(const UObject* inWCO, FGameplayTag inTag, int32 InValue) {
}

void UIGS_MetaTransferHandler::SetMetaData(const UObject* inWCO, FGameplayTag inTag, int32 InValue) {
}

void UIGS_MetaTransferHandler::SetLootCollection(const UObject* inWCO, bool inCollectOnlySecuredLoot) {
}

void UIGS_MetaTransferHandler::SetErrorText(const UObject* inWCO, FText InText) {
}

void UIGS_MetaTransferHandler::SendSharedData(const UObject* inWCO, const FIGS_SharedMetaTransfer_Data& inSharedData) {
}

void UIGS_MetaTransferHandler::SendMetaData(const UObject* inWCO, const FIGS_Meta2FPS_Data& InMetaData) {
}

void UIGS_MetaTransferHandler::SendFPSData(const UObject* inWCO, const FIGS_FPS2Meta_Data& inFPSData) {
}

FIGS_SharedMetaTransfer_Data UIGS_MetaTransferHandler::ReadSharedData(const UObject* inWCO) {
    return FIGS_SharedMetaTransfer_Data{};
}

FIGS_Meta2FPS_Data UIGS_MetaTransferHandler::ReadQuickplayData(const UObject* inWCO) {
    return FIGS_Meta2FPS_Data{};
}

FIGS_Meta2FPS_Data UIGS_MetaTransferHandler::ReadMetaData(const UObject* inWCO) {
    return FIGS_Meta2FPS_Data{};
}

FIGS_FPS2Meta_Data UIGS_MetaTransferHandler::ReadFPSData(const UObject* inWCO) {
    return FIGS_FPS2Meta_Data{};
}

void UIGS_MetaTransferHandler::GetMissionData(const UObject* inWCO, TMap<FGameplayTag, int32>& outMissionData) {
}

void UIGS_MetaTransferHandler::GetMetadata(const UObject* inWCO, TMap<FGameplayTag, int32>& outMetaData) {
}

bool UIGS_MetaTransferHandler::GetLootCollection(const UObject* inWCO) {
    return false;
}

FText UIGS_MetaTransferHandler::GetErrorText(const UObject* inWCO) {
    return FText::GetEmpty();
}

bool UIGS_MetaTransferHandler::DoSharedDataExist(const UObject* inWCO) {
    return false;
}

bool UIGS_MetaTransferHandler::DoQuickplayDataExist(const UObject* inWCO) {
    return false;
}

bool UIGS_MetaTransferHandler::DoMetaDataExist(const UObject* inWCO) {
    return false;
}

bool UIGS_MetaTransferHandler::DoFPSDataExist(const UObject* inWCO) {
    return false;
}

void UIGS_MetaTransferHandler::DeleteMetaData(const UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_MetaTransferHandler::ClearSharedData(const UObject* inWCO) {
}

void UIGS_MetaTransferHandler::ClearMissionDataMap(const UObject* inWCO) {
}

void UIGS_MetaTransferHandler::ClearMetaDataMap(const UObject* inWCO) {
}

void UIGS_MetaTransferHandler::ClearMetaData(const UObject* inWCO) {
}

void UIGS_MetaTransferHandler::ClearFPSData(const UObject* inWCO) {
}

void UIGS_MetaTransferHandler::ClearAll(const UObject* inWCO) {
}


