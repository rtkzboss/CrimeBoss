#include "IGS_BTService_EvaluateBestCover.h"

UIGS_BTService_EvaluateBestCover::UIGS_BTService_EvaluateBestCover() {
    this->NodeName = TEXT("Find Best Cover Point");
    this->QueryTemplate = NULL;
    this->QueryTemplateDefendPoint = NULL;
    this->RefreshDelay = 0.50f;
}


