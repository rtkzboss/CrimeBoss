#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_AnimsDatabase.generated.h"

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AnimsDatabase : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_AnimsDatabase();

};

