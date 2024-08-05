#include "META_GraphStructSave.h"

FMETA_GraphStructSave::FMETA_GraphStructSave() {
    (*this).Graph = nullptr;
    (*this).Status = EMETA_GraphStatus::Deactive;
    (*this).CurrentNodeIds.Empty();
}

