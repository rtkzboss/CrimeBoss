#include "IGS_BTService_SolveNeedsFightForWaypoint.h"

UIGS_BTService_SolveNeedsFightForWaypoint::UIGS_BTService_SolveNeedsFightForWaypoint() {
    auto& gen0 = (*this).NeedsFightForWaypoint.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).NeedsFightForWaypoint, 0)) = 255;
    (*this).NodeName = TEXT("Solve Needs Fight For Waypoint");
}


