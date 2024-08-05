#include "BTDecorator_HaveTicketToMoveInspectOffence.h"

UBTDecorator_HaveTicketToMoveInspectOffence::UBTDecorator_HaveTicketToMoveInspectOffence() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Have Ticket To Move Inspect");
}


