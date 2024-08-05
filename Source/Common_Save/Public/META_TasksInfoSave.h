#pragma once
#include "CoreMinimal.h"
#include "META_TaskInfoSave.h"
#include "META_TasksInfoSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_TasksInfoSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_TaskInfoSave> Tasks;
    
    FMETA_TasksInfoSave();
};

