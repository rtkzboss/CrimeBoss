#include "IGS_CarouselPaginator.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_CarouselPaginator::UIGS_CarouselPaginator() : UUserWidget(FObjectInitializer::Get()) {
    (*this).AutoSwithcingRate = 5.000000000e+00f;
    (*this).ShowDots = true;
    (*this).AllowEndlessScroll = true;
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


