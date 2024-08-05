#include "IGS_ItemStatGUIHolder.h"

FIGS_ItemStatGUIHolder::FIGS_ItemStatGUIHolder() {
    (*this).StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    (*this).StatValue = FText::FromString(TEXT("UNKNOWN_VALUE"));
}

