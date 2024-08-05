#include "META_PerkStatsData.h"

UMETA_PerkStatsData::UMETA_PerkStatsData() {
}

FString UMETA_PerkStatsData::GetDefaultRichTextStyleTag() const {
    return TEXT("");
}

void UMETA_PerkStatsData::GetCombinedStatGroupsFromAttributes(const TMap<FGameplayAttribute, float>& inAttributes, bool& outSuccess, TMap<FMETA_PerkStatGroup, int32>& outStatGroups) const {
}


