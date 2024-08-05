#pragma once
#include "CoreMinimal.h"
#include "IGS_ControlRoom.h"
#include "IGS_ControlRoomPhysical.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_ControlRoomPhysical : public AIGS_ControlRoom {
    GENERATED_BODY()
public:
    AIGS_ControlRoomPhysical(const FObjectInitializer& ObjectInitializer);

};

