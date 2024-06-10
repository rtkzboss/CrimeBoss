#include "BTTask_CallWalkieTalkie.h"

UBTTask_CallWalkieTalkie::UBTTask_CallWalkieTalkie() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Call Walkie Talkie");
}


