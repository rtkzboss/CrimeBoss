#include "AkMidiNoteOnOff.h"
#include "EAkMidiEventType.h"

FAkMidiNoteOnOff::FAkMidiNoteOnOff() {
    (*this).Note = 0;
    (*this).Velocity = 0;
}

