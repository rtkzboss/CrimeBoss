#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BinkSubtitleItem.h"
#include "IGS_BinkSubtitleDataAsset.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API UIGS_BinkSubtitleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBinkSubtitleItem> Subtitles;
    
    UIGS_BinkSubtitleDataAsset();

};

