#include "BinkSubtitleItem.h"

FBinkSubtitleItem::FBinkSubtitleItem() {
    (*this).Character = FText::FromString(TEXT(""));
    (*this).Text = FText::FromString(TEXT(""));
    (*this).Time = 0.000000000e+00f;
}

