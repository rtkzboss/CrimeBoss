#include "IGS_BTTask_SquadMoveThroughBreachPoint.h"

UIGS_BTTask_SquadMoveThroughBreachPoint::UIGS_BTTask_SquadMoveThroughBreachPoint() {
    auto& gen536 = (*this).StackPosBlackboardKey.AllowedTypes;
    gen536.Empty();
    gen536.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).StackPosBlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Breach Move Through Breach Point");
}


