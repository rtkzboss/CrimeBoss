#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_ElevatorEntranceManager.generated.h"

class AIGS_Rope;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_ElevatorEntranceManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_ElevatorEntranceManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterElevatorCable(AIGS_Rope* inElevatorCable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterElevatorCable(AIGS_Rope* inElevatorCable);
    
};

