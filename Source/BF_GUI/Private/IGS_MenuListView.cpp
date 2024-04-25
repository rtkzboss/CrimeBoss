#include "IGS_MenuListView.h"

UIGS_MenuListView::UIGS_MenuListView() : UListView(FObjectInitializer::Get()) {
    this->ItemWidgetTemplate = NULL;
}

void UIGS_MenuListView::UnhoverListItem(UObject* inItem) {
}

void UIGS_MenuListView::SetIsFocusable(bool inFocusable) {
}

void UIGS_MenuListView::HoverListItem(UObject* inItem) {
}

UUserWidget* UIGS_MenuListView::GetSelectedWidget() {
    return NULL;
}

void UIGS_MenuListView::DoubleClickListItem(UObject* inItem) {
}

void UIGS_MenuListView::ClickListItem(UObject* inItem) {
}


