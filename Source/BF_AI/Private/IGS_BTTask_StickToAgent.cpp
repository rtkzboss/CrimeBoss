#include "IGS_BTTask_StickToAgent.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_StickToAgent::UIGS_BTTask_StickToAgent() {
    (*this).RecalculateTimeMin = 1.100000024e+00f;
    (*this).RecalculateTimeMax = 1.299999952e+00f;
    auto& gen538 = (*this).LookPosKey.AllowedTypes;
    gen538.Empty();
    gen538.AddDefaulted(1);
    auto& gen539 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen539.Empty();
    gen539.AddDefaulted(1);
    auto& gen540 = (*this).BlackboardKey.AllowedTypes;
    gen540.Empty();
    gen540.AddDefaulted(2);
    (*this).NodeName = TEXT("Stick To Agent");
}


