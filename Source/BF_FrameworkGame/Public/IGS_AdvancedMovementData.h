#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_AdvancedMovementType.h"
#include "IGS_AdvancedMovementData.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AdvancedMovementData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_AdvancedMovementType, float> InterpolationSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_AdvancedMovementType, float> InterpolationSpeedsRotation;
    
    UIGS_AdvancedMovementData();

};

