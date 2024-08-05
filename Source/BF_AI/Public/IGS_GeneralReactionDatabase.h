#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_GeneralReactionDatabase.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_GeneralReactionDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_GeneralReactionDatabase();

};

