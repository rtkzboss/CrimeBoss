#include "BTTask_MoveToAlertingCharacter.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToAlertingCharacter::UBTTask_MoveToAlertingCharacter() {
    (*this).LOSStoppingDistance = 3.500000000e+02f;
    auto& gen452 = (*this).LookPosKey.AllowedTypes;
    gen452.Empty();
    gen452.AddDefaulted(1);
    auto& gen453 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen453.Empty();
    gen453.AddDefaulted(1);
    auto& gen454 = (*this).BlackboardKey.AllowedTypes;
    gen454.Empty();
    gen454.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Alerting Character");
}


