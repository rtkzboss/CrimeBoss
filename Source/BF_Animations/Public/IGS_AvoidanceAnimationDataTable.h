#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DodgeAnimTable.h"
#include "IGS_RollAnimTable.h"
#include "IGS_AvoidanceAnimationDataTable.generated.h"

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AvoidanceAnimationDataTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_RollAnimTable> RollAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DodgeAnimTable> DodgeAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DodgeAnimTable> DodgeAnimationsCrouching;
    
    UIGS_AvoidanceAnimationDataTable();

};

