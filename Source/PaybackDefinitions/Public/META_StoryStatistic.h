#pragma once
#include "CoreMinimal.h"
#include "META_StoryStatistic.generated.h"

class UMETA_BaseStoryGraphManager;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_StoryStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMETA_BaseStoryGraphManager>> PlotlinesFinished;
    
    FMETA_StoryStatistic();
};

