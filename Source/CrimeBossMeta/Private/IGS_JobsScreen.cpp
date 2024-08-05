#include "IGS_JobsScreen.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_JobsScreen::UIGS_JobsScreen() {
}

void UIGS_JobsScreen::UpdateRecomendedCategory() {
}

void UIGS_JobsScreen::SelectCategory(int32 categoryIndex, bool autoscroll, bool setFocusOnFirstItem) {
}

void UIGS_JobsScreen::ScrollToCategory(int32 categoryIndex) {
}

void UIGS_JobsScreen::OnSelectCategory_NoScrollNoFocus(UIGS_JobsScreenCategoryWidget* categoryWidget) {
}

void UIGS_JobsScreen::OnSelectCategory_Internal(UIGS_JobsScreenCategoryWidget* categoryWidget, int32 Direction) {
}


void UIGS_JobsScreen::OnJobItemSelected_Internal(UIGS_JobsItemWidget* JobWidget) {
}




void UIGS_JobsScreen::InitializeJobScreen(const TArray<FIGS_MultiplayerJobCategoryRow>& inCategories) {
}

void UIGS_JobsScreen::GoToCategory(int32 Direction) {
}

UUserWidget* UIGS_JobsScreen::GetWidgetByJobTag(FGameplayTag inTag, bool inIncludeRecomended) const {
    return NULL;
}

UIGS_JobsScreenCategoryWidget* UIGS_JobsScreen::GetSelectedCategoryWidget() const {
    return NULL;
}

UIGS_JobsScreenCategoryWidget* UIGS_JobsScreen::GetCategoryByIndex(int32 Index) {
    return NULL;
}

int32 UIGS_JobsScreen::GetCategoriesCount() {
    return 0;
}


