#include "IGS_RichPresenceTableRow.h"

FIGS_RichPresenceTableRow::FIGS_RichPresenceTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Source = FText::FromString(TEXT(""));
    (*this).StrEpic = TEXT("");
    (*this).StrSteam = TEXT("");
    (*this).StrXbox = TEXT("");
    (*this).Params.Empty();
}

