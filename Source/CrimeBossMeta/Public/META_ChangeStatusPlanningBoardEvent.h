#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_ChangeStatusPlanningBoardEvent.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_ChangeStatusPlanningBoardEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag itemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag voiceoverTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_PlanningBoardItemStatus fromStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_PlanningBoardItemStatus toStatus;
    
    FMETA_ChangeStatusPlanningBoardEvent();
};

