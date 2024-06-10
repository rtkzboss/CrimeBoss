#include "BTTask_ChargeToPosition.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_ChargeToPosition::UBTTask_ChargeToPosition() {
    auto& gen441 = (*this).LookPosKey.AllowedTypes;
    gen441.Empty();
    gen441.AddDefaulted(1);
    auto& gen442 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen442.Empty();
    gen442.AddDefaulted(1);
    auto& gen443 = (*this).BlackboardKey.AllowedTypes;
    gen443.Empty();
    gen443.AddDefaulted(2);
    (*this).NodeName = TEXT("Charge To Position");
}


