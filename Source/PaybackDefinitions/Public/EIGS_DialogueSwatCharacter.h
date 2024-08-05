#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueSwatCharacter.generated.h"

UENUM(BlueprintType)
enum class EIGS_DialogueSwatCharacter : uint8 {
    None,
    GenericCommand,
    Command1,
    GenericSwat = 30,
    Swat1,
    Swat2,
    Swat3,
    Swat4,
    Swat5,
    Swat6,
    RobotSwat,
    GenericNPC = 99,
    NoVoiceFemale = 254,
    NoVoice,
    Character2DMin = GenericCommand,
    Character2DMax = 3,
    Character3DMin = GenericSwat,
    Character3DMax = GenericNPC,
    CommandMin = GenericCommand,
    CommandMax = Command1,
    SwatMin = GenericSwat,
    SwatMax = RobotSwat,
    NoVoiceMin = NoVoiceFemale,
    NoVoiceMax = NoVoice,
};

