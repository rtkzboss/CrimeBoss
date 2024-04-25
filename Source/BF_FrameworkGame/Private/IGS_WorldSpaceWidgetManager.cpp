#include "IGS_WorldSpaceWidgetManager.h"

UIGS_WorldSpaceWidgetManager::UIGS_WorldSpaceWidgetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectiveWidgetsVisibility = 0;
    this->TeammateWidgetsVisibility = 0;
    this->DetectionWidgetsVisibility = 0;
    this->GenericPingWidgetsVisibility = 0;
    this->WalkieTalkieWidgetsVisibility = 0;
    this->AlertWidgetsVisibility = 0;
    this->BlinkingExclamationWidgetsVisibility = 0;
    this->CallingAlarmWidgetsVisibility = 0;
    this->PushingAlarmButtonWidgetsVisibility = 0;
    this->TelephoneCallingHQWidgetsVisibility = 0;
    this->CivilianEscapingWidgetsVisibility = 0;
    this->IsZiptiedWidgetsVisibility = 0;
    this->PossibleObjectiveWidgetsVisibility = 0;
    this->LocationWidgetsVisibility = 0;
    this->WarningWidgetsVisibility = 0;
    this->DrillWidgetsVisibility = 0;
    this->SecurityPhoneWidgetsVisibility = 0;
    this->ObjectiveWidgetsScreenEdgeVisibility = true;
    this->TeammateWidgetsScreenEdgeVisibility = true;
    this->DetectionWidgetsScreenEdgeVisibility = true;
    this->GenericPingWidgetsScreenEdgeVisibility = true;
    this->WalkieTalkieWidgetsScreenEdgeVisibility = true;
    this->AlertWidgetsScreenEdgeVisibility = true;
    this->CallingAlarmWidgetsScreenEdgeVisibility = true;
    this->PushingAlarmButtonWidgetsScreenEdgeVisibility = true;
    this->TelephoneCallingHQWidgetsScreenEdgeVisibility = true;
    this->CivilianEscapingWidgetsScreenEdgeVisibility = true;
    this->IsZiptiedWidgetsScreenEdgeVisibility = true;
    this->LocationWidgetsScreenEdgeVisibility = true;
    this->WarningWidgetsScreenEdgeVisibility = true;
    this->PossibleObjectiveWidgetsScreenEdgeVisibility = true;
    this->DrillWidgetsScreenEdgeVisibility = true;
    this->SecurityPhoneWidgetsScreenEdgeVisibility = true;
    this->BlinkingExclamationWidgetsScreenEdgeVisibility = true;
    this->m_LocalPlayerController = NULL;
}

void UIGS_WorldSpaceWidgetManager::UnregisterWidget(UIGS_WorldSpaceWidgetBase* inWidgetComponent, EIGS_WorldWidgetType inType) {
}

void UIGS_WorldSpaceWidgetManager::SetWorldSpaceWidgetTypeVisibility(EIGS_WorldWidgetType inType, bool inEnabled) {
}

UIGS_WorldSpaceWidgetManager* UIGS_WorldSpaceWidgetManager::GetWorldWidgetManager(UObject* inWCO) {
    return NULL;
}

bool UIGS_WorldSpaceWidgetManager::GetWidgetGroupVisibility(EIGS_WorldWidgetType inType) {
    return false;
}

bool UIGS_WorldSpaceWidgetManager::GetWidgetGroupScreenEdgeVisibility(EIGS_WorldWidgetType inType) {
    return false;
}


