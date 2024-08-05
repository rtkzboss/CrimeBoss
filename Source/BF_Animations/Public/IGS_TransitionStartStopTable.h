#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_TransitionStartStopTable.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_TransitionStartStopTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Back;
    
    UIGS_TransitionStartStopTable();

};

