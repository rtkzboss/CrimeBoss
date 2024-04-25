#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_NeighborData.generated.h"

class AActor;
class AIGS_RoomBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_NeighborData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Entrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EntrancePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_RoomBase* NeighborRoom;
    
    FIGS_NeighborData();
};

