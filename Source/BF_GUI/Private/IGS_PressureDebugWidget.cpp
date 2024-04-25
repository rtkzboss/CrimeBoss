#include "IGS_PressureDebugWidget.h"

UIGS_PressureDebugWidget::UIGS_PressureDebugWidget() {
    this->PlotDS = NULL;
    this->GraphBorder = NULL;
    this->CurrPressure = NULL;
    this->ExpectedPressure = NULL;
    this->SpawnIntensity = NULL;
    this->IsActive = NULL;
    this->LastSegmentInfo = NULL;
    this->PointPlotStyle = NULL;
    this->IsMessurmentActive = false;
}



