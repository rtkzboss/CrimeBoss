#include "META_SwitchNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_SwitchNode_SG::UMETA_SwitchNode_SG() {
    (*this).NeedValueType = EMETA_NeedValueType::Tag;
    (*this).DefaultID = -1;
    (*this).Type = EMETA_NodeType::Switch;
}


