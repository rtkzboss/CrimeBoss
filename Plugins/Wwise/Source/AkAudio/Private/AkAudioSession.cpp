#include "AkAudioSession.h"

FAkAudioSession::FAkAudioSession() {
    (*this).AudioSessionCategory = EAkAudioSessionCategory::Ambient;
    (*this).AudioSessionCategoryOptions = 2;
    (*this).AudioSessionMode = EAkAudioSessionMode::Default;
}

