#include "IGS_MetaCutsceneNode.h"

FIGS_MetaCutsceneNode::FIGS_MetaCutsceneNode() {
    (*this).HasFullSequence = false;
    (*this).SequenceSkipTime = 0.000000000e+00f;
    (*this).DialogueID = FText::FromString(TEXT(""));
    (*this).ChoiceText = FText::FromString(TEXT(""));
    (*this).DefaultOptionIndex = 0;
    (*this).ChoiceTextTagParams.Empty();
    (*this).Options.Empty();
}

