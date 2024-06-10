#include "BTService_GR_HandleBeingHeavyShocked.h"

UBTService_GR_HandleBeingHeavyShocked::UBTService_GR_HandleBeingHeavyShocked() {
    auto& gen362 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen362.Empty();
    gen362.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen363 = (*this).AnimTypeTagKey.AllowedTypes;
    gen363.Empty();
    gen363.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).AnimTypeTagKey, 0)) = 255;
    (*this).HitReactionChance = 1.000000000e+02f;
    (*this).HeavyReactionChance = 1.000000000e+02f;
    (*this).NodeName = TEXT("GlobalReaction - Handle Being Heavy Shocked");
}


