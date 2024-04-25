#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_LightHitReactionsVariant.h"
#include "IGS_LightHitReactionsTable.generated.h"

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_LightHitReactionsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsVariant Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsVariant Crouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsVariant DownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightHitReactionsVariant LyingOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextAllowedHitDuration;
    
    UIGS_LightHitReactionsTable();

};

