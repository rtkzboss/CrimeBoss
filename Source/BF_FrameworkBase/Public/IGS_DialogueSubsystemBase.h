#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_DialogueSubsystemBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_DialogueSubsystemBase : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_DialogueSubsystemBase();

};

