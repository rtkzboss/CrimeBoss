#include "IGS_BTTask_SquadMoveToEscapePoint.h"

UIGS_BTTask_SquadMoveToEscapePoint::UIGS_BTTask_SquadMoveToEscapePoint() {
    auto& gen0 = (*this).EscapePointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).EscapePointKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Move To Escape Point");
}


