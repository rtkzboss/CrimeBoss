#include "IGS_BTTask_GetOutOfAgent.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_GetOutOfAgent::UIGS_BTTask_GetOutOfAgent() {
    auto& gen434 = (*this).LookPosKey.AllowedTypes;
    gen434.Empty();
    gen434.AddDefaulted(1);
    auto& gen435 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen435.Empty();
    gen435.AddDefaulted(1);
    auto& gen436 = (*this).BlackboardKey.AllowedTypes;
    gen436.Empty();
    gen436.AddDefaulted(2);
    (*this).NodeName = TEXT("Get Out Of Agent");
}


