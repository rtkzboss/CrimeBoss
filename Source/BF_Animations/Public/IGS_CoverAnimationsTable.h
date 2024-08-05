#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_CoverAnimationsTable.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_CoverAnimationsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CombatPeekStand_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CombatPeekStand_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CombatPeekCrouch_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CombatPeekCrouch_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CombatPeekCrouch_Up;
    
    UIGS_CoverAnimationsTable();

};

