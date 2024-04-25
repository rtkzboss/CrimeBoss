#pragma once
#include "CoreMinimal.h"
#include "IGS_RestrictedTagsHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RestrictedTagsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RestrictedTags;
    
    BF_FRAMEWORKBASE_API FIGS_RestrictedTagsHolder();
};

