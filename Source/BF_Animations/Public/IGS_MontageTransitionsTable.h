#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MontageTransitionsTable.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_MontageTransitionsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageTransitions;
    
    UIGS_MontageTransitionsTable();

};

