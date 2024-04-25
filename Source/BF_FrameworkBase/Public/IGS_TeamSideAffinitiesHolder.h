#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamSideAffinitiesHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_TeamSideAffinitiesHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_TeamSideEnum> EnemySides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_TeamSideEnum> FriendlySides;
    
    BF_FRAMEWORKBASE_API FIGS_TeamSideAffinitiesHolder();
};

