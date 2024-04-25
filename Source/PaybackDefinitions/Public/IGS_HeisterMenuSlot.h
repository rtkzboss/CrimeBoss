#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuSlotOccupation.h"
#include "IGS_HeisterMenuSlot.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_HeisterMenuSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MenuSlotOccupation SlotOccupation;
    
    FIGS_HeisterMenuSlot();
};

