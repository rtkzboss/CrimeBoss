#include "IGS_MusicMissionSettings.h"

FIGS_MusicMissionSettings::FIGS_MusicMissionSettings() {
    (*this).MissionSource = EIGS_MusicMissionSource::Meta;
    (*this).bCutsceneNoMusic = false;
    (*this).bCutsceneNoSound = false;
}

