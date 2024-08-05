#pragma once
#include "CoreMinimal.h"
#include "EIGS_Event.h"
#include "IGS_IntelBase.h"
#include "IGS_EventIntel.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UIGS_EventIntel : public UIGS_IntelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_Event EventType;
    
    UIGS_EventIntel();

};

