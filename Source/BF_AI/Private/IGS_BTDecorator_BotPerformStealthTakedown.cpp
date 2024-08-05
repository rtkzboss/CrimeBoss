#include "IGS_BTDecorator_BotPerformStealthTakedown.h"

UIGS_BTDecorator_BotPerformStealthTakedown::UIGS_BTDecorator_BotPerformStealthTakedown() {
    auto& gen0 = (*this).CharacterToShoutKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutKey, 0)) = 255;
    (*this).NodeName = TEXT("Bot Perform Stealth Takedown");
}


