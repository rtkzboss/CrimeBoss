#pragma once
#include "CoreMinimal.h"
#include "IGS_GameModeMenuBase.h"
#include "IGS_Quickplay_GameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class CRIMEBOSSMETA_API AIGS_Quickplay_GameMode : public AIGS_GameModeMenuBase {
    GENERATED_BODY()
public:
    AIGS_Quickplay_GameMode(const FObjectInitializer& ObjectInitializer);

};

