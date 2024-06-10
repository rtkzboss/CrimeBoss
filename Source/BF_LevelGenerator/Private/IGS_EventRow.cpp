#include "IGS_EventRow.h"

FIGS_EventRow::FIGS_EventRow() {
    (*this).EventType = EIGS_Event::None;
    (*this).EventSubLevel.BuildConfigurationDataAsset = nullptr;
    (*this).EventSubLevel.VariantIndex = 0;
    (*this).ScriptActorTag = NAME_None;
}

