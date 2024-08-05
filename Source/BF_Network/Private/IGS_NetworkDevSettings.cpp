#include "IGS_NetworkDevSettings.h"

UIGS_NetworkDevSettings::UIGS_NetworkDevSettings() {
    (*this).DialogueComponentDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/ComponentsData/DA_ComponentDialogue.DA_ComponentDialogue"), TEXT(""));
    (*this).VoiceExpressionComponentDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Audio/VoiceExpressions/DA_ComponentVoiceExpression.DA_ComponentVoiceExpression"), TEXT(""));
}


