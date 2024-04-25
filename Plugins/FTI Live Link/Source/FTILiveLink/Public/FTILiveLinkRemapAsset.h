#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRemapAsset.h"
#include "FTILiveLinkRemapAsset.generated.h"

UCLASS(Blueprintable)
class FTILIVELINK_API UFTILiveLinkRemapAsset : public ULiveLinkRemapAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AnimationNamesMap;
    
    UFTILiveLinkRemapAsset();

};

