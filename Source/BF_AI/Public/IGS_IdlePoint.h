#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_PatrolPoint.h"
#include "IGS_IdlePoint.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_IdlePoint : public AIGS_PatrolPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeUntilBreaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeUntilBreaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IdleAnimationTag;
    
public:
    AIGS_IdlePoint(const FObjectInitializer& ObjectInitializer);

};

