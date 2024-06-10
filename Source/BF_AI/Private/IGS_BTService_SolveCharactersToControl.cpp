#include "IGS_BTService_SolveCharactersToControl.h"

UIGS_BTService_SolveCharactersToControl::UIGS_BTService_SolveCharactersToControl() {
    auto& gen0 = (*this).CharacterToZiptieKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToZiptieKey, 0)) = 255;
    auto& gen1 = (*this).CharacterToShoutAt.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutAt, 0)) = 255;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Solve Civilian ToZip");
}


