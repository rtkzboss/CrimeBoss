#include "IGS_MetaCutsceneCharacterPoseData.h"

FIGS_MetaCutsceneCharacterPoseData::FIGS_MetaCutsceneCharacterPoseData() {
    (*this).PoseType = EIGS_MetaCutsceneCharacterPose::Listening;
    auto& gen3480 = (*this).Variations;
    gen3480.Empty();
}

