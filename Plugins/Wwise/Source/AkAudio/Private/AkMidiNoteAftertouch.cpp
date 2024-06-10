#include "AkMidiNoteAftertouch.h"
#include "EAkMidiEventType.h"

FAkMidiNoteAftertouch::FAkMidiNoteAftertouch() {
    (*this).Note = 0;
    (*this).Value = 0;
}

