#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "RoomNextDoorNavigationQueryFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API URoomNextDoorNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedRoomTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedRoomTypesBitMask;
    
public:
    URoomNextDoorNavigationQueryFilter();

};

