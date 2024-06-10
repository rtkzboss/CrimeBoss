#include "BTTask_AlertCharacter.h"

UBTTask_AlertCharacter::UBTTask_AlertCharacter() {
    auto& gen404 = (*this).CharacterToAlert.AllowedTypes;
    gen404.Empty();
    gen404.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToAlert, 0)) = 255;
    auto& gen405 = (*this).OffenceDataKey.AllowedTypes;
    gen405.Empty();
    gen405.AddDefaulted(1);
    (*this).NodeName = TEXT("Alert Character");
}


