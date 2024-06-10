#include "IGS_Common_DataDevSettings_Characters.h"

UIGS_Common_DataDevSettings_Characters::UIGS_Common_DataDevSettings_Characters() {
    (*this).CharacterDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_CharacterDatabase.DT_CharacterDatabase"), TEXT(""));
    (*this).CharacterMaskDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_CharacterMaskDatabase.DT_CharacterMaskDatabase"), TEXT(""));
    (*this).CharacterMutableDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Characters/_Mutable/DT_MutableProfiles.DT_MutableProfiles"), TEXT(""));
    (*this).CharacterSkinDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_CharacterSkinDatabase.DT_CharacterSkinDatabase"), TEXT(""));
}


