#include "IGS_PerksCustomizationScreen.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_PerksCustomizationScreen::UIGS_PerksCustomizationScreen() {
}

void UIGS_PerksCustomizationScreen::SetGrouppedPerks() {
}

FIGS_PerkGroup UIGS_PerksCustomizationScreen::GetPerkGroupByPerkTag(FGameplayTag inTag, TArray<FIGS_PerkGroup>& inPerkGroups) const {
    return FIGS_PerkGroup{};
}

UMETA_Perk* UIGS_PerksCustomizationScreen::GetOwnedPerkMaxTier(FIGS_PerkGroup& InGroup) const {
    return NULL;
}

TArray<FIGS_PerkGroup> UIGS_PerksCustomizationScreen::GetGroupedPerks(TArray<UMETA_Perk*> inPerks) const {
    return TArray<FIGS_PerkGroup>();
}


