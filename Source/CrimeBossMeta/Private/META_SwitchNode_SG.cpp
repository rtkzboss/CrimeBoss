#include "META_SwitchNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_SwitchNode_SG::UMETA_SwitchNode_SG() {
    this->Type = EMETA_NodeType::Switch;
    this->MinSwitchRange = 0;
    this->MaxSwitchRange = 0;
    this->NeedValueType = EMETA_NeedValueType::Tag;
    this->ConditionGraphVariable = 0;
    this->DefaultID = -1;
}


