#include "IGS_LocalizationImageParam.h"

FIGS_LocalizationImageParam::FIGS_LocalizationImageParam() {
    (*this).Name = TEXT("");
    (*this).Value = FText::FromString(TEXT(""));
    (*this).Widget = nullptr;
    (*this).CustomWidget = nullptr;
    (*this).WidgetPositionOffset.X = 0.000000000e+00f;
    (*this).WidgetPositionOffset.Y = 0.000000000e+00f;
}

