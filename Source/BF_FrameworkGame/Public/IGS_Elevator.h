#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_Elevator.generated.h"

class AIGS_ElevatorEntrance;
class AIGS_Rope;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_Elevator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_ElevatorEntrance*> ElevatorEntrances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_Rope* ElevatorCable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
public:
    AIGS_Elevator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToFloor(int32 inNextFloor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor();
    
};

