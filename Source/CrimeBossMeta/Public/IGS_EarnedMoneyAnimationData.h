#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_EarnedMoneyAnimationSequenceData.h"
#include "IGS_EarnedMoneyAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_EarnedMoneyAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_EarnedMoneyAnimationSequenceData> Sequences;
    
    UIGS_EarnedMoneyAnimationData();

};

