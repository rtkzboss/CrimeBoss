#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"
#include "IGS_BTTask_MoveToAsync.h"
#include "IGS_BTTask_MoveToBase.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_MoveToBase : public UIGS_BTTask_MoveToAsync {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LookPosKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AcceptableRadiusKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEndInDanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterVsHeistersCollisionStatus m_MovingCharacterVsHeistersCollisionStatus;
    
public:
    UIGS_BTTask_MoveToBase();

};

