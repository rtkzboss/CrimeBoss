#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "IGS_LocalPlayerRichPresence.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_LocalPlayerRichPresence : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UIGS_LocalPlayerRichPresence();

};

