#include "IGS_MetaCutsceneNodeOption.h"

FIGS_MetaCutsceneNodeOption::FIGS_MetaCutsceneNodeOption() {
    this->Action = EIGS_MetaCutsceneNodeAction::MoveToNode;
    this->HasFullSequence = false;
    this->ChoiceSelectionSound = NULL;
    this->ChoiceVisibility = EIGS_CutsceneChoiceVisibility::Visible;
    this->ChoiceVisibilityConditionFail = EIGS_CutsceneChoiceVisibility::Visible;
    this->PriceValue = 0.00f;
    this->VisibilityValue = EIGS_CutsceneChoiceVisibility::Visible;
}

