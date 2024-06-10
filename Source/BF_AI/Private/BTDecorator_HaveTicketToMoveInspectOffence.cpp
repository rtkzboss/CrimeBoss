#include "BTDecorator_HaveTicketToMoveInspectOffence.h"

UBTDecorator_HaveTicketToMoveInspectOffence::UBTDecorator_HaveTicketToMoveInspectOffence() {
    auto& gen289 = (*this).OffenceDataKey.AllowedTypes;
    gen289.Empty();
    gen289.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Have Ticket To Move Inspect");
}


