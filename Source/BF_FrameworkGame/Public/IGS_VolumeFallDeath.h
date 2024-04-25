#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_VolumeFallDeath.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_VolumeFallDeath : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    AIGS_VolumeFallDeath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActive(bool Inactive);
    
};

