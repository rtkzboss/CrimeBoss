#include "IGS_BTTask_MoveToBag.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToBag::UIGS_BTTask_MoveToBag() {
    (*this).OptimalDistance = 2.000000000e+02f;
    auto& gen455 = (*this).LookPosKey.AllowedTypes;
    gen455.Empty();
    gen455.AddDefaulted(1);
    auto& gen456 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen456.Empty();
    gen456.AddDefaulted(1);
    auto& gen457 = (*this).BlackboardKey.AllowedTypes;
    gen457.Empty();
    gen457.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Bag");
}


