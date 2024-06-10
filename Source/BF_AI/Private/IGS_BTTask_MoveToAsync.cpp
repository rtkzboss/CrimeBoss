#include "IGS_BTTask_MoveToAsync.h"

UIGS_BTTask_MoveToAsync::UIGS_BTTask_MoveToAsync() {
    (*this).bUseHierarchicalPathfinding = true;
    auto& gen423 = (*this).BlackboardKey.AllowedTypes;
    gen423.Empty();
    gen423.AddDefaulted(2);
}


