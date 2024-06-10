#include "IGS_DialogueCameraOverride.h"

FIGS_DialogueCameraOverride::FIGS_DialogueCameraOverride() {
    (*this).DialogueID = FText::FromString(TEXT(""));
    auto& gen3484 = (*this).TranscriptCameras;
    gen3484.Empty();
    auto& gen3485 = (*this).TranscriptDelayes;
    gen3485.Empty();
    auto& gen3486 = (*this).TranscriptPoseAnimation;
    gen3486.Empty();
}

