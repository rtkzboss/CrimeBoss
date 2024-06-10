#include "META_GraphStruct.h"

FMETA_GraphStruct::FMETA_GraphStruct() {
    (*this).GraphManager = nullptr;
    (*this).Status = EMETA_GraphStatus::Deactive;
    auto& gen3452 = (*this).CurrentNodeIds;
    gen3452.Empty();
}

