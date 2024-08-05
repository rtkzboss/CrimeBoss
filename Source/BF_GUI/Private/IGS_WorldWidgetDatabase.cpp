#include "IGS_WorldWidgetDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_WorldWidgetDatabase::UIGS_WorldWidgetDatabase() {
}

TSubclassOf<UUserWidget> UIGS_WorldWidgetDatabase::GetWorldWidgetIcon(UObject* inWCO, EIGS_WorldWidgetType inWorldWidgetType) {
    return NULL;
}

FIGS_WorldWidgetData UIGS_WorldWidgetDatabase::GetWidgetIconData(UObject* inWCO, EIGS_WorldWidgetType inWorldWidgetType) {
    return FIGS_WorldWidgetData{};
}

bool UIGS_WorldWidgetDatabase::GetProgressVisibilityForWidgetType(UObject* inWCO, EIGS_WorldWidgetType inWorldWidgetType) {
    return false;
}

FIGS_WorldWidgetData UIGS_WorldWidgetDatabase::GetDataFromWieldableClass(EIGS_WorldWidgetType inID) {
    return FIGS_WorldWidgetData{};
}


