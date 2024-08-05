#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadBase.h"
#include "IGS_BTTask_SquadSwatBase.generated.h"

class UIGS_RoomPathfindingComponent;
class UIGS_SquadAggroComponent;
class UIGS_SquadSpeedSynchronizationComponent;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadSwatBase : public UIGS_BTTask_SquadBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_RoomPathfindingComponent* RoomPathfindingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SquadSpeedSynchronizationComponent* SpeedSyncroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SquadAggroComponent* SquadAggroComponent;
    
public:
    UIGS_BTTask_SquadSwatBase();

};

