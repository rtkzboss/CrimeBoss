#include "IGS_MediaManagerBaseComponent.h"

UIGS_MediaManagerBaseComponent::UIGS_MediaManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_MediaManagerBaseComponent::TextScreenShoudBeShown_Implementation(FMETA_TextScreenUIData TextScreenData) {
}

void UIGS_MediaManagerBaseComponent::MovieShouldBePlayed_Implementation(FMETA_MovieUIData MovieData) {
}

void UIGS_MediaManagerBaseComponent::HandleMediaForScreen_Implementation(FGameplayTag inScreenTag) {
}

void UIGS_MediaManagerBaseComponent::HandleMediaForPartner_Implementation(EMETA_Partner inPartner) {
}

void UIGS_MediaManagerBaseComponent::DialogueTypeShouldBePlayed_Implementation(FGameplayTag inTypeTag, FGameplayTag inScreenTag) {
}

void UIGS_MediaManagerBaseComponent::DialogueShouldBePlayed_Implementation(FMETA_DialogueUIData DialogueData) {
}

void UIGS_MediaManagerBaseComponent::CutsceneShouldBePlayed_Implementation(FMETA_CutsceneUIData CutsceneData) {
}


