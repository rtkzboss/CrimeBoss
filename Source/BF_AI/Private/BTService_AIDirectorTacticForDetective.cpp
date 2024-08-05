#include "BTService_AIDirectorTacticForDetective.h"

UBTService_AIDirectorTacticForDetective::UBTService_AIDirectorTacticForDetective() {
    auto& gen0 = (*this).WaveManagerTacticKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("AIDirector Tactic For Detective");
}


