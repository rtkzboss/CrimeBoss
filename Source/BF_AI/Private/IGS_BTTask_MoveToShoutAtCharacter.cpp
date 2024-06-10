#include "IGS_BTTask_MoveToShoutAtCharacter.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToShoutAtCharacter::UIGS_BTTask_MoveToShoutAtCharacter() {
    auto& gen493 = (*this).LookPosKey.AllowedTypes;
    gen493.Empty();
    gen493.AddDefaulted(1);
    auto& gen494 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen494.Empty();
    gen494.AddDefaulted(1);
    auto& gen495 = (*this).BlackboardKey.AllowedTypes;
    gen495.Empty();
    gen495.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Shout At Character");
}


