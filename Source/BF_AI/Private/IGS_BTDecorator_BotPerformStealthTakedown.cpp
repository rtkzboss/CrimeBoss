#include "IGS_BTDecorator_BotPerformStealthTakedown.h"

UIGS_BTDecorator_BotPerformStealthTakedown::UIGS_BTDecorator_BotPerformStealthTakedown() {
    auto& gen270 = (*this).CharacterToShoutKey.AllowedTypes;
    gen270.Empty();
    gen270.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharacterToShoutKey, 0)) = 255;
    (*this).NodeName = TEXT("Bot Perform Stealth Takedown");
}


