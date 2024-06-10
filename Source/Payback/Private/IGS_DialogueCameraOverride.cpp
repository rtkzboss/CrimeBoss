#include "IGS_DialogueCameraOverride.h"

FIGS_DialogueCameraOverride::FIGS_DialogueCameraOverride() {
    (*this).DialogueID = FText::FromString(TEXT(""));
    (*this).TranscriptCameras.Empty();
    (*this).TranscriptDelayes.Empty();
    (*this).TranscriptPoseAnimation.Empty();
}

