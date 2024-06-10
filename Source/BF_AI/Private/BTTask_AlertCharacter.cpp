#include "BTTask_AlertCharacter.h"

UBTTask_AlertCharacter::UBTTask_AlertCharacter() {
    auto& gen0 = (*this).CharacterToAlert.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToAlert, 0)) = 255;
    auto& gen1 = (*this).OffenceDataKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*this).NodeName = TEXT("Alert Character");
}


