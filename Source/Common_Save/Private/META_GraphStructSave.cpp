#include "META_GraphStructSave.h"

FMETA_GraphStructSave::FMETA_GraphStructSave() {
    (*this).Status = EMETA_GraphStatus::Deactive;
    auto& gen2218 = (*this).CurrentNodeIds;
    gen2218.Empty();
}

