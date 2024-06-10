#include "IGS_BTService_SolveCharactersToControl.h"

UIGS_BTService_SolveCharactersToControl::UIGS_BTService_SolveCharactersToControl() {
    auto& gen388 = (*this).CharacterToZiptieKey.AllowedTypes;
    gen388.Empty();
    gen388.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToZiptieKey, 0)) = 255;
    auto& gen389 = (*this).CharacterToShoutAt.AllowedTypes;
    gen389.Empty();
    gen389.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutAt, 0)) = 255;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Solve Civilian ToZip");
}


