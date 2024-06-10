#include "IGS_BTTask_MoveToBestProximityPos.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToBestProximityPos::UIGS_BTTask_MoveToBestProximityPos() {
    auto& gen462 = (*this).LookPosKey.AllowedTypes;
    gen462.Empty();
    gen462.AddDefaulted(1);
    auto& gen463 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen463.Empty();
    gen463.AddDefaulted(1);
    auto& gen464 = (*this).BlackboardKey.AllowedTypes;
    gen464.Empty();
    gen464.AddDefaulted(2);
    (*this).NodeName = TEXT("Move Best Proximity Pos");
}


