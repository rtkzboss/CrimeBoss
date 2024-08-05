#pragma once
#include "CoreMinimal.h"
#include "IGS_ControlRoom.h"
#include "IGS_ControlRoomVirtual.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_ControlRoomVirtual : public AIGS_ControlRoom {
    GENERATED_BODY()
public:
    AIGS_ControlRoomVirtual(const FObjectInitializer& ObjectInitializer);

};

