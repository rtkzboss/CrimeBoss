#include "IGS_WorldSpaceWidgetManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_WorldSpaceWidgetManager::UIGS_WorldSpaceWidgetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ObjectiveWidgetsScreenEdgeVisibility = true;
    (*this).TeammateWidgetsScreenEdgeVisibility = true;
    (*this).DetectionWidgetsScreenEdgeVisibility = true;
    (*this).GenericPingWidgetsScreenEdgeVisibility = true;
    (*this).WalkieTalkieWidgetsScreenEdgeVisibility = true;
    (*this).AlertWidgetsScreenEdgeVisibility = true;
    (*this).CallingAlarmWidgetsScreenEdgeVisibility = true;
    (*this).PushingAlarmButtonWidgetsScreenEdgeVisibility = true;
    (*this).TelephoneCallingHQWidgetsScreenEdgeVisibility = true;
    (*this).CivilianEscapingWidgetsScreenEdgeVisibility = true;
    (*this).IsZiptiedWidgetsScreenEdgeVisibility = true;
    (*this).LocationWidgetsScreenEdgeVisibility = true;
    (*this).WarningWidgetsScreenEdgeVisibility = true;
    (*this).PossibleObjectiveWidgetsScreenEdgeVisibility = true;
    (*this).DrillWidgetsScreenEdgeVisibility = true;
    (*this).SecurityPhoneWidgetsScreenEdgeVisibility = true;
    (*this).BlinkingExclamationWidgetsScreenEdgeVisibility = true;
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


