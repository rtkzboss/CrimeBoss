#pragma once
#include "CoreMinimal.h"
#include "META_PlayedPresets.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_PlayedPresets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayedPresets;
    
    FMETA_PlayedPresets();
};

