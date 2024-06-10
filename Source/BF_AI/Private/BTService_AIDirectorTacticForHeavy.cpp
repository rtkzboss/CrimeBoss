#include "BTService_AIDirectorTacticForHeavy.h"

UBTService_AIDirectorTacticForHeavy::UBTService_AIDirectorTacticForHeavy() {
    auto& gen319 = (*this).WaveManagerTacticKey.AllowedTypes;
    gen319.Empty();
    gen319.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).WaveManagerTacticKey, 0)) = 255;
    (*this).NodeName = TEXT("AIDirector Tactic For Heavy");
}


