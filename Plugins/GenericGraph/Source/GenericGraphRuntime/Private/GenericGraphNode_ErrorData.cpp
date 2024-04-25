#include "GenericGraphNode_ErrorData.h"

FGenericGraphNode_ErrorData::FGenericGraphNode_ErrorData() {
    this->MessageType = EMETA_MessageType::Error;
    this->Node = NULL;
}

