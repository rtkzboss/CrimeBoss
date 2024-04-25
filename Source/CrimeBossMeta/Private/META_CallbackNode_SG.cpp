#include "META_CallbackNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_CallbackNode_SG::UMETA_CallbackNode_SG() {
    this->Type = EMETA_NodeType::Callback;
    this->CallbackObject = NULL;
}


