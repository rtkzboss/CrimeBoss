#include "IGS_CharacterClasses.h"

FIGS_CharacterClasses::FIGS_CharacterClasses() {
    (*this).bIsMale = true;
    (*this).bIsMutable = false;
    (*this).MutableProfile = nullptr;
    (*this).PlayerPawnClass = nullptr;
    (*this).BotPawnClass = nullptr;
    (*this).PaperDollClass = nullptr;
    (*this).FPVArmsClass = nullptr;
    (*this).CharacterIcon = nullptr;
    (*this).MetaCharacterIcon = nullptr;
    (*this).VariantName = FText::FromString(TEXT(""));
    (*this).VariantDescription = FText::FromString(TEXT(""));
    (*this).DialogueID = EIGS_DialogueHeisterCharacter::None;
}

