#include "IGS_BTTask_MoveToComplex.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToComplex::UIGS_BTTask_MoveToComplex() {
    auto& gen471 = (*this).LookPosKey.AllowedTypes;
    gen471.Empty();
    gen471.AddDefaulted(1);
    auto& gen472 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen472.Empty();
    gen472.AddDefaulted(1);
    auto& gen473 = (*this).BlackboardKey.AllowedTypes;
    gen473.Empty();
    gen473.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Complex");
}


