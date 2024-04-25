#include "IGS_PlayerInfoWidget.h"

UIGS_PlayerInfoWidget::UIGS_PlayerInfoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerName = FText::FromString(TEXT("Player"));
    this->HeisterNumber = -1;
    this->DebugEditorName = FText::FromString(TEXT("Server"));
    this->CharacterOwner = NULL;
}






