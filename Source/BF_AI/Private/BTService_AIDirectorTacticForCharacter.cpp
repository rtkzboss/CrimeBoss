#include "BTService_AIDirectorTacticForCharacter.h"

UBTService_AIDirectorTacticForCharacter::UBTService_AIDirectorTacticForCharacter() {
    auto& gen317 = (*this).WaveManagerTacticKey.AllowedTypes;
    gen317.Empty();
    gen317.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).WaveManagerTacticKey, 0)) = 255;
    (*this).NodeName = TEXT("AIDirector Tactic For Character");
}


