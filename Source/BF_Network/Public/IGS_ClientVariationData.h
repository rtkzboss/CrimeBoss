#pragma once
#include "CoreMinimal.h"
#include "IGS_ClientVariationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_NETWORK_API FIGS_ClientVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> VoiceFacialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceProgress;
    
    FIGS_ClientVariationData();
};

