#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_PlayerBotDatabase.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_PlayerBotDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_PlayerBotDatabase();

};

