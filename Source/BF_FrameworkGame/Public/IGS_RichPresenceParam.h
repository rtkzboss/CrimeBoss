#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_RichPresenceParam.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RichPresenceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    BF_FRAMEWORKGAME_API FIGS_RichPresenceParam();
};

