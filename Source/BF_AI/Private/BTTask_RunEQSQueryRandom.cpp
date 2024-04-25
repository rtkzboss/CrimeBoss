#include "BTTask_RunEQSQueryRandom.h"

UBTTask_RunEQSQueryRandom::UBTTask_RunEQSQueryRandom() {
    this->NodeName = TEXT("Run EQS Query Random");
    this->QueryTemplate = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->bUseBBKey = false;
    this->RandomItemCount = 3;
}


