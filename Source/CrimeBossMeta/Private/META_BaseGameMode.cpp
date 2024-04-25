#include "META_BaseGameMode.h"
#include "META_PlanningBoardManagerComponent.h"

AMETA_BaseGameMode::AMETA_BaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MenuState = EMETA_MenuState::MS_StartUp;
    this->MainWidget = NULL;
    this->bGamemodeComponentsInitialized = false;
    this->PlanningBoardManagerComponent = CreateDefaultSubobject<UMETA_PlanningBoardManagerComponent>(TEXT("PlanningBoardComponent"));
}

bool AMETA_BaseGameMode::ShouldLoadMetaDebugSave() {
    return false;
}

void AMETA_BaseGameMode::SetMetaMenuState(EMETA_MenuState inState) {
}

void AMETA_BaseGameMode::SetComponentsInitialized(EMETA_ManagersStartUpMode inStartUpMode) {
}


void AMETA_BaseGameMode::MenuStateChangeHandled(EMETA_MenuState inState) {
}

bool AMETA_BaseGameMode::IsMetaInDebugMode() {
    return false;
}

void AMETA_BaseGameMode::HandleMenuStateChange_Implementation(EMETA_MenuState inState) {
}

UMETA_UIEventsManagerComponent* AMETA_BaseGameMode::GetUIEventsManagerComponent_Implementation() {
    return NULL;
}

UMETA_StashManagerComponent* AMETA_BaseGameMode::GetStashManagerComponent_Implementation() {
    return NULL;
}

UMETA_RandEventManagerComponent* AMETA_BaseGameMode::GetRandManagerComponent_Implementation() {
    return NULL;
}

UMETA_PopupManagerComponent* AMETA_BaseGameMode::GetPopupManagerComponent_Implementation() {
    return NULL;
}

UMETA_PlanningBoardManagerComponent* AMETA_BaseGameMode::GetPlanningBoardManagerComponent_Implementation() const {
    return NULL;
}

UMETA_NotificationManagerComponent* AMETA_BaseGameMode::GetNotificationManagerComponent_Implementation() {
    return NULL;
}

UMETA_MediaManagerComponent* AMETA_BaseGameMode::GetMediaManagerComponent_Implementation() {
    return NULL;
}

UMETA_GoalManagerComponent* AMETA_BaseGameMode::GetGoalManagerComponent_Implementation() {
    return NULL;
}

UMETA_EventManagerComponent* AMETA_BaseGameMode::GetEventManagerComponent_Implementation() {
    return NULL;
}

UMETA_PlotlineSelection* AMETA_BaseGameMode::GetCurrentCampaignMode_Implementation() const {
    return NULL;
}

UMETA_CrewManagerComponent* AMETA_BaseGameMode::GetCrewManagerComponent_Implementation() {
    return NULL;
}

TSoftObjectPtr<UMETA_PlotlineSelection> AMETA_BaseGameMode::GetCampaignModeOnLoad(const UMETA_PlotlineSelectionMapping* inCampaignMapping, bool& outSuccess) {
    return NULL;
}

TSoftObjectPtr<UMETA_PlotlineSelection> AMETA_BaseGameMode::GetCampaignModeOnInitByTag(const UMETA_PlotlineSelectionMapping* inCampaignMapping, FGameplayTag inModeTag, bool& outSuccess) {
    return NULL;
}

UMETA_BossLevelComponent* AMETA_BaseGameMode::GetBossLevelComponent_Implementation() const {
    return NULL;
}

UIGS_ActivityManagerBaseComponent* AMETA_BaseGameMode::GetActivityManagerComponent_Implementation() {
    return NULL;
}



