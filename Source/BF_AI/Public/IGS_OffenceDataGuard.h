#pragma once
#include "CoreMinimal.h"
#include "IGS_OffenceData.h"
#include "IGS_OffenceDataGuard.generated.h"

UCLASS(Blueprintable)
class UIGS_OffenceDataGuard : public UIGS_OffenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RadioDialogueID;
    
    UIGS_OffenceDataGuard();

};

