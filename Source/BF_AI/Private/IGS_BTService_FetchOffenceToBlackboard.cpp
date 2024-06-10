#include "IGS_BTService_FetchOffenceToBlackboard.h"

UIGS_BTService_FetchOffenceToBlackboard::UIGS_BTService_FetchOffenceToBlackboard() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Fetch Offence To Blackboard");
}


