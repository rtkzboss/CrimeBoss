#include "IGS_CharacterClasses.h"

FIGS_CharacterClasses::FIGS_CharacterClasses() {
    (*this).bIsMale = true;
    (*this).bIsMutable = false;
    (*this).VariantName = FText::FromString(TEXT(""));
    (*this).VariantDescription = FText::FromString(TEXT(""));
    (*this).DialogueID = EIGS_DialogueHeisterCharacter::None;
}

