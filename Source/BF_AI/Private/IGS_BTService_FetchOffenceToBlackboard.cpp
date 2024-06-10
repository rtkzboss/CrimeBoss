#include "IGS_BTService_FetchOffenceToBlackboard.h"

UIGS_BTService_FetchOffenceToBlackboard::UIGS_BTService_FetchOffenceToBlackboard() {
    auto& gen347 = (*this).OffenceDataKey.AllowedTypes;
    gen347.Empty();
    gen347.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Fetch Offence To Blackboard");
}


