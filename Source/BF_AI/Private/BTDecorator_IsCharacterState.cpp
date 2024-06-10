#include "BTDecorator_IsCharacterState.h"

UBTDecorator_IsCharacterState::UBTDecorator_IsCharacterState() {
    auto& gen290 = (*this).CharacterBlackboardKey.AllowedTypes;
    gen290.Empty();
    gen290.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterBlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Character State");
}


