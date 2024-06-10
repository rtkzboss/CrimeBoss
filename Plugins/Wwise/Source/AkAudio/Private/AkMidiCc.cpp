#include "AkMidiCc.h"
#include "EAkMidiEventType.h"

FAkMidiCc::FAkMidiCc() {
    (*this).Cc = EAkMidiCcValues::AkMidiCcBankSelectCoarse;
    (*this).Value = 0;
}

