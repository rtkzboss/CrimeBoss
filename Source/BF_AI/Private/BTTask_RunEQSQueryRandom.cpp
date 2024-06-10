#include "BTTask_RunEQSQueryRandom.h"

UBTTask_RunEQSQueryRandom::UBTTask_RunEQSQueryRandom() {
    auto& gen523 = (*this).EQSQueryBlackboardKey.AllowedTypes;
    gen523.Empty();
    gen523.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).EQSQueryBlackboardKey, 0)) = 255;
    (*this).RandomItemCount = 3;
    (*this).NodeName = TEXT("Run EQS Query Random");
}


