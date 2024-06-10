#include "MovieSceneAkAudioEventSection.h"

UMovieSceneAkAudioEventSection::UMovieSceneAkAudioEventSection() {
    (*this).ScrubTailLengthMs = 100;
    (*this).StopAtSectionEnd = true;
    (*this).MaxSourceDuration = -1.000000000e+00f;
}


