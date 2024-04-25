#include "IGS_Paginator.h"

UIGS_Paginator::UIGS_Paginator() {
    this->IsAutoPagingEnabled = false;
    this->StartAutpagingOnContruct = false;
    this->AutoSwithcingRate = 5.00f;
    this->ContentSlot = NULL;
    this->PageCount = 0;
    this->ShowDots = true;
    this->ShowContent = false;
    this->SelectedIndex = 0;
    this->EnableInput = false;
    this->ShowArrows = false;
    this->IsFocused = false;
    this->AllowEndlessScroll = true;
    this->ActivePageIndicatorScale = 0.00f;
    this->InactivePageIndicatorScale = 0.00f;
    this->PageIndicatorsContainer = NULL;
    this->LeftArrow = NULL;
    this->RightArrow = NULL;
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


