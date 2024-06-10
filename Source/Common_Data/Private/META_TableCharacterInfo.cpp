#include "META_TableCharacterInfo.h"

FMETA_TableCharacterInfo::FMETA_TableCharacterInfo() {
    (*this).CharacterQuality = EMETA_ItemQuality::MinGenerate;
    auto& gen1879 = (*this).PerkTags;
    gen1879.Empty();
    auto& gen1880 = (*this).Perks;
    gen1880.Empty();
}

