#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadSwat.generated.h"

class AIGS_DefendPointBase;
class AIGS_RoomBase;
class UIGS_RoomPathfindingComponent;
class UIGS_SquadAggroComponent;
class UIGS_SquadSpeedSynchronizationComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadSwat : public AIGS_SquadBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_RoomPathfindingComponent* RoomPathfindingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SquadSpeedSynchronizationComponent* SpeedSynchronizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SquadAggroComponent* SquadAggroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_RoomBase*> EmptyRoomArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_DefendPointBase* defendPoint;
    
public:
    AIGS_SquadSwat(const FObjectInitializer& ObjectInitializer);

};

