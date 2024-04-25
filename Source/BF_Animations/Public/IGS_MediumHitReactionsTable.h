#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MediumHitReactionTable.h"
#include "IGS_MediumHitReactionsTable.generated.h"

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_MediumHitReactionsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MediumHitReactionTable> HitReactionDataStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MediumHitReactionTable> HitReactionDataCrouch;
    
    UIGS_MediumHitReactionsTable();

};

