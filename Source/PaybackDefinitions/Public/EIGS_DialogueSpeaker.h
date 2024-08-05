#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueSpeaker.generated.h"

UENUM(BlueprintType)
enum class EIGS_DialogueSpeaker : uint8 {
    None,
    Planner,
    Command,
    HighGround,
    StoryCharacter2D = 5,
    StoryCharacter2DRadio,
    Driver,
    Heister = 30,
    Swat,
    Boss = 37,
    Any,
    StoryCharacter3D,
    Harmless,
    Harmful,
    NoVoice = 255,
    Speaker2DMin = Planner,
    Speaker2DMax = Driver,
    Speaker3DMin = Heister,
    Speaker3DMax = Harmful,
};

