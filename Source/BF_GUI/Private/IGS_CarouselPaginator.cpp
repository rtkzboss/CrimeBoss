#include "IGS_CarouselPaginator.h"

UIGS_CarouselPaginator::UIGS_CarouselPaginator() : UUserWidget(FObjectInitializer::Get()) {
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
    this->HideArrowsOnCorners = false;
    this->AllowEndlessScroll = true;
    this->ActivePageIndicatorScale = 0.00f;
    this->InactivePageIndicatorScale = 0.00f;
    this->PageIndicatorsContainer = NULL;
    this->LeftArrow = NULL;
    this->RightArrow = NULL;
}

void UIGS_CarouselPaginator::StartAutopaging() {
}

void UIGS_CarouselPaginator::SelectPage(int32 NewIndex) {
}

void UIGS_CarouselPaginator::ResetPaginator() {
}

bool UIGS_CarouselPaginator::IsLastPageSelected() const {
    return false;
}

void UIGS_CarouselPaginator::InitCarousel(int32 newPageCount) {
}

void UIGS_CarouselPaginator::HandleAutoPageSwitch() {
}

void UIGS_CarouselPaginator::ChangePage(int32 Direction) {
}


