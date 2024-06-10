#include "IGS_MetaCutsceneNode.h"

FIGS_MetaCutsceneNode::FIGS_MetaCutsceneNode() {
    (*this).HasFullSequence = false;
    (*this).SequenceSkipTime = 0.000000000e+00f;
    (*this).DialogueID = FText::FromString(TEXT(""));
    (*this).ChoiceText = FText::FromString(TEXT(""));
    (*this).DefaultOptionIndex = 0;
    auto& gen3482 = (*this).ChoiceTextTagParams;
    gen3482.Empty();
    auto& gen3483 = (*this).Options;
    gen3483.Empty();
}

