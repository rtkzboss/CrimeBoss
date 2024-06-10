#include "BTDecorator_OffenceStrikes.h"

UBTDecorator_OffenceStrikes::UBTDecorator_OffenceStrikes() {
    auto& gen308 = (*this).OffenceDataKey.AllowedTypes;
    gen308.Empty();
    gen308.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Offence Strikes");
}


