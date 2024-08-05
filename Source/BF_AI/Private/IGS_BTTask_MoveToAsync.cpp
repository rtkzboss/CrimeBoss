#include "IGS_BTTask_MoveToAsync.h"

UIGS_BTTask_MoveToAsync::UIGS_BTTask_MoveToAsync() {
    (*this).bUseHierarchicalPathfinding = true;
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(2);
}


