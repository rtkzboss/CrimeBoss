#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_SuspicionOffenceDatabase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SuspicionOffenceDatabase : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_SuspicionOffenceDatabase();

};

