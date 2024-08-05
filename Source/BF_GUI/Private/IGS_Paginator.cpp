#include "IGS_Paginator.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_Paginator::UIGS_Paginator() {
    (*this).AutoSwithcingRate = 5.000000000e+00f;
    (*this).ShowDots = true;
    (*this).AllowEndlessScroll = true;
}

void UIGS_Paginator::StartAutopaging() {
}

void UIGS_Paginator::SetArrowsVisibility(bool inVisible, bool inCollapse) {
}

void UIGS_Paginator::SelectPage(int32 NewIndex) {
}

void UIGS_Paginator::ResetPaginator() {
}


bool UIGS_Paginator::IsLastPageSelected() const {
    return false;
}

bool UIGS_Paginator::IsFirstPageSelected() const {
    return false;
}

void UIGS_Paginator::InitCarousel(int32 newPageCount) {
}

void UIGS_Paginator::HandleAutoPageSwitch() {
}

int32 UIGS_Paginator::GetSelectedIndex() const {
    return 0;
}

UWidget* UIGS_Paginator::GetContentWidget() const {
    return NULL;
}

void UIGS_Paginator::ChangePage(int32 Direction) {
}


