#pragma once
#include "CoreMinimal.h"
#include "EventPoint.h"
#include "PFEventPoints.generated.h"

class UEventPointDelegateHolder;

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFEventPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventPoint> Points;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventPointDelegateHolder* AllEventHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEventPointDelegateHolder*> Holders;
    
public:
    FPFEventPoints();
};

