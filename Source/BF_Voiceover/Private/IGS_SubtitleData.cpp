#include "IGS_SubtitleData.h"

FIGS_SubtitleData::FIGS_SubtitleData() {
    (*this).CharacterName = FText::FromString(TEXT(""));
    (*this).CharacterNameColor.R = 1.000000000e+00f;
    (*this).CharacterNameColor.G = 1.000000000e+00f;
    (*this).CharacterNameColor.B = 1.000000000e+00f;
    (*this).CharacterNameColor.A = 1.000000000e+00f;
    (*this).SubtitleText = FText::FromString(TEXT(""));
    (*this).SubtitleType = EIGS_SubtitleType::None;
    (*this).HasMedia = false;
    (*this).IsTTS = false;
}

