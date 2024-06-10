#include "BTService_AIDirectorTacticForDetective.h"

UBTService_AIDirectorTacticForDetective::UBTService_AIDirectorTacticForDetective() {
    auto& gen318 = (*this).WaveManagerTacticKey.AllowedTypes;
    gen318.Empty();
    gen318.AddDefaulted(1);
    (*this).NodeName = TEXT("AIDirector Tactic For Detective");
}


