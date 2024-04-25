#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_HideInGameVolume.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_HideInGameVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectOnlyObjectsWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredTag;
    
    AIGS_HideInGameVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetObjectsHidden(bool inHidden);
    
};

